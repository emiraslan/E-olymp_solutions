#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	long long int  a , sum = 0, qaliq=0;
	
	scanf("%lld", &a);
	a = fabs(a);
	while ( a != 0 ){
		qaliq= a%10;
		sum += qaliq;
		a/=10;

	}
    printf("%lld\n",sum) ;

	
}
