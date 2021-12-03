#include "../std_lib_facilities.h"

vector<int>* make_vec(){
	vector<int>* p = new vector<int>;
	try{
		int i;
		while(cin >> i){
			if(i==0) throw exception();
			p->push_back(i);
		}
	}catch(...){
		delete p;
	}
	return p;
}

int main(){
	//vector<int>* q = make_vec();
	make_vec();
	return 0;
}
