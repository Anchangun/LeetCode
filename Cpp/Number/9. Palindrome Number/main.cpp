#include"cl_solution.h"
int main() {
	cl_solution* sol= new cl_solution();
	sol->fn_run();

	delete sol;

	return 0;
}