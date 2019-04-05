#include <iostream>
#include <vector>
using namespace std;

int main(){
	int a;
	cin >> a;
	vector<int> req;
	for(int i =100 ; i < 1000 ; i++ ){
		if( (i%10 + (i/10)%10 + (i/100)) == a){
			req.push_back(i);
		}
	}
	cout << req.size() << endl;
	for(int i =0 ; i < req.size() ; i++ ){
		cout << req[i] << endl;
	}
}
