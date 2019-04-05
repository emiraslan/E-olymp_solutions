#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

struct Bilet{
	int gun;
	int qiymet;
};

struct cmp{
	bool operator()(Bilet nod1, Bilet nod2){
		if (nod1.gun == nod2.gun){
			return nod1.qiymet < nod2.qiymet;
		}
		return nod1.gun < nod2.gun;
	}
}myobject;

int say;
int max1;
void gunKecdi(vector<Bilet> &temp){
	for (int i = 0; i < temp.size(); i++){
		temp[i].gun--;
		if (temp[i].gun == 0){
			temp.erase(temp.begin() + i);
			i--;
		}
	}
}

void display(vector<Bilet> arr){
	cout << endl;
	for (int i = 0; i < arr.size(); i++){
		cout << arr[i].gun << "  " << arr[i].qiymet << endl;
	}

}

int rekursiya(vector<Bilet> arr, int sum){
	if (arr.empty()){
		max1 = (max1 < sum) ? sum : max1;
		return 0;
	}

	int temp_sum = sum;
	vector<Bilet> temp;
	temp = arr;
	for (int i = 0; i < arr.size(); i++){
		sum = temp_sum;
		temp = arr;
		sum += temp[i].gun * temp[i].qiymet;
		temp.erase(temp.begin() + i);
		gunKecdi(temp);
		//n  = arr.size();
		//display(temp);
		//cout << "Sum : " << sum << endl;
		//cout << endl;
		rekursiya(temp, sum);
		//cout << "NEXT !!!!" << endl;

			//temp = vector<Bilet>();
	}
	return 0;
}

int main(){
	int n; int temp_gun, temp_qiymet;
	max1 = 0;
	cin >> n;
	vector<Bilet> arr(n);
	int sum = 0;
	for (int i = 0; i < n; i++){
		cin >> temp_gun >> temp_qiymet;
		arr[i].gun = temp_gun;
		arr[i].qiymet = temp_qiymet;
	}
//	sort(arr.begin(), arr.end(), myobject);
	rekursiya(arr, sum);
	cout << max1 << endl;
	system("pause");
}
