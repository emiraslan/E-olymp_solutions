#include <iostream>
#include <vector>
using namespace std;

typedef long long int lli;

int main(){
	lli def =1 ,n, koh = 0, teze = 2;
//	vector<lli> arr(1000000,0);
	cin >> n;
	if(n == 0){cout << 1 << endl;return 0;}
	koh = 2;
	for(int i = 1 ; i < n; i++){
		teze = koh + 2*i;
		koh = teze;
	}
	
	cout << teze << endl;
	
}
