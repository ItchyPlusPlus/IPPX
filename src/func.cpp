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
void say(ippx::arg* s) {
	std::cout << *s->s << std::endl;
}

/** @breif prints the arg
 *
 * @details A test block that prints "SHOUT!" to stdout and adds a std::endl
 *
 * @param [in] s the string to print
 */
void shout(ippx::arg* s) {
	std::cout << "SHOUT!" << *s->s << std::endl;
}

void sayboth(ippx::arg* s, ippx::arg* j) {
	std::cout << "SAYBOTH!" << *s->s << *j->s;
}

};

};
