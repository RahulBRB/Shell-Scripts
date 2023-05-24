#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of processes:");
    scanf("%d",&n);
    int bt[n];
    printf("Enter burst time of processes in order:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    int wt[n];
    int wait=0;
    wt[0]=0;
    for(int i=1;i<n;i++)
    {
        wait=wait+bt[i-1];
        wt[i]=wait;
    }
    int tt[n];
    int turn=bt[0];
    tt[0]=bt[0];
    for(int i=1;i<n;i++)
    {
        turn=turn+bt[i];
        tt[i]=turn;
    }
    float awt=0,att=0;
    printf("Waiting time of the processes in order:\n");
    for(int i=0;i<n;i++)
    {
        awt=awt+wt[i];
        printf("%d\t",wt[i]);
    }
    printf("\n");
    printf("Average Waiting Time = %f",awt/n);
    printf("\n");
    printf("Turnaround time of the processes in order:\n");
    for(int i=0;i<n;i++)
    {
        att=att+tt[i];
        printf("%d\t",tt[i]);
    }
    printf("\n");
    printf("Average Turnaround Time = %f",att/n);
    printf("\n");
    return 0;
}
