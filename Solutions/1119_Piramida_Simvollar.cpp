#include <stdio.h>
#include <vector>
using namespace std;

int main(){
    int n;
    char c;
    int cavab = 0;
    scanf("%c%d",&c,&n);
    cavab = n*n + ((n)*(n-1))/2;

printf("%d\n", cavab);
	int element = n - 1;
	bool bosluq;
	int count= 0 ;
	for(int i = 0; i < n ; i++){
		bosluq = true;
		count = 0;
		for(int j = 0; j < n ; j++){
			if((i + j) == (n-1)){
				bosluq = false;
				printf("%c", c);
				continue;
			}
			if(bosluq){
				printf(" ");
			}else{
				printf("%c", c);
				count++;
			}
		}
		while(count--){
			printf("%c", c);
		}
		printf("\n");
	}
    

}
