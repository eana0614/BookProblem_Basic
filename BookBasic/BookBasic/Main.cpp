/*
* Level 1 / Easy
* 10������ 16���� ��ȯ ���α׷�
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


string ConvertDecToHex(string input) {

	string  result;
	int mod, dec;
	char c;

	dec = stoi(input);

	while (dec != 0) {

		mod = dec % 16;

		if (mod < 10) {
			result = to_string(mod) + result;
		}
		else {
			c = mod - 10 + 65;
			result = c + result;
		}

		dec = dec / 16;

	}

	return result;

}

int ConvertHexToDec(string input) {

	int result = 0, t, count = 0;
	char c;

	int temp = input.length();
	transform(input.begin(), input.end(), input.begin(), toupper);

	while (count != input.length()) {

		c = input.at(temp - 1);

		if (c >= 'A' && c <= 'F') {
			t = c - 65 + 10;
		}
		else {
			t = c - 48;
		}

		result = result + (t * pow(16, count));

		temp--;
		count++;

	}

	return result;
}
int main(void) {

	int num;
	string data;

	cout << "10������ 16���� ��ȯ ���α׷�" << endl;
	cout << "[1] 10������ 16������ , [2] 16������ 10������, [-1] ����" << endl;

	cin >> num;

	while (num != -1) {
		cout << "��ȯ�� ���� :";
		cin >> data;

		if (num == 1) {
			cout << "10���� �� : [" << data << "] >> 16���� �� = " << ConvertDecToHex(data) << endl << endl;
		}
		else if (num == 2) {
			cout << "16���� �� : [" << data << "] >> 10���� �� = " << ConvertHexToDec(data) << endl << endl;
		}
		else {
			cout << "�߸��� ���� �Է��ϼ̽��ϴ�." << endl;
		}

		cout << "[1] 10������ 16������ , [2] 16������ 10������, [-1] ����" << endl;
		cin >> num;
	}

	return 0;
}