#include <iostream>
using namespace std;

int main(){
	char c1, c2, c3;
	int a[4];
	cin >> a[0] >> c1 >> a[1] >> c2 >> a[2] >> c2 >> a[3];
	for(int i = 0 ; i < 4 ; i++){
		if(a[i] > 255 || a[i]< 0){
			cout << "0" << endl;
			return 0;
		}
	//	cout << a[i] << endl;
	}
	
	cout << "1" << endl;
}
