#include <iostream>
#include <math.h>
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
    
    cin >> a1.x >> a1.y;
    cin >> a2.x >> a2.y;
    cin >> a3.x >> a3.y;
    cin >> p.x >> p.y;
    
    double teref[8];
    teref[0] = mesafe(a1, a2);
    teref[1] = mesafe(a2, a3);
    teref[2] = mesafe(a3, a1);
    
    teref[3] = mesafe(p, a1);
    teref[4] = mesafe(p, a2);
    teref[5] = mesafe(p, a3);
    
    double max_teref , max_mesafe;
    a1.x = a1.x - p.x;
    a1.y = a1.y - p.y;
    
    a2.x = a2.x - p.x;
    a2.y = a2.y - p.y;
    
    a3.x = a3.x - p.x;
    a3.y = a3.y - p.y;
    if(teref[3] == 0 || teref[4] == 0 || teref[5] == 0){
    	cout << "In" << endl;
    	return 0;
	}

	double m12 = ((a1.x*a2.x) + (a1.y*a2.y))/(teref[3]*teref[4]);
    double m23 = ((a3.x*a2.x) + (a3.y*a2.y))/(teref[5]*teref[4]);
    double m13 = ((a3.x*a1.x) + (a3.y*a1.y))/(teref[5]*teref[3]);
    
	
   // cout << m13 << "  " << m12 <<  "  " << m23 << endl;
    
    max_teref = Max( teref[0] , teref[1] , teref[2]);
    max_mesafe = Max( teref[3] , teref[4] , teref[5]); 
    
 
    if( (m13 < 0 && m12 < 0 && m23 >= 0) || (m13 < 0 && m12 >= 0 && m23 < 0) || teref[3]+teref[4] == teref[0] ||
	 teref[3]+teref[5] == teref[2] || teref[4]+teref[5] == teref[1] || (m13 < 0 && m12 < 0 && m23 < 0) )
    {cout << "In" << endl;}
    else
    {cout << "Out" << endl;} 
    
    }
