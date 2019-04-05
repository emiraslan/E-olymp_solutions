#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double A[2][3];
	
	
	for(int i = 0 ; i < 2; i++){
		for(int j = 0; j < 3 ; j++){
			cin >> A[i][j];
		}
	}
	double x2 = (A[0][2] - (A[1][2]/A[1][0])*A[0][0])/(A[0][1] - (A[1][1]/A[1][0])*A[0][0]);
	
	double x1 = (A[0][2] - A[0][1]*x2)/A[0][0];
	cout <<fixed << setprecision(3) <<  x1 << "\n" << x2 << endl; 
	
}
