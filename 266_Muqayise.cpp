#include <iostream>
using namespace std;

int main(){
	string  a, b;
	
	cin >> a >> b;
	
	if(a.size() > b.size()){
		cout << '>' << endl;
	}else if(a.size() < b.size()){
		cout << '<' << endl;
	}else{
		if(a > b){
			cout << '>' << endl;
		}else if(a<b){
			cout << '<' << endl;
		}else{
			cout << '=' << endl;
		}
	}
	
	system("pause");
	
}
