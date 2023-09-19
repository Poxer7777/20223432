#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point() = delete;
	int getX() { return x;}
};

int main(int argc, char const *argv[])
{
	Point p1;
	return 0;
}