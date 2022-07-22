#include <iomanip>      // std::setprecision
#include <iostream>
 
using namespace std;
 
int main() {
 
   float a,b,c;
   cin >> a >> b >> c;

    cout << setprecision(1) << fixed;
   
   if (!(a>=b+c || b>=a+c || c>=a+b))
   {
       cout << "Perimetro = " << a+b+c << "\n";
   }
   else
   {
       cout << "Area = " << ((a+b)*c)/2.0 << "\n";    
   }
   
    return 0;
}