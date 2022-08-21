#include <iostream>
using namespace std;

int main()
{
    int zipCode = 93705;
    
    switch (zipCode) {
    case 93705:
    case 93706:
        routeNumber = 1;
        break;
    case 93710:
    case 93720:
        routeNumber = 2;
        break;
    default:
        routeNumber = 0;
        break;
    }
}