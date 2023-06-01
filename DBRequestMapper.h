#ifndef REQUESTMAP_H
#define REQUESTMAP_H
#include "classtools.h"
class InfoParser;

// maps keywords to commands and fields (used to translate client request to runtime action)
class DBKeywordMapper{
private:
	// keywords to fields & commands
	// operations to keywords (multiple per operation)

public:
	RULEOFTHREE(DBKeywordMapper)

	static DBKeywordMapper* MakeKeywordMapper(InfoParser& ip);
	
	// void MapRequest(Operation, Keyword, additional stuff)
	
};
#endif