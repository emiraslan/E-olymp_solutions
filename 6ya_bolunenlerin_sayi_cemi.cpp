#include <iostream>

using namespace std;

main() {
	int a,sum=0,say=0;
	cin >> a;
	int arr[a];
	for (int i = 0 ; i < a; i++)
	{
		cin >> arr[i];
		if (arr[i]%6==0 && arr[i]>0){
			sum=sum+arr[i];
			say++;
		}
	}
	cout <<say<< " "<< sum << endl;
	
}
