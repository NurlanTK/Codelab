/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
#define N 4
#define M 4
main ()
{
  int a[N][M], i, j, k, id, max;
  int b[N*M], theta,y;
  bool test1=false,test2=false,test3=false;
  srand (time (NULL));
  for (i = 0; i < N; i++)
    {
      for (j = 0; j < M; j++)
	{
	  a[i][j] = rand () % 50 - 25;
	  printf ("%4d", a[i][j]);
	}
      printf ("\n");
    }
  printf ("\n");



theta = 0; 
for(i=0; i<N;i++)
{
    for (j = 0; j < M; j++)
{
    b[theta]=a[i][j];
    theta+=1;
}
}
for(i=0; i<theta-1;i++){
    for (j=0; j < theta-i-1; j++) {
            if (b[j] > b[j+1]) {
                y = b[j];
                b[j] = b[j+1];
                b[j+1] = y;
            }
        }
}


  for (i = 0; i < theta; i++)
    {
	  printf ("%4d", b[i]);
      
    }
 
 if(N>1 and M>1 and a !=NULL) {
 test1 = true;
     printf("\n");
     printf("Test for the acceptable input and array existing is = ",test1);
     
 }
 
 else printf("\nTest for the acceptable input is array existing is = ", test1);
 printf(test1 ? "true" : "false");  
 
 if(b[0]<b[theta]){
     test2 = true;
     printf("\n");
     printf("Test for array, being sorted properly is = ",test2);
 }
 else printf("\nTest for array, being sorted properly is = ",test2);
 printf(test2 ? "true" : "false");
 
}
