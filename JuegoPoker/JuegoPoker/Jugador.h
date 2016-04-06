#pragma once

class Jugador
{
private:
	char* nombre;
	int dineroRestante;
	//list mano;
	int apuesta;

public:
	Jugador(char*, int);

	~Jugador();
};
