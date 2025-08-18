#include <iostream>
#include <vector>

using std::vector;

// Se tiene que crear primero porque es el orden logico de compilacion. Si lo pones despues, no compila poruqe no esta definido antes.
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

Point2D SumPoints(Point2D point1, Point2D point2);

Vector2D SumVector(Vector2D vector1, Vector2D vector2);

Point2D RestPoints(Point2D point1, Point2D point2);

Vector2D RestVector(Vector2D vector1, Vector2D vector2);

int main()
{
	// Create two variables that will store each a vector

	Vector2D vector1{ .X {2.23}, .Y {4.57} };
	Vector2D vector2{ .X {3.46}, .Y {-2.9} };

	// create variables that will store each a point.

	Point2D point1{ .X {2}, .Y {4.5} };
	Point2D point2{ .X {4.78}, .Y {6.7} };
	[[maybe_unused]] Point2D point3{ .X {0.32}, .Y {5.5} };
	[[maybe_unused]] Point2D point4{ .X {8.99}, .Y {9.9} };

	// perform operations over the points.

	SumPoints(point1, point2);
	RestPoints(point1, point2);

	// perform operations over the vectors.

	SumVector(vector1, vector2);
	RestVector(vector1, vector2);

	// perform operations between points and vectors.

	// Create vector variable and initialization by value (empty array).
	std::vector<Point2D> testPoints{};

	// Create vector variable and initialization by direct Copy,
	vector<Point2D> testPoints2(8);

}

Vector2D SumVector(Vector2D vector1, Vector2D vector2)
{
	Vector2D sumOfVector{ .X{}, .Y{} };

	sumOfVector.X = vector1.X + vector2.X;
	sumOfVector.Y = vector1.Y + vector2.Y;

	std::cout << "vector1 X: " << vector1.X << " vector1 Y: " << vector1.Y << std::endl;
	std::cout << "vector2 X: " << vector2.X << " vector2 Y: " << vector2.Y << std::endl;
	std::cout << "sumOfVector X: " << sumOfVector.X << " sumOfVector Y: " << sumOfVector.Y << std::endl;

	return sumOfVector;
}

Point2D SumPoints(Point2D point1, Point2D point2)
{
	Point2D sumOfPoints{ .X{}, .Y{} };

	sumOfPoints.X = point1.X + point2.X;
	sumOfPoints.Y = point1.Y + point2.Y;

	std::cout << "point1 X: " << point1.X << " point1 Y: " << point1.Y << std::endl;
	std::cout << "point2 X: " << point2.X << " point2 Y: " << point2.Y << std::endl;
	std::cout << "sumOfPoints X: " << sumOfPoints.X << " sumOfPoints Y: " << sumOfPoints.Y << std::endl;

	return sumOfPoints;
}

Vector2D RestVector(Vector2D vector1, Vector2D vector2)
{
	Vector2D restOfVector{ .X{}, .Y{} };

	restOfVector.X = vector1.X - vector2.X;
	restOfVector.Y = vector1.Y - vector2.Y;

	std::cout << "vector1 X: " << vector1.X << " vector1 Y: " << vector1.Y << std::endl;
	std::cout << "vector2 X: " << vector2.X << " vector2 Y: " << vector2.Y << std::endl;
	std::cout << "restOfVector X: " << restOfVector.X << " restOfVector Y: " << restOfVector.Y << std::endl;

	return restOfVector;
}

Point2D RestPoints(Point2D point1, Point2D point2)
{
	Point2D restOfPoints{ .X{}, .Y{} };

	restOfPoints.X = point1.X - point2.X;
	restOfPoints.Y = point1.Y - point2.Y;

	std::cout << "point1 X: " << point1.X << " point1 Y: " << point1.Y << std::endl;
	std::cout << "point2 X: " << point2.X << " point2 Y: " << point2.Y << std::endl;
	std::cout << "restOfPoints X: " << restOfPoints.X << " restOfPoints Y: " << restOfPoints.Y << std::endl;

	return restOfPoints;
}


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

