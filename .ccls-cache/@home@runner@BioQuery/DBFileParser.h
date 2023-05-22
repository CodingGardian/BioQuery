#ifndef DBFILEPARSER_H
#define DBFILEPARSER_H


class DBFileParser {
public:
	enum DBFileGroup_t { // do I need this?
		Fields,
		operation,
		keywords,
	};

private:
	// buffer to be parsed
	char* m_buffer;

	// need format to store info in memory
public:

};


#endif