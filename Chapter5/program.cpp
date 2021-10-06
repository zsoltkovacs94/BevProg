#include "../std_lib_facilities.h"

int main(){
	try {
		//cout << "Success!\n"; // 1. Cout -> cout
		//cout << "Success!\n"; // 2. \n; -> \n";
		//cout << "Success" << "!\n"; // 3. !\n" -> "!\n";
		//cout << "Success!" << '\n'; // 4. success -> "Success!"
		//int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; // 5. string -> int
		//vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n"; // 6. v(5) -> v[5] ; != -> ==
		//if (1) cout << "Success!\n"; else cout << "Fail!\n"; // 7. cond -> 1
		//bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n"; // 8. c -> !c
		//string s = "ape"; bool c = "fool" > s; if (c) cout << "Success!\n"; // 9. boo -> bool ; <s -> >s
		//string s = "ape"; if (s!="fool") cout << "Success!\n"; // 10. == -> !=
		//string s = "ape"; if (s!="fool") cout << "Success!\n"; // 11. == -> != ; < -> <<
		//string s = "ape"; if (s<"fool") cout << "Success!\n"; // 12. + -> < ; < -> <<
		//vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n"; // 13. 0 -> i
		//vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; // 14. nincs hiba
		//string s = "Success!\n"; for (int i=0; i<9; ++i) cout << s[i]; // 15. 6 -> 9
		//if (true) cout << "Success!\n"; else cout << "Fail!\n"; // 16. then
		//int x = 2000; int c = x; if (c==2000) cout << "Success!\n"; // 17. char -> int
		//string s = "Success!\n"; for (int i=0; i<9; ++i) cout << s[i]; // 18. 10 -> 9
		//vector<int> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; // 19. vector -> vector<int>
		//int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n"; // 20. ++j -> ++i
		//int x = 2; double d = 5*(x-2); if (d!=2*x+0.5) cout << "Success!\n"; // 21. / -> * ; == -> !=
		//string s = "Success!\n"; for (int i=0; i<9; ++i) cout << s[i]; // 22. string<char> -> string ; <=10 -> <9
		//int i=0; int j=5; while (i<10) ++i; if (j<i) cout << "Success!\n"; // 23. int j =5; ++j -> ++i
		//int x = 4; double d = 5/(x-2); if (d!=2*x+0.5) cout << "Success!\n"; // 24. = -> !=
		cout << "Success!\n"; // 25. cin -> cout
		keep_window_open();
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n'; 
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n"; 
		keep_window_open();
		return 2;
	}
}
