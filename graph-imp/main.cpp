#include <iostream>
#include "inc/Edge.h"

// test code

int main()
{
    Vertex v0{ 0 };
	Vertex v1{ 1 };
	Vertex v2{ 2 };
	Vertex v3{ 3 };
	Vertex v4{ 4 };

	v0.add_vertex_by_weight(&v1, 3);
	v0.add_vertex_by_weight(&v3, 7);
	v0.add_vertex_by_weight(&v4, 8);
	v1.add_vertex_by_weight(&v3, 4);
	v1.add_vertex_by_weight(&v2, 1);
	v3.add_vertex_by_weight(&v2, 2);
	v4.add_vertex_by_weight(&v3, 3);

	v0.print();
	v1.print();
	v2.print();
	v3.print();
	v4.print();

    v2.add_vertex_by_weight(&v1, 44);

	std::cout << "add new vertex\n";
    std::cout << "-------------------------------\n";

    v0.print();
	v1.print();
	v2.print();
	v3.print();
	v4.print();

}
