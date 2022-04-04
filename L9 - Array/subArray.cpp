#include<bits/stdc++.h>
using namespace std;


void subArray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j = i; j<n;j++)
        {
            int sum =0;
            for(int k= i; k<=j;k++)
            {
                cout << arr[k] << " " ;
                sum+=arr[k];
            }
            cout << "Sum is -> " << sum;
            cout<<endl;
        }
        cout << endl;
    }
    
}
//brute force approach
int sumSubArray(int *arr,int n)
{
    int largest_sum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j = i; j<n;j++)
        {
            int subarr_sum=0;
            for(int k= i; k<=j;k++)
            {
                subarr_sum += arr[k];
            }
            largest_sum = max(largest_sum,subarr_sum);
        }
        cout << endl;
    }
    
    return largest_sum;
}


int main()
{
    int arr[] = {1,-2,3,4,-5,6,-7};
    int n = sizeof(arr)/sizeof(arr[0]);

    subArray(arr,n);
    int result = sumSubArray(arr,n);
    cout << result;
    
    return 0;  
} 