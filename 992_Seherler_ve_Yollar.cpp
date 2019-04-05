#include <iostream>

using namespace std;

int main(){
	long long int a , temp , count = 0;
	
	cin >> a;
	
	for(int i = 0 ; i < a; i++){
		for(int j = 0; j < a; j++){
			cin >> temp;
			if (temp == 1){
				count ++ ;
			}
		}
	}
	
	cout << count/2 << endl;
}
