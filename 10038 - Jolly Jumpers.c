#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b);

int main()
{
    int n, i, jolly=1;

    while(scanf("%d", &n)==1)
    {
        int values[n], diffs[n-1];
        for(i=0; i<n; i++)
        {
           scanf("%d", &values[i]);

           if(i>0)
               diffs[i-1]=abs(values[i]-values[i-1]);
        }
     qsort(diffs, n-1, sizeof(int), cmpfunc);


       for(i=0; i<n-1; i++)
       {
            if(diffs[i]!=i+1)
            {
                jolly=0;
                break;
            }
       }

       if(jolly)
            printf("Jolly\n");
       else
            printf("Not jolly\n");
    }
    return 0;
}

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}


