#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

//ascending order comparision
bool compare(int a,int b)
{
    return a < b; // reverse by changing a > b
}


int main()
{
    int arr[] = {-1,2,-6,5,7,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);
    //sort(arr,arr+n,compare); //(can be used to print in desired Order)
    sort(arr,arr+n, greater<int>()); // for reverse order
    //reverse(arr,arr+n);
    for(int x:arr)
    {
        cout << x << " ";
    }
}