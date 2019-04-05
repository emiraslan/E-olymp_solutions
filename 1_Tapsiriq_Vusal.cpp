#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char q[256];
	
	gets(q);
	
	int size = strlen(q);
	int count = 0;
	
	for(int i = 0; i < size-1 ; i++){
		if(q[i] == 'k' && q[i+1] == 'k'){
			count++;
			q[i+1] = 'a';
		}
	}


	cout << "Cut k-larin sayi : " << count << endl;
	cout << "Emal olunmus metn: \n" ;
	puts(q);
	 	system("pause");
	
}
