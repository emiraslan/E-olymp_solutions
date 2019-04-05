#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;


int main()
{
	long long int a ,b;
	long long int sum;
	while(cin >> a && a!=0){
		sum = 0;
		if(a > 0)
		for(int i = 1 ; i <= a ; i ++){
			sum += i;
		}
		else
		for(int i = a; i <= 1; i++ ){
			sum += i;
		}
		
		cout << sum << "\n";
	}
	
	
	
}
