#include<stdio.h> 

int main()
{
    
    int eng[5],math[5],phy[5],total[5],per[5];
    int i;

    for(i=0; i<5; i++)
    {
    
        printf("Enter %d students marks : \n",i + 1);

        printf("Enter eng marks : ");
        scanf("%d",&eng[i]);

        printf("Enter math marks : ");
        scanf("%d",&math[i]);

        printf("Enter phy marks : ");
        scanf("%d",&phy[i]);

        total[i]=eng[i] + math[i] + phy[i];

        per[i]=total[i]*100/300;

    } 

    printf("\n No. \t eng \t math \t phy \t total \t per \t \n");

     for(i=0; i<5; i++)
    {
     
           printf("\n %d \t %d \t %d \t %d \t %d \t %d \t ",i + 1,eng[i], math[i], phy[i], total[i], per[i]);

           if(per[i] <= 35)
           {
                   
               printf("Student is fail");
           
           }
           else if(per[i] >= 90)
           {

               printf("Grade A");

           }
           else if(80 <= per[i] < 90)
           {

               printf("Grade B");

           }
           else if(70 <= per[i] < 80)  
           {

                printf("Grade C");

           }
           else if(60 <= per[i] < 70)
           {

                 printf("Grade D");
           }
           else
           {
                
                 printf("Grade E");

           }   
    }   

    return 0;
}
