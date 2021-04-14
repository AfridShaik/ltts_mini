#include<stdio.h>
#include"../inc/funtion.h"


/**
 * @brief internals_calculation calculate the internals marks which are for 40 marks
 * @author AfridShaik
 * 
 * @param a 
 * @param b 
 * @param c 
 * @param aa 
 * @param bb 
 * @param cc 
 * @param dd 
 * @param ee 
 * @param att 
 * @return int value of calculation of the all the student marks
 */
int internal_calculation(int a,int b,int c,int aa,int bb,int cc,int dd,int ee,int att)
{
	return ((a + b + c)/5)+(((aa + bb + cc + dd + ee)*18)/50) + att;
}

/**
 * @brief total_marks_calculation funtion sum the both internals and externals
 *  marks and return the sum of the both numbers and validate in marks_input 
 * @author AfridShaik
 * @param a 
 * @param b 
 * @return int 
 */
int total_marks_calculation(int a,int b)
{
	return a+b;
}