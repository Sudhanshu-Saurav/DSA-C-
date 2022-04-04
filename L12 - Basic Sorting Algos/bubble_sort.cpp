#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[],int size)            // 1   // 3 2 4 1 5
{                                                 // 2 3 4 1 5
    int counter = 1;                              // 2 3 4 1 5
    while(counter<size-1)                         // 2 3 1 4 5
    {                                               
        for(int i=0; i<size-1;i++)          // 2    // 2 3 1 4 5
        {                                           // 2 3 1 4 5
            if(arr[i]>arr[i+1])                     // 2 1 3 4 5
                swap(arr[i],arr[i+1]);       
        }                                   // 3    // 2 1 3 4 5 
        counter++;                                  // 1 2 3 4 5
    }
}

int main()
{
    int n;
    cout << "Enter the size of array";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    bubble(arr,n);

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}