#include <iostream>
#include <map>  
using namespace std;

map<char, int> arr;
map<int, string> arr2;

void AdamBalasiReqemlerineCevir(int &ed , string &a){
	if(a.empty())return;
	else if(a.size() != 1 && arr[a[1]] > arr[a[0]] ){
		ed -= arr[a[0]];
	}else{
		ed += arr[a[0]];
	}
	a.erase(0,1);
	return AdamBalasiReqemlerineCevir(ed, a);
}

void RumReqemlerineCevir(int sum){
	int mert =  1;
	int qaliq = 0; 
	string cavab = "";
	while(sum != 0){
		qaliq = sum%10;
		sum = sum/10;
 		if(qaliq > 0 && qaliq < 4){
			for(int i = 0 ; i < qaliq ; i++){
				cavab += arr2[mert];
			}
			}else if(qaliq == 4 || qaliq == 9){
				cavab += arr2[mert*(qaliq+1)];
				cavab += arr2[mert];
			}else if(qaliq > 5 && qaliq < 9){
				for(int i = 0; i < qaliq-5 ; i++){
					cavab += arr2[mert];
				}
				cavab += arr2[5*mert];
			}else{
				cavab+= arr2[qaliq*mert];
			}	
		mert*=10;	
	}
	for(int i = cavab.size()-1 ; i >= 0 ; i--){
		cout << cavab[i];
	}
	cout << endl;
	return;
}


int main(){
	string a, b;
	int ed1 = 0, ed2 = 0;
	arr['I'] = 1;
	arr['V'] = 5;
	arr['X'] = 10;
	arr['L'] = 50;
	arr['C'] = 100;
	arr['D'] = 500;
	arr['M'] = 1000;
	
	arr2[0] = "";
	arr2[1] ="I";
	arr2[5] ="V";
	arr2[10] ="X";
	arr2[50] ="L";
	arr2[100] ="C";
	arr2[500] ="D";
	arr2[1000] ="M";
	
	getline(cin, a, '+');
	getline(cin, b, '\n');
	AdamBalasiReqemlerineCevir(ed1 , a);
	AdamBalasiReqemlerineCevir(ed2 , b);
	ed1 += ed2;
	RumReqemlerineCevir(ed1);
	
	system("pause");
}
