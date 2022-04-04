#include <iostream>
using namespace std;

int main()
{
	/*
		   *
		  **
		 ***
		****
	 */

	// int n;
	// cin >> n;
	// int row = 1;
	// while (row <= n)
	// {
	// 	int s = n - row;
	// 	while (s)
	// 	{
	// 		cout << " ";
	// 		s--;
	// 	}
	// 	int col = 1;
	// 	while (col <= row)
	// 	{
	// 		cout << "*";
	// 		col = col + 1;
	// 	}
	// 	cout << endl;
	// 	row = row + 1;
	// }

	/*
	 ****
	 ***
	 **
	 *
	 */

		// int n;
		// cin >> n;
		// int row=1;
		// while(row<=n)
		// {
		// 	int col=n-row+1;
		// 	while(col)
		// 	{
		// 		cout << "*";
		// 		col--;
		// 	}
		// 							//		int s = 1 ;
		// 							//		while(s<=row-1)
		// 							//		{
		// 							//			cout << "#" ;
		// 							//			s=s+1;
		// 							//		}
		// 	cout << endl;
		// 	row=row+1;
		// }

	/*
		****
		 ***
		  **
		   *
	 */

		// int n;
		// cin >> n;
		// int row=1;
		// while(row<=n)
		// {
		// 	int s = 1 ;
		// 	while(s<=row-1)
		// 	{
		// 		cout << " " ;
		// 		s=s+1;
		// 	}
		// 	int col=n-row+1;
		// 	while(col)
		// 	{
		// 		cout << "*";
		// 		col--;
		// 	}
	
		// 	cout << endl;
		// 	row=row+1;
		// }

	/*
		1 1 1 1
		  2 2 2
			3 3
			  4
	*/

		// int n;
		// cin >> n;
		// int row=1;
	
		// while(row<=n)
		// {
		// 	int s = row-1 ;
		// 	while(s)
		// 	{
		// 		cout << " " ;
		// 		s=s-1;
		// 	}
		// 	int col=1;
		// 	while(col<=n-row+1)
		// 	{
		// 		cout << row;
		// 		col++;
		// 	}
	
		// 	cout << endl;
		// 	row=row+1;
		// }

	/*
		   1
		  22
		 333
		4444
	*/

	//	int n;
	//	cin >> n;
	//	int row=1;
	//
	//	while(row<=n)
	//	{
	//		int s = n-row ;
	//		while(s)
	//		{
	//			cout << " " ;
	//			s=s-1;
	//		}
	//		int col=1;
	//		while(col<=row)
	//		{
	//			cout << row;
	//			col++;
	//		}
	//
	//		cout << endl;
	//		row=row+1;
	//	}

	/*
		1 2 3 4
		  2 3 4
			3 4
			  4
	*/

	//	int n;
	//	cin >> n;
	//	int row=1;
	//
	//	while(row<=n)
	//	{
	//		int s = row-1 ;
	//		while(s)
	//		{
	//			cout << " " ;
	//			s=s-1;
	//		}
	//		int col=1;
	//		while(col<=n-row+1)
	//		{
	//			cout << row+col-1;
	//			col++;
	//		}
	//
	//		cout << endl;
	//		row=row+1;
	//	}

	/*
		   1
		  23
		 456
		78910
	*/

	//	int n;
	//	cin >> n;
	//	int row=1;
	//	int k=1;
	//	while(row<=n)
	//	{
	//		int s = n-row ;
	//		while(s)
	//		{
	//			cout << " ";
	//			s=s-1;
	//		}
	//		int col=1;
	//		while(col<=row)
	//		{
	//			cout << k;
	//			col++;
	//			k++;
	//		}
	//
	//		cout << endl;
	//		row=row+1;
	//	}

	/*
		   1
		  121
		 12321
		1234321
	*/

	//	int n;
	//	cin >> n;
	//	int row=1;
	//
	//	while(row<=n)
	//	{
	//		int s = n-row ;
	//		while(s)
	//		{
	//			cout << " " ;
	//			s=s-1;
	//		}
	//		int col=1;
	//		int k=0;
	//		while(col<=2*row-1)
	//		{
	//
	//			if(col<=row)
	//			{
	//				k=k+1;
	//				cout << k;
	//				col++;
	//
	//			}
	//			else
	//			{
	//
	//				k=k-1;
	//				cout << k;
	//				col++;
	//			}
	//		}
	//
	//		cout << endl;
	//		row=row+1;
	//	}

	return 0;
}
