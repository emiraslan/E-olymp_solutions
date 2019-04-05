#include <iostream>
#include <iomanip>
using namespace std;

main()
{
	float  b, c;
	bool g=true;
	int a;
	cin>> a;
	float arr[a];
	for (int  i=0; i<a;i++)
	{
		cin >> arr[i];
		if(arr[i]<=2.5)
		{
			cout << i+1<<" ";
			cout << fixed<<setprecision(2)<<arr[i]<<endl;
			g=false;
			break;
			
		}
	}

	if(g) cout << "Not Found" << endl;
	
}
