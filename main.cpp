#include<iostream>
using namespace std;
void printNumber(int n);
int main()
{
  int n;
  cout<<"\nEnter Number");
  cin>>n;
  printNumber(n);
  return 0;
}
void printNumber(int n)
{
  for(int i=0;i<10;i++)
{
  cout<<n<<" * "<<i+1<<" = "<<n*1;
}
}
