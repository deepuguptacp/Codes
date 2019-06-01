#include<iostream>
using namespace std;
class array_sum{
    int a[2][2];
    int i, j;
    public :
        array_sum(){    
            for(i=0; i<2; i++)
                for(j=0; j<2; j++)
                    a[i][j]=0;
        }
        void get(){
            for(i=0; i<2; i++)
                for(j=0; j<2; j++)
                    cin>>a[i][j];
        }
        int display(int sum){
            //sum=0;
            for(i=0; i<2; i++)
                for(j=0; j<2; j++)
                    sum=sum+a[i][j];
            return sum;
        }
        float display(float sum){
            //sum=0;
            for(i=0; i<2; i++)
                for(j=0; j<2; j++)
                    sum=sum+a[i][j];
            return sum;
        }
};
int main(){
    int a=0;
    float b=0;
    array_sum p, q;
    p.get();
    q.get();
    cout<<"\nInt sum : "<<p.display(a);
    cout<<"\nFloat sum : "<<q.display(b);
    cout<<"\n";
    return 0;
}/*
#include<iostream>
using namespace std;
class array{
    int sum;
    public :
        array(){
            sum=0;
        }
        int display(int a, int b, int c, int d){
            sum=a+b+c+d;
            return sum;
        }
        float display(float a, float b, float c, float d){
            (float)sum=a+b+c+d;
            return sum;
        }
};
int main(){
    int a[2][2];
    float b[2][2];
    int i, j;
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            cin>>a[i][j];
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            cin>>b[i][j];
    array p;
    cout<<"\nInt sum : "<<p.display(a[0][0], a[0][1], a[1][0], a[1][1]);
    cout<<"\nFloat sum : "<<p.display(b[0][0], b[0][1], b[1][0], b[1][1]);
    cout<<"\n";
    return 0;
}*/