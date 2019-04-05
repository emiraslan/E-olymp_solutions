#include <iostream>

using namespace std;

int main(){
	string a;
	int n1, n2 , n21;
	cin >> a;
	cin >> n1 >> n2;
	n21 = n2;
	n1--;
	n2= n2-n1;
	char temp;
	string  tmp , tmp1 , tmp2;
	tmp = a.substr( n1 , n2);
	tmp1 = a.substr(0, n1);
	int size1 = tmp.size();
//cout <<"Deysmeden evvel : "<< tmp << endl;
	for(int i=0 ; i < size1/2 ; i++){
		temp = tmp[i];
		tmp[i] = tmp[size1 - 1 - i];
		tmp[size1 - 1 - i] = temp;
	}
	tmp2 = a.substr(  n21 , a.size()-n21);
	
//	cout << tmp << endl;
///	cout << tmp1 << endl;
//	cout << tmp2 << endl;
//	cout << endl;
	cout << tmp1<< tmp<< tmp2 << "\n";
	system("pause");
	
}
