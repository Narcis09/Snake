#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
void drawHorizontalLine(int x, int y, RenderWindow& window);
void drawVerticalLine(int x, int y, RenderWindow& window);
void drawTable(RenderWindow& window, int tileSize);
void drawSquare(int x, int y, Color color, RenderWindow& window, int size);