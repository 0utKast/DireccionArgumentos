#if 0
// VT 91 COD.001
#include <iostream>
#include <string>

void saludo(std::string* nombre = nullptr)
{
    std::cout << "Hola";
    std::cout << (nombre ? *nombre : "invitado") << '\n';
}

int main()
{
    saludo(); // no sabemos quien es el usuario aún

    std::string juan{ "Juan" };
    saludo(&juan); // sabemos que el usuario es juan

    return 0;
}



// VT 91 COD.002
#include <iostream>
#include <string>

void saludo()
{
    std::cout << "Hola invitado\n";
}

void saludo(const std::string& nombre) // nombre pasado ahora por referencia constante
{
    std::cout << "Hola " << nombre << '\n';
}

int main()
{
    saludo(); // no sabemos quien es el usuario aún

    std::string juan{ "Juan" };
    saludo(juan); // sabemos que el usuario es juan

    return 0;
}



// VT 91 COD.003
#include <iostream>
#include <string>

void saludo()
{
    std::cout << "Hola invitado\n";
}

void saludo(std::string nombre) // nombre pasado ahora por valor
{
    std::cout << "Hola " << nombre << '\n';
}

int main()
{
    saludo(); // no sabemos quien es el usuario aún

    
    saludo(std::string{ "Juan" }); // Pasamos "Juan" como un literal

    return 0;
}




// VT 91 COD.005
#include <iostream>

void anular(int* ptr2)
{
    ptr2 = nullptr; // Hace el parámetro de la función un puntero nulo
}

int main()
{
    int x{ 3 };
    int* ptr{ &x }; // ptr apunta a x

    std::cout << "ptr es " << (ptr ? "no-null\n" : "null\n");

   anular(ptr);

    std::cout << "ptr es " << (ptr ? "no-null\n" : "null\n");
    return 0;
}



#include <iostream>


void anular(int*& ptr2) // ptr2 es ahora una referencia a un puntero
{
    ptr2 = nullptr; // Hace el parámetro función un puntero nulo
}

int main()
{
    int x{ 3 };
    int* ptr{ &x }; // ptr apunta a x

    std::cout << "ptr es " << (ptr ? "no-null\n" : "null\n");

    anular(ptr);

    std::cout << "ptr es " << (ptr ? "no-null\n" : "null\n");
    return 0;
}



// VT 91 COD.004
#include <iostream>

void modificar(int* ptr2)
{
    *ptr2 = 6; // Cambia el valor almacenado en la dirección
               // a la que apunta a "6"
}

int main()
{
    int x{ 3 };
    int* ptr{ &x }; // ptr apunta a x

    std::cout << *ptr <<"\n";

    modificar(ptr);

    std::cout << *ptr << "\n";
    return 0;
}
#endif






