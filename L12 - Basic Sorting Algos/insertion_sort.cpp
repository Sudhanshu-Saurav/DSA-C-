#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[],int size)                                     // 3 2 4 1 5
{                                                                      // 2 3 4 1 5
    for(int i=1; i<size;i++)                                           // 2 3 4 1 5
    {                                                                  // 1 2 3 4 5
        int current = arr[i];                                       
        int prev = i-1;                          //we insert the current element at right place in the sorted array
        while(arr[prev]>current && prev>=0)     //we shift the bigger elemnt +1 and make empty sapce for curr elem
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;

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

    insertion(arr,n);

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}