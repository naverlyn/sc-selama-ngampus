#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <limits.h>
#include <unistd.h>

#ifdef _WIN32
    #define OS 1
#elif __linux
    #define OS 2
#endif

#define MAXIMUM_FILE_SIZE 100
/*************************************************************************************************/
/* Conversion-functions */
typedef unsigned char byte, *buffer;
enum { MODE_NOMODE = (-1), EXIT = 0, MODE_WRITE = 1, MODE_READ = 2 };

unsigned int strtoint (char[]);
int fatobin (FILE*, unsigned int);
unsigned char *btoa (unsigned char);

void wait(int);
void clear(void);
/*************************************************************************************************/
int main(int argc, char *argv[])
{
    FILE* fp;
    unsigned int mode = MODE_NOMODE;

    /* Localization */
    char *locale = setlocale(LC_ALL, "Bulgarian");

    /* Program entrance */
    puts("The program starts..");
    printf("Localization: %s\n", locale);
    if(argc > 1)
    {
        char choice;

        printf("Progrm argument has been given:\n%s Do you wish to load it? y/n: ", argv[1]);
        scanf("%c", &choice);

        switch(choice)
        {
            case 'y' : case 'Y' :
                if( (fp = fopen(argv[1], "rb")) == NULL )
                    puts("[!]Problem with opening the file.");
                else
                    puts("File has been opened successfully.\n");
            break;

            case 'n' : case 'N' :
            break;
        }
    }
    if(!fp)
    {
        static char file_name [256];

        puts("No argument loaded. Continueing..\n");

        /* Mode selection: */
                                            make_choice :
        puts("Choose a mode:\n"
             "0) Exit\n"
             "1) Write mode\n"
             "2) Read mode\n");
        printf("I choose: "); scanf("%1u", &mode);

        switch(mode)
        {
            case MODE_WRITE :
                puts("You have choose: Write");
                printf("Choose /directory and/ file name: "); scanf("%255s", file_name);
                if( (fp = fopen(file_name, "wb")) == NULL )
                {
                    puts("[!]Problem with opening file.");
                    goto make_choice;
                } else puts("File successfully loaded.\n");
            break;

            case MODE_READ :
                puts("You have choose: Read");
                printf("Choose /directory and/ file name: "); scanf("%255s", file_name);
                if( (fp = fopen(file_name, "rb")) == NULL )
                {
                    puts("[!]Problem with opening file.");
                    goto make_choice;
                } else puts("File has been successfully loaded.\n");
            break;

            case EXIT : return(0);
        }
    }

    wait(2);
    clear();

    if(mode == MODE_WRITE)
    {
        static char input [20];
        unsigned int bytes_written = 0;
        unsigned int decimal;

        while(strcmp(input, "exit"))
        {
            printf("byte(%u): ", bytes_written); scanf("%20s", input); decimal = strtoint(input);
            bytes_written += fatobin(fp, decimal);
        }
        fclose(fp);
    }
    if(mode == MODE_READ)
    {
        buffer buff;
        int idx = (-1);
        unsigned int bytes_readed = 0;

        /* Finds the file size, allocates memory for the buffer and copies the file within the buffer (faster processing) */
        unsigned int fp_size;
        fseek(fp, 0, SEEK_END);
        fp_size = ftell(fp);
        fseek(fp, 0, SEEK_SET);
        buff = calloc(fp_size, sizeof(byte));
        fread(buff, sizeof(byte), fp_size, fp);
        fclose(fp);

        if(fp_size > MAXIMUM_FILE_SIZE)
        {
            char choice = 0;

            printf("File´s size is large(%ld)\nAre you sure you want to continue? y/n: ", fp_size);
            while( (choice = getchar()) != 'y' && choice != 'n'); /* More luxory way */

            switch(choice)
            {
                case 'y' :
                    clear();
                break;
                case 'n' :
                    clear();
                    goto make_choice;
                break;
            }
        }

        printf("№\tDec:\tChar:\tHex:\tBin:\t\tShort:\t\tLong:\n");

        while( ++idx <= fp_size )
        {
            byte current = buff[idx];
            int integer = 0;
            short shortint = 0;

            /* Converts into short/int */
            /* Checks if it will cause buffer overflow */
            if(idx < fp_size-3)
                integer = *((int*)&buff[idx]);
            else if (idx < fp_size)
                integer = *((short*)&buff[idx]);
            else
                integer = current;

            if(idx < fp_size)
                shortint = *((short*)&buff[idx]);
            else
                shortint = current;
            /************************************************/

            printf("(%u)\t%u\t%c\t0x%x\t%s\t", bytes_readed, current, current, current, btoa(current));
            printf("%hi\t\t%i\n", shortint, integer);
            bytes_readed++;
        }
        free(buff);
    }

    {
        char choice;

        printf("Program´s work ended. Return to main menu? y/n/e: ");
        end_select :
        while( (choice = getchar()) != 'y' && choice != 'n' && choice != 'e');
        switch(choice)
        {
            case 'y' :
                clear();
                goto make_choice;
            break;

            case 'n' :
                goto end_select;

            case 'e' :
                break;
        }
    }
    return(0);
}
/*************************************************************************************************/
void wait (int sec)
{
    time_t tm_begin = time(NULL);
    int seconds;

    for(seconds = 0; seconds <= sec;)
    {
        time_t tm_current = time(NULL);
        if(tm_current != tm_begin)
        {
            seconds++;
            tm_begin = tm_current;
        }
    }
}
/* Please let this method remain as much private as possible*/
/*************************************************************************************************/
unsigned int strtoint ( char source[] )
{
    int multiplier = 1, i = strlen(source)-1;
    unsigned int result = 0;

    for (; i >= 0; i--)
    {
        if(source[i] >= '0' && source[i] <= '9')
        {
            result = result + ((source[i]-'0') * multiplier);
            multiplier *= 10;
        }
    }
    return result;
}
/* I personaly prefer this over atoi/atol */
/*************************************************************************************************/
int fatobin(FILE* fp, unsigned int value)
{
    unsigned int temp = value;
    int msbit = 0, msbyte = 0;
    int i;

    while (temp >>= sizeof(char))
        ++msbit;

    msbyte = (msbit / CHAR_BIT) + 1;

    for(i = 0; i < msbyte; i++)
        fputc( ((unsigned char*)&value)[i], fp );

    return msbyte;
}
/*************************************************************************************************/
unsigned char *btoa (unsigned char source)
{
    static unsigned char byte[CHAR_BIT];
    unsigned char i;

    for(i = 0; i < CHAR_BIT; i++)
    {
        byte[i] = '0' + (source & 1);
        source >>= 1;
    }

    return byte;
}
/* Decimal to binary conversion ^ */

void clear ()
{
    if(OS == 1) system("CLS");
    if(OS == 2) { system("clear"); tigetstr( "clear" ); }
}