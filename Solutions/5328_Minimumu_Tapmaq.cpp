#include <iostream>

using namespace std;

int main(){
	int a ,min, b, temp , n;
	cin >>n;
	cin >> temp;
	min = temp;
	for(int i = 0 ; i < n-1;  i++ ){
		
		cin >> temp;
		if(min > temp){
			min = temp;
		}
	}
	
	cout << min << endl;
	system("pause");
}
