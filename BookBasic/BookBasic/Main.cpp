/*
* Level 1 / Easy
* 10진수와 16진수 변환 프로그램
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

	cout << "10진수와 16진수 변환 프로그램" << endl;
	cout << "[1] 10진수를 16진수로 , [2] 16진수를 10진수로, [-1] 종료" << endl;

	cin >> num;

	while (num != -1) {
		cout << "변환할 숫자 :";
		cin >> data;

		if (num == 1) {
			cout << "10진수 값 : [" << data << "] >> 16진수 값 = " << ConvertDecToHex(data) << endl << endl;
		}
		else if (num == 2) {
			cout << "16진수 값 : [" << data << "] >> 10진수 값 = " << ConvertHexToDec(data) << endl << endl;
		}
		else {
			cout << "잘못된 값을 입력하셨습니다." << endl;
		}

		cout << "[1] 10진수를 16진수로 , [2] 16진수를 10진수로, [-1] 종료" << endl;
		cin >> num;
	}

	return 0;
}