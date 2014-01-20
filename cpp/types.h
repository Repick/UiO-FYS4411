/**
 * Types.h
 * defiens types and shortcuts
 * @author Felix Hekhorn <felix.hekhorn@student.uni-tuebingen.de>
 */

#ifndef Types_H_
#define Types_H_

#include <stdlib.h>
#include <complex>
#include <string>
#include <exception>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <armadillo>

using namespace std;
using namespace arma;

typedef unsigned int uint;
typedef double dbl;
typedef complex<double> cmplx;
typedef string str;

/**
 * exception wrapper to provide Exception(string)
 * @author Felix Hekhorn <felix.hekhorn@student.uni-tuebingen.de>
 */
class Exception : public exception {
	str msg;
public:
	Exception(str msg) : msg(msg) {}
	const char* what() const throw() { return this->msg.c_str(); }
	virtual ~Exception() throw(){}
};

/**
 * trim fake
 * @param str string as reference
 */
inline void trim(str& str) {
	str::size_type pos = str.find_last_not_of(" \t\r\n");
	if(pos != string::npos) {
		str.erase(pos + 1);
		pos = str.find_first_not_of(" \t\r\n");
		if(pos != string::npos) str.erase(0, pos);
	}
	else str.erase(str.begin(), str.end());
}

#endif // Types_H_
