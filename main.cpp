#include "./Logger/header/Logger.h"


int main(int argc, char** argv) {
	logger::LOG("A");
	logger::LogFormatter format;
	logger::Logger log(format);
	log.prepareLog("Ala");
	return 0;
}
