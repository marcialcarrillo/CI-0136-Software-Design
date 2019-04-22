#pragma once
#include <string>
#include <iostream>
using namespace std;

template< typename Self >
class Elementos
{
	protected:
		string title;
	public:
		Elementos(){}
		~Elementos() {}

		void seleccionar() {
			cout << "Se seleccion� el " << this->title << endl;
			for (Elementos* element : *static_cast<Self*>(this))
			{
				cout << "     ";
				element->seleccionar();
			}
		}

		void cortar() {
			cout << "Se cort� el " << this->title << endl;
			for (Elementos* element : *static_cast<Self*>(this))
			{
				cout << "     ";
				element->cortar();
			}
		}

		void pegar() {
			cout << "Se peg� el " << this->title << endl;
			for (Elementos* element : *static_cast<Self*>(this))
			{
				cout << "     ";
				element->pegar();
			}
		}

		void eliminar() {
			cout << "Se elimin� el " << this->title << endl;
			for (Elementos* element : *static_cast<Self*>(this))
			{
				cout << "     ";
				element->eliminar();
			}
		}

		void aumentar(float aumento) {
			cout << "Se aument� el " << this->title << " en " << aumento << endl;
			for (Elementos* element : *static_cast<Self*>(this))
			{
				cout << "     ";
				element->aumentar(aumento);
			}
		}

		void reducir(float decremento) {
			cout << "Se redujo el " << this->title << " en " << decremento << endl;
			for (Elementos* element : *static_cast<Self*>(this))
			{
				cout << "     ";
				element->reducir(decremento);
			}
		}

		void dibujar() {
			cout << "Se dibuja el " << this->title << endl;
			for (Elementos* element : *static_cast<Self*>(this))
			{
				cout << "     ";
				element->seleccionar();
			}
		}

};