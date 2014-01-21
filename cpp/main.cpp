/**
 * Main exectution file
 *
 * @author Felix Hekhorn <felix.hekhorn@student.uni-tuebingen.de>
 **/

#include "types.h"
#include "hydrogenlinalgsolver.h"

using namespace std;

/**
 * @brief main
 * @param argc num of console arguments
 * @param argv console arguments
 * @return EXIT_SUCCESS if successfull
 */
int main(/*int argc, char **argv*/) {
    HydrogenLinAlgSolver app(100,10.);
    app.run();
    app.logV("./results/V.dat");

    //EXIT_FAILURE;
    return EXIT_SUCCESS;
}

