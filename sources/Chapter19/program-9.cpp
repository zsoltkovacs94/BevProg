#include "../std_lib_facilities.h"

vector<int> make_vec(){
	vector<int> res;
	int i;
	while(cin >> i){
		if(i==0) throw exception();
		res.push_back(i);
	}
	return res;
}

int main(){
	vector<int> r = make_vec();
	return 0;
}
