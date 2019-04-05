#include <iostream>

using namespace std;

int main(){
int arr[] = {6 , 2 , 5 , 5 , 4 , 5  ,6 , 3  ,7 , 7 };
int a;
cin >> a;
int sum=0 ;
for(int i = 0 ; i < 2 ; i++){
for(int j = 0 ; j < 10; j++){
	if(i == 1 && j == 3){
		goto Kivi;
	}
for(int k = 0 ; k < 6; k++){
for(int q = 0 ; q < 10; q++){
sum = 0;
sum += arr[i]+arr[j]+arr[k]+arr[q];
//cout <<i<<j<<":"<<k<<q<< endl;system("pause");
if(sum == a){cout <<i<<j<<":"<<k<<q<< endl;return 0; }
} 
} 
}
} 
Kivi:
	
cout << "Impossible" << endl;

}
