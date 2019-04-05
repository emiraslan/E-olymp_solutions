#include <iostream>
#include <stack>
using namespace std;

stack<int> number;

int cmp(string a, string b){
    if(a == b) return 0;
    
    if(a.size() == b.size()){
       return (a<b)?2:1; 
                } 
    else if(a.size() < b.size()){
         return 2;
         }else if(a.size() > b.size()){
               return 1; 
        }
}


void subs(string a, string b){
	//cout << cmp(a, b) << endl; 
	
	if(cmp(a, b) == 2){
		string temp = a;
		a= b;
		b= temp;  
	}else if( cmp(a,b) == 0){
		cout << 0 << endl;
		return ;
	}
	int sizea = a.size();
	int sizeb = b.size();
	int temp1 , temp2;
	bool flag = false;
	int carry = 0;
	int ferq = sizea - sizeb;
//	cout << ferq << endl;
//	max_size = (sizeb > sizea) ? sizeb : sizea;
//	min_size = (sizeb < sizea) ? sizeb : sizea;
	for(int i = sizea-1 ; i >= 0 ; i-- ){
		temp1 = a[i] - '0';
		if(i-ferq >= 0)
		temp2 = b[i-ferq] - '0';
		else temp2 = 0;
	//	cout << temp1 << "  " << temp2 << endl;
		temp1 = temp1 - carry;
		carry = 0;
		if(temp1 < temp2){ temp1 = temp1 + 10; carry++; }
		number.push(temp1-temp2);
	}
	
	while(!number.empty()){
		if(number.top() == 0 && flag == false){
			number.pop();
			continue;
		}
		cout << number.top();
		flag = true;
		number.pop();
	}
}

int main(){
	string a, b; 
	cin >> a >> b;
	subs(a , b);

}
