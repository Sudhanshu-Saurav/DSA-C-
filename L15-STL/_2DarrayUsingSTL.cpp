#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr;

    arr = {{1,2,3},{4,5},{6,7,8,9,10}};

    for(int i=0;i<arr.size();i++)
    {
        for (int x :arr[i])
            cout << x << " ";
        cout << endl;
    }




    return 0;
}