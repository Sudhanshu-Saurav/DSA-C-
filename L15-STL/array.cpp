#include<bits/stdc++.h> // header file #include<array>
using namespace std;

int main()
{

    array<int,5> a={1,2,3,4,5};

    cout << "size -> " << a.size() << endl;                     //give size
    cout << "isempty -> " << a.empty() << endl;                 //check if empty
    cout << "number at 3 index -> " << a.at(3) << endl;            // access at particular index
    cout << "number at first index -> " << a.front() << endl;   // access 1st ele
    cout << "number at last index -> " << a.back() << endl;         // access last ele

    //cout << "number at last index -> " << a.end() << endl;

}