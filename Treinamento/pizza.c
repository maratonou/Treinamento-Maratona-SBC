/*ICPC Latin American Regional – 2018 1
Problem A – A Symmetrical Pizza
Author : Mario Silva, Brasil
Bob has a symmetry craze. Everything in his life must be symmetric: his house, his clothes, his car,
even his food. And pizza is no exception. For him to eat a pizza, all the toppings, like tomatoes, olives,
pepperoni or basil, must be arranged with some degree of rotational symmetry.
This evening Bob ordered some pizza. As usual, when it arrived, he asked the delivery driver to
demonstrate that the pizza met his demands for rotational symmetry. The driver demonstrated the
symmetry then, as they are trained to do, using the following procedure:*/


#include <stdio.h>
#include <tgmath.h>

int main()
{
 float rotation, total, resto = 0; 
 int cont = 1;
 float estado = 0;

 while(scanf("%f", &rotation))
 {     
   cont = 1;
   total = 0;
   estado = rotation * cont;
   resto = 360 - estado;
   while (resto != 0)
   {
     cont++;
     estado = rotation * cont;
     while(total < estado)
     {
     	total += 360;
     }
     resto = total - estado;
   }

   printf("%d\n",cont);
 }

 return 0;
}