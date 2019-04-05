#include <iostream>
using namespace std;

typedef long long int lli;

int main(){
	lli noqte, k, sum=0;
	lli arr[1001];
//	cout << "1" << endl;
	cin >> noqte >> k;
	//cout << "2" << endl;
	arr[0]=1;
	arr[1]=1;
	for(int i = 2 ; i <= noqte ; i++){
		//cout << "3" << endl;
		for(int j = 1; j <= ((i<k) ? i : k) ; j++ ){
			sum += arr[i-j];
	//		cout << "4" << endl;
		}
		arr[i] = sum;
		sum = 0;
	//	cout << "5" << endl;
	}
	//cout << "6" << endl;
	cout << arr[noqte-1] << endl;
//	system("pause");
}
