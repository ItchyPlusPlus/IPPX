#include "iostream";


/// \namespace ippx
/// @brief The main namespace for IPPX.
namespace ippx {

/// \namespace ippx::func
/// @brief static functions for blocks.
///
/// @details This namespace contains all of the static functions, called when a block is executed.
namespace func { //NS: ippx:stat

/// @brief prints the arg.
///
/// @details A test block that prints to stdout
///
/// @param [in] s the string to print
static void say(std::string* s) {
	std::cout << *s;
}

};

};
