#include "../std_lib_facilities.h"

int main(){
	const double cmtom = 0.01;
	const double intocm = 2.54;
	const double fttoin = 12;
	
	double num,sm,lg;
	double sum = 0;
	string unit;
	
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
		 
		if(sm == null) sm = num;
		else if(lg == null) lg = num;
		else if(num > lg) lg = num;
		else if(num < sm) sm = num;
		sum+=num;
		
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
}
