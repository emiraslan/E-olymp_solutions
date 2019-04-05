#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int arr[] = {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0};
	vector<int> arr1;
	int q = 5;
	bool oldu = false;
	int temp;
	bool flag = false;
	bool dortdene = false , ucdene = false;
	bool ikidene = false;
	for(int i = 0 ; i < 5 ; i ++){
		cin >> temp;
		arr[temp-1] ++ ;
		arr1.push_back(temp);
	}
	
	for(int i = 0 ; i < 13 ; i ++){
		if(arr[i] == 4){
			dortdene = true;
		}
		if(arr[i] == 3){
			ucdene = true;
		}
		if(arr[i] == 2){
			ikidene = true;
		}
	}
	
	sort(arr1.begin() , arr1.end());
	vector<int>::iterator it;	
	it = unique(arr1.begin() , arr1.end());
	arr1.resize(distance(arr1.begin() , it ));
	
	
//	for(int i = 0 ; i < arr1.size() ; i++){
//		cout << arr1[i] << " ";
//	}
//	cout << endl;
	
//	cout << "Size of it : "  << arr1.size() << endl;
	
	if(arr1.size() == 1){
		cout << "Impossible" <<endl;
		return 0;
	}
	else if(dortdene){
		cout << "Four of a Kind" <<endl;
		return 0;
	}
	else if(ikidene && ucdene){
		cout << "Full House" <<endl;
		return 0;
	}
	
	if(arr1.size() == 5){
		for(int i = 0 ; i < 4 ; i ++){
			if( (arr1[i]+1) != arr1[i+1]){
				oldu = false;
				goto Hooyt;
			}
		}
		oldu = true;
	}
	Hooyt:
	if(oldu){
		cout << "Straight" <<endl;
		return 0;
	}
	else if(ucdene){
		cout << "Three of a Kind" << endl;
		return 0;
	}
	else if(arr1.size() == 3 && ikidene){
		cout << "Two Pairs" << endl;
		return 0;
	}else if(arr1.size() == 4 || ikidene){
		cout << "One Pair" << endl;
		return 0;
	}else{
		cout << "Nothing" << endl;
		return 0;
	}
	
	system("pause");
	return 0;
}
