#include<iostream>

using namespace std;

int main(){
	long long int a, max, count = 1;
	
	cin >> a;
	
	if(a==0){
		cout << 0 << endl;
		return 0;
	}
	
	max = a;
	
	while(cin >> a ){
		if(a==0)break;
		if(a > max){
			max = a;
			count = 1;
		}else if(a == max){
			count++;
		}
	}
	
	cout << count << endl;
	system("pause");
}
