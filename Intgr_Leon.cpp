#include<iostream>
#include<math.h>

//El siguiente código es para el caso donde H_0=-2.15,Hf=-1.815


#define H(x) x*x*(x*x-4)*(x*x-4)
#define H0(init) init*init*(init*init-4)*(init*init-4)
#define H1(x) 2*x*(x*x-4)*(x*x-4)+4*x*x*(x*x-4)*x
#define f(x) sqrt((1+H1(x)*H1(x))/(19.62 * ( H0(init)-H(x))))
//como se puede observar(2*g)= 19.62 

using namespace std;
int main()
{
 float a=-2.149999, b=-1.9, sum=0.0, init=-2.15 , h, k, intgr;
 int i, N=100;


 h = (b - a)/N;

 
 sum = f(a) + f(b);

 for(i=1; i<= N-1; i++)
 {
  k = a + i*h;

  if(i%2==0)
  {
    sum = sum + 2 * (f(k));
  }
  else
  {
    sum = sum + 4 * (f(k));
  }

 }
 
//acá se define el resultado final de la integral

 intgr = sum * h/3;

//Y se muestra el resultado final en la consola

 cout<< endl <<"El valor de la integral es: "<< intgr;

 return 0;
}
