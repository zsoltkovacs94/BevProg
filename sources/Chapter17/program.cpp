#include "../std_lib_facilities.h"

void print_array10(ostream& os, int* a){
	for (int i = 0; i < 10; i++)
			os << a[i] << ' ';
	os << '\n';
}

void print_array(ostream& os, int* a, int n){
	for (int i = 0; i < n; i++)
		os << a[i] << ' ';
	os << '\n';
}

void print_vector(ostream& os, vector<int> v){
	for (int i = 0; i < v.size(); i++)
		os << v[i] << ' ';
	os << '\n';
}

int main(){
	
	//1. Rész
	
	int* a1 = new int[10];
	for (int i = 0; i < 10; i++)
		cout << a1[i];
	cout << '\n';
	delete[] a1;
	
	int* a2 = new int[10];
	for (int i = 0; i < 10; i++)
		a2[i] = 100+i;
	print_array10(cout, a2);
	delete[] a2;
	
	int* a3 = new int[11];
	for (int i = 0; i < 11; i++)
		a3[i] = 100+i;
	for (int i = 0; i < 11; i++)
		cout << a3[i] << ' ';
	cout << '\n';
	delete[] a3;
	
	int* a4 = new int[20];
	for (int i = 0; i < 20; i++)
		a4[i] = 100+i;
	print_array(cout, a4, 20);
	delete[] a4;
	
	vector<int> v1;
	for (int i = 0; i < 10; i++)
		v1.push_back(100+i);
	print_vector(cout, v1);
	
	vector<int> v2;
	for (int i = 0; i < 10; i++)
		v2.push_back(100+i);
	print_vector(cout, v2);
	
	vector<int> v3;
	for (int i = 0; i < 20; i++)
		v3.push_back(100+i);
	print_vector(cout, v3);
	
	//2. Rész
	
	int i1 = 7;
	int* p1 = &i1;
	cout << p1 << ' ' << *p1 << '\n';
	
	int* p2 = new int[7];
	for (int i = 0; i < 7; i++)
		p2[i] = pow(2,i);
	cout << p2 << ' ';
	print_array(cout, p2, 7) ;
	
	int* p3 = p2;
	p2=p1;
	p2=p3;
	cout << "p1= " << p1 << ' ' << *p1 << '\n';
	cout << "p2= " << p2 << ' ' << *p2 << '\n';
	p3=p1;
	delete[] p1;
	delete[] p2;
	
	p1 = new int[10];
	for (int i = 0; i < 10; i++)
		p1[i] = pow(2,i);
	p2 = new int[10];
	for (int i = 0; i < 10; i++)
		p2[i] = p1[i];
	delete[] p1;
	delete[] p2;
	
	vector<int> v4;
	for (int i = 0; i < 10; i++)
		v4.push_back(pow(2,i));
	vector<int> v5;
	for (int i = 0; i < 10; i++)
		v5.push_back(v4[i]);
	print_vector(cout, v4);
	print_vector(cout, v5);
	return 0;
}
