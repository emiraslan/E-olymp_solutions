#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	int n, temp;
	cin >> n;
	int n1 = 101;
	int m = -1;
	while(n--){
		cin >> temp;
		if(temp > m) m =temp;
		if (temp < n1) n1 = temp;
	}
	cout << m - n1 << endl;
	system("pause"); 
}
