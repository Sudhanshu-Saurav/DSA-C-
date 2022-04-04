#include<bits/stdc++.h>
using namespace std;

int main()
{
    //to initialise every array element with same number   use(fill_n) for specific number other than 0 or 0
    //to initialise array of kown size without garbage value then just assign any one value to is the rest will be 0 
    //and if you want all as 0 then just put one value as 0
    int arr[10];
    fill_n(arr,10,56);
    for(int i=0; i<10;i++)
    {
        cout << arr[i] << endl;
    }

}