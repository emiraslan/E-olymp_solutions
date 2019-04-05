#include <iostream>
#include <math.h>
using namespace std;

 int GCD(unsigned long long int a,unsigned long long int b){
	long long int temp;
	
	while(a != 0){
		temp = a;
		a=b%a;
		b = temp;
	}
	return b ;
}

void ixtisar(long long int &a , long long int &b){
	long long int temp;
	if(a == 0 && b == 0){
		a = 1; b = 1;
	//	cout << 1 << " " << 1 << endl;
		return ;
	}
	if(  b==0 ){
		a = 1;
	//	cout << 1 << " " << b << endl;
		return ;
	}
	if(a == 0){
		b = 1;
	//	cout << a << " " << 1 << endl;
		return ;
	}


	temp = GCD((a<0)? a*-1 : a , (b<0)? b*-1 : b );
	
	a= a/temp ; b = b/temp;
}

int main(){
	long long int a, b,c,d;
    
    cin >> a >> b >> c >> d;
    ixtisar(a, b);
    ixtisar(c, d);
    
    long long int ebob = GCD(b, d);
   // cout << "GCd : " << ebob << endl;
    
    long long int ekob = (b*d)/ebob;
    long long int cavab = a*(ekob/b) + c*(ekob/d);
   // cout <<"Ekob: " << ekob << endl;
   // cout <<"Cavab: " <<  cavab << endl;
   ///////////////////
   /*if(cavab == 0){
            cout << 0 << "  " <<  1 << endl;
            return 0;
            }
    ebob = gcd(cavab , ekob);
   // cout <<"Ebob: " << ebob << endl;
   if(ekob/ebob < 0 && cavab/ebob > 0){
                 cout << -1*cavab/ebob << "  " <<  fabs(ekob/ebob) << endl;
                 return 0;
                }
   else if(ekob/ebob < 0 && cavab/ebob < 0){
        cout << fabs(cavab/ebob) << "  " <<  fabs(ekob/ebob) << endl;
                 return 0;
        }
    */
    a = cavab;
    b = ekob;
    ixtisar(a,b);
    cout << a << " " <<  b << endl;
  //  system("pause"); 
}


