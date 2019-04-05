#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <functional>
using namespace std;

typedef unsigned long long int ulli;

struct cmp{
	bool operator ()(const ulli &a , const ulli &b){
		if(a%10 == b%10){
			return a < b;
		}
		return (a%10 < b%10);
	}
}myobject;

int main(){
	int n;
	cin >>n;
	ulli temp;
	vector<ulli> arr;
	
	for(int i =0 ; i < n ; i++){
		cin >> temp;
		//reverse(temp.begin() , temp.end());
		arr.push_back(temp);
	}
	sort(arr.begin() , arr.end() , myobject);
	
	for(int i = 0 ; i < n ; i ++){
		//reverse(arr[i].begin() , arr[i].end());
		cout << arr[i] << " ";
	}
	
	system("pause");
	return 0;
}
