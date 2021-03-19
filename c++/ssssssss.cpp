#include <iostream>
#include <string>
#include <sstream>

#define awalan using namespace std;

awalan

struct movies_t
{
	string title;
	int year;
} mine, yours;

void printedmovies(movies_t movie);

int main()
{
	string mystr;

	mine.title = "Aula Nur Rizal Ardiyantoro";
	mine.year = 1998;

	cout<<"Enter Title:";
	getline(cin, yours.title);
	cout<<"Enter Year:";
	getline(cin, mystr);
	stringstream(mystr) >> yours.year;


	cout<<"My Favorite is : \n";
	printedmovies(mine);
	cout<<"\n";
	cout<<"And :";
	printedmovies(yours);

	return 0;

}

void printedmovies(movies_t movie)
{
	cout<<movie.title;
	cout<<"(" << movie.year <<")";
}




