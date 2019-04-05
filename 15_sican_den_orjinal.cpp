#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

#define MAX 1001
int arr[MAX][MAX];
char traj[2*MAX];

int max1(int a, int b){
	return a > b ? a : b;
}

int main(){
	int a, b ,c ,d;
	cin >> a >> b;
	
	memset(arr, -1 , sizeof(arr));
	for(int i = 1 ; i <= a ; i++){
		for(int j = 1 ; j <= b ; j++){
			cin >> arr[a - i+1][j];	
		}
	}
	
	for(int i = 1 ; i <= a ; i++){
		for(int j = 1 ; j <= b ; j++){
			int temp;
			temp = max1(arr[i-1][j], arr[i][j-1]);
			if ( temp < 0 ) temp = 0;
			arr[i][j] += temp;
		}
	}
	
	int i = a;
	int j = b;
	int ptr = 0; 
	while(i+j > 2){

		if(arr[i-1][j] >= arr[i][j-1]){
			traj[ptr] = 'F';
			i--;
		}
		else if(arr[i-1][j] <= arr[i][j-1]){
			traj[ptr] = 'R';
			j--;
		}
		ptr++;
	}
	while(ptr >= 0){
		ptr--;
		cout << traj[ptr];
		
	}
	cout << endl;
	system("pause");
}
