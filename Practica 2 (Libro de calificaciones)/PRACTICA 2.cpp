/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
using std::getline;

class LibroCalificaciones
{
public:
  void establecerNombreCurso (string nombre)
  {
    nombreCurso = nombre;
  }
  string obtenerNombreCurso ()
  {
    return nombreCurso;
  }
  void mostrarMensaje ()
  {
    cout << "Bienvenido al libro de calificaciones" << endl;
    cout << "Curso: "<< obtenerNombreCurso () << endl;
    cout << "Instructor: " << obtenerNombreInstructor () << endl;
  }
  string obtenerNombreInstructor ()
  {
    return nombreInstructor;
  }
  void
  establecerNombreInstructor (string nombre)
  {
    nombreInstructor = nombre;
  }
private:
string nombreCurso;
string nombreInstructor;
};

int
main ()
{
  string nombreDelCurso;
  string nombreDelInstructor;
  LibroCalificaciones miLibroCalificaciones;
  cout << "El nombre inicial del curso es: " <<
    miLibroCalificaciones.obtenerNombreCurso () << endl;
  getline (cin, nombreDelCurso);
  miLibroCalificaciones.establecerNombreCurso (nombreDelCurso);
  cout << "El nombre inicial del instructor es: " << miLibroCalificaciones.
    obtenerNombreInstructor () << endl;
  getline (cin, nombreDelInstructor);
  miLibroCalificaciones.establecerNombreInstructor( nombreDelInstructor );
  cout << endl;
  miLibroCalificaciones.mostrarMensaje ();
  return 0;
}
