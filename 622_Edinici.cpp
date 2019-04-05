#include <iostream>

using namespace std;

int count = 0;

void ConvertToBinary(unsigned long long int n)
{
    if (n / 2 != 0) {
        ConvertToBinary(n / 2);
    }
    if (n%2 == 1){
    	count++;
	}
}

int main(){
	unsigned long long int q,a;
	cin >> a;
	ConvertToBinary(a);
	cout << count << endl; 
}
