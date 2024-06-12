#include <iostream>
using namespace std;

// تابع بررسی اینکه یک کاراکتر عدد است یا نه
bool isDigit(char ch) {
    // اگر کاراکتر در محدوده '0' تا '9' باشد، آن کاراکتر عدد است
    if (ch >= '0' && ch <= '9')
        return true;
    else
        return false;
}

int main() {
    char ch;

    // دریافت یک کاراکتر از ورودی
    cout << "Enter a character: ";
    cin >> ch;

    // فراخوانی تابع بررسی و چاپ نتیجه
    if (isDigit(ch))
        cout << "The character is a digit." << endl;
    else
        cout << "The character is not a digit." << endl;

    return 0;
}
