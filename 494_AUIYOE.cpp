#include <iostream>
using namespace std;

const char let[] = {'A' , 'E' , 'I' , 'O' , 'U' , 'Y' };

int main(){
	string a;
	
	long int count =0;
	
	while(cin >> a){ 
		int size1 = a.size();
		for(int i = 0 ; i < size1 ; i++){
			for(int j =0 ; j < 6 ; j++){
				if(a[i] == let[j]){
					count++;
				}
			}
		}
	}
	
	cout << count << endl;
}
