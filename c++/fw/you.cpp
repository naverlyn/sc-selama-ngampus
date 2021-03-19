#include <iostream>
#define w using namespace std;

w

struct nasabah
{
    char nama[50];
    char alamat[100];
    string nohp;
};

int main()
{
    nasabah ku;
    
    cout << "Masukan Nama Anda: ";
    cin.get(ku.nama, 50);
    cout << "Alamat: ";
    cin.get(ku.alamat, 100);
    cout << "Nomor HP Anda: ";
    cin >> ku.nohp;

    cout << "\nDisplaying Information." << endl;
    cout << "Nama: " << ku.nama << endl;
    cout <<"Alamat: " << ku.alamat << endl;
    cout << "Nomor HP: " << ku.nohp;

    return 0;
}