#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct numb{
	int n_zero;
	string value;
};

struct cmp{
	bool operator()(numb a , numb b){
		if(a.n_zero == b.n_zero){
			if(a.value.size() == b.value.size()){
				return a.value < b.value;
			}
			return (a.value.size() < b.value.size());
		}
		return (a.n_zero > b.n_zero);
	}
}myobject;

int seperator(string &a){
	int n = a.size() , pos;
	int count = 0;
	for(int i = n - 1 ; i >= 0 ; i--){
		if(a[i] == '0'){
			count ++;
		}
		if(a[i] != '0'){
			pos = i;
			break;
		}
	}
	a = a.substr(0, pos+1); 
	return count;
}


int main(){
	int n;
	cin >> n;
	vector<numb> arr(n);
	
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i].value;
		arr[i].n_zero = seperator(arr[i].value);
		//cout << arr[i].n_zero  << "   " << arr[i].value <<endl;
	}
	
	sort(arr.begin() , arr.end() , myobject);
	cout << arr[0].value;
	
	for(int i = 0 ; i < arr[0].n_zero ; i++){
		cout << "0";
	}
	cout << endl;
	
	
}
