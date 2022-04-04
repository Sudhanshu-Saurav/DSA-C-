#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> maxi;   //by default max heap
    priority_queue<int,vector<int>,greater<int>> mini;   //minheap

    maxi.push(11);
    maxi.push(12);
    maxi.push(13);
    maxi.push(14);

    cout << maxi.top() << " ";
    maxi.pop();
    cout << maxi.top() << " ";

    cout << "size of priority queue -> " << maxi.size() << endl;
    cout << "check if priority queue is empty -> " << maxi.empty() << endl;


    


    return 0;
}