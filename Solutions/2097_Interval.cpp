#include <iostream>
#include <sstream>
using namespace std;

bool check(int a){
	bool flag;
	stringstream ss;
	ss << a;
	string q = ss.str();

	if(q[0] == q[1] || q[1]==q[2] || q[0]==q[2]){
		return false;
	}
	return true;
}

int main(){
	int a , b;
	
	cin >> a >> b;
	
	for(int i = a; i <= b; i++){
		if ( check(i) ){
			cout << i << endl;	
		} 
		
	}
	system("pause");
}

