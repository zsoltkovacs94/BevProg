#include "../std_lib_facilities.h"

void swap_v(int a,int b){					//a swap_v nem az eredeti változókkal dolgozik, csak egy másolatukkal, ezért nem cseréli meg az eredeti változók értékeit
	int temp; temp = a, a=b; b=temp;
}

void swap_r(int& a,int& b){
	int temp; temp = a, a=b; b=temp;
}
/*
void swap_cr(const int& a,const int& b){	//read-only reference-nek az értéke nem változtatható, ezért nem compileolható
	//int temp; temp = a, a=b; b=temp;
}
*/
int main(){
	int x = 7;
	int y = 9;
	swap_r(x,y); 							//swap_r megcseréli a két változó értékét
	//swap_r(7,9);							//swap_v esetén nem csinál semmit, mert az átadott értékek csak a swap_v-n belül léteznek
											//swap_r esetén nem compileolható, mert változóra vár referenciát a függvény
	const int cx = 7;
	const int cy = 9;
	//swap_r(cx,cy);						//swap_r nem compileolható, mert konstans változóra akarunk átadni nem konstans referenciát
	//swap_r(7.7,9.9);						//swap_v esetén ismét nem csinál semmit, de a floating-point értékeket a függvényen belül átkonvertálja intre
											//swap_r esetén ismét nem compileolható, mert változóra vár referenciát a függvény
	double dx = 7.7;
	double dy = 9.9;
	//swap_r(dx,dy);						//swap_r nem compileolható, mert int referenciát vár a függvény, mi pedig double referenciát akarunk átadni
	//swap_v(7.7,9.9);						//swap_v esetén ismét nem csinál semmit, de a floating-point értékeket a függvényen belül ismét átkonvertálja intre
											//swap_r esetén ismét nem compileolható, mert itt szintén változóra vár referenciát a függvény
}
