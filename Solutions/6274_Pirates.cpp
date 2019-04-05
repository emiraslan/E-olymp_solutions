#include <iostream>

using namespace std;

int main(){
	int a;
	int m , n;
	cin >> m >> n;
	
	m  = m - n;
	int pos =0;
	for(int i = 1 ; ; i++){
		if(m <= 0){
			break;
		}
		pos = i;
		m = m - i;
	}
	
	cout << pos << endl;
	
}
