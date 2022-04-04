#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    unordered_map<int,int> mp;
    
    mp[0] = 1;
    mp[1] = 2;
    mp[2] = 3;
    mp[3] = 4;
    mp[4] = 5;


    for (auto i:mp)
    {
        cout << i.first << " " << i.second << endl ;
    }
    auto it = mp.find(5);
    if(it!=mp.end())
        cout << (*it).first << " " << (*it).second << endl;
    else
        cout << "NO value";
}