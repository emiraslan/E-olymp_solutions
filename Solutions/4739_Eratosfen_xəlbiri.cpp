#include <iostream>
#include <math.h>
using namespace std;

int main(){
	unsigned long long int  a , b;
	cin >> a >> b;
	bool flag = true, flag1 = true;
	if(a <= 2){
		cout << 2;
		a = 3;
		flag1 = true;
	} 
	if(a%2 == 0 ){
		a++;
	}
	for(int i = a ; i <= b ; i+=2){
		flag = true;
		for(int j = 3 ; j < sqrt(i)+1 ; j+=2){
			if(i%j == 0){
				flag = false;
				break;
			}
		}	
		if(flag && i == a && flag1!=true){
			flag1 = false;
			cout << i; 
			flag = false;
		}
		if(flag){
			cout << " " << i ;
		}
	}
	
	system("pause");
}
