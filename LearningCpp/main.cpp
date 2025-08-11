#include <iostream>



int main()
{
	// Create two variables that will store each a vector

	Vector2D vector1{ .X {2.23}, .Y {4.57} };
	Vector2D vector2{ .X {3.46}, .Y {-2.9} };

	// create variables that will store each a point.

	Point2D point1{ .X {2}, .Y {4.5} };
	Point2D point2{ .X {4.78}, .Y {6.7} };
	Point2D point3{ .X {0.32}, .Y {5.5} };
	Point2D point4{ .X {8.99}, .Y {9.9} };


	// perform operations over the vectors.

	// perform operations over the points.

	// perform operations between points and vectors.
}

struct Vector2D
{
	double X;
	double Y;
};

struct Point2D
{
	double X;
	double Y;
};

void initializayion()
{
	//int a; // default inicialization

	[[maybe_unused]] int b = 1; // copy-inizialization

	[[maybe_unused]] int d(1); // direct-inicialitacion

	[[maybe_unused]] int c{ 2 }; // direct-list-inizialization (This one helps to diff btwen copy/assignation and direct/func) Also, doesn't allow narrowing conversions.

	[[maybe_unused]] int e{}; // value-inicialization. Will initialize the variable to 0 or the most closest value to 0 given the type. 
}

void unsedVariables()
{
	[[maybe_unused]] double pi{ 3.14159 }; // [[maybe_unused]] is an attribute to let know to the compiler that if not used then it doesn't have to compile it.
	double gravity{ 9.8 };

	std::cout << gravity << '\n';

	return;
}

