#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


char num1[200],num2[200],result[200],o1[5],o2[5],o3[5];
int n1,n2;

long long int base(long long int num);
void Convert();
void format();
void add();
void left();
void right();
void padd (int n);

int main()
{
    int t;

    scanf("%d",&t);
    gets(num1);

    printf("COWCULATIONS OUTPUT\n");

    while(t--)
    {
        gets(num1);
        gets(num2);
        gets(o1);
        gets(o2);
        gets(o3);
        gets(result);

        Convert();
        if(!(strcmp(o1,"A")))
            add();
        else if(!(strcmp(o1,"L")))
            left();
        else if(!(strcmp(o1,"R")))
            right();

        if(!(strcmp(o2,"A")))
            add();
        else if(!(strcmp(o2,"L")))
            left();
        else if(!(strcmp(o2,"R")))
            right();

        if(!(strcmp(o3,"A")))
            add();
        else if(!(strcmp(o3,"L")))
            left();
        else if(!(strcmp(o3,"R")))
            right();

        format();

        n2=strlen(num2);
        if(n2<8)
            padd(8-n2);

        if(!strcmp(num2,result))
            printf("YES\n");

        else
            printf("NO\n");

    }

    printf("END OF OUTPUT\n");

    return 0;

}


void Convert()
{
    n1=strlen(num1);
    n2=strlen(num2);
    int i;

    for(i=0;i<n1;i++)
    {
        if(num1[i]=='V')
            num1[i]='0';
        if(num1[i]=='U')
            num1[i]='1';
        if(num1[i]=='C')
            num1[i]='2';
        if(num1[i]=='D')
            num1[i]='3';
    }

    for(i=0;i<n2;i++)
    {
        if(num2[i]=='V')
            num2[i]='0';
        if(num2[i]=='U')
            num2[i]='1';
        if(num2[i]=='C')
            num2[i]='2';
        if(num2[i]=='D')
            num2[i]='3';
    }


}


void format()
{
    n2=strlen(num2);
    int i;


    for(i=0;i<n2;i++)
    {
        if(num2[i]=='0')
            num2[i]='V';
        if(num2[i]=='1')
            num2[i]='U';
        if(num2[i]=='2')
            num2[i]='C';
        if(num2[i]=='3')
            num2[i]='D';
    }


}


void add()
{
    long long int nu1=0,nu2=0;
    int i,digi;
    n1=strlen(num1);
    n2=strlen(num2);

    for(i=0;i<n1;i++)
    {
        nu1=nu1*10+(num1[i]-48);
    }

    for(i=0;i<n2;i++)
    {
        nu2=nu2*10+(num2[i]-48);
    }

    nu1=base(nu1);
    nu2=base(nu2);

    nu2+=nu1;

    for(i=0;;i++)
    {
        num2[i]=(nu2%4)+48;
        nu2/=4;

        if(nu2==0)
        {
            i++;
            for(;i<n2;i++)
                num2[i]='0';

            num2[i]='\0';

            break;

        }
    }
    n2=strlen(num2);
    for(i=0;i<n2/2;i++)
    {
        num2[i]=num2[i]^num2[n2-i-1];
        num2[n2-1-i]=num2[i]^num2[n2-i-1];
        num2[i]=num2[i]^num2[n2-i-1];
    }

}

long long int base(long long int num)
{
    long long int pum=0;
    int digi=log10(num)+1;
    int i;

    for(i=0;i<digi;i++)
    {
        pum+=(num%10)*pow(4,i);
        num/=10;
        if(num==0)
            break;
    }

    return pum;


}

void left()
{
    n2=strlen(num2);
    num2[n2]='0';
    num2[n2+1]='\0';
}

void right()
{
    n2=strlen(num2);
    int i;

    for(i=n2-1;i>0;i--)
    {
        num2[i]=num2[i-1];
    }
    num2[0]='0';
}

void padd (int n)
{
    int i;
    n2=strlen(num2);
    for(i=n2-1;i>=0;i--)
    {
        num2[i+n]=num2[i];
    }
    for(i=0;i<n;i++)
        num2[i]='V';


    num2[8]='\0';
}
