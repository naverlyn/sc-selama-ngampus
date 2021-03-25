#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string pass, pass2, password;
    string username;
    string temp;
    int menu;
    username = temp;
    password = pass;    
    first:
    cout<<"Menu\n";
    cout<<"1. buat akun\n";
    cout<<"2. login\n";
    cout<<">> "; cin>>menu;
    switch(menu)
    {
        default:
            cout<<"bruh\n";
            break;
        case 1:
            cout<<"username: "; cin>>temp;
            cout<<"password: "; cin>>pass;
            cout<<"re-type password: "; cin>>pass2;
            if(pass == pass2)
                {
                    cout<<"akun berhasil dibuat!";
                    goto first;
                }
            else
                {
                    cout<<"bruhhhhhh";
                }
        case 2:
            cout<<"username: "; cin>>username;
            cout<<"password: "; cin>>password;
        if (username == temp && password == pass)
            {
                cout<<"masuk!";
            }
        else
        {
            cout<<"password atau username salah! atau anda belum membuat akun!";
            goto first;
        }
    }
        
    return 0;
}