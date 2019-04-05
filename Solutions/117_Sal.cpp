#include <vector>
#include <iostream>

using namespace std;

int main(){
	int n , m;
	cin >> n >> m;
	vector<int> arr(n);
	int pos;
	
	for(int i = 0; i < n ; i++){
		cin >> arr[i];
	}
	int sum = 0 , max = 0;
	for(int i = 1 ; i < 1001; i++){
		max = sum;
		sum = 0;
		for(int j = 0 ; j < n ; j++){
			sum +=(arr[j]/i);
		//	cout << arr[j] << "/" << i << " = " << arr[j]/i << endl;
		//	cout << sum << endl;
		}
	//	cout << endl;
		if(sum < m){
			pos = i;
			break;
		}
	}
	
	cout << pos-1 << endl;	
}
