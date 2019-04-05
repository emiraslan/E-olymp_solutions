#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Cadir{
	int adam;
	int ceki;
};

struct cmp{
	bool operator()(Cadir a, Cadir b){
		if(a.ceki == b.ceki){
			return (a.adam<b.adam);
		}
		return (a.ceki<b.ceki);
	}
}myobject;

int main(){
	int k , w;
	vector<Cadir> arr(3);
	bool flag = false;
	cin >> k >> w;
	
	for(int i = 0 ; i < 3 ; i++){
		Cadir cadir;
		cin >> cadir.ceki;
		cin >> cadir.adam;
		arr[i] = cadir;
	}
	sort(arr.begin(), arr.end(),myobject);
	
	for(int i= 0; i < 3 ; i++){
		if(arr[i].adam >= k && arr[i].ceki <= w) {
			flag = true;
			goto TROL;
		}
		
		if( i!=0 && (arr[i].adam+arr[i-1].adam >= k) && (arr[i].ceki+arr[i-1].ceki <= w)){
			flag = true;
			goto TROL;
		}
		
		if( i!=0 && i!=1 && (arr[i].adam+arr[i-1].adam + arr[i-2].adam >= k) && (arr[i].ceki + arr[i-1].ceki + arr[i-2].ceki <= w)){
			flag  = true;
			goto TROL;
		}
	}
	/*for(int i = 0 ; i < 3 ; i++){
		cout << arr[i].ceki << "   ";
		cout << arr[i].adam << endl;
	}*/
	TROL:
	if(flag)cout << "YES" << endl;
	else cout << "NO" << endl;
}
