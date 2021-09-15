#include "../std_lib_facilities.h"

int main(){
	string first_name;
	string friend_name;
	char friend_sex = 0;
	int age;
	//cout << "Enter your first name\n";
	//cin >> first_name;
	//cout << "Hello " << first_name << "\n";
	cout << "Enter the name of the person you want to write to\n";
	cin >> first_name;
	cout << "Dear " << first_name << ",\n";
	cout << " How are you? I am fine. I miss you.\n";
	cout << "Enter the name of another friend\n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " recently?\n";
	cout << "Is your friend a male(m) or a female(f)?\n";
	cin >> friend_sex;
	if(friend_sex == 'm'){
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	if(friend_sex == 'f'){
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}
	cout << "Enter the age of your friend\n";
	cin >> age;
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if(age <=0 || age >= 110){
		simple_error("you're kidding!");
	}
	if(age < 12){
		cout << "Next year you will be " << age+1 << ".\n";
	}
	else if(age == 17){
		cout << "Next year you will be able to vote.\n";
	}
	else if(age > 70){
		cout << "I hope you are enjoying retirement.\n";
	}
	cout << "Yours sincerely\n\n\nZsolt\n";
	return 0;
}
