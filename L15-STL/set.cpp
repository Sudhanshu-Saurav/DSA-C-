#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    
    s.insert(13);
    s.insert(14);
    s.insert(11); // add elem into set
    s.insert(12);

    s.insert(15);
    s.insert(13);       // only takes distinct value
    s.insert(14);
    s.insert(15);


    for(auto x:s)           // always return the sorted set
        cout << x << " ";
    cout <<endl;


    cout << "Is Present -> " << s.count(15) << endl;
    cout << "Is Present -> " << s.count(20) << endl;

    s.erase(11);
    s.erase(15);

    for(auto x:s)           // always return the sorted set
        cout << x << " ";
    cout <<endl;
    

    // cout << "finding 14 -> " << s.find(14) << endl;
    // cout << "finding 20 -> " << s.find(20) << endl;


}