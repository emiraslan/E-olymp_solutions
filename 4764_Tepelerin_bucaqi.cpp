#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n] ;
	for(int i = 0 ; i < n ; i ++){
		int temp = 0 , count= 0;
		for(int j = 0 ; j < n ; j ++){
			cin >> temp;
			if(temp == 1)count ++;
		}
		cout << count << endl;
	}
	
	
	system("pause");
	return 0;
}
