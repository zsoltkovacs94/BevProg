#include "../std_lib_facilities.h"

unique_ptr<vector<int>> make_vec(){
	unique_ptr<vector<int>> p {new vector<int>};
	int i;
	while(cin >> i){
		if(i==0) throw exception();
		p->push_back(i);
	}
	return p;
}

int main(){
	//vector<int>* q = make_vec();
	//unique_ptr<vector<int>> p {make_vec()};
	make_vec();
	return 0;
}
