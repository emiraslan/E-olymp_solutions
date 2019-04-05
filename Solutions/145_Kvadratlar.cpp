#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	
	cin >> n;
	vector<int> arr(n);
	
	for(int i = 0 ; i < n ;i++){
		cin >> arr[i] ;
	}
	
	sort(arr.begin(), arr.end());
	int count = 1;
	int cavab = 0;
	
	for(int i = 0; i < n ; i++) cout << arr[i] << " ";
	cout << endl;
	for(int i = 1; i < n ; i++){
		if(arr[i] == arr[i-1]){
			count++;
		}
		if(arr[i] != arr[i-1]){
			cavab+=(count/4);
			count = 1;
		}
		else if(i == n-1){
			cavab += (count/4);
		}
		
	//	if(count == 4) cavab++;
	}
	
	cout << cavab << endl;
	
}
