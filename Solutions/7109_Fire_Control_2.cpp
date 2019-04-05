#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isInRange(string s, string max)
{
	while(s.size())
	{
		if (s[0] != '0') break;
		s.erase(s.begin());
	}

	if (s.size() != max.size()) return s.size() < max.size();

	return s <= max;
}

int main(){
	char c , temp = 'a';
	string maxInput = "1" + string(60, '0');
	string maxOutput = "1" + string(6,'0');
	string a;
	vector<char> arr;
	int count = -1;
	cin >> a;
	if(!isInRange( a , maxInput)){
		cout <<"-1" << endl;
		return 0;
	}
	
	
	while(count ++ && count < a.size()){
		if(c == temp && temp == '0'){
			cout << "-1" << endl;
			return 0;
		}
		c = a[count];
		arr.push_back(a[count]);
		for(int i = 0 ; i < (a[count]-'0') ; i++){
			//cout << "Say : " <<(c-'0') << endl;
			count++;
			temp = a[count];
			if(c != temp){
				cout << -1 << endl;
				return 0;
			}
		}
	}
	if(!isInRange( a , maxOutput)){
		cout <<"-1" << endl;
		return 0;
	}
	for(int i = 0 ; i < arr.size() ; i ++){
		cout << arr[i];
	}
	cout << endl;
}
