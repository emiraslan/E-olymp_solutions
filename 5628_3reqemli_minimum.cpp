#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector> 
using namespace std;


struct myclass {
  bool operator() (char i,char j) { return (i>j);}
} myobject;

main() {
	///int a[3];
	char temp;
	bool flag = false;
    vector<int> a;
	for(int i = 0 ; i < 3 ; i++){
          cin >>  temp;
          if(temp == '-'){
                  flag = true;
                  i--;
          }
          else{
               	a.push_back(temp - '0');
          }
    }
   
   if(a[1] == 0 && a[2] == 0){
   		if(flag)cout << "-"<<a[0] << a[1] << a[2] <<endl;
		   else cout << a[0] << a[1] << a[2] <<endl;
		   return 0;
   }else if(a[1] == 0){
   		if(a[0] > a[2]){
   			if(flag){
   				cout << "-"<<a[0] << a[2] << a[1] <<endl;
			   }else{
			   	cout << a[2] << a[1] << a[0] <<endl;
			   }
		   }
		else{
			if(flag){
   				cout << "-"<<a[2] << a[0] << a[1] <<endl;
			   }else{
			   	cout << a[0] << a[1] << a[2] <<endl;
			   }
		} 
   }else if(a[2] == 0){
   		if(a[1] > a[0]){
   			if(flag){
   				cout << "-"<<a[1] << a[0] << a[2] <<endl;
			   }else{
			   	cout << a[0] << a[2] << a[1] <<endl;
			   }
		   }
		else{
			if(flag){
   				cout << "-" << a[0] << a[1] << a[2] <<endl;
			   }else{
			   	cout << a[1] << a[2] << a[0] <<endl;
			   }
		} 
   }else{
	   	if(flag){
	            sort (a.begin(), a.begin()+3 , myobject); 
	            cout << '-';
	            }else{
	   
	            sort (a.begin(), a.begin()+3); 
	       }
	       
	  	for (vector<int>::iterator it=a.begin(); it!=a.end(); ++it)
	  		  cout << *it;
	 	 		cout << '\n';
   }

  

	
	system("pause");
}
