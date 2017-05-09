#include <iostream>
#include <conio.h>

using namespace std;

int function(int a, int b)
{
	return a + b;
}

int main() {
	int a = 2;
	int result = function(a++, a--);

	_getch();
	return 0;

}