#include "c_Audio_Exception_FMOD.h"
#include <sstream>
#include <iostream>

c_Audio_Exception_FMOD::c_Audio_Exception_FMOD(FMOD_RESULT result)
	: std::exception()
	, m_result(result)
{
}

const char* c_Audio_Exception_FMOD::what() const throw ()
{
	std::stringstream ss;
	ss << "FMOD exception: Value = " << m_result;
	static std::string msg = ss.str();
	return msg.c_str();
}

void c_Audio_Exception_FMOD::throwIfError(FMOD_RESULT result)
{
	if (result != FMOD_OK) {
		std::cout << "FMOD error: " << result << std::endl;
		throw c_Audio_Exception_FMOD(result);
	}
}
