#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    
    q.push("Mai Sudhanshu ");
    q.push("Saurav Hoon ");
    q.push("samjhe ");
    
   
   cout <<" size of stck -> "<< q.size() << endl;
   cout << "Khali hai kya bhai? -> " << q.empty() << endl;

    cout << q.front();
    q.pop();
    cout << q.front();
    q.pop();
    cout << q.back();

    cout << endl;

    return 0;
}