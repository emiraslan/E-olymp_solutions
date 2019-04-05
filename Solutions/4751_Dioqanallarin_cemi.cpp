#include <iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a;
	int arr[a][a];
	int j;
	int sum = 0;
	int sum2 = 0;
	
	for(int i = 0; i < a ; i++){
		for(int j = 0 ; j < a ; j++){
			cin >> arr[i][j];
			
			if( i == j ){
				sum+=arr[i][j];
			}
			if((i + j) == a-1){
			//	cout << "arr[i][j] " << arr[i][j] << endl;
				sum2+=arr[i][j];
			}
		}
	}
	
	cout << sum << " " << sum2 << endl;
	system("pause");
}
