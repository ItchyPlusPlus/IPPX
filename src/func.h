

#ifndef FUNC_H_
#define FUNC_H_

namespace ippx {
union arg{
	std::string* s;
	int* i;
	arg* a[];
};

namespace func { //NS: ippx:stat


ippx::arg* say(ippx::arg*);


ippx::arg* shout(ippx::arg*);

ippx::arg* sayboth(ippx::arg*, ippx::arg*);

ippx::arg* ask(ippx::arg*);
};

};



#endif /* FUNC_H_ */
