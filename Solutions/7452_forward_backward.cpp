#include <iostream>
#include <stack>

using namespace std;

typedef long long int lli;

int main(){
	stack<lli> arr;
	lli n , temp, var;
	cin >> n;
	
	while(n--){
		cin >> temp;
		if(n!=0)
		cout << temp << " ";
		arr.push(temp);
	}
	cout << arr.top() << endl;
	while(!arr.empty()){
		cout << arr.top()<< " ";
		arr.pop();
	}
}
