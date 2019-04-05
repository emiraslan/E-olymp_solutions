#include <iostream>
using namespace std;

int main(){
	double S, K, A, B, en, qn, q, N;
	int E_N;
	bool g =false;
	cin >> S >> K >> A >> B ; 
	
			for(int i=1 ; i < 1001; i ++){
				for(int j = 1 ; j < 1001 ; j++){
					N = ((A + B - K*i - S*j - j)*1.0)/i*1.0;
					E_N = N;
					if( N == E_N && E_N>=0 && B == N*i + S*j) {
						g=true;
						break;
					}
				}
				
				if(g) {
					cout << N << endl;
					break;
				}

			
			
			}
				
		
		
	if(g!=true) cout << "-1"<<endl; 
	}
