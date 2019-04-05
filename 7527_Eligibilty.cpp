#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct student{
	string name;
	int date;
	int birth;
	int course;
};

int main(){
	int n;
	vector<student> group;
	cin >> n;
	group.resize(n);
	string temp;
	
	while(n--){
		cin >> group[n].name;
		cin >> group[n].date;
		cin >>	temp;
		cin >> group[n].birth;
		cin >> temp;
		cin >> group[n].course;
		
		if(group[n].date >= 2010 || group[n].birth >= 1991){
			cout << group[n].name << " " << "eligible" << endl;
		}else if(group[n].course >= 41){
			cout << group[n].name << " " << "ineligible" << endl;
		}else{
			cout << group[n].name << " " << "coach petitions" << endl;
		}
		
		
	}
	
}
