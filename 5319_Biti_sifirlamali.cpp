#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

typedef long long int lli;
vector<int> bin1;
int sum1;
int to_Bin(int a){
	if(a > 1)
		bin1.push_back(to_Bin(a/2));
	return a%2;
}

int to_Dec(){
	int sum = 0;
	for(int i = 0 ; i < bin1.size() ; i++){
	
		if(bin1[bin1.size() - i - 1] != 0 ){
			sum += pow(2, i)*bin1[bin1.size() - i - 1]; 
	//		cout << "bin1[bin1.size() - i - 1] : "<< bin1[bin1.size() - i - 1] << endl;
		}
	
	}
	return sum;
}

int main()
{
	int a , b, c , i = 0;
	sum1 = 0;
	int hasil = 1;
	cin >> a >> b;
	
	while(a){
		bin1.push_back(a%2);
		a = a/2;
	}
	
	bin1[b] = 0; 
	
	for(int i = 0 ; i < bin1.size() ; i++){
		sum1 += bin1[i]*hasil;
		hasil *= 2;
	}
	cout << sum1 << endl;
//	cout << to_Dec() << endl;
}
