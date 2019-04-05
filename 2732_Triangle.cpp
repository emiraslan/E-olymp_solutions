#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	double temp;
	int n;
	cin >> n;
	int count = 0;
	while(n--){
		vector<double> arr;
		
		for(int i =0 ; i < 3 ; i++){
			cin >> temp;
			arr.push_back(temp);
		}
		
		count ++;
		if(arr[0] >= arr[1]+ arr[2] || arr[1] >= arr[0] + arr[2] ||
		   arr[2] >= arr[1]+ arr[0] || arr[0] <= fabs(arr[1] - arr[2]) ||
			arr[2] <= fabs(arr[1]- arr[0]) || arr[1] <= fabs(arr[0] - arr[2])
		){
			cout << "Case #" << count << ": " << "invalid!" << endl;
			continue;
		}
		
			//	sort(arr.begin() , arr.end());
      vector<double>::iterator it = unique(arr.begin() , arr.end());
	arr.resize(distance(arr.begin() , it));
				
		if(arr.size() == 1){
			cout << "Case #" << count << ": " <<  "equilateral" << endl;	
		}else if(arr.size() == 2){
			cout << "Case #" << count << ": " <<  "isosceles" << endl;	
		}else{
			cout << "Case #" << count << ": " <<  "scalene" << endl;
		}
	
		
	}
} 
