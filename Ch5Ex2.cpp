/** Chapter 5 Exercise 2 from 기본개념과핵심원리로배우는C++프로그래밍
다음 프로그램의 출력 결과가 3이 되도록 Set 함수를 작성하시오. 
Write a function Set that prints 3 */

#include <iostream>
using namespace std;

void Set (int** ptpt, int n)
{
  **ptpt = n;
}

int main()
{
  int a;
  int* p = &a;
  int** pp = &p;

  Set(pp, 3);
  cout << a << endl;
}
