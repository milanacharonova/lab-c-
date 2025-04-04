#include <iostream>
#include <fstream>
#include <string>

using namespace std;
        class car{
        string _brand;
        string _model;
        int _km;
        string _cu;
    public:
        car()=default;
        car(string brand, string model, int km, string cu);
        friend istream &  operator >>(istream & in, car &p);
        friend ostream & operator <<(ostream & out, car &p);
        void display();
        void find();
        void add();
        void del();
        void redact();

};

