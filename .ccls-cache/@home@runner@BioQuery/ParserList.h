#ifndef PARSERLIST_H
#define PARSERLIST_H

class I_DBOperationRequestParser;

class PushParserList {
private:

public:
	PushParserList();
	~PushParserList();

	PushParserList(PushParserList& l) = delete;
	
};

template<typename Type>
class PushOperationRequestParserList : public PushParserList {
private:

public:
	PushOperationRequestParserList(Type* parser);
	~PushOperationRequestParserList();
};

#endif