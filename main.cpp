#include <iostream>

using namespace std;

class Calc {
public:
	virtual void Div();
};


void Calc :: Div() {
	float a, b, div;
	cout << "�� ���ڸ� �Է��Ͻʽÿ�" << endl;
	cin >> a;
	if (!cin) {
		cout << "���ڸ� �Է���!" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}
	cin >> b;
	if (!cin) {
		cout << "���ڸ� �Է���!" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}
	if (b == 0) {
		cout << "�߸� �Է��ϼ̽��ϴ�" << endl;
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

