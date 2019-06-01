#include<stdio.h>
#define CREDIT2 2
#define CREDIT3 3
#define CREDIT4 4 
int main() {
    double engineering_mathematics,element_of_electronics_engineering ,engineering_mechanics ,chemical_science,element_of_electronics_engineering_lab,chemical_science_lab, engineering_drawing;
    double communication_skill, humanity_and_social_science,percentage;
    printf("this program is coded by PRASHANT THAKUR\n");
    printf("follow the instuction  below to calculate your percentage in first semester\n");

    printf("enter marks in engineering_mathematics\n");
    scanf("%lf", &engineering_mathematics);

    printf("enter marks in element_of_electronics_engineering\n");
    scanf("%lf", &element_of_electronics_engineering);

    printf("enter marks in engineering_mechanics\n");
    scanf("%lf", &engineering_mechanics);

    printf("enter marks in chemical_science \n");
    scanf("%lf", &chemical_science);

    printf("enter marks in element_of_electronics_engineering_lab\n ");
    scanf("%lf", &element_of_electronics_engineering_lab);


    printf("enter marks in chemical_science_lab\n ");
    scanf("%lf",&chemical_science_lab);

    printf("enter marks in communication_skill\n ");
    scanf("%lf",&communication_skill);
    printf("enter marks in humanity_and_social_science\n ");
    scanf("%lf",&humanity_and_social_science);
    printf("enter marks in engineering_drawing\n");
    scanf("%lf",&engineering_drawing);

    //percentage is (summation of product of marks and credit)/(sum of credit);
    percentage=(engineering_mathematics*CREDIT4 + 
                engineering_mechanics*CREDIT4 +
                element_of_electronics_engineering*CREDIT4+
                chemical_science*CREDIT3+
                communication_skill*CREDIT2+ 
                humanity_and_social_science*CREDIT2+
                engineering_drawing*CREDIT2+
                chemical_science_lab+
                element_of_electronics_engineering_lab)/23;


    if(percentage<=33){
        printf("according to your marks entered you have got percent of %lf\n",percentage);
        printf("sorry you are fail");
    }

    if(percentage<=60&&percentage>33){
        printf("according to your marks entered you have got percent of %lf\n",percentage);
        printf("your performance is average ,work hard");
    }

    if(percentage<=80&&percentage>60){
        printf("according to your marks entered you have got percent of %lf\n",percentage);
        printf("your overall performance is good,your performance suggest that you have fair chance of improvement");
    }

    if(percentage<=95&&percentage>80){
        printf("according to your marks entered you have got percent of %lf\n",percentage);
        printf("your performance is excellent ,keep it up");
    }

    if(percentage<=100&&percentage>95){
        printf("according to your marks entered you have got percent of %lf\n",percentage);
        /*note that when \n is written after " it show fault*/
        printf("your performance is outstanding, you are genius");
    }
    //also note that when more two statement are there in if and if else loop, in each condition then braces must be used otherwise only first line 
    //will be used and when it comes to secpnd line then compiler think that there is no stement followed with with before if else 
    //\n must be used for escape not /n.
    //note here that even if we use else if or only if we get same  output

    return 0;
}