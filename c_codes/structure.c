#include<stdio.h>
struct cyl
{
    float r;
    float h;
}cy[4];
float area(float, float);
float pi=3.14;
int main()
{
    float r, h, area[3], i;
    printf("Enter the radius and height of cylinder respectively : \n");
    for(i=0; i<3; i++)
        scanf("%f%f", &cy[i].r, &cy[i].h);
    for(i=0; i<3; i++)
    {
        area[i]=area(cy[i].r, cy[i].h);
        printf("%f\n", area[i]);
    }
    return 0;
}
float area(float a, float b)
{
    float area;
    area=2*pi*a*b;
    return area;
}