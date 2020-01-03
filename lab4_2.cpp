#include<iostream>
#include<cmath>
using namespace std;

double finddistance(double u,double a,double t) 
{
double s;
    s=u*t+0.5*a*pow(t,2);
    cout <<"Distance = " <<s;}
int main()
    {
      double u;
      cout << "Enter u";
      cin  >> u;
      
      double a;
      cout << "Enter a";
      cin  >> a;
     
      double t;
      cout << "Enter t";
      cin  >>  t;    
    
      finddistance(u,a,t);
    

  return 0;
}
