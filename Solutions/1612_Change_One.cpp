#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;

int main()
{
	unsigned long long int n , sum = 0;
	
	cin >> n;
	
	string a = bitset<32>(n).to_string();
	
	for(int i = a.size()-1; i > 0; i--)
	{
		if(a[i] == '1')
		{
			a[i] = '0';
			break;
		}
	}
	for(int i = a.size()-1, j=0; i > 0; i-- , j++)
	{
		sum += pow(2, j)*(a[i]-'0');
	}
	cout << sum << endl;
	
	system("pause");
}
