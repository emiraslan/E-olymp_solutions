#include <iostream>

using namespace std;

typedef long long int lli;

int main(){
	string s;
	
	cin >> s;
	
	for(int i = 0; i < s.size(); i++){
		for(int j = 0 ; j < (int)(s[i]-'0'+1) ; j++){
			cout << s[i];
		}
	}
	cout << endl;
	system("pause");
}

