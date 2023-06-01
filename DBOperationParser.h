#ifndef DBOPERATIONPARSER_H
#define DBOPERATIONPARSER_H

class DBOperation;

#define ADD_OPERATIONPARSER(classname) OperationParserCreateFn_T<classname

// way to define format for each specific for an operation (client and server side)
class I_DBOperationParser {
private:
	// nothing in here because this is an abstract, ya dingus!
public:
	I_DBOperationParser();
	virtual ~I_DBOperationParser();

	I_DBOperationParser(I_DBOperationParser& op);
	I_DBOperationParser operator=(I_DBOperationParser& op);

	virtual DBOperation ParseBuffer(char*);
};
typedef I_DBOperationParser* (*OperationParserCreateFn)(void);
template<typename T> I_DBOperationParser* OperationParserCreateFn_T();

// just an example
class DBSearchOperationParser : public I_DBOperationParser {
private:

public:
	DBSearchOperationParser();
	~DBSearchOperationParser();

	DBOperation ParseBuffer(char*) override;
};
I_DBOperationParser* CreateSearchOperationParser();


// char -> ptr (proper operation parser)

#endif