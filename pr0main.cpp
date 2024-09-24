#include<iostream>
#include"BrazoRobotico.h"                                                
using namespace std;             
int main(){
        BrazoRobotico b1(0,0,0,false);
        cout<<"X:"<<b1.getX()<<"/n Y:"<<b1.GetY()<<"/n z:"<<b1.GetZ()<<"/n agarrando: "<<b1.GetCoger();
        b1.mover(1.5,2.0,1.0);
        b1.coger();
        cout<<"X:"<<b1.getX()<<"/n Y:"<<b1.GetY()<<"/n z:"<<b1.GetZ()<<"/n agarrando: "<<b1.GetCoger();
        return 0;
}