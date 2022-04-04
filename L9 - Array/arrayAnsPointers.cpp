#include<bits/stdc++.h>
using namespace std;

/*
In function here we do not pass the array by value means 
we donot pass the whole array rather we pass the address of array's
first index value, i.e pass by reference

so we can use either (int arr[]) or (int *arr) both will output same thing
*/
void printArr(int arr[]) // or use (int *arr)  
{
    cout << "In Function" << sizeof(arr) << endl;
}


int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << "In main" << sizeof(arr) << endl;
    printArr(arr);

    // for(int i=0; i<10;i++)
    // {
    //     cout << arr[i] << endl;
    // }

}