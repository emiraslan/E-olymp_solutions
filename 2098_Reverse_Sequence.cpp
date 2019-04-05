#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<int> arr;
	int a;
	cin >> a;
	int q;
	for(int i = 0 ; i < a ; i++){
		cin >> q;
		arr.push(q);
	}
	
	for(int i = 0 ; i < a -1; i++){
		cout << arr.top() << " ";
		arr.pop();
	}
	
	cout << arr.top() << endl;
	arr.pop();
	
	system("pause");
}
