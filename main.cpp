#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;

	public :
	Point(int a, int b) : x(a), y(b) { }
	void setX(int x){ this->x = x; }
	void setY(int y){ this->y = y; }
	void print()
	{
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
	}
};

int main()
{
	Point metal(10,20);
	metal.print();	
	
	cout << endl;
  	return 0;
}
