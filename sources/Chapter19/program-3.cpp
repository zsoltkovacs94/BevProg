#include "../std_lib_facilities.h"

void  suspicious(int s, int x){
	int* p = new int[s];
	vector<int> v;
	if(x) p[x] = v.at(x);
	delete[] p;
}

int main(){
	suspicious(10,1);
	return 0;
}
