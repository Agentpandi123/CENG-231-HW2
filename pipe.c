/* Assignment 2: pipe.c. Write a program that calculates the volume of a hollow cylinder pipe. See Figure 1. Your program should ask for the length (height of the pipe) L, inner (r) and outer radius (R) of the pipe, and then */
/* output the thickness (R-r) and the volume of the pipe. You may assume that pi = 3.14159 and use floating point variables. */
/* Author: Edison Lin */

#include <stdio.h>

/* main function */

int main(void)
	{
		float L, r, R, thickness, volume, oarea, iarea, csarea, tsarea, rarea;
		const float pi = 3.14159;

		printf("Please enter the inner radius of the pipe (r): ");
		scanf("%f", &r);
		printf("Please enter the outer radius of the pipe (R): ");
		scanf("%f", &R);
		printf("Please enter the length of the pipe (L): ");
		scanf("%f", &L);

		thickness = R - r;
		volume = pi * L * ((R * R) - (r * r));
		oarea = 2 * pi * R * L;
		iarea = 2 * pi * r * L;
		csarea = (pi * ((R * R) - (r * r)));
		rarea = csarea * 2;
		tsarea = (oarea + iarea) + (2 * csarea);

		printf("The thickness of the pipe is: %2f\n", thickness);
		printf("The volume of the pipe is: %2f\n", volume);
		printf("Surface area of the inner pipe: %2f\n", iarea);
		printf("Surface area of the outer pipe: %2f\n", oarea);
		printf("Surface area of the rings: %2f\n", rarea);
		printf("The total surface area of the pipe: %2f\n", tsarea);

		return 0;
	}

