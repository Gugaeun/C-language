#include <iostream>
#include <bitset> //2진수 변환 시 필요

using namespace std;


int main() {
    int num[4];     // 숫자 4개
    char op[3];     // 연산자 3개

    // 입력
    cout << "첫번째 숫자 입력: ";
    cin >> num[0];
    cout << "첫번째 연산자 입력 (+,-,*,/): ";
    cin >> op[0];

    cout << "두번째 숫자 입력: ";
    cin >> num[1];
    cout << "두번째 연산자 입력 (+,-,*,/): ";
    cin >> op[1];

    cout << "세번째 숫자 입력: ";
    cin >> num[2];
    cout << "세번째 연산자 입력 (+,-,*,/): ";
    cin >> op[2];

    cout << "네번째 숫자 입력: ";
    cin >> num[3];

    // 1단계: *, / 먼저 처리
    for (int i = 0; i < 3; i++) {
        if (op[i] == '*') {
            num[i] = num[i] * num[i + 1];
            num[i + 1] = num[i];  // 결과 덮어쓰기
            op[i] = '+';          // 처리된 연산은 무력화
        }
        else if (op[i] == '/') {
            num[i] = num[i] / num[i + 1];
            num[i + 1] = num[i];
            op[i] = '+';
        }
    }

    // 2단계: +, - 처리
    int result = num[0];

    for (int i = 0; i < 3; i++) {
        if (op[i] == '+') {
            result += num[i + 1];
        }
        else if (op[i] == '-') {
            result -= num[i + 1];
        }
    }

    // 출력
    cout << "\n[결과]\n";
    cout << "Bin : " << bitset<16>(result) << endl;
    cout << "Dec : " << result << endl;
    cout << "Hex : 0x" << hex << uppercase << result << endl;

    return 0;
}