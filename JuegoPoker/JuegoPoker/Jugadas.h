#pragma once

class Jugadas
{
private:
	int cantidadCartas;
	float calificacion;

public:
	Jugadas();

	~Jugadas();

	void establecerCalificacion(float);

	float compararJugadas(/*list, list*/);
};
