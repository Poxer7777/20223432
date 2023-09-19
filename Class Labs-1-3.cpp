#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) : x{x}, y {y} {}
	void show() {
		cout << x << " , " << y << endl;
	}
};

int main(int argc, char const *argv[])
{
	Point p1(10, 20);
	Point points[10];
	p1.show();

	return 0;
}

