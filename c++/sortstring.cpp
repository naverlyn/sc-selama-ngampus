#include <iostream>
#include <algorithm>
#include <string>  // this header is required for std::sort to work

using namespace std;

int main()
{
    string s = "dacb";
    sort(s.begin(), s.end());
    cout << s << endl;

    return 0;
}