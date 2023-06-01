#ifndef DBREQUESTINTERPRETER_H
#define DBREQUESTINTERPRETER_H


class I_DBClientRequestParser {
private:
	
public:
    I_DBClientRequestParser();
    virtual ~I_DBClientRequestParser();

    I_DBClientRequestParser(I_DBClientRequestParser& crp);
    I_DBClientRequestParser operator=(I_DBClientRequestParser& crp);

};

I_DBClientRequestParser* GetClientRequestParser();



#endif