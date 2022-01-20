#include <stdio.h>
int main()
{
    int a=0;
    int b=0;
    
    int i,n;
    printf("Enter the total number of people have to be vote: ");
    scanf ("%d",&n);
    int e;
    
    for(i=0;i<n;i++)
    {
    
        printf("\n\n\n                                **WELCOME TO ELECTION**              \n\n\n");
        printf("There are two parties: \n \n \t\t CANDIDATE 1  \t\t\t\t\t\t   CANDIDATE 2\n \n To vote select\n\n \t1.FOR CANDIDATE 1 \n \t2.FOR CANDIDATE 2");
        printf("\n\nSelect your option :");
        scanf("%d",&e);
    
        if(e==1)
        {
    
            a=a+1;
    
        }
        else if(e==2)
        {
        
            b=b+1;
    
        }
        else
        {
        
            printf("\n\n\n^^^^^^^^^^^^   ERROR  ^^^^^^^^^^^^\n\n\n");
        
        }
    }
    
    if(a>b)
    {
    
        printf("\n\n\n^^^^^^^^^^^^   WINNER OFTHE ELECTION IS  ^^^^^^^^^^^^\n\n");
        printf("                     CANDIDATE 1");
    
    }
    else if (a<b)
    {
        
        printf("\n\n\n^^^^^^^^^^^^  WINNER OFTHE ELECTION IS  ^^^^^^^^^^^^\n\n");
        printf("                    CANDIDATE 2");
        
    }
    else
    {
     
         printf("\n\n\n^^^^^^^^^^^^ ELECTION IS TIED BOTH PARTY GOT EQUAL VOTES  ^^^^^^^^^^^^\n\n");
        
    }
    return 0;
}