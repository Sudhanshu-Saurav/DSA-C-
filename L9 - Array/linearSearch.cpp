#include<bits/stdc++.h>
using namespace std;

void input(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
}

bool search(int arr[], int size,int a)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==a)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    int arr[10000];
    cin >> n;
    input(arr,n);
    
    int key;
    cout << "Enter the element you want to Search in the array";
    cin >> key;
    bool ans = search(arr,n,key);
    if(ans)
        cout << "Element Found";
    else
        cout << "Not Found";
}