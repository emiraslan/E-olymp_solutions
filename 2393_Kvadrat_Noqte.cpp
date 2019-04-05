#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

struct Coord{
       int x ;
       int  y;
       };
       
double mesafe(Coord a , Coord b){
    return sqrt(pow(a.x - b.x , 2) + pow(a.y - b.y, 2));
    }

double Max(double a ,double b){
       return (a>b)?a:b;
       }

double Max(double a ,double b , double c){
       a = (a > b) ? a : b;
       return (a>c) ? a : c;
       }

int main(){
    Coord a1, a2, a3 , p;
    cin >> p.x >> p.y;
    cin >> a1.x >> a1.y;
    cin >> a2.x >> a2.y;

	if( ((max(a1.x , a2.x) >= p.x) && (min(a1.x , a2.x) <= p.x)) 
	 && ((max(a1.y , a2.y) >= p.y) && (min(a1.y , a2.y) <= p.y))
	){
		cout << "1" <<endl;
	}else{
		cout << "0" <<endl;
	}

    system("pause");
}
