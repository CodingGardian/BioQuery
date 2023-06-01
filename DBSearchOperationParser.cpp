#include "DBOperationParser.h"
#include "DBOperation.h"

DBSearchOperationParser::DBSearchOperationParser() {/*TODO*/}

I_DBOperationParser* CreateSearchOperationParser() {DBSearchOperationParser* parser = new DBSearchOperationParser;
																									 return dynamic_cast<I_DBOperationParser*>(parser);}

DBOperation DBSearchOperationParser::ParseBuffer(char* buffer) {
	// TODO	
}