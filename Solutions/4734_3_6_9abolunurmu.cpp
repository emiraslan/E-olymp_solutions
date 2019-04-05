#include <iostream>

using namespace std;

int main(){
	int t = 0;
	string n;
	cin >> n;
	long long int size1 = n.size();
	long long int sum  = 0;
	if(n[0] == '-'){
		t = 1;
	}
	for(int i = 0+t ; i < size1 ; i++){
		sum += (n[i] - '0');
	}
	
	if(sum%3 == 0){
		cout <<"Yes" <<endl;
	}else{
		cout << "No" << endl;
	}
	if(sum%3==0 && (n[size1-1]-'0')%2 == 0){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	if(sum%9==0){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
