#include <iostream>

using namespace std;

typedef long long int lli;

int main(){
	lli n;
	cin >> n;
	lli *a = new lli[n+1];
	bool isHeap = true;
	for(int i = 1; i < n+1 ; i ++){
		cin >> a[i]; 
	}
	
	for(int i = 1 ; i < n+1 ; i++){
	//	cout << isHeap << endl;
		if(2*i <= n){
		    if(a[i] <= a[2*i]){
				isHeap = true;
			}else{
				isHeap = false;
				break;
			}
		}
		if(2*i+1 <= n){
			if(a[i] <= a[2*i + 1]){
				isHeap = true;
			}else{
				isHeap = false;
				break;
			}
		}
	}
	
	if(isHeap){
		cout << "YES"<< endl;
	}else{
		cout << "NO"<< endl;
	}
	
	
	system("pause");
	
}
