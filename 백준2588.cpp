#include<iostream>
using namespace std;

int main() {
	int a, b;
	int a1,a2, a3;
	int b1, b2, b3;
	cin >> a >> b;

	a1 = (a % 10);
	a2 = (a % 100)-a1;
	a3 = (a % 1000)-a2-a1;
	b1 = (b% 10);
	b2 = (b % 100)-b1;
	b3 = (b % 1000)-b2-b1;
	cout << (a1*b1) + (a2*b1) + (a3*b1) << endl;
	cout << ((a1*b2) + (a2*b2) + (a3*b2))/10 << endl;
	cout << ((a1*b3) + (a2*b3) + (a3*b3))/100 << endl;
	cout << a * b << endl;
}