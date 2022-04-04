

#include<bits/stdc++.h>
using namespace std;

int main()
{									//we cannot use continue statement within a switch case loop??
	int n;							//In switch case it will throw an error because continue statement 
	cin >> n;						//takes control to the condition checking statement again .	
	int hund=0,fif=0,twen=0,one=0;
	int amt=0;
	while(1)
	{
		switch(1)
		{
			case 1 : hund = n/100;
					 amt = n%100;
					 n=amt;
					 fif = n/50;
					 amt = n%50;
					 n=amt;
					 twen = n/20;
					 amt = n%20;
					 n=amt;
					 one = n/1;
					 break;
			default:
					 cout << "Invalid amount" << endl;			 
		}
		goto line;
	}
	line:
	cout << "Hundred : " << hund << endl;
	cout << "Fifty : " << fif << endl;
	cout << "Twenty : " << twen << endl;
	cout << "One : " << one << endl;
}
