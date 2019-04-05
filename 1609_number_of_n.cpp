#include <iostream>
using namespace std;

int main(){
	string a;
	char temp;
	cin>>a;
	cin >> temp;
	int size1 = a.size(), count = 0;
	for(int i = 0 ; i < size1; i++){
		if(temp == a[i]){
			count++;
		}
	} 
	cout << count << endl;
}
