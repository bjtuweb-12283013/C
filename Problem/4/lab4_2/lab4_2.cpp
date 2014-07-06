// lab4_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "CodeForlab4.h"

int main(int argc, char* argv[])
{
    char cGender;
	double dHeight;
	scanf("%c",&cGender);
	scanf("%lf",&dHeight);
	StandardWeight(cGender,dHeight);
	return 0;
}
