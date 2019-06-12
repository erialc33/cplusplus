#include <iostream>
using namespace std; 

//(1) 로봇을 나타내는 구조체 Robot을 설계하시오.
typedef struct     
{
  string name;
  int height; 
  int weight;
  int mp;
} Robot;      //define a struct Robot that has members name, height, weight, mp.

//(2) 로봇의 명세를 출력하는 함수Print를 작성하시오(매개변수타입 Robot*)
void Print(Robot* ptr)       
{
  cout<<"Name: "<<ptr->name<<endl;
  cout<<"Height(m): "<<ptr->height<<endl;
  cout<<"Weight(T): "<<ptr->weight<<endl;
  cout<<"MP: "<<ptr->mp<<"\n"<<endl;
}     //define a function Print that prints the profile of the robots and takes parameter type Robot*.

//(3) 로봇들의 평균신장, 평균무게, 평균마력을 출력하는 함수 Avg를 구하시오.
void Avg(Robot arr[4])
{
  int h_sum = 0;
  int w_sum = 0;
  int m_sum = 0;
  int a, b, c;
  double h_avg, w_avg, m_avg;
  for (int i=0;i<4;i++)
  {
    a= arr[i].height;
    h_sum += a;
    b = arr[i].weight;
    w_sum += b;
    c = arr[i].mp;
    m_sum += c;
  }
  h_avg = (double)h_sum/4;
  w_avg = (double)w_sum/4;
  m_avg = (double)m_sum/4;
  
  cout<<"Average height of the robots(m): "<<h_avg<<endl;
  cout<<"Average weight of the robots(T): "<<w_avg<<endl;
  cout<<"Average mp of the robots: "<<m_avg<<endl;
}         // define a function Avg that calculates average of the values in input array. Parameter type is Robot [4].

//(4) 1, 2, 3을 이용하여 모든 로봇의 명세를 출력하는 프로그램을 작성하시오. 
int main()
{
  //declare a struct for each Robot.
  Robot TV = {"Taekwon V", 18, 80, 3000}; 
  Robot MZ = {"Manzinger", 17, 70, 2500};
  Robot MV = {"Mekander V", 20, 90, 3500};
  Robot GD = {"Grendizer", 22, 100, 5000};        

  //declare pointers for each robot
  Robot* pt1 = &TV;
  Robot* pt2 = &MZ;
  Robot* pt3 = &MV;
  Robot* pt4 = &GD;       

//print profile of the robots
  cout<<"Profile of the Robots: "<<endl;
  Print(pt1);
  Print(pt2);
  Print(pt3);
  Print(pt4);

  double avgH, avgW, avgM;      //declare variables for average values. 
  Robot data[4] = {TV, MZ, MV, GD};     //declare array with type Robot [4] that represents the dataset of all the robots. 

//print the average of each dataset using funciton Avg. 
Avg(data);
  return 0;
}
