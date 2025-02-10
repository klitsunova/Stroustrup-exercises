#include <cmath>
#include <iostream>
#include <string>

/* answers format:
1. pure declaration
2. definition
3. definition with initialization (only for variables)*/

extern char ch_ext;
char ch;
char ch2 = 'a';

extern std::string s_ext;
std::string s;
std::string s2 = "value";

extern int count_ext;
int count;
int count2 = 1;

extern const double pi_ext;
// const double pi;         error: const object must me initialized if not 'extern'
const double pi2 = 3.14;

extern const char* name_ext;
const char* name; 
const char* name2 = "Njal";

extern const char* season_ext [];
const char* season [];
const char* season2 [] = { "spring", "summer", "fall", "winter"};

struct Date;
struct Date{int d, m, y; };

int day (Date*);
int day (Date* p) {return p->d;}

double sqrt (double);
double sqrt (double num) {return pow(num, 0.5);}

template<class T> T abs (T a);
template<class T> T abs (T a) {return (a < 0) ? -a; a; }

class S;
class S2 {int s;};

typedef S S3; // declares, but does not define S3 (S may be incomplete)
typedef bool BoolType; 

struct User;
struct User {std::string name; std::string password;};

enum Beer;
enum Beer {Carlsberg, Tuborg, Thor};

// namespace requires definition; there is no forward/pure declaration for it
namespace NS { int a; } 
