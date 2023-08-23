#include "main.h"
/**
 * _putint_tochr - convert int to char using _putchar
 * @d: integer passed to function
*/
void _putint_tochr(int d) {
	if (d < 0) {
		_putchr('-');
		d = -d;
	}
	if (d == 0 ) {
		_putchr('0');
	} else {
		int r = 0;
		while (d > 0) {
			r = r * 10 + (d % 10);
			d /= 10;
		}
		while (r > 0) {
			_putchr('0' + (r % 10));
			r /= 10;
		}
	}
}
