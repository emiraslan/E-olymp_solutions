#include <iostream>

using namespace std;

int main(){
	long double a = 10 , b =10 , c = 10;
	long int n , counter = 1;
	
	cin >> n;
	 for(int i = 0;; i++){
	 //	cout <<" aslan "  << endl;
	 	
	 	if(b >= n){
	 		cout << counter << endl;
	 		break;
		}
		
		a = a + a*0.1;
		b += a;
		counter++;
	}
	
}
