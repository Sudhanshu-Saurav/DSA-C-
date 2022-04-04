#include<bits/stdc++.h>
using namespace std;

void selection(int arr[],int size)              // 3 2 4 1 5
{                                               // 1 3 2 4 5
    for(int i =0; i<size-1;i++)                 // 1 2 3 4 5
    {
        for(int j = i+1;j<size;j++)           // select the min from unsorted array
        {                                     // swap them with the first element of unsorted array to sort it  
            if(arr[j]<arr[i])
                swap(arr[i],arr[j]);
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of array";
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    selection(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }


}