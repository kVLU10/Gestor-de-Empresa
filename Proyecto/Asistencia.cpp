#include "pch.h"
#include "Asistencia.h"

Proyecto::Asistencia::Asistencia(DateTime fecha,String^ hora, String^ check, String^ io)
{
	this->Fecha = fecha;
	this->Hora = hora;
	this->Check = check;
	this->IO = io;
}
