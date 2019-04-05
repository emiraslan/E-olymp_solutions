#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <iomanip>
using namespace std;

typedef long long int ulli;


int main()
{
	int minn, maxx,k, temp , t , n;
	cin >> n >> t;

	while (t--)
	{
		vector<ulli> arr(n, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> temp;
			arr[i] = temp;
		}
		sort(arr.begin(), arr.end());
		maxx = arr[n - 1];
		minn = arr[0];
		int count = 0;
		ulli sum = 0;
		for (int i = 1; i < n-1; i++)
		{
			if (arr[i] != minn && arr[i] != maxx)
			{
				count++;
				sum += arr[i];
				cout << "Min: " << minn << "   Max: " << maxx << "    arr[i]: " << arr[i] << "\n";
			}
		}
		cout << fixed << setprecision(2) << (double)((double)sum / (double)count)*1.0 << " ";

		//vector::iterator it = unique();
		//vector<ulli>::iterator it = unique(arr.begin(), arr.end());
		//arr.resize(distance(arr.begin(), it));

		//for (it = arr.begin(); it != arr.end(); ++it)
		//	std::cout << ' ' << *it;
		//std::cout << '\n';
		//cout << "Distance : " << distance(arr.begin(), arr.end()) << endl;
	}

	system("pause");

}
