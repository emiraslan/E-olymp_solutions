#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long int lli;

int main(){
	vector<lli> arr;
	vector<lli> arr1;
	lli n;
	lli temp, temp2;
	
	cin >> n;
	
	for(lli i = 0 ; i < n ; i ++){
		cin >> temp2;
		arr.push_back(temp2);
		arr1.push_back(temp2);
	}
	
	sort(arr.begin() , arr.end());
	
	for(lli i = 0 ; i < n-1 ; i ++){
		if(arr[i] != arr1[i]){
			cout << "no" << endl;
			return 0;
		}
	}
	
	cout << "yes" << endl;
	
	system("pause");
	return 0;
}
