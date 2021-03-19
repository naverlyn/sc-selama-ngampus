#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//create vector to store int
	vector<int> vec;
	int i;

	//display the original size of vec
	cout<<"Vector Size = "<< vec.size()<<endl;

	//push 5 values into the vector
	for (int i = 0; i < 5; i++)
	{
		vec.push_back(i);
	}

	//display extended size of vec
	cout<<"Extended Vector Size = "<<vec.size()<<endl;

	//access 5 values from the vector
	for (int i = 0; i <5; i++)
	{
		cout<<"Value of vec ["<<i<<"]"<<vec[i]<<endl;
	}

   // use iterator to access the values
   vector<int>::iterator v = vec.begin();
   while( v != vec.end()) 
   {
      cout << "value of v = " << *v << endl;
      v++;
   }
	return 0;

}