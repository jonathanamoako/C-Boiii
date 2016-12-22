#include <stdio.h>
#include <stdlib.h>

int age;

float weight;
float height;
float bmi;

char again;
char name[100];

int main()
{
    introduction();
    return 0;
}

int introduction()
{
    getName();
    getAge();
    bmiCalculate();
    return 0;
}
int getName()
{
    printf("hello, what's your name? ");
    scanf("%s", &name);
    return 0;
}
int getAge()
{
    printf("hello %s how old are you?: ",name);
    scanf("%d", &age);
    return 0;
}
int bmiCalculate()
{
    getWeight();
    getLenght();
    getBmi();
    printBmiResult();
    quitOrStay();
    return 0;
}
int getWeight()
{
    printf("%s please write your weight in kilograms: ",name);
    scanf("%f", &weight);
    return 0;
}
int getLenght()
{
    printf("%s write your height in meters: ",name);
    scanf("%f", &height);
    return 0;
}
int getBmi()
{
    bmi= floor( weight / (height*height));
    return 0;
}
int printBmiResult()
{
    printf("name: %s\n age: %d\n BMI: %f\n",name,age,bmi);
    if(bmi < 18.5)
    {
        printf("you are under weight\n");
    }
    else if(bmi > 18.5 && bmi < 24.9)
    {
        printf("you are the normal weight\n");
    }
    else if(bmi >24.9 && bmi < 29.9)
    {
        printf("you are slightly over weight\n");
    }
    else if(bmi > 29.9 && bmi < 39.9)
    {
        printf("you have obesitas\n");
    }
    else
    {
        printf("you are a new level of fat\n");
    }

    return 0;
}
int quitOrStay()
{
    printf("%s write y to calculate a bmi again, or write n to quit\n",name);

    scanf("%s",&again);

    if(again == 'y')
    {
        bmiCalculate();
    }
    else if(again == 'n')
    {

    }
    else
    {
        printf("\n you didn't write y/n please write again\n");
        quitOrStay();
    }
    return 0;
}
