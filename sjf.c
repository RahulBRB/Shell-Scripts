#include<stdio.h>

void swap(int*a,int*b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
void bubbleSort(int arr[], int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}
int main()
{
    int n;
    printf("Enter no. of processes:");
    scanf("%d",&n);
    int bt[n];
    printf("Enter the burst time of the processes:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    bubbleSort(bt,n);
    int wt[n],tt[n];
    int wait=0;
    wt[0]=0;
    for(int i=1;i<n;i++)
    {
        wait=wait+bt[i-1];
        wt[i]=wait;
    }
    int turn=bt[0];
    tt[0]=bt[0];
    for(int i=1;i<n;i++)
    {
        turn=turn+bt[i];
        tt[i]=turn;
    }
    float awt=0,att=0;
    for(int i=0;i<n;i++)
    {
        awt=awt+wt[i];
        att=att+tt[i];
    }
    printf("Average Waiting Time = %f\n",awt/n);
    printf("Average Turnaround Time = %f\n",att/n);
    return 0;
}
