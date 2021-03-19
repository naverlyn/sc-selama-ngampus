/* Nama 		: Aula Nur Rizal Ardiyantoro
 * NPM  		: 18.14.1.0045
 * Kelas		: IF III C
 * Mata Kuliah  : Bahasa Mesin (ASSEMBLY)
 * Hobi 		: Bermain game, tiduran, ngoding.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char npm[12], kelas[90], mata_kuliah[90];
	string nama;
	string hobi;
	cout<<"Nama \t\t: "; getline(cin, nama);
	cout<<"NPM \t\t: "; cin>>npm;
	cout<<"Kelas \t\t: "; cin>>kelas;
	cout<<"Mata Kuliah \t: "; cin>>mata_kuliah;
	cout<<"Hobi \t\t: "; cin>>hobi;
	cout<<"====================================================\n";
	cout<<"Nama \t\t: "<<nama<<endl;
	cout<<"NPM \t\t: "<<npm<<endl;
	cout<<"Kelas \t\t: "<<kelas<<endl;
	cout<<"Mata Kuliah \t: "<<mata_kuliah<<endl;
	cout<<"Hobi \t\t: "<<hobi<<endl;
	cout<<"Sejarah Assembly: \nBahasa Assembly adalah bahasa komputer yang kedudukannya di antara bahasa mesin dan bahasa level tinggi misalnya bahasa C atau Pascal. Bahasa C atau Pascal dikatakan sebagai bahasa level tinggi karena memakai kata-kata dan pernyataan yang mudah dimengerti manusia, meskipun masih jauh berbeda dengan bahasa manusia sesungguhnya. Bahasa mesin adalah kumpulan kode biner yang merupakan instruksi yang bisa dijalankan oleh komputer. Sedangkan bahasa Assembler memakai kode Mnemonic untuk menggantikan kode biner, agar lebih mudah diingat sehingga lebih memudahkan penulisan program. \nSumber: http://oyonk23.blogspot.com/2012/06/sejarah-assembly.html";

	return 0;
} 