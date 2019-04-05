#include <iostream>
#include <math.h>
using namespace std;

double KoordinatArasiMesafe(double x, double y , double a , double b){
	return sqrt((x-a)*(x-a) + (y-b)*(y-b));
}

bool DuzBucaqYoxluyan(double a, double b , double c){
	if( (c*c - (a*a+b*b) < 0.01) && (c*c - (a*a+b*b) > -0.01) ){
		return true;
	}return false;
}

int main(){
	double arr[4][2];
	int count=0;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 2; j++){
			cin >> arr[i][j];
		}
	}
	double teref[4];
	for(int i = 1; i < 4; i++){
		teref[i-1] = KoordinatArasiMesafe( arr[i-1][0] , arr[i-1][1] , arr[i][0] , arr[i][1]);
	}
	teref[3] = KoordinatArasiMesafe( arr[3][0] , arr[3][1] , arr[0][0] , arr[0][1]);
	
	if(DuzBucaqYoxluyan(teref[0], teref[1], KoordinatArasiMesafe( arr[0][0] , arr[0][1] , arr[2][0] , arr[2][1]))){
		count++;
	}
	if(DuzBucaqYoxluyan(teref[1], teref[2], KoordinatArasiMesafe( arr[1][0] , arr[1][1] , arr[3][0] , arr[3][1]))){
		count++;
	}
	if(DuzBucaqYoxluyan(teref[2], teref[3], KoordinatArasiMesafe( arr[2][0] , arr[2][1] , arr[0][0] , arr[0][1]))){
		count++;
	}
	if(DuzBucaqYoxluyan(teref[3], teref[0], KoordinatArasiMesafe( arr[3][0] , arr[3][1] , arr[1][0] , arr[1][1]))){
		count++;
	}
	
	cout << count << endl;
	system("pause");
	
	
	
}
