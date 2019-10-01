#pragma once
#include <exception>
#include <fmod/fmod_common.h>

class c_Audio_Exception_FMOD :
	public std::exception
{
public:
	c_Audio_Exception_FMOD(FMOD_RESULT result);
	
	virtual const char* what() const throw ();

	static void throwIfError(FMOD_RESULT result);

private:
	c_Audio_Exception_FMOD();
	FMOD_RESULT m_result;
};

