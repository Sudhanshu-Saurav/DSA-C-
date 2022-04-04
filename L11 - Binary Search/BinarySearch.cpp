#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    int mid;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid]==key)
            return mid;
        else if(key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

void input(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int n;

    cout << "Enter the size of Array" << endl;
    cin >> n;

    int arr[n];
    input(arr,n);

    int key;
    cout << "Enter the key you want to search for " << endl;
    cin >> key;

    int index = binarySearch(arr,n,key);

    if(index==-1)
        cout << "Element not found" << endl;
    else
        cout << "The Index of array containing the key is " << index << endl;

    cout << "Everything is working fine" << endl;
    return 0;
}