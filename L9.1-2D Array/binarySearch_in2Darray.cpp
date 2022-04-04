//staircase search

#include<bits/stdc++.h>
using namespace std;

pair<int,int> stairCaseSearch(int arr[][4],int n, int m, int key)
{
    if(key < arr[0][0] or key > arr[n-1][m-1])
    {
        return {-1,-1};
    }

    int i = 0;
    int j = m-1;
    while(i<=n and j>=0)
    {
        if(arr[i][j]==key)
            return {i,j};
        else if (arr[i][j]>key)
            j--;
        else
            i++;

    }
    return {-1,-1};
}


int main()
{
    int arr[][4] = { {1,2,3,4},
                     {12,13,14,15},
                     {17,16,15,19},
                     {20,22,25,30}};
    int n = 4;
    int m = 4;
    
    pair<int,int> ans = stairCaseSearch(arr,n,m,1);
    cout << ans.first << " " << ans.second << endl;

    return 0;
}