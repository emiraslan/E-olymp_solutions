#include <iostream>
#include <queue>
using namespace std;

class cmp{
	public:
		bool operator()(int a, int b){
			return a>b;
		}

};

#define foreach(i , n) for(int i = 0 ; i < (n) ; i++) 
typedef priority_queue<int , vector<int> , cmp> PQ;

int main(){
	int a;
	cin >> a;
	int q;
	PQ Q;
	int i = 0;
	foreach( i , a){
		cin >> q;
		Q.push(q);
	}
	
	foreach(i , a){
		cout << Q.top() << " ";
		Q.pop();
	}
	//system("pause");
}
