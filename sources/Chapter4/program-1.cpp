#include "../std_lib_facilities.h"

int main(){
	//int e,m; // korábbi feladatrész
	double e,m;
	while(cin >> e && cin >> m){
		if((e-m)>-0.01 && (e-m)<0.01) cout << "the numbers are almost equal\n";
		//if(e<m) cout << "the smaller value is: " << e << "\nthe larger value is: " << m << "\n"; // korábbi feladatrész
		else if(e<m) cout << "the smaller value is: " << e << "\nthe larger value is: " << m << "\n";
		else if(e>m) cout << "the smaller value is: " << m << "\nthe larger value is: " << e << "\n";
		//else cout << "the numbers are equal\n"; // korábbi feladatrész
		
	}
}
