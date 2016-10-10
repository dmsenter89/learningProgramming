#include "pfin.h"

double comp_interest(const double &C0, const double &time, const double &I)
/* Function that calculates compound interest.
 *	INPUT:	- C0: the initial amount of money invested
 *			- time: the amount of time the money is invested for
 * 			- I: the interest rate gained per unit of time
 *	OUTPUT: - Cn: money at the end of time
*/
{
	double Cn = C0*pow(1.0+I/100.0, time);
	return Cn;
}