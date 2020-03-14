#include<stdio.h>
 int main()
 {
   char a,name[20];
   int q=6, n;
   static int i=0;
   printf("\n\n\t\t\t ===========================\n");
   printf("\t\t\t\t **QUIZ GAME** \n");
   printf("\t\t\t ===========================\n\n\n");
   printf("Enter your name : ");
   scanf("%s",name);

   for(int r=0;r<4;r++)
   {

   n=rand() % 5;


   if(n==q)
   {
       n=rand() % 5;
   }

   switch(n)
   {
   case 0:
    {
   printf("\n\n Pick odd one out :- \n\n");
   printf(" a) English \t\t\t b) Maths \n c) Hindi \t\t\t d) Pencil \n");
   printf(" Answer : ");
   a=getch();
   printf("%c \n\n",a);
    if(a=='d')
    {
                printf(" GOOD JOB ! :) \n\n");
                i++;
    }
    else
        printf(" OPPS! :( \n\n");
        break;
    }

   case 1:
    {
   printf("\n\n Pick odd one out :- \n\n");
   printf(" a) Lake \t\t\t b) Forest \n c) Ocean \t\t\t d) River \n");
   printf(" Answer : ");
   a=getch();
   printf("%c \n\n",a);
    if(a=='b')
        {
                printf(" GOOD JOB ! :) \n\n");
                i++;
        }
    else
        printf(" OPPS! :( \n\n");
        break;
    }

   case 2:
    {
   printf("\n\n Pick odd one out :- \n\n");
   printf(" a) Mango \t\t\t b) Banana \n c) Onion \t\t\t d) Grapes \n");
   printf(" Answer : ");
   a=getch();
   printf("%c \n\n",a);
    if(a=='c')
        {
                printf(" GOOD JOB ! :) \n\n");
                i++;
        }
    else
        printf(" OPPS! :( \n\n");
        break;
    }

   case 3:
    {
   printf("\n\n Pick odd one out :- \n\n");
   printf(" a) Eye \t\t\t b) Ear \n c) Nose \t\t\t d) Liver \n");
   printf(" Answer : ");
   a=getch();
   printf("%c \n\n",a);
    if(a=='d')
       {
                printf(" GOOD JOB ! :) \n\n");
                i++;
       }
    else
        printf(" OPPS! :( \n\n");
        break;
    }

   case 4:
    {
   printf("\n\n Pick odd one out :- \n\n");
   printf(" a) Bus \t\t\t b) Car \n c) Truck \t\t\t d) Aeroplane \n");
   printf(" Answer : ");
   a=getch();
   printf("%c \n\n",a);
    if(a=='d')
        {
                printf(" GOOD JOB ! :) \n\n");
                i++;
        }
    else
        printf(" OPPS! :( \n\n");
        break;
    }
   }

    q=n;
    n=rand() % 5;

   }

        printf(" %s got %d out of 4 \n\n",name,i);

   return 0;

 }
