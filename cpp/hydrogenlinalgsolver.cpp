#include "hydrogenlinalgsolver.h"

HydrogenLinAlgSolver::HydrogenLinAlgSolver(uint N_step, dbl R_max, dbl Z, uint l) :
    N_step(N_step - 1), R_max(R_max), Z(Z), l(l), R_min(0.), r(this->N_step), V(this->N_step) {
    // N_step decreased by one cause the first is trivial and causes problems (cf. DIV#0)
    // check R_max
    if (R_max <= 0) throw invalid_argument("R_max <= 0");
    // calculate h according to [week 3 slide 27]
    this->h = (this->R_max - this->R_min) / (double) (this->N_step + 1);
    // shift first position by one unit to avoid division by 0
    dbl x = this->R_min + this->h;
    // setup grids
    for (uint j = 0; j < this->N_step; ++j, x+= this->h) {
        // position space
        this->r[j] = x;
        // potential space
        this->V[j] = this->getV(x);
    }
    //cout << endl << this->r << endl << this->V << endl;

}

cx_double HydrogenLinAlgSolver::getV(dbl r) {
    double l2 = (double)l * (double)(l+1);
    return -this->Z/r + l2/(r*r);
}

void HydrogenLinAlgSolver::run() {
}
