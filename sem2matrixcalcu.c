#include<stdio.h>                                          
int traspose()                                        //-------------------function for finding transpose------------------------------
{
	int a[5][5],i,j,m,n;	
    printf("Enter the  matrics  order m x n \n");
	scanf("%d%d",&m,&n);
    if(m==n)
    {
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);                                   //entering the matrix elements
	}	
		printf("Transpose is \n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",a[j][i]);    
		printf("\n");                                
	}
	printf("\n");	
    }
    else
    {
    	printf("ERROR");
	}
   return 0;  
}
int determinant(int num)
{                                            //-------------------function for finding determinant------------------------------
  int a[5][5],i,j,det=0,d1,d2,d3,m,n;	
	if(num==3)
	{	printf("\nEnter the matrix 2X2\n");
		m=2;n=2;                                                       //row=2 & col=2
    }
    else 
    {
    	printf("\nEnter the matrix 3X3\n");
    	m=3;n=3;                                                       //row=3 & col=3
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);                                     //entering the matrix elements
	}	
	if(n==2 && m==2 )
	{
	det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
	printf("Determinant\n");
	printf("determinant of 2x2 order = %d",det);  
	printf("\n");                                        //logica determinant for 2X2
	return 0;
	}
	else 
	{
	 d1=a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]));
	 d2=a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2]));                  //logica determinant for 3X3
	 d3=a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));	                      
	 det=d1-d2+d3;
	 printf("Determinant\n");
	 printf("determinant of 3x3 order = %d",det);
	 printf("\n");
	 return 0;
	}	
}
int matrixSum_sub(int num)
{                                                //-------------------------function for finding SUM and SUBTRACTION----------------------------
	int a[5][5],b[5][5],c[5][5],i,j;
	int n,m,p,q;
	printf("Enter the square matrics  order m x n \n");                 // m==n for square matrix 
	scanf("%d%d",&m,&n);
	if(m==n)                                                            // when m==n then SUM or SUBTRACTION can be done 
{
	printf("\nEnter the first matri\n");
	for(i=0;i<m;i++)                                                    //entering the first matrix element
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	printf("\nEnter the second matri\n");
	
	for(i=0;i<m;i++)                                                   //entering the second matrix element
	{
		for(j=0;j<n;j++)
		scanf("%d",&b[i][j]);
	}
}                                                                    
else
{
printf("ERROR\n");                                                        //if order is not m equal n then it return zero
return 0;	
}
if(num==1)
{
	printf("sum is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)                                                        
		{                                                            //logica for sum finding
		c[i][j]=a[i][j]+b[i][j];
		printf("%d\t",c[i][j]);
    	}
    	printf("\n");
	}
	printf("\n");
}
else

{  printf("sub is\n");
   for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{                                                           //logica for sub finding
		c[i][j]=a[i][j]-b[i][j];
		printf("%d\t",c[i][j]);
    	}
    	printf("\n");
	}
	printf("\n");
}
	return 0;
}
int matrixMul(int num)
{                                                      //------------------------------funcation for multiply of two matrix---------------------------
	int i,j,k,sum,a[50][50],b[50][50],c[50][50];
	int n,m,p,q;
	printf("Enter the A matrics  order m x n \n");
	scanf("%d%d",&m,&n);                                                //entering the order mXn n==p
	printf("Enter the B matrics  order p x q  \n");
	scanf("%d%d",&p,&q);
	if(n==p)
	{
	printf("Enter the matrics A order \n");
    for(i=0;i<m;i++) 
    {                                                                      //entering the A matrix elements
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);
		}    
	}
	printf("Enter the matrics B order 3x3\n");
    for(i=0;i<p;i++)
    {
    	for(j=0;j<q;j++)                                                //entering the B matrix elements
    	{
    		scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++) //m==row
	{
		for(j=0;j<q;j++)    //q==colume                                         
		{                                                            
		    sum=0;                                                //logica for multiply of two matrix
		    
			for(k=0;k<n;k++)  //colume                                    
			{
			 sum=sum+a[i][k]*b[k][j];	
			}
			c[i][j]=sum;
		}
	}
	printf("multiplication\n");
	for(i=0;i<m;i++)
    {
    	for(j=0;j<q;j++)
    	{
    		printf("%d\t",c[i][j]);                                //printing after multiply
		}
	    	printf("\n");
	}
	printf("\n");
	return 0;
}
else
{
	printf("ERROR");
}
}
int main()                                        // ------------------------------------------------main funcation---------------------------------------
{
  int num;

		
  printf("\t\t\t\t_______________________________________________\n");
  printf("\n");		
  printf("\t\t\t--------------------GEHU MATRIX CALCULATOR------------------");	        
  printf("\n\n");	
  printf("\t\t\t\t__________________MAIN MENU_____________________");
  printf("\n\n");	
    while(1)
{
  printf("[1] MATRIX ADDITION (M x N)\n\n");
  printf("[2] MATRIX SUBTRACTION (M x N)\n\n");                           
  printf("[3] MATRIX DETERMINANT (2 x 2)\n\n");
  printf("[4] MATRIX DETERMINANT (3 x 3)\n\n");
  printf("[5] MATRIX TRANSPOSE (M x N)\n\n");  
  printf("[6] MATRIX MULTIPLICATION (M x N)\n\n");
  printf("[0] EXIT \n\n");
  scanf("%d",&num);
  printf("\t\t\t___________________________________________________________\n");
  switch(num) 
  {
case 1:{ matrixSum_sub(num);break;}
case 2:{ matrixSum_sub(num);break;}
case 3:{ determinant(num);  break;}
case 4:{ determinant(num);  break;}
case 5:{ traspose(num);     break;}
case 6:{ matrixMul(num);    break;}
case 0:{ return 0 ;         break;}       
default : {printf("ERROR"); break;}
  }
}
  return 0;	
}
