#include <iostream>
using namespace std;

int main() {
    const unsigned int pennyValue = 1;
    const unsigned int nickelValue = 5;
    const unsigned int dimeValue = 10;
    const unsigned int quarterValue = 25;
    const unsigned int dollarValue = 100;

    unsigned int pennies;
    unsigned int nickels;
    unsigned int dimes;
    unsigned int quarters;
    unsigned int dollars;

    unsigned long totalValue;

    cout << "페니의 수 : ";
    cin >> pennies;
    cout << "니켈의 수 : ";
    cin >> nickels;
    cout << "다임의 수 : ";
    cin >> dimes;
    cout << "쿼터의 수 : ";
    cin >> quarters;
    cout << "달러의 수 : ";
    cin >> dollars;

    totalValue = pennies * pennyValue + nickels * nickelValue + 
    dimes * dimeValue + quarters * quarterValue + dollars * dollarValue;

    cout << "전체 값은 " << totalValue << "페니입니다.";
    return 0;
}