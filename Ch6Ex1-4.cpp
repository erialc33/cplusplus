//오름차순

#include <iostream>
using namespace std;

int main()
{ 
  int a, b; 
 int arr[] = {1,6,9,7,3,2,0,4,8,5};
 for (int i = 0 ;i<10 ; i++)
 {
  for (int j = i ; j < 10; j++)
  {
    a = arr[i];
    b= arr[j];
    if (a>b)
    {
      arr[i] = b;
      arr[j] = a;
    }
  }
 }
 for(int i = 0 ; i <10 ; i++)
 {
   cout<<arr[i]<<" ";
 }
 return 0;
}
