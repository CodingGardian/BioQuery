#include "DBOperationParser.h"

// make this linked list
OperationParserCreateFn* g_ParserList;

template<typename T> 
I_DBOperationParser* OperationParserCreateFn_T() {T* ptr = new T; return dynamic_cast<I_DBOperationParser*>(ptr);}



// make startup function that takes list of parsers and adds its creation function to the list!!!

// have a function that can map strings like "Search" that describe operations to their coresponding parser