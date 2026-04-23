#include <iostream>
#include <bitset>
#include <climits>
using namespace std;
//최종 최종 C++ 과제

int main() {
    int num[4];
    char op[3];

    string order[4] = {"첫", "두", "세", "네"};
    // 입력받을 수 있는 코드
    for (int i = 0; i < 4; i++) {
        cout << order[i] << " 번째 숫자를 입력하세요 : ";
        cin >> num[i];
        if (i < 3) {
            cout << order[i] << "번째 연산자를 입력하세요(+,-,*,/) : ";
            cin >> op[i];
        }
    }

    // *, / 먼저 코드 작성
    for (int i = 0; i < 3; i++) {
        if (op[i] == '*' || op[i] == '/') {

            if (op[i] == '/' && num[i+1] == 0) {
                cout << "❌ 0으로 나눌 수 없음\n";
                return 0;
            }

            long long temp;
            if (op[i] == '*') temp = (long long)num[i] * num[i+1];
            else temp = (long long)num[i] / num[i+1];

            // 곱셈, 나눗셈 오버플로우/언더플로우 발생 시 코드
            if (temp > INT_MAX || temp < INT_MIN) {
                cout << "❌ 오버플로우/언더플로우 발생!\n";
                return 0;
            }

            num[i+1] = (int)temp;
            op[i] = '+';
        }
    }

    // +, - 코드
    int result = num[0];

    for (int i = 0; i < 3; i++) {
        long long temp;

        if (op[i] == '+') temp = (long long)result + num[i+1];
        else temp = (long long)result - num[i+1];

        if (temp > INT_MAX || temp < INT_MIN) {
            cout << "❌ 오버플로우/언더플로우 발생!\n";
            return 0;
        }

        result = (int)temp;
    }

    // 출력 코드
    cout << "\n[결과]\n";
    cout << "Bin : " << bitset<16>(result) << endl;
    cout << "Dec : " << result << endl;
    cout << "Hex : 0x" << hex << uppercase << result << endl;

    return 0;
}