#ifndef CLASSE_HPP
#define CLASSE_HPP

#include <iostream>

using namespace std;

class Poligono{
//atributos
protected: //Encapsulamento de Atributos como privados
    float base, altura;
public: // Definição de métodos públicos
    Poligono();//deafult - nada
    Poligono(float base, float altura);

    float getBase(); //gettter para encpasulamenyo
    void setBase(float x); //setter para encapsulamento
    float getAltura(); //gettter para encpasulamenyo
    void setAltura(float y); //setter para encapsulamento
};
// --------------------------------------- 2D ----------------------------------
// ---------- RETANGULO ---------
class Retangulo : public Poligono { // H
public:
    Retangulo(float base, float altura);
    float areaRet();
    float perimetroRet();
};
// ---------- TRIANGULO ---------//
class Triangulo : public Poligono {
public:
    Triangulo(float base, float altura);
    float AreaTri();
};
// ---------- QUADRADO ---------//
class Quadrado : public Poligono {
public:
    Quadrado(float base, float altura);
    float AreaQua();
};
// ---------- CIRCULO ---------//
class Circulo {
protected:
    float raio;
public:
    Circulo(float raio);
    float AreaCirc();
    double pi = 3.1415;
};
 //--------------------------------- 3D -------------------------------------- //
// ---------- ESFERA ---------//
class Esfera : public Circulo{
public:
    Esfera(float raio);
    float AreaEsfera();
    float VolumeEsfera();
};

// ---------- CONE ---------//

class Cone: public Circulo {
protected:
    float altura;

public:
    Cone(float altura, float raio);
    float VolumeCone();
};

// ---------- PARALELEPIPEDO ---------//

class Paralelepipedo: public Poligono{
private:
    float Comprimento;

public:
    Cubo(float base, float altura, float Comprimento);
    float AreaParale();
    float VolumeParale();
};


#endif // CLASSE_HPP
