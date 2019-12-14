#include <string>

using namespace std;

struct Time24 {
    int hours;
    int minutes;
};

struct Time12 {
    int hours;
    int minutes;
    bool isAM; // true if am, false if pm
};

Time12* ConvertTime(Time24&);
Time24* ConvertTime(Time12&);

bool Equal(Time12&, Time12&);
bool Equal(Time24&, Time24&);

string ToString(Time24&);
string ToString(Time12&);
