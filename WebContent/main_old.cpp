#include <iostream>
#include "include/WebContent.h"
#include "include/OpenWeatherMap.h"


using namespace std;

int main2() {
    cout << "Hello World" << endl;
    WebContent WebContent1;
    WebContent1.setWebContentType(new OpenWeatherMap());
    DataBuffer DB = WebContent1.readWebContent();
    cout << "read webcontent OpenWeatherMap " << endl;
    cout << DB;
    return 0;
}
