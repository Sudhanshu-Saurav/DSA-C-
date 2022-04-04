#include<bits/stdc++.h>
using namespace std;

int kadane_max_subArr_sum(int *arr,int n)
{
    int current_sum = 0;
    int max_sum = 0;
    for(int i=0;i<n;i++)
    {
        current_sum = current_sum + arr[i];
        if(current_sum<0)
        {
            current_sum = 0;
        }
        max_sum = max(max_sum,current_sum);
    }
    return max_sum;
}

int main()
{
    int arr[] = {1,-2,3,4,-5,6,-7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = kadane_max_subArr_sum(arr,n);
    cout << result << endl;
    return 0;

}