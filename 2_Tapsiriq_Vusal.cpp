#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
using namespace std;

struct Isci{
	int Kod = 17;
	string Tabel_Nomresi;
	string Iscinin_Adi;
	string Anadan_Oldugu_Il;
	int Is_Staji;
	int Emek_Haqqi;
	
	Isci(string Tabel_Nomresi1 , string Iscinin_Adi1, string Anadan_Oldugu_Il1, int Is_Staji1, int Emek_Haqqi1 ){
		static int counter = 0;
		counter++;
		Kod += counter;
		Tabel_Nomresi =Tabel_Nomresi1;
		Iscinin_Adi =Iscinin_Adi1;
		Anadan_Oldugu_Il = Anadan_Oldugu_Il1;
		Is_Staji = Is_Staji1;
		Emek_Haqqi = Emek_Haqqi1;
	}
};

string ConvertStruct(Isci &a){
	stringstream ss, s1, s2;
	ss << a.Kod;
	s1 << a.Is_Staji;
	s2 << a.Emek_Haqqi;
	string result = ss.str() + "  " + a.Tabel_Nomresi + "  " + a.Iscinin_Adi + "  " + a.Anadan_Oldugu_Il + "  " + s1.str() +"  "+ s2.str() + "\n";
	return result;
}

int main(){
	int a;
	
	cout << "Yaradilacaq Fayllarin Sayini Daxil Edin : ";
	cin >> a;
	string Tabel_Nomresi;
	string Iscinin_Adi;
	string Anadan_Oldugu_Il;
	int Is_Staji;
	int Emek_Haqqi;
	ostringstream sfname1;
	sfname1 << setw(3) << "Table.txt";
	ofstream fout1(sfname1.str().c_str(), ios::out);
	for(int j = 0; j < a ; j++ )
	{
		ostringstream sfname;
		cout << "Iscinin Tabel Nomresini Daxil Edin : ";
		cin >> Tabel_Nomresi;
		cout << "Iscinin Adini Daxil Edin : ";
		cin >> Iscinin_Adi;
		cout << "Iscinin Anadan Oldugu Ili Daxil Edin : ";
		cin >> Anadan_Oldugu_Il;
		cout << "Iscinin Is Stajini Daxil Edin : ";
		cin >> Is_Staji;
		cout << "Iscinin Emek Haqqini Daxil Edin : ";
		cin >> Emek_Haqqi;
		cout << endl << endl;
		Isci *Temp = new Isci(Tabel_Nomresi, Iscinin_Adi, Anadan_Oldugu_Il, Is_Staji, Emek_Haqqi);
		sfname << setw(3) << "FaylNomre_" << j+1 << ".txt"; 
		ofstream fout(sfname.str().c_str(), ios::out);
		fout << ConvertStruct(*Temp);
		fout1 << ConvertStruct(*Temp);
		delete Temp;
		fout.close();
	}
	fout1.close();
	
	
}
