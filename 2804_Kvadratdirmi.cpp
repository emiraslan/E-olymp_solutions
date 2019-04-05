#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long long sum = 0 , t = 0;
	string s;
	cin >>s;
	int size1 = s.size();
	if(s[0] == '-')t++;
	for(int i = 0+t ; i < size1 ; i++ ){
		sum += (s[i] - '0');
	}
	double d = sqrt(sum);
	int q = d;
	if(q == d){
		cout <<"Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
