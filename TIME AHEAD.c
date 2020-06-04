/*program to show time ahead*/
/*note no AM OR PM available in this code
until Updated


input your current time first...
1 for AM 2 for PM...
Then finally the time ahead you want.
in seperate lines*/

#include <stdio.h>

int main() {
    //declare required variables
    int time,ahead,ntime,newer;
    //ask for current time
    printf("what is the current time\n");
    scanf("%d",&time);
    if(time<1 && time>12)
    {
        printf("error!!! invalid time\nplease try again__");
    }
    //use 1 to rep am and 2 to rep pm
    printf("AM(1) OR PM(2)\n");
    scanf("%d",&ahead);
    printf("%d",ahead);
    switch(ahead)
    {
        case 1://for AM
            printf("\ntime ahead-");
            scanf("%d",&newer);
            printf(" %d hrs ahead",newer);
            ntime = time+newer;
            if(ntime>12)
            {
                ntime-=12;
                printf("\n%d ",ntime);
            }
            else
            {
                printf("\n%d ",ntime);
            }
            break;
        case 2://for PM
            time+=12;
            printf("time ahead-");
            scanf("%d", &newer);
            printf(" %d hrs ahead",newer);
            ntime = time + newer;
            ntime -= 12;
            //always check if the newtime is greater than 12 ad reduce it
            do{
                if(ntime >12)
                {
                    ntime-= 12;
                }
            }while(ntime>12);
            printf("\n%d",ntime);
            break;
        default:
            printf("wrong choice");
    }
    return 0;
}
