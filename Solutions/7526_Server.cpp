#include <iostream>

using namespace std;

int main(){
	
	long long int t ,temp , n, sum = 0 ;
	long long int count = 0 ;
	cin >> n;
//	int arr[n];
	cin >> t;
	//cout << " t" << t << "   n: " << n << endl;
	for(int i = 0  ; i  < n ; i ++){
		cin >> temp;
		sum += temp;
		
	//	cout << sum << endl;
		
		if(sum > t){
			break;
		}else{
			count ++;
		}
		
	}
	
	cout << count << endl;
	system("pause");
	
	
	
	
}
