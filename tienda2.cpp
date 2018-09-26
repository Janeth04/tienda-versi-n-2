#include <iostream>
#include <conio.h>
using namespace std;
  struct libro{
      char nombre[30];
      float precio;
      struct libro *ptr;
  } libro1, libro2, *inicio;
  int main (int argc, char** argv){
      inicio=&libro1;
      inicio->ptr=&libro2;
      cout<<"Precio de libro 1 ";
      cin>>inicio->precio;
      cout<<"Nombre del libro 1 ";
      cin.getline(inicio->nombre,30,'\n');
      cin.getline(inicio->nombre,30,'\n');
      cout<<"Precio del libro 2 ";
      cin>>inicio->ptr->precio;
      cout<<"Nombre del libro 2 ";
      cin.getline(inicio->nombre,30,'\n');
      cin.getline(inicio->nombre,30,'\n');
      int totallibros=30;
      struct libro libro3;
      inicio->ptr->ptr=&libro3;
      struct libro libro4;
      inicio->ptr->ptr->ptr=&libro4;

      cout<<"Precio del libro 3 ";
      cin>>inicio->ptr->ptr->precio;
      cout<<"Nombre del libro 3 ";
      cin.getline(inicio->nombre,30,'\n');
      cin.getline(inicio->nombre,30,'\n');
  
      cout<<"direccion de inicio "<<&inicio<<endl;
      cout<<"direccion libro 1"<<&libro1<<endl;
      cout<<"direccion libro 2"<<&libro2<<endl;
      cout<<"precio que se guardo 1"<<inicio->precio<<endl;
      cout<<"nombre que se guardo 1"<<inicio->nombre<<endl;
      cout<<"precio que se guardo 2"<<(inicio+1)->precio<<endl;
      cout<<"nombre que se guardo 2"<<(inicio+1)->nombre<<endl;
      cout<<"nombre 3"<<inicio->ptr->ptr->nombre<<endl;
      cout<<"precio 3"<<inicio->ptr->ptr->precio<<endl;
      cout<<"nombre 4"<<inicio->ptr->ptr->ptr->nombre<<endl;
      cout<<"precio 4"<<inicio->ptr->ptr->ptr->precio<<endl;
getch();
  return 0;

  }
