/*
    Лабораторная №15 (4), Базовый поток
    “Многообразие фигур”

    Задание: Отобразить на экране n кругов (вариант 1).
*/

#include <SFML/Graphics.hpp>
#include <Circle.hpp>
#include <Game.hpp>

int main()
{
    is::Game game(1600, 1000, "Game!!!");
    game.Setup(10);
    game.LifeCycle();

    return 0;
}