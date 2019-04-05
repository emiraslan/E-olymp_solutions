#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool myfunction (int i, int j) {
  return (i==j);
}

struct Com{
	bool operator()(int a, int b){
		return (a>b);
	}
}myobject;

int main(){
	int n;
	vector<int> po;
	cin >> n;
	po.resize(n);
	for(int i =0 ; i < n ; i++){
		cin >> po[i] ; 
	}
	
	sort(po.begin(), po.end(),myobject);
	//for(int i =0 ; i < n ; i++){
	//	cout << po[i] << endl ; 
	//}
	vector<int>::iterator it = unique(po.begin(), po.end() ,myfunction);
	po.resize(distance(po.begin() , it));
	
	cout << po[1] << endl;
	system("pause");
	
	
	
}
