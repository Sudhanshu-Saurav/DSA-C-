#include<bits/stdc++.h> // header file #include<array>
using namespace std;

int main()
{

    deque<int> d;

    d.push_back(11); // add elements in deque in the back
    d.push_back(12);
    d.push_back(13);

    d.push_front(14);    // add elements in deque in the front
    d.push_front(15);
    d.push_front(16);

    for (auto x :d)
        cout << x <<" ";
    cout << endl;
    //cout << "capacity is -> " << d.capacity() << endl;  capacity donot work with deque
    cout << "size -> " << d.size() << endl;                     //give size
    cout << "isempty -> " << d.empty() << endl;                 //check if empty
    cout << "number at 3 index -> " << d.at(3) << endl;            // access at particular index
    cout << "number at first index -> " << d.front() << endl;   // access 1st ele
    cout << "number at last index -> " << d.back() << endl;         // access last ele

    d.pop_front();
    d.pop_back();

    for (auto x :d)
        cout << x <<" ";
    cout << endl;

    //d.clear();
    d.erase(d.begin()+1,d.begin()+3);
    for (auto x :d)
        cout << x <<" ";
    cout << endl;

}