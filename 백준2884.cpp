#include<iostream>
using namespace std;

int main() {

	int H, M;
	cin >> H >> M;


	int nextH = H;
	int nextM = M - 45;


	if (nextM < 0) {
		nextM += 60;
		nextH--;
		if (nextH <0)
			nextH += 24;
	}
	cout << nextH << " " << nextM << endl;
	return 0;
	
}