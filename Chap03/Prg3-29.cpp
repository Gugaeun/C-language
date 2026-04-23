/**************************************************************
 * 입력된 정수의 첫 번째 자릿수를 추출해서 출력하는 프로그램  *
 **************************************************************/
#include <iostream>
using namespace std;

int main()
{ 
  // 변수 선언
  unsigned int givenInt, firstDigit;
  // 입력받기
  cout << "양의 정수 입력: ";
  cin >> givenInt;
  // 처리
  firstDigit = givenInt % 10; 
  //숫자가 0 ~ 9를 나눌 수 있는 게 10이라서 10으로 나눔
  // 출력
  cout << "입력한 정수 " << givenInt << endl;
  cout << "첫 번째 자리수 추출: " << firstDigit << endl;    
  return 0;
}