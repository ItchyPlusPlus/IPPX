

#ifndef FUNC_H_
#define FUNC_H_

namespace ippx {
union arg{
	std::string* s;
	int* i;
};

namespace func { //NS: ippx:stat


void say(ippx::arg*);


void shout(ippx::arg*);

void sayboth(ippx::arg*, ippx::arg*);

};

};



#endif /* FUNC_H_ */
