#include "DBRequest.h"

typedef int errcode;

class I_DBDescriptor {
public:
	enum DBType {
		WEBSITE=0, // speaking directly through a website
		INTERFACE, // through an API or other like BLAST
		LOCAL, // data is stored locally
		OTHER,
	};

private:
	DBType m_dbtype;
	// (reference or pointer to) RequestMapper for DB

public:
	I_DBDescriptor();
	~I_DBDescriptor();

	I_DBDescriptor operator=(I_DBDescriptor&& dbdesc);
	I_DBDescriptor(I_DBDescriptor&& dbdesc);

	
};