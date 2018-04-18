#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char code[12];
    int n,i,decode,k;


    gets(code);
    while(1)
    {
        gets(code);
        if((code[0]=='_')||(code[0]=='-'))
            break;
        decode=0;

        if(code[1]=='o') decode+=128;
        if(code[2]=='o') decode+=64;
        if(code[3]=='o') decode+=32;
        if(code[4]=='o') decode+=16;
        if(code[5]=='o') decode+=8;
        if(code[7]=='o') decode+=4;
        if(code[8]=='o') decode+=2;
        if(code[9]=='o') decode+=1;

        printf("%c",decode);

    }

    return 0;

}
