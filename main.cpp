#include <iostream>
#include <fstream>
#include <string>
#include "head.h"
using namespace std;

int main(){
    car taxi;
    int a;
    while(true){
        cout << "What do u want to do?\n1 - Show data\n2 - Find smth\n3 - Add new car\n4 - Del smth\n5 - Edit data\n6 - Exit\n";
        cin >> a;
        switch(a){
        case 1:{//display
              taxi.display();
              break;}
            case 2:{//find
              taxi.find();
              break;}
            case 3:{//add
                taxi.add();
                break;}
            case 4://del
              taxi.del();
              break;
            case 5://redact
              taxi.redact();
              break;
            case 6://exit
              return 0;
              break;
            default:
              break;
        }
    }
        return 0;
}
