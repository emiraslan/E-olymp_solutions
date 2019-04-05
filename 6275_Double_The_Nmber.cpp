#include <iostream>

using namespace std;

int main(){
	string a;
	
	cin >> a;
	if(a[0] != '-')
	for(int i = 0 ; i < a.size() ; i++){
		cout << a[i] << a[i];
	}
	else{
		cout << a[0] ;
		for(int i = 1 ; i < a.size() ; i++){
			cout << a[i] << a[i];
		}
	}
	cout << endl;
}
