#include <iostream>
using namespace std;

int main() {
    //변수 선언
    int num1;
    int num2;
    int sum;
    // 입력받기
    cout << "첫 번째 숫자 입력 : ";
    cin >> num1;
    cout << "두 번째 숫자 입력 : ";
    cin >> num2;
    // 계산과 결과 저장
    sum = num1 + num2;
    //출력
    cout << "두 숫자의 합 : " << sum;
    return 0;
}