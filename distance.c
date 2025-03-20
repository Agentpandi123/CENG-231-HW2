/* Assigment 2: distance.c: Write a C program that computes the sum of two non-negative integer distances. Your program should prompt for the distances in miles, yards, feet, and inches for 2 distance values, then display the results. In addition, display each summed distance after it has been entered */
/* Author: Edison Lin */

#include <stdio.h>

/* main function */
int main()
{
	int i1, f1, y1, m1, i2, f2, y2, m2;
	int total_inches, miles, yards, feet, inches;
	int i3, f3, y3, i4, f4, y4, m3, y5;
	int i5, i6, f5, f6, f7, f8, y6, y7, y8, m4;

	printf("Please enter two distance values m1, y1, f1, i1, m2, y2, f2, and i2. \n");
	printf("i1: ");
	scanf("%d", &i1);
	printf("f1: ");
	scanf("%d", &f1);
	printf("y1: ");
	scanf("%d", &y1);
	printf("m1: ");
	scanf("%d", &m1);

	i4 = i1 / 12;
	i3 = i1 % 12;

	f3 = f1 + i4;
	f4 = f3 % 3;
	f5 = f3 / 3;

	y3 = y1 + f5;
	y4 = y3 % 1760;
	y5 = y3 / 1760;	

	m3 = m1 + y5;

	printf("Distance 1 is %d miles, %d yards, %d feet, %d inches.\n", m3, y4, f4, i3);

        printf("i2: ");
        scanf("%d", &i2);
        printf("f2: ");
        scanf("%d", &f2);
        printf("y2: ");
        scanf("%d", &y2);
        printf("m2: ");
        scanf("%d", &m2);

        i5 = i2 / 12;
        i6 = i2 %  12;

        f6 = f2 + i5;
        f7 = f6 % 3;
	f8 = f6 / 3;

        y6 = y2 + f8;
        y7 = y6 % 1760;
        y8 = y6 / 1760;

        m4 = m2 + y8;

	printf("Distance 2 is %d miles, %d yards, %d feet, %d inches.\n", m4, y7, f7, i6);

	total_inches = (m1 * 63360 + y1 * 36 + f1 * 12 + i1) + (m2 * 63360 + y2 * 36 + f2 * 12 + i2);

	miles = total_inches / 63360;
    	total_inches = total_inches % 63360;

    	yards = total_inches / 36;
    	total_inches = total_inches % 36;

   	feet = total_inches / 12;
    	inches = total_inches % 12;

	printf("The sum of the distances is %d miles, %d yards, %d feet, and %d inches.\n", miles, yards, feet, inches);

	return 0;
}
