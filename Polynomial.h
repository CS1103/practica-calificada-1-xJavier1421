//
// Created by ruben on 9/12/2019.
//

#ifndef POLINOMIO_POLINOMIO_H
#define POLINOMIO_POLINOMIO_H

#include <vector>
#include <string>
using namespace std;

class Polynomial {
private:
    vector<double>* xn;
    vector<int>* n;

public:
    Polynomial(){
        xn = new vector<double>();
        n = new vector<int>();
    }

    void Variable(double num){
        xn->push_back(num);
    }

    int Grado(int num){
        n->push_back(num);
        return num;
    }

    string SumadePolinomios(){

    }

    string MultiplicaciondePolinomios(){

    }

    string PotenciadePolinomios(){

    }

    ~Polynomial(){
        delete xn;
        delete n;
    }
};

#endif //POLINOMIO_POLINOMIO_H
