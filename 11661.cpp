#include<stdio.h>
#include<string.h>
int main()
{
    char road[2000005],goal;
    int step,min,L,i;

    for(;;)
    {
        scanf("%d",&L);

        if(L==0) break;

        else
            {
                min=L;
                scanf("%s",road);

                for(i=0;i<L;i++)
                {
                    if(road[i]=='R') {goal='D' ; i++; break;}
                    else if(road[i]=='D') {goal='R';i++; break;}
                    else if (road[i]=='Z')  {  goal='Z'; break;  }
                }

                if(goal=='Z')  printf("%d\n",0);

                else
                    {
                        step=0;
                        for(;i<L;i++)
                        {
                            if(road[i]=='.') step++;
                             else if((road[i]=='Z'))
                             {
                                 printf("%d\n",0);
                                 goal='Z';
                                 break;

                             }
                            else if((road[i]=='R'))
                            {
                                if(goal=='R')
                                    {
                                        step++;
                                        if(step<min) min=step;
                                        goal='D';
                                        step=0;
                                    }
                                    else
                                    {
                                        step=0;
                                    }
                            }
                            else if((road[i]=='D'))
                            {
                                if(goal=='D')
                                    {
                                        step++;
                                        if(step<min) min=step;
                                        goal='R';
                                        step=0;
                                    }
                                    else
                                    {
                                        step=0;
                                    }
                            }



                        }

                        if(goal!='Z') printf("%d\n",min);




                    }



            }
    }


    return 0;
}


