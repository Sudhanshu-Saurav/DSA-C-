#include<bits/stdc++.h>
using namespace std;

void input(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    
    //to initialise every array element with same number
    int n;
    int arr[10000];
    int sum = 0; 
    cin >> n;
    input(arr,n);
    for(int i=0; i<10;i++)
    {
        sum=sum+arr[i];   
    }
    cout << sum << endl;
}