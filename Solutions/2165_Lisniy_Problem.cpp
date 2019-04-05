#include <iostream>

using namespace std;

int main(){
	string a, temp;
	int count = 0;
	while(cin >> a){
		count++; 
		if(count==1){
			cout << a;
		}else{
			cout << " " << a; 
		}
	}
	
	cout << endl;
}
