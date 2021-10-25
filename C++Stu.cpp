#include <iostream>

using namespace std;

int abc(int a, int b, int c);

int main()
{
	cout << "Hello World!\n";
	cout << abc(1, 2, 4);
}

int abc(int a, int b, int c) {
	return a + b * c;
}

float abc(float a, float b, float c) {
	return a + b * c;
}

template<class T>
T abc(T a, T b, T c) {
	return a + b * c;
}