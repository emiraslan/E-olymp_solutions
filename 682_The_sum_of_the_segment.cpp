#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef unsigned long long int ulli;



int main()
{
	ulli a, n, sum=0 , u, v;
	cin >> n;
	vector<ulli> arr;
	
	arr.push_back(0);
	while(n--)
	{
		cin >> a;
		sum += a;
		
		arr.push_back(sum);

	}	

	cin >> a;
	while(a--)
	{
		cin >> u >> v;
		cout << arr[v] - arr[u-1] << "\n";
	}
	

	
}
