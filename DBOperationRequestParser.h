#ifndef DBOPERATIONREQUESTPARSER_H
#define DBOPERATIONREQUESTPARSER_H

class DBOperation;

class I_DBOperationRequestParser {
private:

public:
	I_DBOperationRequestParser();
	~I_DBOperationRequestParser();

	I_DBOperationRequestParser(const I_DBOperationRequestParser& orp);
	I_DBOperationRequestParser operator=(const I_DBOperationRequestParser& orp);

	virtual DBOperation ParseBuffer(char* buffer);
};

#endif