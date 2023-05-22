gc#include "DBField.h"


class DBTextInputField : public DBInputField {
private:
	std::string m_write;
public:
	BASECLASS(DBInputField)
	void write();
	void setWrite(std::string m_write);
};


class DBToggleField : public DBInputField {
private:
	bool m_write;
public:
	BASECLASS(DBInputField)
	void write();
	void setWrite(bool write);
};

