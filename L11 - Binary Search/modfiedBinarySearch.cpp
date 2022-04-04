#include<bits/stdc++.h>
using namespace std;

int rotatedSearch(vector<int> &arr,int key)
{
    int size = arr.size();
    int start =0;
    int end = size-1;

    while(start<=end)
    {
        int mid = (start + (end - start)/2);
        if(arr[mid]==key)
            return mid;
        //2case
        if(arr[start]<arr[mid])
        {
            //left
            if(key>=arr[start] and key<=arr[mid])
                 end = mid-1;
            else
                start = mid+1;
        } 
        else
        {
            //right
            if(key>=arr[mid] and key<=arr[end])
                start = mid+1;
            else
                end = mid-1;
        }

    }
    return -1;
}

int main()
{
    vector<int> arr = {9,11,19,2,5,8};
    int key;
    cin>>key;
    int ans = rotatedSearch(arr,key);
    cout << "The element is Present at index -> " << ans;
    return 0;
}