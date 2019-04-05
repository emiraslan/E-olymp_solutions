#include <iostream>
#include <string>
#include <memory.h>
#include <algorithm>
using namespace std;

int main()
{
	int a , b;
	cin >> a >> b;
	
	int arr[a];
	memset(arr , 0, sizeof(arr));
	
	for(int i = a-1; b-- ; i--)
	{
		arr[i] = 1;
	}
	
	do{
		for(int i = 0; i < a ; i++)
		{
			cout << arr[i];
		}
		cout << "\n";
	}while(next_permutation(arr, arr+a));
	
	system("pause");
	
}
