#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x =10;
    double y = 50.5001;
    cout << "Adress of x -> " << &x << endl;
    cout << "Adress of y -> " << &y << endl;
     
    // demo pointer
    int * xptr = &x;
    cout << "Adress of x -> " << xptr << endl;
    cout << "Adress of xptr -> " << &xptr << endl;
    cout << "dereference xptr -> " <<*xptr << endl;

    int ** xxptr = &xptr;
    cout << "Adress of xptr -> " << xxptr << endl;
    cout << "Adress of xxptr -> " << &xxptr << endl;
    cout << "dereference xxptr -> " << *xxptr << endl;
    cout << "dereference xxptr -> " << **xxptr << endl;
    return 0;
}