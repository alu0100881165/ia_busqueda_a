//#include "graph.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <locale>
#include <limits>
#include <algorithm>

using namespace std;

int main (int argc, char** argv)      //pongo char** para que almacene los nombres correctamente
{
  cout << "Bienvenido" << endl << "El núm de arg son: " << argc << endl << " y son :" << endl;
  for (int i = 0; i < argc; i++)
  {
    cout << '\t' << argv[i] << endl;
  }

  ifstream graph_file(argv[1]), heuristic_file;
  string graph_line, graph_line_fixed, heuristic_line, string_aux;
  int tam = 0, int_aux = 0, int_dummy = 0, cont = 0;

  if(graph_file.is_open())
  {
    graph_file >> tam;
    cout << "Tamaño: " << tam << endl;

    vector<vector<int>> nodos_fichero(tam, vector<int>(tam));

    int_aux = tam;

    while(int_aux > 0)
    {
      int_aux--;
      int_dummy += int_aux;
    }

    vector<int> vector_int_aux(int_dummy);
    // cout << "Tamaño del vector: " << nodos_fichero.size() << endl;
    // for(int i = 0; i< nodos_fichero.size(); i++)
    // {
    //   cout << "Tamaño de los subvectores: " << nodos_fichero[i].size() << endl;
    // }

    while(!graph_file.eof())
    {
      getline(graph_file, graph_line, ' ');
      if(graph_line.size() > 0)
      {
        if(graph_line[0] == '\n')
          graph_line = graph_line.erase(0, 1);
        // cout << "Graph_line 1: " << graph_line << endl;

        for(int i = 0; i < graph_line.size(); i++)
        {
          if(isdigit(graph_line[i]))
          {
            graph_line_fixed.push_back(graph_line[i]);
          }
        }

        // cout << "Graph_line 2: " << graph_line_fixed << endl;

        if(isdigit(graph_line[0]))
        {
          int_aux = stoi(graph_line_fixed);
          // cout << "Valor del int: " << int_aux << "   valor en el string: " << graph_line_fixed << endl;
        }
        else
        {
          int_aux = numeric_limits<int>::max();
          // cout << "holi" << endl;
        }

        vector_int_aux[cont] = int_aux;
        cont++;

        cout << "Valor en entero: " << int_aux << endl;

        getline(graph_file, graph_line);
        //cout << "Graph_line 2: " << graph_line << endl;
        graph_line_fixed.clear();
      }
    }
    for(int i = 0; i < vector_int_aux.size(); i++)
    {
      cout << "Valores del vector: " << vector_int_aux[i] << endl;
    }
  }
  else
    cout << "No se pudo abrir el fichero: " << argv[1];


  return 0;
}
