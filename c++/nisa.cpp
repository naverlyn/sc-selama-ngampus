#include <iostream>
using namespace std;
int main()
{
    int a[3];
    int jumlah;
    
    for (int i=0;i<=2;i++){
        cout<<"masukkan nilai ke "<<i+1<<": ";
        cin>>a[i];
    }
    
    jumlah=0;
    for (int i=0;i<=2;i++){
        jumlah=jumlah+a[i];
    }
    cout<<"jumlah seluruhnya: "<<jumlah;
    return 0;
}