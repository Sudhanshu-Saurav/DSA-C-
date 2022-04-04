#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //dynamic array
    int *arr = new int[n];

    for(int i =0;i<n;i++)
    {
        arr[i] = i;
        cout << arr[i] << " ";
    }

    delete [] arr;

    cout << endl << &arr << endl; //adress of arr as stored in call stack
    cout << arr << endl; // dont know
        cout << *arr << endl; // garbage
    cout << arr[2] << endl; // garbage
    return 0;
}