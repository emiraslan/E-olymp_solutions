#include <iostream>

using namespace std;

int main(){
	long long int a , b , temp, c;
	cin >> a >> b;
	if(a > b)swap(a,b);
	bool flag[2] = {true};
	
	for(int i =0 ; i < 13; i ++){
		if(a%7 == 3 && flag[0]){
			flag[0] = false;
		}else if( flag[0] ){
			a++;
		}
		if(b%7 == 3 && flag[1]){
			flag[1] = false;
		}else if( flag[1] ){
			b--;
		}
	}
	if(b < a || b < 0){
		cout << 0 << endl;
		return 0;
	}
	if( b == a){
		cout << 1 << endl;
		return 0;
	}
//	long long int cavab = b-a;
	//if(cavab)
	cout << ((b-a)/7 + 1) << endl;
	system("pause");	
}
