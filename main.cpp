#include <iostream>

using namespace std;

class Calc {
public:
	virtual void Div();
};


void Calc :: Div() {
	float a, b, div;
	cout << "두 숫자를 입력하십시오" << endl;
	cin >> a;
	if (!cin) {
		cout << "숫자만 입력해!" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}
	cin >> b;
	if (!cin) {
		cout << "숫자만 입력해!" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}
	if (b == 0) {
		cout << "잘못 입력하셨습니다" << endl;
	}
	else
		div = a / b;

	cout << float(a / b) << endl;

}

int main() {
	Calc calc;
	calc.Div();

	return 0;
}

