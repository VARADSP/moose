#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 15 /*MAX size of square */
void main()
{//construct a magic square,iteratively
int square[MAX_SIZE][MAX_SIZE];
int i,j,row,column;  //indexes
int count;        //conter
int size;   //square size
printf("Enter the size of the square: ");
scanf("%d",&size);
// No need for checks
for(i=0;i<size;i++)
for(j=0;j<size;j++)
square[i][j]=0;
square[0][(size-1)/2]=1;/*Middle of first row*/
/*i and j are current position*/
i=0;
j=(size-1)/2;
for(count=2;count<=size*size;count++)
row=(i-1<0)?(size-1):(i-1);//up
column=(j-1<0)?(size-1):(j-1);//left
if(square[row][column])//down
i=(++i)%size;
else{//square is unoccupied
i=row;
j=(j-1<0)?(size-1):--j;
}
square[i][j]=count;
}

//ouput time!
printf("Magic Square of size %d : \n\n", size);
for(i=0;i<size ; i++)
{
for(j=0;j<size;j++)
{
printf("%5d",square[i][j]);
printf("\n");

}
printf("\n\n");
getch();
}

