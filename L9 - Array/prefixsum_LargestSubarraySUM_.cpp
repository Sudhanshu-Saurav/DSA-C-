#include <bits/stdc++.h>
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
// prefix sum approach O(n^2)
int sumSubArray(int *arr, int n)
{
    //prefix array (cummalative sum)
    int prefix[n] = {0};
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int largest_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarr_sum = i>=0? prefix[j] - prefix[i-1]:prefix[j];
            // for (int k = i; k <= j; k++)
            // {
            //     subarr_sum += arr[k];
            // }
            largest_sum = max(largest_sum, subarr_sum);
        }
    }

    return largest_sum;
}

int main()
{
    int arr[] = {1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    subArray(arr,n);
    int result = sumSubArray(arr, n);
    cout << result;

    return 0;
}