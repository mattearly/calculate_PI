#include <iostream>

static long num_steps = 100000;
double step;
void main() {
	int i;
	double x=0.0,pi=0.0,sum=0.0;
	step = 1.0/(double)num_steps;

	for (i=0;i<num_steps;i++) {
		x = (i+0.5)*step;
		sum += 4.0/(1.0+x*x);
	}

	pi = step * sum;

	std::cout << pi << "\n";
}
