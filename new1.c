#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int batting(int n,int i)
{
    int sum1=0,sum2=0;
    int j,n1,n2,s=0;
        for(j=0;j<n;j++)
        {
            s:
                printf("Batting : ");
                scanf("%d",&n1);
                //printf("%d\n",n1);
                if(n1>7)
                    n1%=7;
                s=s+n1;
                srand(time(0));
                n2=rand() % (6+1);
                printf("Bowling : %d\n",n2);

            if(n1==n2)
            {
                int s1=0;
                printf("You are out\n");
                s1=s-n1;
                s=0;
                //printf("%d\n",s1);
                printf("%d. Batsman Score is %d\n\n",j+1,s1);
                sum1=sum1+(s1);
            }
            else if(n1!=n2)
            {
                printf("continue\n\n");
                goto s;
            }
        }
        printf("Team %d Score is %d\n\n",i,sum1);
        return sum1;
}
int bowling(int n1,int i)
{
    int sum1=0,sum2=0;
    int j,n3,n4,s=0;
    for(j=0;j<n1;j++)
        {
            s:
                printf("Bowling : ");
                scanf("%d",&n3);
                //printf("%d\n",n1);
                if(n3>7)
                    n3%=7;
                srand(time(0));
                n4=rand() % (6+1);
                printf("Batting : %d\n",n4);
                s=s+n4;

            if(n3==n4)
            {
                int s1=0;
                printf("You are out\n");
                s1=s-n4;
                s=0;
                //printf("%d\n",s1);
                printf("%d. Batsman Score is %d\n\n",j+1,s1);
                sum2=sum2+(s1);
                /*if(i==2)
                    sum2=sum2+s1;*/
            }
            else if(n3!=n4)
            {
                printf("continue\n\n");
                goto s;
            }
        }
        printf("Team %d Score is %d\n\n",i,sum2);
        return sum2;
}

int main()
{
    sri:
    printf("%85s\n\n","Welcome to Game");
    int c,w1,w2,s12s=0,n,x,y,c1,i;
    int sum1=0,sum2=0;
    printf("Enter how many people wants to play!!\n");
    scanf("%d",&n);
    printf("\nSelect the choice\n");
    printf("1.Even \n2.Odd\n\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        printf("Enter the values\n");
        scanf("%d",&w1);
        scanf("%d",&w2);
        s12s=s12s+w1+w2;
        s12s%=2;
        if(s12s==0)
            {
                printf("Team A wins\n\n");
                x=1;
                break;
            }
        else if(s12s==1)
            {
                printf("Opponent team wins\n\n");
                y=1;
                break;
            }
    case 2:
        printf("Enter the values\n");
        scanf("%d",&w1);
        scanf("%d",&w2);
        s12s=s12s+w1+w2;
        s12s%=2;
        if(s12s==1)
            {
                printf("Your Team wins\n\n");
                x=1;
                break;
            }
        else if(s12s==0)
            {
                printf("Opponent team wins\n\n");
                y=1;
                break;
            }
    default:
        printf("Invalid input");
    }
    if(x==1)
        printf("For Team A\n");
    else if(y==1)
        printf("For Team B\n");

    printf("What you want to choose.....\n");
    printf("1.Batting\n2.Bowling\n\n");
    scanf("%d",&c1);
    switch(c1)
    {
    case 1:
        i=1;
        sum1=batting(n,i);
        printf("Opponent team batting\n\n");
        i=2;
        sum2=bowling(n,i);
    if(x==1)
    {
        if(sum1>sum2)
            {
                printf("Team A wins!!\n");
                break;
            }
        else if(sum1<sum2)
            {
                printf("Team B wins!!\n");
                break;
            }
        else if(sum1==sum2)
            {
                printf("The Match is draw..\n");
                break;
            }
    }
    else if(y==1)
    {
        if(sum1>sum2)
            {
                printf("Team B wins!!\n");
                break;
            }
        else if(sum1<sum2)
            {
                printf("Team A wins!!\n");
                break;
            }
        else if(sum1==sum2)
            {
                printf("The Match is draw..\n");
                break;
            }
    }
    case 2:
        i=1;
        sum2=bowling(n,i);
        printf("Opponent team batting\n\n");
        i=2;
        sum1=batting(n,i);
    if(x==1)
    {
        if(sum1>sum2)
            {
                printf("Team A wins!!\n");
                break;
            }
        else if(sum1<sum2)
            {
                printf("Team B wins!!\n");
                break;
            }
        else if(sum1==sum2)
            {
                printf("The Match is draw..\n");
                break;
            }
    }
    else if(y==1)
    {
        if(sum1>sum2)
            {
                printf("Team B wins!!\n");
                break;
            }
        else if(sum1<sum2)
            {
                printf("Team A wins!!\n");
                break;
            }
        else if(sum1==sum2)
            {
                printf("The Match is draw..\n");
                break;
            }
    }
    default:
        printf("Invalid Input\n");
    }
    int out;
    printf("** You want to play once again?(for that press 5)\n** If not to play press 6\n");
    scanf("%d",&out);
    if(out==5)
        {
            goto sri;
        }
    else if(out==6)
    printf("%100s","\nThank You For Playing This Game\n\n");

    else
        printf("Invalid Input");


    return 0;
}
