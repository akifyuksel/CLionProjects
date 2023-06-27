#include <iostream>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    std::cout << "Calculate distance" << std::endl;

    string line;

    getline(cin, line);


    ss << line;


    string tmp;
    ss >> tmp;
    string tmpCleaned;
    for (char c : tmp) {
        if (c == '-' || isdigit(c)) {
            tmpCleaned += c;
        }
    }
    int x1;
    stringstream(tmpCleaned) >> x1;

    ss >> tmp;
    tmpCleaned = "";
    for (char c : tmp) {
        if (c == '-' || isdigit(c)) {
            tmpCleaned += c;
        }
    }
    int y1;
    stringstream(tmpCleaned) >> y1;

    ss >> tmp;
    tmpCleaned = "";
    for (char c : tmp) {
        if (c == '-' || isdigit(c)) {
            tmpCleaned += c;
        }
    }
    int x2;
    stringstream(tmpCleaned) >> x2;

    ss >> tmp;
    tmpCleaned = "";
    for (char c : tmp) {
        if (c == '-' || isdigit(c)) {
            tmpCleaned += c;
        }
    }
    int y2;
    stringstream(tmpCleaned) >> y2;

    double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    cout << x1 << ", " << x2 << ", " << y1 << ", " << y2 << ", " << endl;

// (25, 4), (12, 2)
    cout << distance << endl;

    return 0;
}
