#include <iostream>
#include<string>
using namespace std;
bool fun_1(unsigned int);
bool fun_2(unsigned int);
 int main()
 {
     for(unsigned int n=1; n<=10;n++)
     { if (fun_1(n) || fun_2(n))
         cout<<n<<endl;
     }
     return 0;
 }
 bool fun_1(unsigned int n)
 {
     if(n%3)
         return false;
     else
         return true;
 }
bool fun_2(unsigned int n)
{
     if(n%5)
         return false;
         else
             return true;

}
