/** Chapter 5 Exercise 1 from 기본개념과핵심원리로배우는C++프로그래밍
다음 프로그램의 출력 결과가 문자열 "C++"가 되도록 Set 함수를 작성하시오. 
Write a function Set that prints string "C++" */

#include <iostream>
using namespace std;

void Set(char* pt)     // define function set that uses char* as parameter
  {
    *pt = 'C';
    *(pt + 1) = '+';
    *(pt + 2) = '+';
  }

int main()
{
  int a = 0;
  char* s = (char*)&a;
  Set(s);
  cout << (char*)&a << endl;
}
