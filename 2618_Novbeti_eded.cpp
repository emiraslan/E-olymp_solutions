#include <iostream>
using namespace std;

void gonderGetsin(string &a , int size){
		size--;
		if(size == 0){
			if(a[size] == '9'){
				cout << 1;
				a[size] = '0';
				return;
			}else{
				a[size] = a[size] + 1;
				return ;
			}
		}
		if(a[size] == '9'){
			a[size] = '0';
			gonderGetsin(a , size);
			return;
		}else{
			a[size] = a[size] + 1;
			return ;
		}
}

int main(){
	string a;
	cin >> a;
	long int n = a.size();
	gonderGetsin(a , n);
	cout << a << endl;
}
