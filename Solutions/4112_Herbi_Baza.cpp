#include <iostream>
#include <memory.h>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	
	int arr[a+2][b+2];
	char c;
//	cout << "A1" << endl;
	int count = 0;
	
	memset(arr, 0 , sizeof(arr));
	
	for(int i = 1 ; i <= a ; i++){
		for(int j = 1; j <= b; j++){
			cin >> c;
//			cout << "A2" << endl;
			if(c == '.'){
				arr[i][j]=0;
			}else if(c == '#'){
				arr[i][j]=-1;
			}
		}
	}

	for(int i = 1 ; i <= a ; i++){
		for(int j = 1; j <= b; j++){
//			cout << "A3" << endl;
			if(arr[i][j] == -1){	
				if(arr[i-1][j] != 0 && arr[i-1][j] != -1){
					arr[i][j]=arr[i-1][j];
				}
				if(arr[i][j-1] != 0 && arr[i][j-1] != -1){
					arr[i][j]=arr[i][j-1];
				}
				if(arr[i-1][j] == 0 && arr[i][j-1] == 0){
					count ++;
					arr[i][j]=count;	
						
				}
//				cout << "A4" << endl;
				
			}
			//cout << arr[i][j] << "\t";
		}
		//	cout << endl;
	}

cout << count << endl;
system("pause");
}
