#include "../std_lib_facilities.h"

void  suspicious(int s, int x){
	int* p = new int[s];
	int* q = new int[s];
	if(x) p = q;
	delete[] p;
}

int main(){
	suspicious(10,1);
	return 0;
}
