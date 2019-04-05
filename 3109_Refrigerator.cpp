#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string a, b;
	
	while(getline(cin , a))
	{
		b = a;
		if(b == "END")
		{
			break;
		}
		bool olar = true;
		sort(a.begin(), a.end());
		for(int i = 0 ; i < a.size()-1 ; i++)
		{
			if(a[i] == a[i+1] && a[i] != ' ')
			{
				olar = false;
				break;
			}
		}
		if(olar){
			cout << b << "\n";
		}
		
	}
	
	
	
	system("pause");
	
}
