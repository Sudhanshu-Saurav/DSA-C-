#include<bits/stdc++.h>
using namespace std;

void input(int arr[],int size)
{
    for (int i = 0; i<size; i++)
    {
        cin >> arr[i];
    }
}

void altswap(int arr[],int size)
{
    for(int i=0; i<size ; i+=2)
    {
        if( (i+1) < size )
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

void printarr(int arr[],int size)
{
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[100];

    input(arr,n);
    printarr(arr,n);

    altswap(arr,n);

    printarr(arr,n);

    return 0;
}