#include <iostream>
#include "Solver/SolverMechanics.hpp"
#include "Solver/SolverMechanicsBenchmark.hpp"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Solver<2>* solver;
    solver = new SolverMechanicsBenchmark<2>(1,2,3);
    solver->solve(10,20,30);
    return 0;
}
