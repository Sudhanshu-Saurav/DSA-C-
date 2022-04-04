#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4] = {{1,2,3,4},{12,13,14,15},{11,16,15,6},{10,9,8,7}};
    int n=4,m=4;

    for(int i = 0;i<4;i++)
    {
        for(int j = 0;j<4;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    int row_start = 0;
    int row_end = n-1;
    int col_start = 0;
    int col_end = m-1;

    while(row_start<=col_end)
    {
        for(int i=col_start;i<=col_end;i++)
        {
            cout << arr[row_start][i] << " "; 
        }
        row_start++;
        for(int i=row_start;i<=row_end;i++)
        {
            cout << arr[i][col_end] << " ";
        }
        col_end--;
        for(int i=col_end;i>=col_start;i--)
        {
            cout << arr[row_end][i] << " "; 
        }
        row_end--;
        for(int i=row_end;i>=row_start;i--)
        {
            cout << arr[i][col_start] << " "; 
        }
        col_start++;
    }
    //return 0;
}