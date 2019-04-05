#include <iostream>
#include <vector>
using namespace std;

int main(){
	string a;
	vector<int> index;
	int count =0 ;
	cin >> a;
	int n = a.size();
	for(int i = 0 ; i < n; i ++){
		if(a[i] == 'f'){
			count ++;
			index.push_back(i);
		}
	}
	
	if(count == 1){
		cout << index[0] << endl;
	}else if(count >= 2){
		cout << index[0] << " " << index[count-1]<< endl;
	}else{
		return 0;
	}
	return 0;
}
