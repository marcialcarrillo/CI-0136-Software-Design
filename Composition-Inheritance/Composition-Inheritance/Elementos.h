#pragma once

class Elementos 
{
	public:
		Elementos();
		~Elementos();

		virtual void seleccionar() = 0;
		virtual void cortar() = 0;
		virtual void pegar() = 0;
		virtual void eliminar() = 0;
		virtual void aumentar(float aumento) = 0;
		virtual void reducir(float decremento) = 0;
		virtual void dibujar() = 0;

};