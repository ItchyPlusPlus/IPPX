#include <iostream>;

#include "func.h";


/// \namespace ippx
/// @brief The main namespace for IPPX.
namespace ippx {

/// \namespace ippx::func
/// @brief static functions for blocks.
///
/// @details This namespace contains all of the static functions, called when a block is executed.
namespace func { //NS: ippx:stat

/** @brief prints the arg.
*
* @details A test block that prints to stdout and adds a std::endl
*
* @param [in] s the string to print
*/
ippx::arg* say(ippx::arg* s) {
	std::cout << *s->s << std::endl;
	return NULL;
}

/** @breif prints the arg
 *
 * @details A test block that prints "SHOUT!" to stdout and adds a std::endl
 *
 * @param [in] s the string to print
 */
ippx::arg* shout(ippx::arg* s) {
	std::cout << "SHOUT!" << *s->s << std::endl;
	return NULL;
}

ippx::arg* sayboth(ippx::arg* s, ippx::arg* j) {
	std::cout << "SAYBOTH!" << *s->s << *j->s;
	return NULL;
}

ippx::arg* ask(ippx::arg* a) {
std::cout << *a->s << std::endl;
ippx::arg* inpt = new ippx::arg;
inpt->s = new std::string();
std::cin >> *inpt->s;
return inpt;
}

};

};
