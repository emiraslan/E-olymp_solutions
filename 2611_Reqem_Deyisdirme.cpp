#include <iostream>

using namespace std;

int main(){
	string q;
	char a , b;
	cin >> q >> a >> b;
	int  n = q.size();
	for(int i = 0 ; i < n ; i ++){
		if( q[i] == a){
			q[i] = b;
		}
	}
	
	cout << q << endl;
}
