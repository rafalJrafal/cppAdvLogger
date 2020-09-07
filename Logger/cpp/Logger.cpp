#include <iostream>

#include "Logger.h"

namespace logger {

using std::cout;
using std::endl;

void LOG(const char * text) {
	cout << text << endl;
}

Logger::Logger(LogFormatter & formatter) : mLogFormatter(formatter) {
}

const char * Logger::prepareLog(const char * text) {
	return text;
}

}
