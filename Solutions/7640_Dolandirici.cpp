#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string esas;
	vector<string> arr;
	vector<int> index;
	
	int a;
	
	cin >> esas;
	
	for(int i = 0 ; i < 9; i++){
		if(esas[i] == '*'){
			index.push_back(i);
		}
	}
	cin >> a;
	int count = 0;
	string temp;
	for(int i=  0; i  < a ; i++){
		
		cin >> temp;
		string temp1;
		temp1 = temp;
		
		for(int  j = 0 ; j < index.size() ; j++){
			temp[index[j]] = '*';
		}
		
		if(temp == esas){
			count++;
			arr.push_back(temp1);
		}
		
	}
	
	cout << count << endl;
	for(int i = 0; i < arr.size() ; i++){
		cout << arr[i] << endl;
	}
	
	//system("pause");
	
	
	
}
