#include "stdafx.h"
#include "Jugadas.h"

Jugadas::Jugadas()
{
}

Jugadas::~Jugadas()
{
}

void Jugadas::establecerCalificacion(float calificacion)
{
	this -> calificacion = calificacion;
}

float Jugadas::compararJugadas(Deck mano1[], Deck mano2[])
{
	return 0.0f;
}

int Jugadas::esFlorImperial(Deck mano[])
{
	for (int i = 0; i < 8; i++)
	{
		mano[1].obtenerCarta
	}
	return 0;
}

int Jugadas::esEscaleraColor(Deck mano[])
{
	return 0;
}

int Jugadas::esPoker(Deck mano[])
{
	return 0;
}

int Jugadas::esFull(Deck mano[])
{
	return 0;
}

int Jugadas::esColor(Deck mano[])
{
	return 0;
}

int Jugadas::esEscalera(Deck mano[])
{
	return 0;
}

int Jugadas::esTrio(Deck mano[])
{
	return 0;
}

int Jugadas::esDoblePareja(Deck mano[])
{
	return 0;
}

int Jugadas::esPareja(Deck mano[])
{
	return 0;
}

int Jugadas::esCartaAlta(Deck mano[])
{
	return 0;
}
