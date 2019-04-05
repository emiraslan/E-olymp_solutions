#include <stdio.h>

using namespace std;

int main(){
	int count1 =0 , count2 = 0;
	int in1 , in2;
	int a;
	scanf("%d", &a);
	
	for(int i = 0 ; i < a; i ++){
		scanf("%d%d",&in1, &in2);
		if(in1>in2){
			count1++;
		}else if(in1 < in2){
			count2++;
		}
	}
	
	if(count1>count2){
				printf("1\n");
		}else if(count1<count2){
				printf("2\n");
		}else{
			printf("0\n");
		}

	//system("pause");
	
}
