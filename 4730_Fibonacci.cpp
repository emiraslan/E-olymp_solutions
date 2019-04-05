#include <iostream>

using namespace std;

unsigned long long int fibonacci(int a){
	unsigned long long int fib[100];
	
	fib[0] =1 ;
	fib[1] = 1;
	for(int i = 2 ; i <=a ; i ++ ){
		fib[i] = fib[i-1] + fib[i-2];
	}
	
	return fib[a];
}

int main(){
	int a;
	cin >> a;
	
	cout << fibonacci(a) << endl;
	
	system("pause"); 
}
