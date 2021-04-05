#include "classe.hpp"

int main(){

  Poligono p1;
  p1.altura();
  p1.base();

  Retangulo ret1;
  ret1.areaRet();
  ret1.perimetroRet();
  cout<<"Area do Retangulo: "<<areaRet<<endl;
  cout<<"Perimetro dO Retangulo: "<<perimetroRet<<endl;

  Triangulo tri1;
  tri1.altura;
  tri1.base;
  tri1.AreaTri();

  Circulo circ1;
  circ1.raio;
  circ1.AreaCirc();
  cout<<"Area do Circulo: "<<AreaCirc<<endl;

  Cone cone1;
  cone1.altura;
  cone1.AreaCirc();

  Paralelepipedo parale1;
  parale1.Comprimento;
  parale1.VolumeParale();


  return 0;
}
