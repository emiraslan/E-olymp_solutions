#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

typedef unsigned long long int ulli;

vector<ulli> ikilik;

void init(){
	ulli a, t;
	for(ulli i = 0 ; i <64; i ++){
		a = (ulli)(pow(2, i));
		ikilik.push_back(a);
	//	cout << a << endl;
	}
}

int main(){
	ulli temp,  n, count = 0;
	cin >> n;
	//vector<ulli> arr(n);
	init();
	for(ulli i = 0 ; i < n ; i++){
		cin >> temp;
		if(binary_search(ikilik.begin(), ikilik.end() , temp)){
			count ++;
		}
	} 
	cout << count << endl;
	
	//sort(arr.begin(), arr.end());
	
	
}
