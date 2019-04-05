#include <iostream>

using namespace std;

int main(){
	int a , n, count=1;
	
	cin >> a;
	
	if(a == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	
	if(a%10 == 5 || a%10 == 0)
	{
		cout << a/5 << endl;
		return 0;
	}
	
	if(a > 10){
		n = a-10;
		count += n/5;
		while(1){
			if(n%5==0){
				break;
			}
			n++;
		}
		a = a-n;
		if( a == 1 ){
			cout << count + 3 << endl;
		}else if( a == 2 ){
			cout << count + 2 << endl;
		}else if( a == 3 ){
			cout << count + 1 << endl;
		}else if( a == 4 ){
			cout << count + 2 << endl;
		}else if( a == 5){
			cout << count + 1 << endl;
		}else if(a == 6){
			cout << count + 2 << endl;
		}else if( a == 7){
			cout << count + 3 << endl;
		}else if(a == 8){
			cout << count + 2 << endl;
		}else if( a == 9){
			cout << count + 3 << endl;
		}else if(a == 10){
			cout << count + 2 << endl;
		}
		return 0;
		
	}else{
		if( a == 1 ){
			cout << 3 << endl;
		}else if( a == 2 ){
			cout << 2 << endl;
		}else if( a == 3 ){
			cout << 1 << endl;
		}else if( a == 4 ){
			cout << 4 << endl;
		}else if( a == 5){
			cout << 1 << endl;
		}else if(a == 6){
			cout << 2 << endl;
		}else if( a == 7){
			cout << 3 << endl;
		}else if(a == 8){
			cout << 2 << endl;
		}else if( a == 9){
			cout << 3 << endl;
		}else if(a == 10){
			cout << 2 << endl;
		}
		return 0;
	}
} 
