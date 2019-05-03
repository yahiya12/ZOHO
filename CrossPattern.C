
/*  To print the following pattern

Z        	      Z             
 O           O
  H         H
   O       O
    C     C
     O   O
      R R
       P
      O O
     R   R
    A     A
   T       T
  I         I
 O           O
N             N                   */
                
 #include<stdio.h>
int main()
{
int i,j;
char str[50]="ZOHOCORPORATION";
int length=0;
while(str[length]!='\0')
length++;
for(i=0;i<length;i++)
{
for(j=0;j<length;j++)

{
if(j==i||j==(length-i-1))
{

printf("%c",str[i]);
}
else
{
printf(" ");
}
}
printf("\n");
}

return 0;
}
