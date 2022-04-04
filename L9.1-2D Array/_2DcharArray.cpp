#include<bits/stdc++.h>
using namespace std;

int main(){
    char num[][10] = {"one","two","three","fifty","hundred"};
    
    int i=3;
    cout << num[i] << endl;

    for(int i=0;i<5;i++)
    {
        cout << num[i] << endl;
    }
    for (string x : num)
    {
        cout << x << endl;
    }
}