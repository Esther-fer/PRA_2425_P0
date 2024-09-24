#include <iostream>
#include "BrazoRobotico.h"
using namespace std;

BrazoRobotico::BrazoRobotico(double x,double y, double z, bool coger){
        this->x=x;
        this->y=y;
        this->z=z;
        this->coger=coger;
}
BrazoRobotico::~BrazoRobotico(){}
double BrazoRobotico::GetX(){
                return x;
}
double BrazoRobotico::GetY(){
        return y;
}
double BrazoRobotico::GetZ(){
        return z;
}
bool BrazoRobotico::GetCoger(){
        return coger;
}
void BrazoRobotico::coger(){
        coger=true;
}
void BrazoRobotico::soltar(){
        coger=false;
}
void BrazoRobotico::mover(double x,double y, double z){
        this->x=x;
        this->y=y;
        this->z=z;
}  