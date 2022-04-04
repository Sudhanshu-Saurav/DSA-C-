#include<bits/stdc++.h>
using namespace std;

int main()
{
    // char a[100] = "Apple";
    // char b[100];

    // cout << strlen(a)<<endl;
    // strcpy(b,a);
    // cout << b << endl;
    // cout << strcmp(a,b)<<endl;
    // char web[] = "www.";
    // char domain[] = "hicoder.com";
    // cout << strcat(web,domain)<< endl;


    //string class
    string s; // dynamic array
    getline(cin,s,'.');//third argument to end at .
    
    for(char x : s)
    {
        cout << x << " ";
    }
    
    cout << s << endl;

    int n;
    cin >> n;
    cin.get();
    vector<string> sarr;
    string temp;
    while(n--)
    {
        getline(cin,temp);
        sarr.push_back(temp);
    }
    for(string x : sarr)
    {
        cout << x << endl;
    }
} 