//Radius of circle, perimeter and area. 
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    double radius, perimeter, area;
    cout<<"Enter the radius of the Circle : ";
    cin>>radius;
    perimeter = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;
    cout<<"\nArea : "<<area<<"\nPerimeter : "<<perimeter<<"\n";
    return 0;
}
