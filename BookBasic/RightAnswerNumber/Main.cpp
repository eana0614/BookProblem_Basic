/*
* Level 1 / Easy
* ���� ���߱� (��ǻ�Ϳ��� ������ ������ ���ڸ� ���⶧���� ������ �ʰ� ����)
* Ʋ���� �� ���ں��� ������ ū�� �˷��ְ� ���� Ƚ���� �˷��ش�.
*/

#include <iostream>
#include <ctime>

using namespace std;

int main(void) {

	int count = 1, answer;
	int number;

	cout << "0~100���� ���� ���߱⸦ �����մϴ�." << endl;

	srand(time(NULL));
	number = rand() % 100;

	cout << count << "��° ���� : ";
	cin >> answer;

	while (answer != number) {

		if (answer > number) {
			cout << answer << "���� ���� �� �Դϴ�." << endl << endl;
		}
		else {
			cout << answer << "���� ū �� �Դϴ�." << endl << endl;
		}

		count++;
		cout << count << "��° ���� :";
		cin >> answer;

	}

	cout << "* �����Դϴ�. *" << endl << endl << endl;

	return 0;
}