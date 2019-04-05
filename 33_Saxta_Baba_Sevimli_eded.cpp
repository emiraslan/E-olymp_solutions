#include <iostream>
#include <math.h>
#include <sstream>
using namespace std;

typedef unsigned long long int lli;

bool sadeYoxla(lli a){
	if(a == 1)return true;
	else if(a == 13)return false;
	
	for(int i = 3; i <= sqrt(a) ; i+=2){
		if(a%i == 0){
			return false;
		}
	}
	
	stringstream ss;
	ss << a;
	string str = ss.str();
	int n = str.size();
	for(int i = 0; i < n ; i++){
		if(str[i] == '1' && str[i+1] == '3'){
			return false;
		}
	}
	return true;
}

int main(){
	//vector<lli> arr;
	lli a, b;
	lli count = 0;
	cin >> a >> b;
	if(a>b){
		lli temp = a;
		a = b;
		b = temp;
	}
	//if(a<=2  && b>=2 )count++;
	if(a%2 == 0) a = a+1;
	if(b%2 == 0) b = b-1;
	
	for(int i = a ; i <= b ; i+=2){
		if(sadeYoxla(i)){
		//	cout << i << endl;
			count ++;
		}
	}
	cout << count << endl;
	 return 0;
}
