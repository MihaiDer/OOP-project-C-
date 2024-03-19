

#ifndef OOP_LAB11_12_PURCHASE_H
#define OOP_LAB11_12_PURCHASE_H

#include <iostream>
#include <string>
using namespace std;


class Purchase: public exception{
private:
    string message;
public:
    Purchase(string message): message(message){};

    const char* what() const noexcept override{
        return "Fonduri insuficente!";
    }

};


#endif //OOP_LAB11_12_PURCHASE_H
