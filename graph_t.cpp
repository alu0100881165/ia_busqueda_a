#include "graph_t.hpp"

grafo_t::grafo_t()
{

}

grafo_t::grafo_t(vector<vector<int>> vector_formateado, int size)
{
  cout << "Entro grafo constructor." << endl;
  if(size > 0)        //comprobar que hay nodos que leer
    set_size(size);

  set_grafo_vect_size();

  vector<Pair> vector_crear_nodos(size - 1);
  int cont = 1;

  for(int i = 1; i <= size; i++)
  {
    for(int j = 1; j < size; j++)
    {
      if(j == i)
      {
        cont++;
      }

      vector_crear_nodos[(j - 1)].first = cont;
      vector_crear_nodos[(j - 1)].second = vector_formateado[(i - 1)][(j - 1)];

      // cout << "Vector crear nodos. first: " << vector_crear_nodos[(j - 1)].first;
      // cout << "\t second: " << vector_crear_nodos[(j - 1)].second << endl;
      //
      // cout << "Valor a insertar. first: " << j;
      // cout << "\t second: " << vector_formateado[(i - 1)][(j - 1)] << endl;
      cont++;
    }
    cont = 1;
    insert_grafo_vect_pos(vector_crear_nodos, i);
    cout << endl << endl << endl << endl;
  }
}

void grafo_t::set_size(int size)
{
  // cout << "Entro grafo set size(1)." << endl;
  size_ = size;
}

int grafo_t::get_size(void)
{
  return size_;
}

void grafo_t::set_grafo_vect_size(void)
{
  // cout << "Entro grafo set_grafo_vect_size(1)." << endl;
  grafo_vect.resize(get_size());
}

void grafo_t::insert_grafo_vect_pos(vector<Pair> to_insert, int pos)
{
  // cout << "Entro grafo insert_grafo_vect_pos (" << pos << ")." << endl;
  node_t Nodo_dummy(pos, to_insert);
  grafo_vect[(pos - 1)] = Nodo_dummy;
}

ostream& grafo_t::write(ostream& os)
{
  for(int i = 0; i < grafo_vect.size(); i++)
  {
    grafo_vect[i].write(os);
  }
  return os;
}
