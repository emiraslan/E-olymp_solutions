#include <iostream>
#include <memory.h>
using namespace std;

int main(){
	int a, b, c , d;
	int arr[1001];
	int n;
	cin >> n;
	memset(arr, -1 , sizeof(arr));
	
	cin >> a >> b;
	cin >> c >> d;
	int j = 0;
	
	for(int i = a ; i <= b ; i ++){
		arr[i-1] = b-j;
		j++;
			
	}
	

	for(int i = 0 ; i < n; i ++){
		if(arr[i] == -1){
			arr[i] = i+1;
		}		
	}
	int temp;
	j= 0;
	for(int i = c ; i <= ( d + c )/2; i ++){
		temp = arr[i-1];
		arr[i-1] = arr[d-j-1];
		arr[d-j-1]= temp;
		j++;
	}
	
	for(int i = 0 ; i < n-1; i ++){
		cout << arr[i] << " " ;
	}
	cout << arr[n-1];
	cout << endl;
	
}
