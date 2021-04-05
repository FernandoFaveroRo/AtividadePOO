#include "classe.hpp"

// ---------- POLIGONO ---------//

Poligono::Poligono(){
    this->base = 0.0;
    this->altura = 0.0;
}
Poligono::Poligono(float x, float y){
    this->base = x;
    this->altura = y;
}
float Poligono::getBase(){
    return this->base;
}
float Poligono::setBase(float x){
    this->base = x;
}
float Poligono::getAltura(){
    return this->altura;
}
void Poligono::setAltura(float y){
    this->altura = y;
}

// ---------- RETANGULO ---------//

float Retangulo::areaRet {
    this->areaRet = base * altura;
}
float Retangulo::perimetroRet {
    this->perimetroRet = 2 * (base + altura);
}

// ---------- TRIANGULO ---------//

float Triangulo::AreaTri {
    this->AreaTri = (base * altura) / 2;
}

// ---------- QUADRADO ---------//

float Quadrado::AreaQua {
    this->AreaQua = base * altura;
}

// ---------- CIRCULO ---------//

Circulo::Circulo(){
    this->raio = 0.0;
}
void Circulo::Circulo(float raio){
    this->raio = raio;
}
float Circulo::getRaio(){
    return this->raio;
}
void Circulo::setRaio(float r){
    this->raio = r;
}
float Circulo::AreaCirc(float raio) {
    this->AreaCirc = pi * pow(raio,2);
}

// ---------- ESFERA ---------//

float Esfera::AreaEsfera(float raio){
    this->AreaEsfera = 4 * pi * pow(raio,2);
}
float Esfera::VolumeEsfera(){
    this->VolumeEsfera = 4 * (pi * pow(raio,3))/3;
}

// ---------- CONE ---------//

Cone::Cone(){
    this->altura = 0;
}
float Cone::getAltura(){
    return this->altura;
}
void Cone::setAltura(float altura){
    this->Altura = Altura;
}
float Cone::VolumeCone(){
    this->VolumeCone = (pi * pow(raio, 2) * altura) / 3
}

// ---------- PARALELEPIPEDO ---------//

Paralelepipedo::Paralelepipedo(){
    this->Comprimento = 0;
}
float Cone::getComprimento(){
    return this->altura;
}
void Cone::setComprimento(float Comprimento){
    this->Comprimento = Comprimento;
}

float Paralelepipedo::AreaParale(){
    this->AreaParale = 2* ((area*base) + (area*comprimento) + (base * comprimento));
}
float Paralelepipedo::VolumeParale(){
    this->VolumeParale = base * altura * comprimento;
}

