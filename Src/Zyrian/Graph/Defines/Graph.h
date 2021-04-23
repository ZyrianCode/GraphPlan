#pragma once
#include <list>
#include <stack>
#include <iterator>

using namespace std;

template<typename T>
class Graph
{
    T VertexCount;
    
    list<T> *adjacencyMatrix; //список смежности

    //Сортирует граф
    void TopologicalSortUtil(T v, bool visited[], stack<T>& Stack);
public:
    Graph();
    Graph(T VertexCount);

    void addEdge(T v, T w); //добавляет ребро
    void TopologicalSort(); //Оболочка для используемой функции сортировки
};

