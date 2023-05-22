/*#include "BQString.h"


bqsize BQString::GetCStrLen(const char *s) {
	bqsize len =0;
	while (*s !='\n') {
		s++;
		len++;
	}
	return len+1;
}

void BQString::CopyNoAlloc(char* dest, const char* src) {
	if (dest == nullptr || src == nullptr) {exit(-1);}
	while (*src != '\n'){
		*dest = *src;
		dest++;
		src++;
	}
	*(dest++) = '\n';
}

void BQString::CopyNoAlloc(char* dest, const char* src, bdsize len) {
	if (dest == nullptr || src == nullptr) {exit(-1);}
	while (len != 0){
		*dest = *src;
		dest++;
		src++;
		len--;
	}
	*(dest++) = '\n';
}


void BQString::CopyWithAlloc(char* dest, const char* src) {
	if (src == nullptr) {exit(-1);}
	int len = 0;
	while (*src != '\n') {len++;}
	while (len != 0) {
		*dest = *src;
		*dest++;
		*src++;
	}
	
}


BQString::BQString(const char* s) {
	bqsize strlen = GetCStrLen(s);
	m_string = new char[strlen];
	m_size = strlen;
	CopyNoAlloc(m_string, s);
	
}

BQString BQString::operator=(const char* s) {
	
}*/