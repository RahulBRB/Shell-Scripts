#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int pno, arrival, burst;
}fcfs;

void fillarray(fcfs *arr,int n)
{
    for (int i=0; i<n; i++)
    {
        printf("For Process %d:\n",i+1);
        arr[i].pno=i+1;
        printf("Enter the arrival time:\t");
        scanf("%d",&arr[i].arrival);
        fflush(stdin);
        printf("Enter the burst time:\t");
        scanf("%d",&arr[i].burst);
    }
}

void sort(fcfs *arr,int n)
{
    fcfs tmp;
    for (int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if (arr[i].arrival>arr[i+1].arrival)
            {
                tmp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tmp;
            }
        }
    }
}

void waitturn(fcfs *arr,int *wt,int *tat,int n)
{
    sort(arr,n);
    int tmp;
    wt[0]=0;
    tat[0]=arr[0].burst;
    for(int i=1; i<n; i++)
    {
        tmp=0;
        for(int j=0; j<=i; j++) tmp+=arr[j].burst;
        wt[i]=tmp-arr[i].burst-arr[i].arrival;
        tat[i]=tmp-arr[i].arrival;
    }
}

void display(fcfs *arr,int *wt,int *tat,int n)
{
    printf("Processes\tArrival Time\tBurst Time\n");
    float awt=0,atat=0;
    for (int i=0; i<n; i++)
    {
        printf("P%d\t\t%d\t\t%d\n",arr[i].pno,arr[i].arrival,arr[i].burst);
        awt+=wt[i];
        atat+=tat[i];
    }
    awt=awt/n;
    atat=atat/n;
    printf("Average Waiting Time:\t%f\n",awt);
    printf("Average Turnaround Time:\t%f\n",atat);
}

int main()
{
    int n;
    printf("Enter the number of process:    ");
    scanf("%d",&n);
    fcfs arr[n]; int wt[n], tat[n];
    fillarray(arr,n);
    waitturn(arr,wt,tat,n);
    display(arr,wt,tat,n);
    return 0;
}
