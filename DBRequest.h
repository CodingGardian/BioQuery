#ifndef REQUESTTYPE_H
#define REQUESTTYPE_H
#include <vector>
#include "DBField.h"

// contains what commands need in order to execute
// non-specific, can be used with any command
// 
class DBContext {
private:
	// make this a class!!!
	void* DBBuffer; // all of the data that is sent to server from DB on connection (yeah but how much???)
public: 
	DBContext(void* buffer);
	virtual ~DBContext();
	DBContext(DBContext&& context);

	virtual void Constructor();

	virtual DBContext& operator=(DBContext&& context);

	
};

class I_DBCommand {
private:
	
public:

	virtual char RunCommand(); // making char because might need error codes

};

class I_DBRequest { // how the request will be made to the DB from the server (this is a base class)
private:
	//std::vector<I_DBCommand> m_commands;
public:
	virtual I_DBCommand GetNextCommand();	

};

#endif