#include <iostream>
#include <math.h>
#include <bitset>
using namespace std;

int main()
{
	int a = 10 , k  , n ;
	cin >> n >> k ;
	string binary = bitset<32>(n).to_string();
	
	for(int i = binary.size()- k ; i < binary.size() ; i++)
	{
	//	cout  << "JDAKDFOHSDAFH" << endl;
		if(binary[i] == '1')
		{
			binary[i] = '0';
		}
	}
	unsigned long long int sum = 0;
	bool bir_tapildi = false;
	int count;
//	cout << binary << endl;
	for(int i = 0 ; i < binary.size() ; i ++)
	{
		if(binary[i] == '1' && !bir_tapildi)
		{
			bir_tapildi = true;
			count = binary.size() - i-1;
		}
		
		if(bir_tapildi)
		{
			sum += ( pow( 2 , count )*( binary[i] - '0' ) );
			count --;
		}
	}
	cout << sum ;
	cout << endl;
//	cout << binary << endl;
	
	system("pause");
}
