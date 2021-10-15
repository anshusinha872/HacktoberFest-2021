#include <stdio.h>
void main()
{

static int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int sum;

int addnum(int *ptr);
sum = addnum(array);

printf("\nSum of All the Elements of Array by Passing an Array as a Pointer = %d\n", sum);

getch();

return 0;

}

int addnum(int *ptr)

{
int index,total=0;

for (index=0; index<10; index++)
{
total += *(ptr+index);
}

return(total);
}