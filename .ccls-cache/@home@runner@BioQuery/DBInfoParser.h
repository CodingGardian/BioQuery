#ifndef DBFILEPARSER_H
#define DBFILEPARSER_H


class DBRequestMapper;

// me thinks we might need to create fields here and pass them around as a shared object for speed

// RAII might be pretty helpful here :)

// #1 Create request mapper
// #2 Parse fields
// #3 Parse request map
//     - for each operation in file get the creation function and create the operation parser using a map (keywords -> fields & commands)
//     - add each operation to the request mapper (do not copy, must add memory stuff for efficiency)

class DBInfoParser {
private:
	// buffer to be parsed
	char* m_buffer;

	// need format to store info in memory
	// std::vector<std::string> m_fields;
	// std::map<DBOperation_t, (*way to indicate list of keywords*)> m_operationMap;
public:
	DBInfoParser(char* buffer);
	~DBInfoParser();

	DBInfoParser(const DBInfoParser& fp);

	DBInfoParser operator=(const DBInfoParser& fp);

	void ParseFile(char* buffer);
	void ParseFile();
	
};


#endif