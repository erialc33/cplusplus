//arr의 모든 원소의 합을 구하는 문제 

#include <iostream>
using namespace std;

int main()
{
 int arr[] = {1,6,9,7,3,2,0,4,8,5};
 int sum = 0;
 for (int i = 0;i<10 ; i++)
 {
   sum += arr[i];
 }
 cout<<sum<<endl;
 return 0;
}
