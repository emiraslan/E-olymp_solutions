#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <utility>
using namespace std;


int main()
{
	set<string> setarr;
	string temp;
	int q;
	cin >> q;
	while(q--){
		cin >> temp;
		setarr.insert(temp);	
	}
	
	cout << setarr.size() << endl;
}
