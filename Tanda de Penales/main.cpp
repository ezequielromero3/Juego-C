#include "miniwin.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;
using namespace miniwin;

class Jugador
{
public:
    string nombre;
    int goles=0;
    int iter=0;
    void set_nombre (string nom)
    {
        this->nombre=nom;
    }
    string get_nombre()
    {
        string nom;
        nom=this->nombre;
        return nom;
    }

};

class Local : public Jugador
{
public:
    void patear(Local &jug, int goles, int iter)
    {

        do
        {
            int es_gol;
        srand(time(NULL));
            es_gol=rand()%6;
            if(jug.iter%5)
        {
            system("cls");
        }
            switch (es_gol)
            {
            case 0:
                cout<<"SENEEEMEEE\nSe adelantó el arquero! Se repite el penal"<<endl;
                cout<<jug.get_nombre()<<ends<<"Goles:"<<jug.goles<<ends<<"Intentos:"<<jug.iter<<endl;
                color(BLANCO);
                linea(50, 100, 250, 100);
                linea(50, 100, 50, 200);
                linea(250, 100, 250, 200);
                color(AZUL);
                circulo(300, 250, 25);
                refresca();
                system("pause");
                borra();
                refresca();
                break;
            case 1:
                cout<<"¡NO LO CANTE, NO LO GRITE, NO SE ABRACE!!!!\nPalo y afuera!"<<endl;
                jug.iter++;
               cout<<jug.get_nombre()<<ends<<"Goles:"<<jug.goles<<ends<<"Intentos:"<<jug.iter<<endl;
                color(BLANCO);
                linea(50, 100, 250, 100);
                linea(50, 100, 50, 200);
                linea(250, 100, 250, 200);
                color(AZUL);
                circulo(40, 185, 25);
                refresca();
                system("pause");
                borra();
                refresca();
                break;
            case 2:
                cout<<"GOYCO VIEJO Y PELUDO NOMAAAS!!\nTapó el arquero lo que parecía un gol cantado"<<endl;
                jug.iter++;
                cout<<jug.get_nombre()<<ends<<"Goles:"<<jug.goles<<ends<<"Intentos:"<<jug.iter<<endl;
                color(BLANCO);
                linea(50, 100, 250, 100);
                linea(50, 100, 50, 200);
                linea(250, 100, 250, 200);
                color(AZUL);
                circulo(130, 98, 25);
                refresca();
                system("pause");
                borra();
                refresca();
                break;
            case 3:
                cout<<"GOOOOOOOOOOOOL!!!!\nEl travesaño evita que la pelota se vaya y toda la hinchada festeja!!"<<endl;
                jug.iter++;
                jug.goles++;
                cout<<jug.get_nombre()<<ends<<"Goles:"<<jug.goles<<ends<<"Intentos:"<<jug.iter<<endl;
                color(BLANCO);
                linea(50, 100, 250, 100);
                linea(50, 100, 50, 200);
                linea(250, 100, 250, 200);
                color(AZUL);
                circulo(100, 115, 25);
                refresca();
                system("pause");
                borra();
                refresca();
                break;
            case 4:
                cout<<"LO TIENE EL ARQUEROOOO!\nGOOOOOOOOOOOOL!!\nParecía que el arquero la sacaba pero sólo pudo desviarla"<<endl;
                jug.iter++;
                jug.goles++;
               cout<<jug.get_nombre()<<ends<<"Goles:"<<jug.goles<<ends<<"Intentos:"<<jug.iter<<endl;
               color(BLANCO);
               linea(50, 100, 250, 100);
                linea(50, 100, 50, 200);
                linea(250, 100, 250, 200);
                color(AZUL);
                circulo(65, 140, 25);
                refresca();
                system("pause");
                borra();
                refresca();
                break;
            case 5:
                cout<<"GOOOOOOLAAAAZOOOOOOO!!!!!!!!!\nLa pelota para un lado, el arquero para el otro. De manual!"<<endl;
                jug.iter++;
                jug.goles++;
                cout<<jug.get_nombre()<<ends<<"Goles:"<<jug.goles<<ends<<"Intentos:"<<jug.iter<<endl;
                color(BLANCO);
                linea(50, 100, 250, 100);
                linea(50, 100, 50, 200);
                linea(250, 100, 250, 200);
                color(AZUL);
                circulo(225, 190, 25);
                refresca();
                system("pause");
                borra();
                refresca();
                break;
            }
        }
        while(jug.iter<5);

    }
};

class Visitante : public Jugador
{
public:
    void patear(Visitante &jug, int goles, int iter)
    {

        do
        {
            int es_gol;
        srand(time(NULL));
            es_gol=rand()%6;
            system("cls");

            switch (es_gol)
            {
            case 0:
                cout<<"SENEEEMEEE\nSe adelantó el arquero! Se repite el penal"<<endl;
                cout<<jug.get_nombre()<<ends<<"Goles:"<<jug.goles<<ends<<"Intentos:"<<jug.iter<<endl;
                color(BLANCO);
                linea(50, 100, 250, 100);
                linea(50, 100, 50, 200);
                linea(250, 100, 250, 200);
                color(ROJO);
                circulo(300, 250, 25);
                refresca();
                system("pause");
                borra();
                refresca();
                break;
            case 1:
                cout<<"¡NO LO CANTE, NO LO GRITE, NO SE ABRACE!!!!\nPalo y afuera!"<<endl;
                jug.iter++;
               cout<<jug.get_nombre()<<ends<<"Goles:"<<jug.goles<<ends<<"Intentos:"<<jug.iter<<endl;
               color(BLANCO);
                linea(50, 100, 250, 100);
                linea(50, 100, 50, 200);
                linea(250, 100, 250, 200);
                color(ROJO);
                circulo(40, 185, 25);
                refresca();
                system("pause");
                borra();
                refresca();
                break;
            case 2:
                cout<<"GOYCO VIEJO Y PELUDO NOMAAAS!!\nTapó el arquero lo que parecía un gol cantado"<<endl;
                jug.iter++;
                cout<<jug.get_nombre()<<ends<<"Goles:"<<jug.goles<<ends<<"Intentos:"<<jug.iter<<endl;
                color(BLANCO);
                linea(50, 100, 250, 100);
                linea(50, 100, 50, 200);
                linea(250, 100, 250, 200);
                color(ROJO);
                circulo(130, 98, 25);
                refresca();
                system("pause");
                borra();
                refresca();
                break;
            case 3:
                cout<<"GOOOOOOOOOOOOL!!!!\nEl travesaño evita que la pelota se vaya y toda la hinchada festeja!!"<<endl;
                jug.iter++;
                jug.goles++;
                cout<<jug.get_nombre()<<ends<<"Goles:"<<jug.goles<<ends<<"Intentos:"<<jug.iter<<endl;
                color(BLANCO);
                linea(50, 100, 250, 100);
                linea(50, 100, 50, 200);
                linea(250, 100, 250, 200);
                color(ROJO);
                circulo(100, 115, 25);
                refresca();
                system("pause");
                borra();
                refresca();
                break;
            case 4:
                cout<<"LO TIENE EL ARQUEROOOO!\nGOOOOOOOOOOOOL!!\nParecía que el arquero la sacaba pero sólo pudo desviarla"<<endl;
                jug.iter++;
                jug.goles++;
                cout<<jug.get_nombre()<<ends<<"Goles:"<<jug.goles<<ends<<"Intentos:"<<jug.iter<<endl;
                color(BLANCO);
                linea(50, 100, 250, 100);
                linea(50, 100, 50, 200);
                linea(250, 100, 250, 200);
                color(ROJO);
                circulo(65, 140, 25);
                refresca();
                system("pause");
                borra();
                refresca();
                break;
            case 5:
                cout<<"GOOOOOOLAAAAZOOOOOOO!!!!!!!!!\nLa pelota para un lado, el arquero para el otro. De manual!"<<endl;
                jug.iter++;
                jug.goles++;
                cout<<jug.get_nombre()<<ends<<"Goles:"<<jug.goles<<ends<<"Intentos:"<<jug.iter<<endl;
                color(BLANCO);
                linea(50, 100, 250, 100);
                linea(50, 100, 50, 200);
                linea(250, 100, 250, 200);
                color(ROJO);
                circulo(225, 190, 25);
                refresca();
                system("pause");
                borra();
                refresca();
                break;

            }
        }
        while(jug.iter<5);

    }
};

void nombrar (Jugador &jug)
{
    string nombre;
    cout<<"Ingrese el nombre del jugador:"<<ends;
    fflush(stdin);
    getline(cin, nombre);
    jug.set_nombre(nombre);

}

 void mostrar(Jugador &jug)
    {
        cout<<endl<<jug.get_nombre()<<endl<<"Goles: "<<jug.goles<<endl;
    }

void ganador(Jugador &jug, Jugador &jug_)
{
    if(jug.goles>jug_.goles)
        cout<<"\nGanador: "<<jug.get_nombre()<<ends<<"FELICITACIONES!!!!"<<endl;
    else if(jug.goles<jug_.goles)
        cout<<"\nGanador: "<<jug_.get_nombre()<<ends<<"FELICITACIONES!!!!"<<endl;
        else
            cout<<"\nGanador por ventaja deportiva: "<<jug_.get_nombre()<<ends<<"FELICITACIONES!!!!"<<endl;
}

int main()
{
    vredimensiona(500,300);
    setlocale(LC_CTYPE, "Spanish");
    cout << "¡Bienvenido a Tanda de Penales!" <<endl;
    cout<<"Este maravilloso juego necesita dos jugadores,"<<endl;
    cout<<"números aleatorios y suerte!"<<endl;
    cout<<"Gana quien mete más goles en 5 intentos,\npero el visitante tiene ventaja deportiva y gana los empates!!"<<endl<<endl;
    Local jug1;
    cout<<"Empezamos con el local"<<endl;
    nombrar(jug1);
    mostrar(jug1);
    Visitante jug2;
    cout<<"\nAhora el visitante"<<endl;
    nombrar(jug2);
    mostrar(jug2);
    cout<<"\nEmpecemos a patear!!\nPrimero el local"<<endl;
    system("pause");
    system("cls");
    jug1.patear(jug1, 0, 0);
    system("cls");
    cout<<"Ahora el visitante"<<endl;
    system("pause");
    jug2.patear(jug2, 0, 0);
    mostrar(jug1);
    mostrar(jug2);
    ganador(jug1, jug2);
    system("pause");
    vcierra();
    return 0;
}
