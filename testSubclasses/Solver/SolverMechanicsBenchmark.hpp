#ifndef SOLVERMECHANICSBENCHMARK_HPP_INCLUDED
#define SOLVERMECHANICSBENCHMARK_HPP_INCLUDED

//#include "Solver.hpp"
#include "SolverMechanics.hpp"

typedef double RealType;
//class Model0D; // Model0D is *declared* to be a class, but that class is not yet defined

template<int dim>
class SolverMechanicsBenchmark : public SolidMechanicsSolver<dim>{
    public :
        SolverMechanicsBenchmark(RealType, RealType, RealType);
        void computeGradientOfVelocities(RealType);
        ~SolverMechanicsBenchmark(){ cout<<"Destructing derived \n"; }
    private :

};


template<int dim>
SolverMechanicsBenchmark<dim>::SolverMechanicsBenchmark(RealType a, RealType b, RealType c) : SolidMechanicsSolver<dim>(a, b, c){
    RealType p = a*b*c;
    cout << "product is " << p << endl;
}

template<int dim>
void SolverMechanicsBenchmark<dim>::computeGradientOfVelocities(RealType physicalTime){
    cout << "physical time is " << physicalTime << endl;
}



#endif // SOLVERMECHANICSBENCHMARK_HPP_INCLUDED
