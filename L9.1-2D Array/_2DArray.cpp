#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[][100],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[100][100];
    int n,m;
    cin >> n >> m;

    //take input
    for(int i = 0; i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }

    printArray(arr,n,m);
    return 0;
}