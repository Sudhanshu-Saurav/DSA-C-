		int n;
		cin >> n;
		int row=1;
	
		while(row<=n)
		{
			int s = row-1 ;
			while(s)
			{
				cout << " " ;
				s=s-1;
			}
			int col=1;
			while(col<=n-row+1)
			{
				cout << row;
				col++;
			}
	
			cout << endl;
			row=row+1;
		}