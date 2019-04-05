#include <iostream>

using namespace std;

int main()
{
    int a, b, r=0,k, sum=0;
    cin >> a >> b;
    int arr[b];
    if(a<=0)a=0;
	if(b<=0)b=0;

    while(1){

        cin >> arr[r];
        r++;
        if(r==b) {break;}

    }

    for(int i=0; i < b ; i++){
        sum = sum + arr[i] - 1;
    }

    sum++;

    sum = a - sum;

	if(sum==a) sum = a - 1;
	if(sum<=0)sum=0;
	cout << sum << endl;

    
}
