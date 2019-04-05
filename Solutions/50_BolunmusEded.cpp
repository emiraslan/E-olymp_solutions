#include<iostream>
#include <sstream>
#include <math.h>
using namespace std;

typedef long long int lli;

lli k , d;

lli quick_fact(lli a){
	lli hasil = a;
	while(--a){
		hasil *= a;
	}
	return hasil;
}

void display_arr(lli *arr){
	for(int i = 0; i < d ; i++){
		cout << arr[i] << "  ";
	}
	cout << endl;
}

lli yerdeyisme(lli *a){
	int temp;
	display_arr(a);
	for(int i = 0 ; i < d - 1 ; i++){
		for(int j = i+1 ; j < d ; j++){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			display_arr(a);
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		cout <<" bitdi" << endl;
	}
}

int reqem_sayi(lli a){
	stringstream ss;
	ss << a;
	string str = ss.str();
	return str.size();
}

int main(){
	int size;
	
	cin >> k >> d;
	lli *arr = new lli[d];		
	
	for(int i = 0 ; i < d; i++){
		cin >> arr[i]; 
	}
	lli temp = 0  , temp1 = 0;
	lli perm = quick_fact(d);
	cout << perm << endl;
	int count = 0;
	int reqem = 0;
	for(int i = 0 ; i < perm ; i++){
		temp = 0;
		temp1 = 0;
		yerdeyisme(arr);
		cout << "Birincinin sonu !!!" << endl;
		for(int j = 0 ; j < d ; j++)
		{
			reqem = reqem_sayi(arr[j]);
			temp *= pow( 10 , reqem );
			temp += arr[j];
			temp = temp%k;
		}
		//cout << temp1 << endl;
		if(temp == 0){
			count ++;
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}
