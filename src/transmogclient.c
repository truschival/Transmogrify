
/*****************************************************************************/
/**
 * \file
 * \brief	transmogclient main executable
 */
/*****************************************************************************/

#include <stdio.h>

#include "transmog/transmog.h"


int main(int argc, char* argv[])
{
	int a = 5;
	int b = 7;
	printf("This is %s\n trying to transmogrify a=%d b=%d \n", argv[0], a, b);

	printf(" -> tmg_transmogrify(a) = %d \n",tmg_transmogrify(a));
	printf(" -> tmg_foo(a,b) = %d \n",tmg_foo(a,b));

    return 0;
}
