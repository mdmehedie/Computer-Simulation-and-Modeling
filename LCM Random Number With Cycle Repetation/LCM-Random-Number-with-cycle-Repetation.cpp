#include <bits/stdc++.h>

using namespace std;
int x = 27, a = 17, c = 41, m = 100;

void randnum()
{

  double random, f, flg = 0, cyclenth = 0;
  for(int i=1;i<m;i++)
  {
    x = (a*x + c) % m;
    random = (double)x/m;
    cout<<i<<".\t"<<random<<endl;

    if(i == 1){
        f = random;
        cyclenth++;
    }
    else if(f != random && flg == 0)
        cyclenth++;
    else if(f == random)
        flg = 1;
  }
  cout<<"\nThe random number are cycle repeated length= "<< cyclenth<<endl;
}
int main()
{
  cout<<"The "<< m-1 <<" random number are "<<endl;
    randnum();
  return 0;
}
