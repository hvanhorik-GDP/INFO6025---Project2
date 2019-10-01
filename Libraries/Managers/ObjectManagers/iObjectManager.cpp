#include "iObjectManager.h"

// We need this dummy operator in case classes don't override this method.
std::ostream& operator<<(std::ostream& stream, const iObjectManager& val)
{
	stream << "Got to iObjectManager by accident" << std::endl;
	return stream;
}
