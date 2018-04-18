#include<stdio.h>
#include<string.h>
int main()
{
    int num,t,b,n,s,e,w,die[6];
    char ins[10];

    for(;;)
    {
        int die[6]  =  {1,2,3,4,5,6};

        scanf("%d",&num);

        if(num==0) break;

        else
        {
            while(num--)
            {
                scanf("%s",ins);


                if(!strcmp(ins,"north"))
                {
                    t=die[4],n=die[0],b=die[1],s=die[5];
                    die[0]=t,die[1]=n,die[5]=b,die[4]=s;
                }


                else if(!strcmp(ins,"south"))
                {
                    t=die[1],n=die[5],b=die[4],s=die[0];
                    die[0]=t,die[1]=n,die[5]=b,die[4]=s;
                }

                else if(!strcmp(ins,"east"))
                {
                    t=die[2],b=die[3],e=die[0],w=die[5];
                    die[0]=t,die[2]=w,die[5]=b,die[3]=e;
                }


                else if(!strcmp(ins,"west"))
                {
                    t=die[3],b=die[2],e=die[5],w=die[0];
                    die[0]=t,die[2]=w,die[5]=b,die[3]=e;
                }





            }
            printf("%d\n",die[0]);


        }
    }



    return 0;
}


