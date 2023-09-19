#include <iostream>

using namespace std;

class Point 
{
	int x, y;
	Point(int a, int b) : x{a}, y{b} {}

public:
	void show(){
	  cout << x << ", " << y << endl;
	}
};

int main(int argc, char const *argv[])
{
	Point p1(1, 2);
	
	return 0;
}

