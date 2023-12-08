#include<stdio.h>

int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total1,total2,total3;

    printf(" welcome to the game\n\n");

    printf("> press 7 to start the game\n");
    printf("> press 0 to quit the game\n");

    scanf("%d",&i);

if(i==7)
{
    printf("The game has started\n\n");
}
else if(i==0){
    printf("the game has ended\n\n");
}
else{
    printf("Invalid\n\n");

}

if(i==7)
{
    printf("1) which one is the first search engine in internet?\n\n");
    printf("1) google\n");
    printf("2) archie");
    printf("3) wais\n");
    printf("4) altavista\n");

    printf("enter your answer : ");
    scanf("%d", &ans1);
}
    if(ans1==2)
    {
        printf("Correct Answer\n");
        point1 = 5;
        printf("You have scored %d point\n", point1);
    }
    else {
        printf("wrong answer\n");
        point01 = 0;
        printf("you have scored %d point\n", point01);
    }
    printf("2) which one is the first web brower invented in 1990?\n\n");
    printf("1) internet explorer\n");
    printf("2) mosaic\n");
    printf("3) mozilla\n");
    printf("4) nexus\n");

    printf("enter your answer : ");
    scanf("%d", &ans2);
    if(ans2==4)
    {
        printf("correct answer\n");
        point02 = 0;
        
        
        
        
        printf("you have scored %d point\n", point02);
    }

}