//#include "graph.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main (int argc, char** argv)      //pongo char** para que almacene los nombres correctamente
{
  cout << "Bienvenido" << endl << "El núm de arg son: " << argc << endl << " y son :" << endl;
  for (int i = 0; i < argc; i++)
  {
    cout << '\t' << argv[i] << endl;
  }

  ifstream graph_file(argv[1]), heuristic_file;
  string graph_line, heuristic_line, string_aux;
  istringstream graph_line_copy;
  int tam = 0, cont = 0;

  if(graph_file.is_open())
  {
    graph_file >> tam;
    cout << "Tamaño: " << tam << endl;
    while(!graph_file.eof())
    {
      getline(graph_file, graph_line);
      cout << "Graph_line: " << graph_line << endl;
      graph_line_copy.str(graph_line);
      //cout << "Graph_line_copy" << graph_line_copy.str() << endl;
      while(!graph_line_copy.eof())
      {
        graph_line_copy >> string_aux;
        cout << "Contenido: " << string_aux << endl;
      }
    }
  }
  else
    cout << "No se pudo abrir el fichero: " << argv[1];


  return 0;
}
