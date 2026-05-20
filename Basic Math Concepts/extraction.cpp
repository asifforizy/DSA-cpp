#include<bits/stdc++.h>
using namespace std;
void extraction()
{
    int number = 12345;
    int lastDigit = number % 10; // Extract the last digit
    cout << "Last digit: " << lastDigit << endl;


    int remainingNumber = number / 10; // Remove the last digit
    cout << "Remaining number: " << remainingNumber << endl;


    int secondLastDigit = (number / 10) % 10; // Extract the second last digit
    cout << "Second last digit: " << secondLastDigit << endl;   

    int thirdLastDigit = (number / 100) % 10; // Extract the third last digit
    cout << "Third last digit: " << thirdLastDigit << endl;

    int fourthLastDigit = (number / 1000) % 10; // Extract the fourth last digit
    cout << "Fourth last digit: " << fourthLastDigit << endl;

    int firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10; // Remove the last digit until only the first digit remains
    }   

    cout << "First digit: " << firstDigit << endl;


}

int main()
{

    extraction();
    return 0;
}
