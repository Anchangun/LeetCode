#include "cl_solution.h"

int main() {
	cl_solution* m_sol = new cl_solution();

	m_sol->fn_run();
	delete m_sol;

	return 0;
}