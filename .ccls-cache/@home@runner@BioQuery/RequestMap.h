#ifndef REQUESTMAP_H
#define REQUESTMAP_H

// maps client requests to commands & fields 
class DBRequestMapper {
private:
	// keywords to fields & commands
	// operations to keywords (multiple per operation)

public:
	DBRequestMapper();
	~DBRequestMapper();

	DBRequestMapper(DBRequestMapper& rm);

	DBRequestMapper operator=(DBRequestMapper& rm);

	// void MapRequest(Operation, Keyword, additional stuff)
	
};



#endif