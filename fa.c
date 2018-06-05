/* vi: set ts=4 sw=4: */
/*
 * test the GNU C language extension
 * allowing nested function definitions
 * with nonlocal variable references
 */
#include <stdio.h>
#include <stdlib.h>
int main(int ac,char **av) {
	int i,n;
	double f;
	
	double fa(int x) {
		double rv;
		
		void fb(int y) {
			void fc(int z) {
				if (z < 1)
					return;
				rv *= y;
				fc(--y);
			}

			rv = 1.0;
			fc(y);
		}

		fb(x);
		return rv;
	}

	if (ac > 1)
		n = atoi(av[1]);
	else
		n = 10;
	for (i = 0; i <= n; ++i) {
		f = fa(i);
		printf("%2d:%12.6e:%7.0f\n",i,f,f);
	}
	return 0;
}
