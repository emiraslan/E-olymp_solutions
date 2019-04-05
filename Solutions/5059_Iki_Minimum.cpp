#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long int lb;
#define MAX 1000000000

lb min1 = MAX, temp;
lb min2 = MAX;
int a;

double calc(){
	if(a==0){
		return 0;
	}else{
		cin >> temp;
		if(min1 > temp){
			min2 = min1;
			min1 = temp;
		}
		else if(min2 > temp){
			min2 = temp;
		}
		a--;
		return calc();
	}
}

int main(){
	
	cin >> a;
	calc();
	cout << min1 << " " << min2 << endl;
	
	system("pause");
	
}
