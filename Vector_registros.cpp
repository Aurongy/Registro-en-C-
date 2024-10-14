#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Declarando  registros de Guia Telefonica
struct Guia_Telefonica { 
    string Ip_Telefono;
    string No_telefonico;
    string marca;
    string color;
    string modelo;
    string Direccion_particular;
    string Tipo_de_servicio;
    string pais;
    string nombres_apellidos;
    float precio;
}

// Declarando registros de discoteca
struct Discoteca { 
    string ID_boleta;
    string fecha;
    string Direccion;
    string hora_inicio;
    string hora_finaliza;
    string Genero_musical;
    string artistas;
    string DJ;
    float precio;
    int capacidad;
}

// Declarando registros de un vehiculo

struct Vehiculo { 
    string Matricula;
    string marca;
    string modelo;
    int anio;
    string color;
    string capacidad;
    string nombres_apellidos;
    string Direccion_particular;
    string tipo;
    float precio;
}

// Funciones para insertar datos
void Guia_Telefonica(int index, string Ip_Telefono, string No_telefonico, string marca, string color, string modelo, string Direccion_particular, string Tipo_de_servicio, string nombres_apellidos, string pais, float precio) {
    if (index >= 0 && index < 10) {
        Guia_Telefonica[index] = {Ip_Telefono, No_telefonico, marca, color, modelo, Direccion_particular, Tipo_de_servicio, nombres_apellidos, pais, precio};
    }
}

void Discoteca(int index, string ID_boleta, string fecha, string direccion, string hora_inicio, string hora_finaliza, string Genero_musical, string artistas, string DJ, float precio, int capacidad) {
    if (index >= 0 && index < 10) {
        Discoteca[index] = {ID_boleta, fecha, direccion, hora_inicio, hora_finaliza, Genero_musical, artistas, DJ, precio, capacidad};
    }
}

void Vehiculo(int index, string Matricula, string marca, string modelo, int anio, string color, string capacidad, string nombres_apellidos, string Direccion_particular, string tipo, float precio) {
    if (index >= 0 && index < 10) {
        Vehiculo[index] = {Matricula, marca, modelo, anio, color, capacidad, nombres_apellidos, Direccion_particular, tipo, precio};
    }
}

// Funciones para imprimir datos
void Guia_Telefonica() {
    cout << "Contactos en la guía telefónica: \n";
    for (const auto& contacto : Guia_Telefonica) {
        cout << " Direccion Ip de su telefono: " << contacto.Ip_Telefono;
        cout << " Numero Telefono: " << contacto.No_telefonico;
        cout << " Marca de Telefono: " << contacto.marca;
        cout << " Color de Telefono: " << contacto.color;
        cout << " Modelo de Telefono: " << contacto.modelo;
        cout << " Direccion Particular: " << contacto.Direccion_particular;
        cout << " Compania de Telefono: " << contacto.Tipo_de_servicio;
        cout << " Pais: " << contacto.pais;
        cout << " Nombres y Apellidos del Propietario: " << contacto.nombres_apellido;
        cout << " Precio: " << contacto.precio << endl;
    }
}

void Discoteca() {
    cout << "\nEventos en la discoteca: \n";
    for (const auto& evento : Discoteca) {
        cout << ", No. de Boleta: " << evento.ID_boleta;
        cout << ", Fecha: " << evento.fecha;
        cout << "Direccion: " << evento.Direccion;
        cout << ", Hora de Inicio: " << evento.hora_inicio;
        cout << ", Hora de Finaliza: " << evento.hora_finaliza;
        cout << ", Genero Musical " << evento.Genero_musical;
        cout << ", Artistas: " << evento.artistas;
        cout << ", DJ Invitado: " << evento.DJ;
        cout << ", Precio: " << evento.precio;
        cout << ", Capacidad del Evento: " << evento.capacidad << endl;
    }
}

void Vehiculo() {
    cout << "\nVehículos en la base de datos:\n";
    for (const auto& vehiculo : Vehiculo) {
        cout << "Placas: " << vehiculo.Matricula;
        cout << ", Marca: " << vehiculo.marca;
        cout << ", Modelo: " << vehiculo.modelo;
        cout << ", Anio: " << vehiculo.anio;
        cout << ", color: " << vehiculo.color;
        cout << ", capacidad: " << vehiculo.capacidad;
        cout << ", Nombres y Apellidos del propietario: " << vehiculo.nombres_apellidos;
        cout << ", Direccion particular: " << vehiculo.Direccion_particular;
        cout << ", Tipo de Vehiculo: " << vehiculo.tipo;
        cout << ", Precio: " << vehiculo.precio << endl;
    }
}
int main(){

    Guia_Telefonica(0, "182.190.1.0", "5624-0054", "SAMSUNG GALAXY", "Negro", "A21", "Av. False, Boca del Monte", "Claro", "Anna Maria Cerna", "+502 ", "2300");
    Discoteca(0, "DNC-20521", "21/10/2024", "07:00 PM" "00:00 AM", "Kainflanes", "Mana y Soda Stereo", "Dj Snake", "7000", "170000" );
    Vehiculo(0, "O-502-BBV", "Mazda", "MJ-0045", "2024", "4000 Caballos", "Jose Ricardo", "Av. Cafe Z2", "Troca", "85000");

    return 0;
}