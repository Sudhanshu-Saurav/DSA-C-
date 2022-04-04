#include<bits/stdc++.h> // header file #include<array>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(11); // add elements in vector in the back
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);
    v.push_back(16);

    cout << "capacity is -> " << v.capacity() << endl;
    cout << "size -> " << v.size() << endl;                     //give size
    cout << "isempty -> " << v.empty() << endl;                 //check if empty
    cout << "number at 3 index -> " << v.at(3) << endl;            // access at particular index
    cout << "number at first index -> " << v.front() << endl;   // access 1st ele
    cout << "number at last index -> " << v.back() << endl;         // access last ele


    v.shrink_to_fit(); // shrink size
    cout << "capacity is -> " << v.capacity() << endl;
    cout << "size -> " << v.size() << endl;
    
    v.pop_back(); // remove alements from vector from back
    v.pop_back();

    cout << "capacity is -> " << v.capacity() << endl;
    cout << "size -> " << v.size() << endl;                     //give size
    cout << "isempty -> " << v.empty() << endl;                 //check if empty
    cout << "number at 3 index -> " << v.at(3) << endl;            // access at particular index
    cout << "number at first index -> " << v.front() << endl;   // access 1st ele
    cout << "number at last index -> " << v.back() << endl;         // access last ele


    vector<int> a(v);//copy one vector in two
    vector<int> c;

    c=a;

    for(int i:a)
        cout << i << " ";
    cout << endl;
    for(int i:c)
        cout << i << " ";

    cout << endl << "Size of C -> " << c.size() << endl;
    cout << "capacity of C -> " << c.capacity() << endl;
    v.clear();
    a.clear();

    cout << "capacity is -> " << v.capacity() << endl;
    cout << "size -> " << v.size() << endl;                     //give size
    cout << "isempty -> " << v.empty() << endl;                 //check if empty
    

    cout << "capacity is -> " << a.capacity() << endl;
    cout << "size -> " << a.size() << endl;                     //give size
    cout << "isempty -> " << a.empty() << endl;                 //check if empty
}