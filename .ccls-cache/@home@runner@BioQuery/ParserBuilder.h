#ifndef PARSERBUILDER_H
#define PARSERBUILDER_H

class I_DBOperationParser;
class I_DBOperationRequestParser;

class ParserBuilder {
public:
	ParserBuilder() {}
	~ParserBuilder();
private:
	// make linked list out of these
	static I_DBOperationParser* g_OperationParsers;
	static I_DBOperationRequestParser* g_OperationRequestParsers;

};

#endif;