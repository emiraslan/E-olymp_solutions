#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string a;
	int n;
	
	cin >> n;
	
	
	while(n--)
	{
		{
			cin >> a;
			
			int q = a.size();
			vector<int> divs;
			for(int i = 1 ; i <= q/2 ; i++)
			{
				if(q%i == 0)
				{
					divs.push_back(i);
				}
			}
			divs.push_back(a.size());
			
			for(int i = 0 ; i < divs.size(); i++)
			{
				string strng = a.substr(0 , divs[i]);
				string smth = "";
				if(strng[strng.size()-1] == a[a.size()-1])
				{
					int qismet = a.size()/divs[i];
					while(qismet--)
					{
						smth += strng;
					}
				//	cout << "a : " << a << "    smth : " << smth << "  divs[i] : " <<divs[i] <<endl;
					if(smth == a){
						cout << divs[i] << endl;
						break;
					}
				}	
			}
	
			cout << endl;
		}
		
	}
	
}
