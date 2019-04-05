#include <iostream>
#include <memory.h>
using namespace std;

int n;
int arr[101][101];


void calc(int k)
{
	for(int i = 0; i < n ; i++)
	{
		if(arr[k][i] == 2)
		{
			return;
		}
		if(arr[k][i] == 1){
			arr[k][i] = 2 ;
			calc(i);
		}	
		
	}
	return;
}

int main()
{
	int m , u , v;
	int sum = 0 , sum_2 = 0;
	cin >> n >> m;
	
	memset(arr, 0, sizeof(arr));
	
	while(m--)
	{
		cin >> u >> v;
		arr[max(u, v)-1][min(u, v)-1] = 1;
		arr[min(u, v)-1][max(u, v)-1] = 1;
	}
	bool oldu = false;
	bool olmadi = false;
	calc(0);
	for(int i = 0; i < n ; i++)
	{
		
		for(int j = 0 ; j < n ; j++)
		{
			//cout << arr[i][j] << " ";
			sum += arr[i][j];
			if(arr[i][j] == 1)
			{
			//	cout << " i : " << i << "   j : " << j << endl;
				olmadi = true;
			}
			
		}	
		//cout << endl;
		if(olmadi || sum == 0)
		{
			cout << "NO" << "\n";
			system("pause");
			return 0;
		}
		sum = 0;
	}
	cout << "YES" << endl;
	system("pause");
	return 0;
	
}
