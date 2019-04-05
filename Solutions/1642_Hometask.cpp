#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <map>
using namespace std;

 // Dorduncu 
typedef   long int ulli;

bool sade(ulli a)
{
	if(a%2 == 0 || a%3 == 0 || a == 1)
	{
		return false;
	}
	int j = 1;
	for(int i = 5 ; i <= sqrt(a) ; i+=(2+j*2) )
	{
	//	cout << i << endl;
		if(a%i == 0) return false;
		 j = (j) ? 0 : 1;
	}
	
	return true;
}

int main()
{	
	  long int a;
	cin >> a;
	
	if((!sade(a) || a==1) && a!=4 && a!=2 && a!=3){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
	
	system ("pause");
}
