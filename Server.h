#ifndef SERVER_H
#define SERVER_H

// representation of a server in code, this can be a DB, or in the case of HostServer, this can be us
class I_Server {
private:

public:
	virtual ~I_Server();

	I_Server() = delete;

	virtual I_Server operator=(const I_Server& s);
	virtual I_Server operator=(I_Server& s);
};



#endif