#include <iostream>
using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
  return (!b) ? a : gcd(b,a % b);
}

unsigned long long Cnk(unsigned long long n, unsigned long long k)
{
  unsigned long long _CnkRes = 1, t, i, i1;
  if (k > n - k) k = n - k;
  for(i = 1; i <= k; i++)
  {
    t = gcd(_CnkRes, i);
    _CnkRes = (_CnkRes / t) * ((n - i + 1) / (i / t));
  }
  return _CnkRes;
}

int main(){
	unsigned long long int n ;
	cin >> n;
	unsigned long long int *arr = new unsigned long long int[n];
	for(int i = 0 ; i < n ; i++){
		unsigned long long int a , b, cavab;
		cin >> a >> b;
		
		arr[i] = Cnk(a,b);
	}
	
	for(int j = 0 ; j < n ; j++){
		cout << arr[j] << endl;
	}
	
	
	system("pause");
	return 0;
		
}
