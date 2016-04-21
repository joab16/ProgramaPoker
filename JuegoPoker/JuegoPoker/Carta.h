#pragma once

class Carta
{
private:

	const int DIAMANTES = 1;
	const int PICAS = 2;
	const int CORAZONES = 3;
	const int TREBOLES = 4;

	int numeroCarta;
	int palo;

public:
	Carta(int numero, int palo);
	Carta();
	~Carta();

	int obtenerNumeroCarta();
	int obtenerPalo();
	void operator=(Carta &);
};

