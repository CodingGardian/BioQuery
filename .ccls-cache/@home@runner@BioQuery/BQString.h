typedef int bqsize;

class BQString {
private:
	char* m_string;
	bqsize m_size;

public:
	BQString(const char* s);
	~BQString();

	static bqsize GetCStrLen(const char* s);

	static void CopyNoAlloc(char* dest, const char* src);
	static void CopyNoAlloc(char* dest, const char* src, bqsize len);

	static void CopyWitAlloc(char* dest, const char* src);
	static void CopyWithAlloc(char* dest, const char* src, bqsize len);

//#define DEFAULT_VERIFY_LENGTH 100
	//static void VerifyString(const char* s, bqsize len = 100);

	void Append(char*);
	void Erase();

	BQString operator=(const char* s);
	BQString operator=(BQString s);
	BQString operator[](int pos);

	
	

}