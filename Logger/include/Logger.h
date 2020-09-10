#ifndef _LOGGER_H_
#define _LOGGER_H_

#include "LogFormatter.h"

namespace logger {

void LOG(const char * text);

class Logger {
public:
	Logger() = delete;
	Logger(LogFormatter & formatter);
	const char * prepareLog(const char * text);
private:
	LogFormatter & mLogFormatter;
};

}

#endif // _LOGGER_H_

