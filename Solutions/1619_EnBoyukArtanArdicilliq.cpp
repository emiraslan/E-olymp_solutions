#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef long long int lli;
lli k, sum = 0;


lli faktorial(lli q, lli e) {
	lli hasil = 1;
	for (int i = q + 1; i <= e; i++) {
		hasil *= i;
	}
	return hasil;
}


void suyunu_cixartma(vector<lli> arr)
{
	int n = arr.size();
	
	
	for (int i = 0; i < n; i++)
	{
		lli a = arr[i];
		vector<lli> ret;
		ret.clear();
		ret.push_back(a);

		for (int j = i; j < arr.size(); j++)
		{
			if (a < arr[j])
			{
				ret.push_back(arr[j]);
			}
		}
		cout << ret.size() << " ";
		sum = (sum < ret.size()) ? ret.size() : sum;
	//	suyunu_cixartma(ret, t);

	}
	cout << "\n";
}


int main() {
	lli temp;
	lli a, b;
	vector<lli> arr(1001, 1);
	vector<lli> arr2(1001, 0);
	cin >> a;
	
	for(int i = 0; i < a; i++)
	{
		cin >> temp;
		arr2[i] = temp;
	}
	
	for(int i = 1; i < a ; i ++)
	{
		int max = 0;
		for(int j = 0; j < i; j++)
		{
			if(arr[j] > max && arr2[i] > arr2[j])
			{
				max = arr[j];
			}
		}
		arr[i] += max;
	}
	int max = 0;
	for(int i = 0; i < a ; i++){
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << max << "\n";
	
}
