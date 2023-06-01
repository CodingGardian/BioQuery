#ifndef DBOPERATIONPARSER_H
#define DBOPERATIONPARSER_H

class DBOperation;

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

I_DBOperationParser* GetDBOperationParser(const char* opstr); // input operation in here and get a parser

// just an example
class DBSearchOperationParser : public I_DBOperationParser {
private:

public:
	DBSearchOperationParser();
	~DBSearchOperationParser();

	DBOperation ParseBuffer(char*) override;
};


// char -> ptr (proper operation parser)

#endif