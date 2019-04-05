#include <iostream>
#include <vector>
using namespace std;

int main(){
	int count=0;
	double oz, n , temp;
	cin >> n;
	vector<double> boy;
	
	for(int i = 0 ; i < n ; i++){
		cin >> temp;
		boy.push_back(temp);
	}
	
	cin >> oz ;
	
	for(int i = 0 ; i < n ; i++){
		if(oz <= boy[i]){
			count++;
		}
	}
	
	
	cout << ++count << endl;
	system("pause");
}
