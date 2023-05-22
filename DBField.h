// using OOP instead of plain structs for fields would make things easier bc working low-level memory is always going to be painful and this can save me from a headache in the future, however the question is how can I do this in the most SIMPLE and EASIEST way possible

// a field is a way to represent information on the side of the DB
// A bunch of these make up context
#include "classtools.h"
#include <string>

class DBField {
public:
 // 64 bytes of data
	union fielddata {
		char byte[64];
		short tbyte[32];
		int quad[16];
		float fquad[16];
	};

	
private:
	const fielddata m_data;
public:

	DBField(fielddata data);
	DBField(char* data);
	virtual ~DBField();

	virtual void Constructor();
	fielddata getFieldData() {return m_data;}

	virtual DBField operator==(DBField&& field);
};


// input fields are anything on the DB that can recieve info, such as a checkbox, text field, button that reloads page, etc.
class DBInputField : public DBField {
private:
	
public:
	BASECLASS(DBField)
	virtual void write();
};
// implement DBInputField
//    #1: data describing field
//    #2: implement write function


// Read fields are exactly what they sound like, a representation of information from the DB that is read by the server
// These can contain pointers to memory of plain text, the number of entries for a protein, DNA sequence or other thing that the DB found, etc.
class DBReadField : public DBField {
private:

public:
	BASECLASS(DBField)
	virtual void read();
};

// implement DBReadField
//    #1: data describing field
//    #2: implement read function