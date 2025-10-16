button: main.cpp button.cpp button.h
	g++ -Wall -std=c++17 main.cpp button.cpp -o button -lsfml-graphics -lsfml-window -lsfml-system && ./button