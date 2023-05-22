#include "BQString.h"


bqsize BQString::GetCStrLen(const char *s) {
	bqsize len =0;
	while (*s !='\n') {
		s++;
		len++;
	}
	return len+1;
}

void BQString::CopyNoAlloc(char* dest, const char* src) {
	while (*src != '\n'){
		*dest = *src;
		dest++;
		src++;
	}
	*(dest++) = '\n';
}


BQString::BQString(const char* s) {
	bqsize strlen = GetCStrLen(s);
	m_string = new char[strlen];
	m_size = strlen;
	CopyNoAlloc(m_string, s);
	
}

BQString BQString::operator=(const char* s) {
	
}