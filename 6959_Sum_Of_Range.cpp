#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

typedef unsigned long long mytype;

int main()
{
	mytype t, i, j, q, n, tmp;
	ofstream cout("output.txt");
	ifstream cin("input.txt");

	cin >> t;

	while (t--)
	{
		cin >> n >> q;
		{
 			vector<mytype> vec(n);
			cin >> tmp;
			vec[0] = tmp;
			for (int i = 1; i < n; i++)
			{
				cin >> tmp;
				vec[i] = vec[i - 1] + tmp;
			}

			while (q--)
			{
				cin >> i >> j;
				//cout << vec[j] << ' ' << vec[i - 1] << endl;
				cout << vec[j] - (i == 0 ? 0: vec[i - 1]) << "\n";
			}
		}
		cout << endl;

	}

	system("pause");

	return 0;
}
