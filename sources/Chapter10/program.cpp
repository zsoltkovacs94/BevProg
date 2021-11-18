#include "../std_lib_facilities.h"

class Point{
	public:
	void set_x(double x1){ x = x1;}
	void set_y(double y1){ y = y1;}
	double get_x(){ return x;}
	double get_y(){ return y;}
	Point(double x1, double y1){
		set_x(x1);
		set_y(y1);
	};
	Point(){
		set_x(0);
		set_y(0);
	};
	private:
	double x;
	double y;
};
istream& operator>>(istream& is, Point& point){
    double x,y;
    char c1,c2,c3;
    is >> c1 >> x >> c2 >> y >> c3;
    if (is && c1 == '(' && c2 == ',' && c3 == ')')
        point = Point(x, y); 
    return is;
}
ostream& operator<<(ostream& os, Point& point){
	return os << '(' << point.get_x() << ',' << point.get_y() << ')';
}

int main(){
	cout << "Please enter input file name: ";
	string iname;
	cin >> iname;
	ifstream ist {iname};
	if (!ist) error("can't open input file ",iname);
	vector<Point> original_points;
	for (Point p; ist >> p; )
		original_points.push_back(p);
	for (int i = 0; i < original_points.size(); i++)
	{
		cout << original_points[i] << ' ';
	}
	cout << '\n';
	ist.close();
	
	ofstream ost {"mydata.txt"};
	if (!ost) error("can't open output file ","mydata.txt");
	for (int i = 0; i < original_points.size(); i++)
	{
		ost << original_points[i] << '\n';
	}
	ost.close();
	ist.open("mydata.txt",ios_base::in);
	if (!ist) error("can't open output file ","mydata.txt");
	vector<Point> processed_points;
	for (Point p; ist >> p; )
		processed_points.push_back(p);
	if(original_points.size()!=processed_points.size()){
		cout << "Something's wrong! \n";
		return 0;
	}
	for (int i = 0; i < processed_points.size(); i++)
	{
		if(original_points[i].get_x() != original_points[i].get_x() || original_points[i].get_y() != original_points[i].get_y()){
			cout << "Something's wrong! \n";
			return 0;	
		}
	}
	
	return 0;
}
