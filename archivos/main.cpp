#include<iostream>

#include<fstream> // cabecera de la libreria fstream para incluir clases y funciones para la manipulación de archivos

using namespace std;

int main(){

    string fileA = "prueba.txt";
    string fileB = "./pruebas/prueba.txt";

    ifstream infile; //https://cplusplus.com/reference/fstream/ifstream/ 

                     // Clase ifstream para operar flujos de entrada de archivos 

    ofstream outfile;//https://cplusplus.com/reference/fstream/ofstream/

                     // Clase ofstream para operar flujos de salida de archivos 

    fstream file;    //https://cplusplus.com/reference/fstream/fstream/

                     // Clase fstream para operar flujos de entrada/salida de archivos


    infile.open(fileA, ifstream::in); // apertura de archivo de entrada al mismo nivel de directorio

    file.open(fileB, fstream::in | fstream::out); // apertura de archivo de entrada y salida, un nivel mas bajo.                

    if(!infile.is_open() || !file.is_open()){ // revisar fallo en apertura de archivos, 1 = abierto, 0 = fallo al abrir 

         cout<<"Estado de "<<fileA<<": "<<infile.is_open()<<" "<<"Estado de "<<fileB<<": "<<file.is_open();
         return 1;

    }

    string data;

    cout<< "Datos en: "<< fileA<<endl;
    while(infile.good()){ //lectura uno por uno de cada dato separado por espacio
       infile>>data;
       cout<<data<<endl;
    }

    cout<<endl;

    cout<< "Datos en: "<< fileB<<endl;

    while(file.good()){ //lectura uno por uno de cada dato separado por espacio
       file>>data;
       cout<<data<<endl;
    }

    //obtener tamaño de archivos

    cout<<endl;

    file.seekg(0, file.end); //Mover lector al fin del archivo
    infile.seekg(0, infile.end);

    int length = file.tellg();

    cout<< "Tamaño en "<< fileA<<": "<<length<<endl;

    length = infile.tellg();

    cout<< "Tamaño en "<< fileB<<": "<<length<<endl;

    file.seekg(0, file.beg); //Mover lector al inicio del archivo
    infile.seekg(0, infile.beg); 

    cout<<endl<<"lectura de 10 caracteres:"<<endl<<endl;

    char *buffer=new char[10]; // creacion de buffer para almacenar secuencias de caracteres

    file.read(buffer, 10); // lectura de 10 caracteres en archivo

    cout<<buffer<<endl;

    infile.read(buffer, 10);

    cout<<buffer<<endl;

    infile.close(); // cierre de archivo
    file.close();   //cierre de archivo
    return 0;
}