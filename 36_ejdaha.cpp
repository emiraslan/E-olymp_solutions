#include <iostream>
using namespace std;

int main(){
	int bas, quyruq, cut=0;
	int n , m;
	bool flag = false;
	cin >> n >> m;
	if(m == 0 && n%2 != 0){
		cout << "-1" << endl;
		return 0;
	}else if(m==0 && n%2 == 0){
		cout << n/2 << endl;
		return 0;
	}
	int say = 1001; 
	bas = n;
	quyruq = m;
	while(say--){

		if(m%2 != 0){
				m++;
				
				cut++;
		
		}
		else{
			if( m%2 == 0 && (m/2+n)%2 == 0){
				cut +=  m/2 +(m/2 + n)/2;
				flag = true;
				break;
					
			}
			else{
				
				m++;
				
				cut++;
			}
		}
	}
	
	int temp = -1;
	printf("%d\n",(3 < 5)? cut : temp );
	
	system("pause");
}
