//각 학생별 총점을 구하고 과목별 평균 출

#include <iostream>
using namespace std;

int main()
{ 
  int arr[4][3] = {{100, 100, 100}, {90, 70, 80}, {70, 80, 90}, {80, 100, 90}};
  string name[3] = {"국어", "영어", "수학"};

  for(int i = 0; i<4; i++)
  {
    int sum = 0;
    for(int j = 0; j<3;j++)
    {
      sum += arr[i][j];
    }
    cout<<"The total score of Student"<<i+1<<" is: "<<sum<<endl;
  } //total score for loop

  for(int i = 0; i<3; i++)
  {
    int subsum = 0;
    for(int j = 0; j<4;j++)
    {
      subsum += arr[j][i];
    }
    int avg = subsum/4;
    cout<<"The average score of "<<name[i]<<" is: "<<subsum<<endl;
  } // avg score loop
 
 return 0;
}
