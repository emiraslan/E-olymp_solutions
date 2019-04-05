#include <iostream>

using namespace std;

int main(){
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	int s = 0; 
	char q[256];
	char foo;
	while(cin >> foo){
		if(foo != ' '){
			q[s] = foo;
			s++;
		}
	}
	bool flag = true;

	
	for(int  i= 0 ; i < s ; i++){
		if(q[i] != q[s-i-1]){
			flag = false;
			break;
		}
	}
	
	if(flag){
		cout << "YES"<<endl;
	}else{
		cout << "NO" << endl;
	}
}
