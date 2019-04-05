#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector< vector<char> > Brd;
	int x;
	int y;
	int a , b;
	cin >> a >> b;
	Brd.resize(a+3 , vector<char>(b+3,'0'));
	int n;
	cin >> n;
	
	for(int i = 1; i <= n ; i ++){
		cin >> x;
		cin >> y;
		Brd[x][y] = '*';
		if (Brd[x][y+1] != '*' ) Brd[x][y+1]++;
		if (Brd[x][y-1] != '*' ) Brd[x][y-1]++;
		if (Brd[x-1][y] != '*' ) Brd[x-1][y]++;
		if (Brd[x+1][y] != '*' ) Brd[x+1][y]++;
		if (Brd[x+1][y+1] != '*' ) Brd[x+1][y+1]++;
		if (Brd[x-1][y-1] != '*' ) Brd[x-1][y-1]++;
		if (Brd[x+1][y-1] != '*' ) Brd[x+1][y-1]++;
		if (Brd[x-1][y+1] != '*' ) Brd[x-1][y+1]++;
	}
	
	for(int i = 1 ; i <= a; i++){
		for(int j = 1 ; j <= b; j++ ){
			cout  << Brd[i][j] << " " ;
		}
		cout << endl;
	}
	
	system("pause");
}
