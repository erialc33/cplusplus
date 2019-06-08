/** Chapter 5 Exercise 4 from 기본개념과핵심원리로배우는C++프로그래밍
memset 함수는 dest가 가리키는 주소로부터 count 바이트의 메모리 영역에 1바이트씩 값 c를 채우는 역할을 한다. 같은 기능을 수행하는 MyMemset함수를 구현하시오.  
*/

#include <iostream>
using namespace std;

void* MyMemset(int* dest, int c, size_t count)
{
  char* s = (char*)dest;
  for(size_t i=0; i<count ;i++)
  {
    *s = c;
    s++;
  }
  return dest;
}

int main()
{
 int a;
 MyMemset(&a, -1, 4);
 cout << a << endl;
}
