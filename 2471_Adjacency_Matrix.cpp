#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	int arr[a][a];
	
	for(int i = 0 ; i < a; i++){
		for(int j = 0 ; j < a; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i = 0 ; i < a; i++){
		for(int j = i+1 ; j < a; j++){
			if(arr[i][j] != 0){
				cout << i+1 << " " << j+1 << endl;
			}
		}
	}
	
	system("pause");
}
