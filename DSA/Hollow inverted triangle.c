#include <stdio.h>
int main()

{
int Row_no,Column_no,Total_rows;
printf ("\nEnter the Number of Rows :\n\n");
scanf ("%d",&Total_rows);
printf("\n");

for ( Row_no=1; Row_no<=Total_rows; Row_no++)
{
for (Column_no=1;Column_no< Row_no;Column_no++)
{
printf ("  ");
}

for (Column_no=Row_no;Column_no<=Total_rows;Column_no++)
{
if (Column_no==Total_rows|| Row_no==1||Column_no== Row_no)
{
printf ("* ");
}
else
{
printf("  ");
}
}

printf ("\n");
}

getch();

return 0;
}
