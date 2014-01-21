#ifndef HYDROGENLINALGSOLVER_H
#define HYDROGENLINALGSOLVER_H

#include "types.h"

/**
 * Defines the main class for solving standard hydrogen waveequation via eigenwertsolver
 *
 * Solves the standard hydrogen waveequation by using the eigenwertequation
 * uses at all times natural units
 *
 * @author Felix Hekhorn <felix.hekhorn@student.uni-tuebingen.de>
 **/
class HydrogenLinAlgSolver {
private:
    /**
     * @brief N_step
     * number of parts to divide position space
     */
    uint N_step;

    /**
     * @brief R_max
     * cutoff in position space > 0
     */
    dbl R_max;

    /**
     * @brief Z
     * (effective) charge of system
     */
    dbl Z;

    /**
     * @brief l
     * angular momentum
     */
    uint l;

    /**
     * @brief R_min
     * near cutoff in position space = 0
     */
    dbl R_min;

    /**
     * @brief h
     * finite element in position space, calculated via h = (R_max - R_min) / N_step
     */
    dbl h;

    /**
     * @brief r
     * position space grid
     */
    vec r;

    /**
     * @brief V
     * potential grid
     */
    cx_vec V;

    /**
     * @brief return potential at given pos
     * @param r position
     * @return V(r)
     */
    cx_double getV(dbl r);

public:
    /**
     * @brief constructor
     * @param N_step
     * @param R_max
     * @param Z
     * @param l
     */
    HydrogenLinAlgSolver(uint N_step, dbl R_max, dbl Z = 1., uint l = 0);

    /**
     * @brief solves the problem
     */
    void run();

    /**
     * @brief logV
     * loggs the potential to a file
     * @param path targetpath of file
     */
    void logV(str path);
};

#endif // HYDROGENLINALGSOLVER_H
