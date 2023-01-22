#include <iostream>

#include <bits/stdc++.h>

using namespace std;
int printRoman(int number) {
  int num[] = {
    1,
    4,
    5,
    9,
    10,
    40,
    50,
    90,
    100,
    400,
    500,
    900,
    1000
  };
  string sym[] = {
    "I",
    "IV",
    "V",
    "IX",
    "X",
    "XL",
    "L",
    "XC",
    "C",
    "CD",
    "D",
    "CM",
    "M"
  };
  int i = 12;
  while (number > 0) {
    int div = number / num[i];
    number = number % num[i];
    while (div--) {
      cout << sym[i];
    }
    i--;
  }
}
int roman_to_integer(string rstr) {
  int n = int(rstr.length());
  if (0 == n) {
    return 0;
  }

  int result = 0;
  for (int i = 0; i < n; i++) {
    switch (rstr[i]) {
    case 'I':
      result += 1;
      break;
    case 'V':
      result += 5;
      break;
    case 'X':
      result += 10;
      break;
    case 'L':
      result += 50;
      break;
    case 'C':
      result += 100;
      break;
    case 'D':
      result += 500;
      break;
    case 'M':
      result += 1000;
      break;
    }
  }

  for (int i = 1; i < n; i++) {
    if ((rstr[i] == 'V' || rstr[i] == 'X') && rstr[i - 1] == 'I') {
      result -= 1 + 1;
    }

    if ((rstr[i] == 'L' || rstr[i] == 'C') && rstr[i - 1] == 'X') {
      result -= 10 + 10;
    }

    if ((rstr[i] == 'D' || rstr[i] == 'M') && rstr[i - 1] == 'C') {
      result -= 100 + 100;
    }
  }
  return result;
}

int main() {
  
 string a = "VII";
  string b = "XX";
  string op;
  cout << "input operator ->";
  cin >> op; // get user input from the keyboard

 if (op == "+") {
    int pas_arabic = roman_to_integer(a) + roman_to_integer(b);
    cout << a << " = " << roman_to_integer(a) << endl << b << " = " << roman_to_integer(b) << endl << "jami = " << pas_arabic << " = " << printRoman(pas_arabic);
  } else if (op == "-") {
    int pas_arabic = roman_to_integer(a) - roman_to_integer(b);
    cout << a << " = " << roman_to_integer(a) << endl << b << " = " << roman_to_integer(b) << endl << "sxvaoba = " << pas_arabic << " = " << printRoman(pas_arabic);
  } else if (op == "*") {
    int pas_arabic = roman_to_integer(a) * roman_to_integer(b);
    cout << a << " = " << roman_to_integer(a) << endl << b << " = " << roman_to_integer(b) << endl << "namravli = " << pas_arabic << " = " << printRoman(pas_arabic);
  } else if (op == "/") {
    int pas_arabic = roman_to_integer(a) / roman_to_integer(b);
    cout << a << " = " << roman_to_integer(a) << endl << b << " = " << roman_to_integer(b) << endl << "ganayofi = " << pas_arabic << " = " << printRoman(pas_arabic);
  } else {
    cout << "shecdomaa";
  }
 
 
 

return 0;
}
