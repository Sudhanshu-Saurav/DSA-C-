#include<iostream>
using namespace std;

int main ()
{
	/*
		A A A
		B B B
		C C C
	*/
//	int n;
//	cin >> n;
//	int row=1;
//	while(row<=n)
//	{
//		int col=1;
//		while(col<=n)
//		{
//			char a= 'A'+row-1;
//			cout << a;
//			col=col+1;
//		}
//		cout << "\n";
//		row=row+1;
//	}
	
	
	
	/*
		A B C
		A B C
		A B C
	*/
//	int n;
//	cin >> n;
//	int row=1;
//	while(row<=n)
//	{
//		int col=1;
//		while (col<=n)
//		{
//			char b='A'+col-1;
//			cout << b << " ";
//			col+=1;
//		}
//		cout << endl;
//		row++;
//	}
	
	
	/*
		A B C
		D E F
		G H I
	*/
//	int n;
//	cin >> n;
//	int row=1;
//	char b='A';
//	while(row<=n)
//	{
//		int col=1;
//		while (col<=n)
//		{
//			cout << b << " ";
//			col+=1;
//			b=b+1;
//		}
//		cout << endl;
//		row++;
//	}
	
	
	
	/*
		A B C
		B C D
		C D E
	*/
//	int n;
//	cin >> n;
//	int row=1;
//	
//	while(row<=n)
//	{
//		int col=1;
//		while (col<=n)
//		{
//			char b='A'+col+row-2;
//			cout << b << " ";
//			col+=1;
//		}
//		cout << endl;
//		row++;
//	}	
	
	
	
	/*
		A
		B B
		C C C
	*/
//	int n;
//	cin >> n;
//	int row=1;
//	
//	while(row<=n)
//	{
//		int col=1;
//		while (col<=row)
//		{
//			char b='A'+row-1;
//			cout << b << " ";
//			col+=1;
//		}
//		cout << endl;
//		row++;
//	}	
	
	
	
	/*
		A
		B C
		C D E
		D E F G
	*/
	int n;
	cin >> n;
	int row=1;
	
	while(row<=n)
	{
		int col=1;
		while (col<=row)
		{
			char b='A'+col+row-2;
			cout << b << " ";
			col+=1;
		}
		cout << endl;
		row++;
	}	
	
	
	
	
	
	
	
}
