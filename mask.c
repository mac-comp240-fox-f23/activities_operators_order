/*
 * Starter code: for testing building and using binary masks
 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


// in this file
unsigned int least1x_most3y(unsigned int x, unsigned int y);
void testit(unsigned int x, unsigned int y, unsigned int expected);

int main() {
	unsigned int x;
	unsigned int y;
	
	unsigned int test;
	
	// test x 0, y something else with distinctive bytes
	x = 0x00;
	y = 0xabcdefff;
	test = least1x_most3y(x,y);
	assert(test == 0xabcdef00);
	
	// NOTE: notice how using the additional function provided below
	//       makes each test a 1-liner.
	//       This next one is equivlaent to that above.
	testit(0x0, 0xabcdefff, 0xabcdef00);
	
	// devise other tests here
	
	return 0;
}

/**
 * returns an unsigned value that contains the 3 most significant bytes
 * of y followed by the least significant byte of x.
 * 
 * TODO: complete this function
 */
unsigned int least1x_most3y(unsigned int x, unsigned int y) {
	unsigned int mask;
	// TODO: Complete this function to
	
	
	return 0;  // TODO: replace the 0 with the correct expression
}

/*
 * A way to reuse a common set of code used in tests.
 */
void testit(unsigned int x, unsigned int y, unsigned int expected) {
	unsigned int test = least1x_most3y(x,y);
	assert(test == expected);
}
