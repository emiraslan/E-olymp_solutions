#include <iostream>
#include <math.h>

using namespace std;

typedef unsigned long long int ulli;

int main() { 
ulli sum=0, l=1; 
ulli n,a,i;

cin>>n>>a;

if(a==1)
{
    sum=((1+n)*n)/2;
	cout<<sum<<endl;
}
else{ 
	for( i=1;i<=n;i++){
		l*=a;
		sum+=i*l; 
	}
	cout<<sum<<endl;
}

	system("pause");
}
