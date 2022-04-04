#include<bits/stdc++.h>
using namespace std;

int main()
{

    array<int,5> a={1,2,3,4,5};

    cout << "size -> " << a.size() << endl;
    cout << "isempty -> " << a.empty() << endl;
    cout << "number at 3 index -> " << a.at(3) << endl;
    cout << "number at first index -> " << a.front() << endl;
    cout << "number at last index -> " << a.back() << endl;

    //cout << "number at last index -> " << a.end() << endl;
}