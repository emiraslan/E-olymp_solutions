#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(){
	char q[260];
	int count = 0;
	gets(q);
	int n = strlen(q); 
	for(int i = 0 ; i < n ; i++){
		if((q[i] == '.' && (q[i+1] == ' ' || q[i+1] == '\0') ) || (q[i] == '!' && (q[i+1] == ' ' || q[i+1] == '\0')) || 
		(q[i] == '?' && (q[i+1] == ' ' || q[i+1] == '\0'))|| (q[i] == ';' && (q[i+1] == ' ' || q[i+1] == '\0'))) 
		{
			count++;
		}
	}
	
	cout << count << endl;
}
