#ifndef REQUESTTYPE_H
#define REQUESTTYPE_H
#include <vector>
#include <vector>



class I_DBCommand {
private:
	
public:

	virtual char RunCommand(); // making char because might need error codes


};

class I_DBRequest { // how the request will be made to the DB from the server (this is a base class)
private:
	std::vector<I_DBCommand> m_commands;
	
public:
	virtual I_DBCommand GetNextCommand();	

};

#endif