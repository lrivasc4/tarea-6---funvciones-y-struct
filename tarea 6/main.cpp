//
//  main.cpp
//  tarea 6
//
//  Created by Luis Rivas on 2/04/24.
//

#include <iostream>
using namespace std;

int suma(int num1,int num2,int num3);
void suma(int &num1,int &num2){

    int resultado = 0;
    num1+=1;
    num2+=1;
    resultado = num1+num2;
    cout<<resultado<<endl;

}
/*
int suma(int num1,int num2){

    int resultado = 0;
    resultado = num1+num2;
    return resultado;

}

int resta(int num1,int num2){

    int resultado = 0;
    resultado = num1-num2;
    return resultado;

}
*/

int main() {
    int a=10,b = 20;

    suma(a,b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;


    return 0;
}
