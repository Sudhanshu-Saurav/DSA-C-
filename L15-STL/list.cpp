#include<bits/stdc++.h> // header file #include<array>
using namespace std;

int main()
{

    list<int> l;

    l.push_back(11); // add elements in deque in the back
    l.push_back(12);
    l.push_back(13);

    l.push_front(14);    // add elements in deque in the front
    l.push_front(15);
    l.push_front(16);

    for (auto x :l)
        cout << x <<" ";
    cout << endl;
    //cout << "capacity is -> " << d.capacity() << endl;  capacity donot work with deque
    cout << "size -> " << l.size() << endl;                     //give size
    cout << "isempty -> " << l.empty() << endl;                 //check if empty
    //cout << "number at 3 index -> " << l.at(3) << endl;            // access at particular index
    cout << "number at first index -> " << l.front() << endl;   // access 1st ele
    cout << "number at last index -> " << l.back() << endl;         // access last ele

    l.pop_front();
    l.pop_back();

    for (auto x :l)
        cout << x <<" ";
    cout << endl;

}