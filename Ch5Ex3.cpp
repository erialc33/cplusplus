/** Chapter 5 Exercise 3 from 기본개념과핵심원리로배우는C++프로그래밍
다음 프로그램의 출력 결과가 3이 되도록 Increment 함수를 작성하시오. 
Write a function Increment that prints 3 */

#include <iostream>
using namespace std;

void Increment(int* n)       // 주소값을 입력해야함. 그렇지 않으면 매개변수 n이 a의 값을 받은 후, 함수는 a가 아니라 n의 값을 변화시킨다. 
{                            // a의 주소를 int* n에 받아서 주소 n이 가리키는 변수(=*n = a) 의 값을 바꾼다. 
  (*n)++;
}

int main()
{
 int a = 2;
 Increment(&a);  
 cout << a <<endl;
}
