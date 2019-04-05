#include <iostream>

using  namespace std;

int main(){
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);
	unsigned long long int temp1,count = 0, prod= 1;
	char q[1000];
	char temp;
	while(cin >> temp){
		temp1 = temp - '0';
		if(temp1 % 2 == 0 && (temp1 >= 0 && temp1 <= 9)){
			count++;
			prod*= temp1;
		}
	}
	
	if(count!=0){
		cout << prod << endl;
	}else{
		cout << "-1" << endl;
	}
	return 0;
}
