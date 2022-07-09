//Kkrishna Saxena_lab1_q6
//Program to find the surface area and volume of a sphere

#include<stdio.h>
#include<math.h>

void main()
{
  float r,sa,vol;
  float pi=3.14;
  printf("Enter the radius of the sphere ");
  scanf("%f",&r);
  sa=4*pi*pow(r,2);
  vol= 4*pi*pow(r,3)/3;
  printf("Surface area is %f\n",sa);
  printf("Volume is %f\n",vol);
}
