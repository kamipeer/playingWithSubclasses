#ifndef SOLVERMECHANICS_HPP_INCLUDED
#define SOLVERMECHANICS_HPP_INCLUDED

#include "Solver.hpp"

typedef double RealType;
//class Model0D; // Model0D is *declared* to be a class, but that class is not yet defined

template<int dim>
class SolidMechanicsSolver : public Solver<dim>{
    public :
        SolidMechanicsSolver(RealType, RealType, RealType);
        virtual void computeGradientOfVelocities(RealType){};
        void solve(RealType, RealType, RealType);
        ~SolidMechanicsSolver(){ cout<<"Destructing derived \n"; }
    private :

};


template<int dim>
SolidMechanicsSolver<dim>::SolidMechanicsSolver(RealType a, RealType b, RealType c) : Solver<dim>(a, b, c){
//    RealType p = a*b*c;
//    cout << "product is " << p << endl;
}

template<int dim>
void SolidMechanicsSolver<dim>::solve(RealType alpha, RealType beta, RealType gamma){
    cout << alpha << "\t" << beta << "\t" << "\t" << gamma << endl;
    cout << "yeah solved" << endl;

    computeGradientOfVelocities(0.5);
}



#endif // SOLVERMECHANICS_HPP_INCLUDED
