#ifndef SOLVER_HPP_INCLUDED
#define SOLVER_HPP_INCLUDED
#include <vector>
#include <iostream>
using namespace std;

typedef double RealType;


template <int dim>
class Solver{
    public:
        Solver(RealType, RealType, RealType);
        virtual void solve(RealType, RealType, RealType){};

        virtual ~Solver(){ cout<<"Destructing base \n";}

    protected:
        RealType deltaT;

        RealType symPlaneX1;
        RealType symPlaneX2;

        RealType inletPlaneX1;
        RealType inletPlaneX2;

        RealType outletPlaneX1;
        RealType outletPlaneX2;

    private:
};

template <int dim>
Solver<dim>::Solver(RealType a, RealType b, RealType c){
    cout << "a + b + c" << a + b + c << endl;
}

#endif // SOLVER_HPP_INCLUDED
