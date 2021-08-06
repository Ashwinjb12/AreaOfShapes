#include <stdio.h>
#include <math.h>
float areaofcircle(float r);
float areaofsquare(float a);
float areaofrectangle(float l,float b);
float areaoftriangle(float b,float h);
int main()
{
    int option,radius,side,length,breadth,base,height;
    do {
    printf("tell me what you want:,\n");
    printf("option 1 is area of circle\n");
    printf("option 2 is area of square\n");
     printf("option 3 is area of rectangle\n");
    printf("option 4 is area of triangle\n");
    scanf("%d",&option);
    if(option==1){
       printf("area of circle\n");
       printf("Enter the value of radius:\n");
       scanf("%d",&radius);
       printf("area of circle %f:\n",areaofcircle(radius));
    }  else if(option==2){
       printf("area of square\n");
       printf("Enter the value of side:\n");
       scanf("%d",&side);
       printf("area of square %f:\n",areaofsquare(side)); 
    } else if(option==3){
       printf("area of rectangle\n");
       printf("Enter the value of length:\n");
       scanf("%d",&length);
       printf("Enter the value of breadth:\n");
       scanf("%d",&breadth);
       printf("area of rectangle %f:\n",areaofrectangle(length,breadth));
    }   else {
       printf("area of triangle\n");
       printf("Enter the value of base:\n");
       scanf("%d",&base);
       printf("Enter the value of height:\n");
       scanf("%d",&height);
       printf("area of triangle %f:\n",areaoftriangle(base,height));
    }
    
}while(1==1);

    
}
float areaofcircle(float r){
   float a=3.14*r*r;
    return a;
}
float areaofsquare(float a){
    float b=a*a;
    return b;
}
float areaofrectangle(float l,float b){
    float c=l*b;
    return c;
}
float areaoftriangle(float b,float h){
    float d=(b*h)/2;
    return d;
}
