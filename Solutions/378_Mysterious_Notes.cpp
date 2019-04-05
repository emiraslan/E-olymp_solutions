#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	long long n = 3, count =1 , sum, tek_sum=0;
	string a;
	vector<string> arr;
	while(cin >> a)
	{
		arr.push_back(a);
	}
	char alfa[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I' ,'J', 'K','L', 'M', 'N', 'O', 'P','Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y','Z'};
	
	map<char , char> lets;
	for(int i = 0 ; i < arr[arr.size()-1].size() ; i++)
	{
		lets[alfa[i]] = arr[arr.size()-1][i]; 
	//	cout << lets[alfa[i]] <<" ";
	}
	//cout << "\n";
	for(int i = 0 ; i < arr.size()-1 ; i ++)
	{
		for(int j = 0 ; j < arr[i].size(); j++)
		{
			cout << lets[arr[i][j]]; 
		}
		cout << " ";
	}
	cout << "\n";
	system("pause");
}
