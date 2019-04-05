#include <iostream>
#include <memory.h>
#include <algorithm>  
#include <vector>
using namespace std;

int main(){
	int  n;
	int temp;
	vector<int> arr;
	cin >> n;

	int count = 1;
	for(int i = 0 ; i < n ; i++){	
		cin >> temp;
		arr.push_back(temp);
	}
	
	sort(arr.begin() , arr.end());

	for(int i = 1 ; i < n ; i++){
		if(arr[i] == arr[i-1]){
				
		}else{
			count ++;
		}
	}
	if(count == 1)count =0;
	cout << count << endl;
}
