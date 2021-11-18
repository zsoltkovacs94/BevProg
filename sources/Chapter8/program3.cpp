#include "../std_lib_facilities.h"

namespace X{
	int var;
	void print(){
		cout << "namespace X var = " << var << "\n";
	}
}

namespace Y{
	int var;
	void print(){
		cout << "namespace Y var = " << var << "\n";
	}	
}

namespace Z{
	int var;
	void print(){
		cout << "namespace Z var = " << var << "\n";
	}	
}

int main()
{
	X::var = 7;
	X::print(); // print X’s var
	using namespace Y;
	var = 9;
	print(); // print Y’s var
	{ using Z::var;
	using Z::print;
	var = 11;
	print(); // print Z’s var
	}
	print(); // print Y’s var
	X::print(); // print X’s var
}
