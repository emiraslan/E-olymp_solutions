#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<char> arr;
	int count = 1;
	int n;
	cin >> n;
	bool flag = true; 
	if(n == 1){
		char c;
		cin >> c;
		cout << c << endl;
		return 0;
	}
	
	arr.resize(n);
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	//	cout << arr[i] << "  " ;
	}
	//cout << endl;
	sort(arr.begin() , arr.end());

//	cout << endl;
	
	for(int i = 1 ; i < n ; i+=2){
		if( arr[i] != arr[i-1]){
			cout << arr[i-1] << endl;
			flag = false;
			break;
		}
	}
	if(flag && n%2 == 0){
		cout << "Ok" << endl;
	}
	system("pause");
	
}
