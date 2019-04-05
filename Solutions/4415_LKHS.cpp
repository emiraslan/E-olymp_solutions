#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

typedef unsigned long long ull;

struct point{
	ull index;
	ull value; 
};

struct cmp{
	bool operator () (point &com1 , point &com2 ) const {
		return com1.value > com2.value;
		
	}
}myobject;
/*
point find_max(point * arr , ull n){
	point avto;
	avto.index = 0;
	avto.value = 0;
	
	for(int i = 0 ; i < n ; i++){
		if(avto.value < arr[i].value){
			avto.value = arr[i];
			avto.index = i;
		}
	}
	
	return avto;
}
*/
int main(){
//	ifstream cin("input.txt");
//	ofstream cout("output.txt");
	
	ull a ,sum = 0 ,  m  , k , n;
	bool flag = false;
	cin >> n >> m;
	vector<point> arr(m);
	for(int i = 0 ; i < m ; i++){
		cin >> arr[i].value;
		arr[i].index = i+1;
	}
	
	sort(arr.begin(), arr.end() , myobject);
	
	for(int i = 0 ; i < arr.size()  ; i ++){
		sum += arr[i].value;
		if(n <= sum){
			cout << i+1 << "\n";
			flag = true; 
			for(int j = 0 ; j <= i ; j ++){
				cout << arr[j].index << " ";
			} 
			break;
		}
	}
	if(!flag){
		cout << "-1\n" ;
	}
	
	return 0;
}
