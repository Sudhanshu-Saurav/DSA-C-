#include<iostream>
using namespace std;

int main()
{
	/*
	int a;
	cin >> a;
	
	if(a>0)
	{
		cout << "a is +ve" << endl;
	}
	else
	{
		cout << "a is -ve" << endl;
	}
	
	int b;
	cin >> b;
	
	if(b>0)
	{
		cout << "a is +ve" << endl;
	}
	else if(b<0)
	{
		cout << "a is -ve" << endl;
	}
	else
	{
		cout << "a is equal to 0" << endl;
	}
	
	int val;
	val=cin.get();
	cout << "The value of val is : " << val << endl;
	*/
	
	char ch;
	cout << "Enter the charcter : ";
	cin >> ch;
	if(ch>='a'&& ch<='z')
	{
		cout << "This is lowercase";
	}
	else if(ch>='A'&& ch<='Z')
	{
		cout <<"This is Uppercase";
	}
	else 
	{
		cout << "This is Number";
	}
	
	


}
