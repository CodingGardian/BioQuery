#ifndef DBFILEPARSER_H
#define DBFILEPARSER_H


class DBInfoParser {
public:
	enum DBOperation_t {Search,};

	const char* operation_map_sa[] = {"Search"};

private:
	// buffer to be parsed
	char* m_buffer;

	// need format to store info in memory
	// std::vector<std::string> m_fields;
	// std::map<DBOperation_t, (*way to indicate list of keywords*)> m_operationMap;
public:
	DBInfoParser(char* buffer);
	~DBInfoParser();

	DBInfoParser(DBInfoParser& fp);

	DBInfoParser operator=(DBInfoParser& fp);

	void ParseFile(char* buffer);
	void ParseFile();

	// need to have seperate class to load info into
	// class DBRequestMapper {...};
	// DBRequestMapper MakeRequestMap();
	// void LoadRequestMap(RequestMapper& rm);
	
};


#endif