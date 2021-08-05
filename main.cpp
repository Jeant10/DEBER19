#include <iostream>

using namespace std;

int main() {

  string lugar;
  int num,d,c,contador=0,s1=0;
  float t1=0,t2=0,conectores,precio,costo,gasto,ganancia,pagar;
  cout<<"\t\t***EMPRESA ELECTROCABLES***\t"<<endl;
  cout<<"Ingrese el nombre del lugar de instalacion"<<endl;
  cin>>lugar;
  cout<<"Ingrese el numero de puntos de red que van a ser instalados"<<endl;
  cin>>num;
  do
  {
    cout<<"Punto de red #"<<contador+1<<endl;
    cout<<"Ingrese la distancia entre el conector del punto de red hasta el equipo de conectividad:"<<endl;
    cin>>d;
    cout<<"Ingrese el numero de conectores para el punto de red"<<endl;
    cin>>c;
    contador += 1;
    s1 += c;
    t1+= d*c;

  }while(contador<num);

  t2=t1+(t1*0.05);

  conectores=((s1*0.15)+(s1*0.35))*contador;

  costo=t1*0.9;

  precio=conectores+conectores*0.15;

  gasto=costo+precio;

  ganancia=gasto*0.45;

  pagar=ganancia+gasto;

  cout<<"\nEl detalle de la instalacion es la siguiente"<<endl<<endl;
  cout<<"La distancia total del cable utilizado en la instalacion es: "<<t2<<endl;
  cout<<"El costo del cable segun la categoria 5e es: "<<costo<<endl;
  cout<<"El precio total de los conectores RJ45 (hembra y macho) es: "<<precio<<endl;
  cout<<"El total del material utilizado es: "<<gasto<<endl;
  cout<<"La ganancia es: "<<ganancia<<endl;
  cout<<"El total a pagar por su instalacion es: "<<pagar<<endl;

  return 0;
}
