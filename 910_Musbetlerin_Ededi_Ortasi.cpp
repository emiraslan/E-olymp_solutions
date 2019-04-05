#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a; 
	double temp, sum = 0, count = 0;
	cin >> a;
	double arr[a];
	for(int i = 0; i < a; i++){
		cin >> temp;
		if(temp > 0){
			count ++;
			sum += temp;
		}
	}
	if(count == 0){
		cout << "Not Found" << endl;
	}else{
		cout << fixed << setprecision(2) << sum/count << endl;
	}
	
}
