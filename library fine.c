//program to calculate the fine for overdue library books
/*
program to calculate the fine for overdue library books
Author:Derrick Maina 
Reg.no:CT101/G/22604/24
Date:2/10/2024
*/
//preprocessor-scanf(), printf()
#include<stdio.h>
int main () {
                       int BookId;
                       int duedate;
                       int returndate;
                       
                       printf("enter the bookId\n");
                       scanf("%d",&BookId);
                       printf("enter the duedate\n");
                       scanf("%d",& duedate);
                       printf("enter the returndate\n");
                       scanf("%d,& returndate");
                       
                       int daysoverdue;
                       int finerate;
                       int fineamount;
                       
                       daysoverdue=returndate-duedate;
                       
if(daysoverdue>0 && daysoverdue <=7)
     {fineamount=20*daysoverdue;
     printf("%d\n", fineamount);
     }
 else if(daysoverdue>7 && daysoverdue <=14)
        {fineamount=50*daysoverdue;
        printf("%d\n", fineamount);
        }
   else if(daysoverdue>14)
   {fineamount=100*daysoverdue;
   printf("%d\n", fineamount); } ;
   
   printf("finerate:%d\n", finerate);
   printf("fineamount:%d\n", fineamount);
   
   printf("daysoverdue:%d\n", daysoverdue);
   return 0;
   }        
                       