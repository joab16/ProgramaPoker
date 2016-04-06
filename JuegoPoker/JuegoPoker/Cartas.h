#pragma once

class Cartas
{
private:

	const int DIAMANTES = 1;
	const int PICAS = 2;
	const int CORAZONES = 3;
	const int TREBOLES = 4;

	int numeroCartas;
	int palo;

public:
	Cartas();
	~Cartas();
};
