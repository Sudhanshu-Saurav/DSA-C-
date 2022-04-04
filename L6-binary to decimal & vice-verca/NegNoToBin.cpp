#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int i=0,ans = 0;
	int temp = n/-1;
	while(temp!=0)
	{
		int bit = (temp&1);
		ans = (bit*pow(10,i))+ans;
		temp=temp>>1;
		
		i++;	
	}
	ans = ~ans;
//	ans = ans|1;
	cout << ans << endl;
}
