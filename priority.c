#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int n, i, j, time = 0;
    float avgwt = 0, avgtt = 0;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("Enter the burst time & priority:\n");
    int bt[n], wt[n], tt[n], p[n], pr[n];
 
    for (i = 0; i < n; i++) 
    {
      printf("Process %d\n", i + 1);
      printf("Enter P%d burst time: ", i + 1);
      scanf("%d", &bt[i]);
      printf("Enter P%d priority: ", i + 1); 
      scanf("%d", &pr[i]);
      p[i] = i + 1;
    }
    for (i = 0; i < n; i++) 
    {
      for (j = i + 1; j < n; j++) 
      {
        if (pr[i] > pr[j]) 
        {
          swap(&pr[i], &pr[j]);
          swap(&bt[i], &bt[j]);
          swap(&p[i], &p[j]);
        }
      }
    }

    wt[0] = 0; 
    for (i = 1; i < n; i++) 
    {
      wt[i] = wt[i - 1] + bt[i - 1];
      avgwt += wt[i];
    }
    avgwt /= n;

    for (i = 0; i < n; i++) 
    {
      tt[i] = wt[i] + bt[i];
      avgtt += tt[i];
    }
    avgtt /= n;
    printf("Process\tPriority\tBurst Time\tWait Time\tTurnaround Time\n");
    for(i=0;i<n;i++) 
    {
      printf("P%d\t%d\t\t%d\t\t%d\t\t%d\n",p[i],pr[i],bt[i],wt[i],tt[i]);
    }
    printf("\n");
    printf("Average Waiting Time : %.2f\nAverage Turnaround Time : %.2f\n",avgwt,avgtt);
    printf("\n");
    printf(" ");
    for(i=0;i<n;i++) 
    {
      printf("--------");
    }
    printf("\n|");
    for(i=0;i<n;i++) 
    {
      printf("P%d     |",p[i]);
    }
    printf("\n|");
    for(i=0;i<n;i++) 
    {
      printf("--------");
    }
    printf("\n0\t");
    int current_time=0;
    for(i=0;i<n;i++) 
    {
      current_time=current_time+bt[i];
      printf("%d\t",current_time);
    }
    printf("\n");
}
  
  
  
  
  
                                                                                                                                             
  
  
  
  
  
                                                                                                                                             
