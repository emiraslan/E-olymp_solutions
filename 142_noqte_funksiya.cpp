#include <iostream>

using  namespace std;

int main(){
	

	double x[3] , y[3] ;
	
	for(int i = 0 ; i < 3; i ++){
		cin >> x[i] >> y[i];
	}
	if(x[1] == x[2]){
		if(max(y[1], y[2]) >= y[0] && min(y[1] , y[2]) <= y[0] ){
			cout << "1" << endl;
		}else{
			cout << "0" << endl;
		}
		return 0;
	}
	double k = (y[1] - y[2])/(x[1] - x[2]);
	
	double b = y[1] - x[1]*k;
	
	if((x[0]*k + b == y[0]) && max(x[1],x[2])>=x[0]  && min(x[1],x[2])<=x[0] && max(y[1],y[2])>=y[0]  && min(y[1],y[2])<=y[0]){
		cout << "1" << endl;
	}else{
		cout << "0" << endl;
	}
	
}
