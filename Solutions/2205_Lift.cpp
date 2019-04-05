#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;


int main()
{
	double a , m ;
	int n , k;
	cin >> m >> n >> k;
	
	a = (double)(n-1)/(double)k*1.0;
	//cout << a << endl;
	int c = ceil(a);
	//cout << c << endl;
	int f = floor(a);
	//cout << f << endl;
	if(c == f){
		cout << "0\n";
		return 0;
	}
	int hop , hup;
	
	
	if(c*k+1 <= m)
	{
		hop =  ((c*k+1)-n)*100 ;
	//	cout << "he : " << hop  << endl;
	}else{
		hop = 1000000;
	}
	
	hup = (n-(f*k+1))*200;
	if(hop > hup){
		cout << hup << endl;
	}else{
		cout << hop << endl;
	}
	return 0;
}
