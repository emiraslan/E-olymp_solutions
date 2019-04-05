#include <iostream>
using namespace std;

typedef long long int lli;

lli c(lli a){
	return (1+a)*(((a-1)/2)+1)/2;
}

lli f(lli n){
	if(n==0)return 0;
    if(n==1)return 1;
	if(n%2==0){
		return (c(n-1) + f(n/2));
		
	}else{
		return (c(n) + f((n-1)/2));
	}
	
}

int main(){
	lli a;	
	while(cin >> a){
		cout << f(a) << endl; 
	}	
}
