#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int lli;


int main()
{
	lli a, b, c= -922337203685477;
	cin >> a >> b;
	lli arr[a][b];
	lli temp;
	
	for(int i = 0 ; i < a ; i++)
	{
		for(int j = 0 ; j < b ; j++)
		{	
			cin >> arr[i][j];
		}
	}
	
	
	if(a == 1)
	{
		for(int j = 0 ; j < b ; j++)
		{
		    c = (arr[0][j] > c) ? arr[0][j] : c;
		}
		goto Novbeti;
	}
	
	for(int i = 1 ; i < a ; i++)
	{
		for(int j = 0 ; j < b ; j++)
		{
			if(j == 0)   temp = arr[i-1][j]; 
			else         temp = (arr[i-1][j] > arr[i-1][j-1]) ? arr[i-1][j] : arr[i-1][j-1];
			if(j == b-1) arr[i][j] += (temp);
			else 		 arr[i][j] += (temp > arr[i-1][j+1]) ? temp : arr[i-1][j+1];
//			cout << arr[i][j] << " ";
			if( i == a-1) { c = (arr[i][j] > c) ? arr[i][j] : c ;}
		}
//		cout << "\n";
	}
	Novbeti:
	cout << c << "\n";
	system("pause");
	
}
