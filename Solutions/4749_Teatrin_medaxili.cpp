#include <iostream>

using namespace std;

int main(){
	int a , b;
	long long int sum = 0;
	cin >> a >> b;
	
	int arr[a][b];


	for(int i = 0 ; i < a ; i ++){
		for(int j = 0 ; j < b ; j++){
			cin >> arr[i][j];
	
		}
	
	}

	int temp;
	
	for(int i = 0 ; i < a ; i ++){
		for(int j = 0 ; j < b; j++){
			cin >> temp;
	
			if(temp == 1){
				sum += arr[i][j];
			}
		}

	}

	cout << sum << endl;
	system("pause");
	
}
