#ifndef FILEPARSER_H
#define FILEPARSER_H
#include <map>
#include <string>
#include <vector>

class I_Parser {
private:

public:
	virtual ~I_Parser();

	virtual I_Parser operator=(I_Parser& fp);
	virtual I_Parser operator=(const I_Parser& fp);
	

};


#endif