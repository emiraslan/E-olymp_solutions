#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
	long long n, count =1 , sum, tek_sum=0;
	string a;
	cin >> n;
	
	cin >> a;
	sort(a.begin() , a.end());
	vector<long long> arr;
	
//	cout << a << endl;
	for(int i = 1; i < a.size() ;i++)
	{
		
		if(a[i] == a[i-1])
		{
			count ++;
		}
		else if(a[i] != a[i-1])
		{
			arr.push_back(count);
			count = 1;
		}
	
	} 
	arr.push_back(count);
	long long max1 = 0;
	sum = 0;count =0;
	for(int i = 0; i < arr.size() ;i++)
	{
		if(arr[i]%2 == 0)
		{
			sum += arr[i];
		}
		else if( max1 < arr[i] && arr[i]%2 == 1 )
		{
			max1 = arr[i];
		}
		if(arr[i]%2 == 1)
		{
			count++;
			tek_sum += arr[i]-1;
		}
//		cout << arr[i]  << " ";
	}
//	cout << "\n";
	if(count > 1)
	{
		tek_sum -= max1;
		tek_sum += 1;
		sum += tek_sum;
	}
	sum += max1;
	cout <<  sum  << endl;
	
	
}
