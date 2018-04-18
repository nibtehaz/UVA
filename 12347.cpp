/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>
#include <map>
#include <list>
#include <stack>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("B-small-attempt0.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000009
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

#define INF 1000000000

struct Node
{
    int value;
    Node* left;
    Node* right;
};

void print(Node root);

void print(Node root)
{
    if(root.left!=NULL)
        print(*root.left);
    if(root.right!=NULL)
        print(*root.right);

    printf("%d\n",root.value);
}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    Node* temp;
    Node root;
    Node* calc;
    int inp;

    //OUTPUT

    getInt(inp)

    root.value=inp;
    root.left=NULL;
    root.right=NULL;

    while(scanf("%d",&inp)!=EOF)
    {

        //if(inp==-1)
          //  break;

        calc=&root;

        while(1)
        {
            if(inp>calc->value)
            {
                if(calc->right==NULL)
                {
                    temp = new Node();
                    temp->value=inp;
                    temp->left=NULL;
                    temp->right=NULL;
                    calc->right=temp;

                    break;
                }

                else
                {
                    calc=calc->right;
                }
            }

            else
            {
                if(calc->left==NULL)
                {
                    temp = new Node();
                    temp->value=inp;
                    temp->left=NULL;
                    temp->right=NULL;
                    calc->left=temp;

                    break;
                }

                else
                {
                    calc=calc->left;
                }
            }
        }
    }

    print(root);

    return 0;
}

