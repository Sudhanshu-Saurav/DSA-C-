#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> str;

    str.push("samjhe ");
    str.push("Saurav Hoon ");
    str.push("Mai Sudhanshu ");
   
   cout <<" size of stck -> "<< str.size() << endl;
   cout << "Khali hai kya bhai? -> " << str.empty() << endl;

    cout << str.top();
    str.pop();
    cout << str.top();
    str.pop();
    cout << str.top();

    cout << endl;

    return 0;
}