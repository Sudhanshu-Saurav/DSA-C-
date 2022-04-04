#include <bits/stdc++.h>
using namespace std;

//using reference variable
void applyTax(int &income) //by reference (if not & then by value)
{                           // you can verify by changing the name lets say income -> money
    float tax = 0.10;
    income  = income - income*tax;
}


//using pointers
void viewsVideo(int *views)
{
    *views += 1;
}

int main()
{
    int income;
    cin >> income ;

    applyTax(income);
    
    cout << "After tax -> " << income << endl;

    int views;
    cin >> views ;

    viewsVideo(&views);
    
    cout << "After increse -> " << views << endl;

    return 0;
}