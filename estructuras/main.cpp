#include<iostream>

using namespace std;

//creacion de una estructura, tipo de dato compuesto por diferentes tipos de datos

struct Persona{ //nombre de la estructura
    string nombre; //miembro de la estructua
    int edad;
    float peso;
    float altura;
};

struct Punto{
    double x;
    double y;
} punto; //otra forma de crear variables de la estructura correspondiente

int main()
{
    Persona persona = {"Marco Polo", 123, 123.4, 1.23}; // creacion de variable de tipo persona con valores estaticos;
    Punto punto2 = {12.3, 14}; // punto es diferente de punto2

    //Impresion de datos
    //cout<<persona; no es valido

    cout<<persona.nombre<<endl;
    cout<<persona.edad<<endl;
    cout<<persona.peso<<endl;
    cout<<persona.altura<<endl<<endl;

    //tamaño de estructura en bytes

    cout<<sizeof(Persona)<<endl<<endl;


    cout<<"ingresar valor X y Y de punto"<<endl<<endl;

    cin>>punto.x; // guardar valores en los miembros de la estructura
    cin>>punto.y;

    cout<<endl;

    cout<<"Valor de X p1: "<<punto.x<<" Valor de Y p1: "<< punto.y<<endl<<endl;
    cout<<"Valor de X p2: "<<punto2.x<<" Valor de Y p212: "<< punto2.y<<endl;

    //comparaciones entre estructuras y paso de valor

    punto=punto2; // paso de valor

    cout<<endl;

    cout<<"Valor de X p1: "<<punto.x<<" Valor de Y p1: "<< punto.y<<endl<<endl;

    if(punto.x == punto2.x && punto.y == punto2.y){ //Se deben de comparar los valores de los miembros para diferenciar estructuras
        cout<<"PUNTOS IGUALES"<<endl;
    }
    else
    {
         cout<<"PUNTOS DIFERENTES"<<endl;
    }
    

    return 0;
}
