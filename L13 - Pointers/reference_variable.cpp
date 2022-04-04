#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int &y = x;
    y++;
    cout << x << endl; //11
    cout << y << endl; //11
    x++;
    cout << x << endl; //12
    cout << y << endl; //12


    return 0;
}