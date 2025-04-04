#include <iostream>
#include <fstream>
#include <string>
#include "head.h"
using namespace std;
void car::display(){
    string line;
    ifstream file("data.txt");
    if (file.is_open()){
        cout << "-------------------------------" <<endl;
        while (getline (file, line)){
            cout << line << endl;
        }
        file.close();
        cout << "-------------------------------" <<endl;
        return;
    }
    else{
        cout << "Cant open file" << endl;
        return;
    }}
void car::find(){
    int flag = 0;
    ifstream file("/home/egor-popelnitskiy/test/data.txt");
    if (file.is_open()){
        int ch;
        cout << "Choose what to search\n1 - Brand\n2 - Model\n3 - KM\n4 - Current user\n" << endl;
        cin >> ch;
        switch(ch){
        case 1:{
            cout << "Type brand:";
            string brand;
            cin >> brand;
            cout << "-------------------------------" <<endl;
            string line;
            while (file >> _brand >> _model >> _km >> _cu) {
                if (brand == _brand){
                    cout << _brand << " " << _model << " " << _km << " " << _cu << endl;
                    flag = 1;
                }
            }
            if(flag == 0){
                cout << "Nothing found :(" << endl;
            }
            cout << "-------------------------------" <<endl;
            file.close();
            break;
        }
        case 2:{
            cout << "Type model:";
            string model;
            cin >> model;
            cout << "-------------------------------" <<endl;
            string line;
            while (file >> _brand >> _model >> _km >> _cu) {
                if (model == _model){
                    cout << _brand << " " << _model << " " << _km << " " << _cu << endl;
                    flag = 1;

                }

            }
            if(flag == 0){
                cout << "Nothing found :(" << endl;
            }
            cout << "-------------------------------" <<endl;
            file.close();
            break;
        }
        case 3:{
            cout << "Type KM:";
            int KM;
            cin >> KM;
            cout << "-------------------------------" <<endl;
            string line;
            while (file >> _brand >> _model >> _km >> _cu) {
                if (KM == _km){
                    cout << _brand << " " << _model << " " << _km << " " << _cu << endl;
                    flag = 1;

                }

            }
            if(flag == 0){
                cout << "Nothing found :(" << endl;
            }
            cout << "-------------------------------" <<endl;
            file.close();
            break;
        }
        case 4:{
            cout << "Type Current User:";
            string cu;
            cin >> cu;
            cout << "-------------------------------" <<endl;
            string line;
            while (file >> _brand >> _model >> _km >> _cu) {
                if (cu == _cu){
                    cout << _brand << " " << _model << " " << _km << " " << _cu << endl;
                    flag = 1;

                }
            }
            if(flag == 0){
                cout << "Nothing found :(" << endl;
            }
            cout << "-------------------------------" <<endl;
            file.close();
            break;
        }
        default:{
            break;
        }

        }
    }
    else{
        cout << "Cant open file";
    }}
void car::add(){
    cout << "Enter brand of car: ";
    cin >> _brand;
    cout << "Enter model of car: ";
    cin >> _model;
    cout << "Enter how many km did car ride: ";
    cin >>_km;
    cout << "Enter current user of car: ";
    cin >> _cu;
    ofstream file("/home/egor-popelnitskiy/test/data.txt", ios::app);
    if (file.is_open()){
        file << _brand << " " << _model << " " << _km << " " << _cu;
    }
}
void car::del(){
    int count = 0;
    ifstream file("/home/egor-popelnitskiy/test/data.txt");
    if (file.is_open()){
        while (file >> _brand >> _model >> _km >> _cu) {
            count++;
        }
    }
    else{
        cout << "Cant open file :(" << endl;
    }
    car *arr = new car[count];
    cout << "-------------------------------" <<endl;
    ifstream f("/home/egor-popelnitskiy/test/data.txt");
    if (f.is_open()){
        for(int i = 0; i < count; i++){
            f >> arr[i]._brand >> arr[i]._model >> arr[i]._km >> arr[i]._cu;
            cout << i << ")" << " " << arr[i]._brand << " " << arr[i]._model << " " << arr[i]._km << " " << arr[i]._cu << endl;
        }}
    else{
        cout << "Cant open file :(" << endl;
    }
    f.close();
    file.close();
    cout << "-------------------------------" <<endl;
    cout << "Enter number of line u want to del: ";
    int num;
    cin >> num;
    ofstream file1("/home/egor-popelnitskiy/test/data.txt");
    if (file1.is_open()){
        for(int i = 0; i < count; i++){
            if(i == num){
            }else{
                file1 << arr[i]._brand << " " << arr[i]._model << " " << arr[i]._km << " " << arr[i]._cu << "\n";
            }
        }
    }
    else{
        cout << "Cant open file :(" << endl;
    }


}
void car::redact(){
    int count = 0;
    ifstream file("/home/egor-popelnitskiy/test/data.txt");
    if (file.is_open()){
        while (file >> _brand >> _model >> _km >> _cu) {
            count++;
        }
    }
    else{
        cout << "Cant open file :(" << endl;
    }
    car *arr = new car[count];
    cout << "-------------------------------" <<endl;
    ifstream f("/home/egor-popelnitskiy/test/data.txt");
    if (f.is_open()){
        for(int i = 0; i < count; i++){
            f >> arr[i]._brand >> arr[i]._model >> arr[i]._km >> arr[i]._cu;
            cout << i << ")" << " " << arr[i]._brand << " " << arr[i]._model << " " << arr[i]._km << " " << arr[i]._cu << endl;
        }}
    else{
        cout << "Cant open file :(" << endl;
    }
    f.close();
    file.close();
    cout << "-------------------------------" <<endl;
    cout << "Enter number of line u want to edit: ";
    int num;
    cin >> num;
    cout << "Enter brand of car: ";
    cin >> _brand;
    cout << "Enter model of car: ";
    cin >> _model;
    cout << "Enter how many km did car ride: ";
    cin >>_km;
    cout << "Enter current user of car: ";
    cin >> _cu;
    ofstream file1("/home/egor-popelnitskiy/test/data.txt");
    if (file1.is_open()){
        for(int i = 0; i < count; i++){
            if(i == num){
                file1 << _brand << " " << _model << " " << _km << " " << _cu << "\n";
            }else{
                file1 << arr[i]._brand << " " << arr[i]._model << " " << arr[i]._km << " " << arr[i]._cu << "\n";
            }
        }
    }
    else{
        cout << "Cant open file :(" << endl;
    }
}
