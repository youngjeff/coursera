#define TABLE_LEN 5

#include<stdio.h>

const int table[10][TABLE_LEN]=
    {{},{1,2,4,5},{1,2,3},{2,3,5,6},
        {1,4,7},{2,4,5,6,8},{3,6,9},
        {4,5,7,8},{7,8,9},{5,6,8,9}};

int state[10];
int times[10],min=0x7FFFFFFF,ans_times[10];
bool isFirst=true;

void deal(int k,int total)
{
    if (k==10)
    {
        for (int i=1;i<=9;i++)
            if (state[i]&3)
                return;
        if (total<min)
        {
            min=total;
            for (int i=1;i<=9;i++)
                ans_times[i]=times[i];
        }
        return;
    } 
    for (times[k]=0;times[k]<4;times[k]++)
    {
        for (int i=0;i<TABLE_LEN;i++)
            state[table[k][i]]+=times[k];
        deal(k+1,total+times[k]);
        for (int i=0;i<TABLE_LEN;i++)
            state[table[k][i]]-=times[k];
    }
    return;
}

int main()
{
    for (int i=1;i<=9;i++)
        scanf("%d",&state[i]);
    deal(1,0);
    for (int i=1;i<=9;i++)
        for (int j=0;j<ans_times[i];j++)
        {
            if (isFirst)
                isFirst=false;
            else
                printf(" ");
            printf("%d",i); 
        }
    printf("\n");
    return 0; 
}
