#ifndef DBOPERATIONINTERPRETER_H
#define DBOPERATIONINTERPRETER_H

// interpreting client requests
class I_DBOperationInterpreter {
private:
	
public:
	I_DBOperationInterpreter() = delete;
	virtual ~I_DBOperationInterpreter();

	I_DBOperationInterpreter(const I_DBOperationInterpreter& oi) = delete;
	I_DBOperationInterpreter operator=(const I_DBOperationInterpreter& oi) = delete;

	// virtual (*what to return*) InterpretBuffer(char* buffer)
	
};


#endif