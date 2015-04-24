#include <stdio.h>
/*
 numeric distance calculator
 short little program for calculating the distance between a bunch of numbers
 either input them by hand or pipe 'em from a file with
     $ echo file.txt | ./distance 
 the license is needlessly long for this, but oh well
*/

/*
 Copyright (c) 2015 Brenden Deeal
 
 Permission is hereby granted, free of charge, to any person obtaining
 a copy of this software and associated documentation files (the
 "Software"), to deal in the Software without restriction, including
 without limitation the rights to use, copy, modify, merge, publish,
 distribute, sublicense, and/or sell copies of the Software, and to
 permit persons to whom the Software is furnished to do so, subject to
 the following conditions:
 
 The above copyright notice and this permission notice shall be included
 in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

//abs -- calculate absolute value
int abs(int v) {
	if (v < 0) { v=-v; }
	return v;
}

//main -- main loop
int main() {
	//i - user input
	//last - last number typed
	//total - total distance
	//result - last calculated distance
	//first - if more than one number has been entered
	int i=0,last=0,total=0,first=0,result=0;
	printf("distance calculator -- ^C to end\n");
	//loop forever
	do {
		//get input
		printf("> ");
		scanf("%d", &i);
		//if this isn't the first input, calculate distance
		if (first != 0) {
			total+=result=abs(i-last);
			printf("result: %d (%d)\n", total,result);
		}
		last=i;
		first=1; //there's a number in last, so distance can be calculated now
	} while (1);
	return 0;
}
