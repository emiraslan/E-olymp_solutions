#include <iostream>

using namespace std;

int main(){
	long long int a  , b;
	
	cin >> a >> b;
	
	if(b == 0){
		cout << "ERROR" << endl;
		return 0;
	}
	
	cout << a/b << endl;
}
