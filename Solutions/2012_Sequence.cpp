#include <iostream>
using namespace std;


int main()
{
	int n , temp , tmp , pointer = 1, max=1; 
	cin >> n;
	
	int arr[n];
	cin >> temp;
	arr[0] = pointer;
	for(int i = 1; i < n ; i++)
	{
		cin >> tmp;
		if(tmp == temp+1){
			pointer++;
			arr[i] = pointer; 
			temp = tmp;
		}else{
			pointer = 1;
			arr[i] = pointer;
			temp = tmp; 
		}
		if(arr[i] > max){
			max = arr[i];
		}
		//cout << "arr["<< i <<"] : " << arr[i]  <<  " ";
	}
	
	cout << max << endl;
	system("pause");
	
}
