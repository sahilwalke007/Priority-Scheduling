#include<stdio.h>
#include<stdin.h>
int i,t,j,n;           //variable declaration  int 
B_T[10],p_no[10],bill[10]; //B_T=brust time ,p_no ProcessNumber  
 float cost;  
  
 void billfn()              //bill generation  
    {    	    
      printf( "STUDENT_NO\t\tTOTAL GIFTS PURCHASED\t\tBILL\n\n");   
  
    for (i = 0; i < n; i++)   
   {   
             	printf("STUDENT NO. = %d \t\t" ,p_no[i]);         printf("%d \t\t\t",B_T[i]);         bill[i]= cost * B_T[i];           //Calculating Cost            printf("%d \t\t\t",bill[i]);              printf("\n");  
       }  
    }  
  
void get() //List of gifts taken by students  (Entered Value by User)  
   {  
  
     printf("\n\n");  
     printf("******************ENTERED 
DATA*****************\n\n");  printf( "\nSTUDENT 
NO.\t\tNO.OF GIFTS PURCHASED \n");   
  
    for (i = 0; i < n; i++)    
      {   
      printf("STUDENT NO. = %d \t\t" ,p_no[i]);   //Process To       printf("%d \t\t\t",B_T[i]);                  //Brust Time           printf("\n\n");  
      }   
 }  
  
void sorting()    //Arrangement of students according to no of gifts chosen   
   {   
     
 printf("**********ORDER 	OF BILLED 	STUDENTS************* 
\n\n");     for(i=0;i<n;i++)  
          {  
      	      for(j=i+1;j<n;++j)  
  	     {  
            if(B_T[i]<B_T[j])                               //student with max no of gifts is given priority  
  	  	  	{  
                t=B_T[i];                        //swapping the values   
                        B_T[i]=B_T[j];                         B_T[j]=t;                         t=p_no[i];           //t is temporary variable                         p_no[i]=p_no[j];              //swapping the process no's                         p_no[j]=t;  
                    }  
                 }  
}          }  
  
  
int main()   
{          
     system("color 4f"); //for dark red background and white text color  
 printf("ENTER THE NO OF STUDENTS WHO PURCHASE  
GIFT :- ");  // Process number initialization      scanf("%d",&n);      printf("ENTER THE COST OF ONE GIFT :- ");      scanf("%f",&cost);       printf("***************ENTER THE NUMBER OF GIFTS CORRESPONDING TO EACH STUDENT *************");         for(i=0;i<n;i++)  
          {  
              printf("\nSTUDENT_NO[%d] \n",i+1);               
printf("ENTER THE NUMBER OF GIFTS PURCHASED  
:");//User input data               scanf("%d",&B_T[i]);               p_no[i]=i+1;           
//Its process number   
          }  
             get();         sorting();         billfn();         printf("\n");      printf("This is how the PRIORITY SCHEDULLING works."); }  
 
