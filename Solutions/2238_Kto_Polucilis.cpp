#include <iostream>
#include <vector>
using namespace std;

typedef double lli;

int main() {
	lli a, n, sum, temp;
	cin >> a;
	vector<double> arr(a);

	n = a;
	while (a--) {
		cin >> temp;
		arr.push_back(temp);
		sum += temp;

	}

	sum = sum*1.0 / n;
	int count = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (sum <= arr[i]) {
		//	cout << "arr[i] :  " << arr[i] << endl;
		//	cout << "Sum : " << sum << endl;
			count++;
		}
	}
//	cout << "Sum : " << sum << endl;
//	cout << " n : " << n << endl;
	cout << count << endl;

	system("pause");

	return 0;
}

