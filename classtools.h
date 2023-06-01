#define BASECLASS(theclass) typedef theclass baseclass

#define RULEOFTHREE(theclass) theclass();                                  \
							  theclass(const theclass& temp);              \
							  theclass operator=(const theclass& temp);
