/*
* Level 1 / Easy
* 숫자 맞추기 (컴퓨터에서 생성한 임의의 숫자를 맞출때까지 멈추지 않고 실행)
* 틀리면 그 숫자보다 작은지 큰지 알려주고 도전 횟수를 알려준다.
*/

#include <iostream>
#include <ctime>

using namespace std;

int main(void) {

	int count = 1, answer;
	int number;

	cout << "0~100까지 숫자 맞추기를 시작합니다." << endl;

	srand(time(NULL));
	number = rand() % 100;

	cout << count << "번째 도전 : ";
	cin >> answer;

	while (answer != number) {

		if (answer > number) {
			cout << answer << "보다 작은 수 입니다." << endl << endl;
		}
		else {
			cout << answer << "보다 큰 수 입니다." << endl << endl;
		}

		count++;
		cout << count << "번째 도전 :";
		cin >> answer;

	}

	cout << "* 정답입니다. *" << endl << endl << endl;

	return 0;
}