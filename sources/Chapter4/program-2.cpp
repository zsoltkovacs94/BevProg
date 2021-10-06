#include "../std_lib_facilities.h"

int main(){
	const double cmtom = 0.01;
	const double intocm = 2.54;
	const double fttoin = 12;
	
	double num,sm,lg;
	double sum = 0;
	string unit;
	
	vector<double> szamok;
	bool first = true;
	
	/*
	cin >> num;
	sm=num;
	lg=num;
	*/
	
	while(cin >> num >> unit){
		if(unit == "cm") num *= cmtom;
		else if(unit == "ft") num *= fttoin * intocm * cmtom;
		else if(unit == "in") num *= intocm * cmtom;
		else if(unit == "m");
		else{
			 cout << "illegal input\n";
			 continue;
		}
		
		if(first){
			lg=num;
			sm=num;
			first=!first;
		}
		if(num > lg) lg = num;
		else if(num < sm) sm = num;
		sum+=num;
		
		szamok.push_back(num);
		
		/*
		cout << num;
		
		if(num<sm){
			cout << " the smallest so far\n";
			sm=num;
		}
		else if(num>lg){
			cout << " the largest so far\n";
			lg=num;
		}
		else cout << "\n";
		*/
	}
	sort(szamok);
	cout << "Sorted values in meters\n";
	for(int i = 0; i < szamok.size(); ++i){
		cout << szamok[i] << "\n";
	}
}
