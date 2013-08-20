#include "mazegame.h"

#include "maze.h"
#include "room.h"
#include "door.h"
#include "wall.h"

MazeGame::MazeGame()
{
}

Maze *MazeGame::CreateMaze()
{
    Maze *aMaze = new Maze();

    Room *r1 = new Room(1);
    Room *r2 = new Room(2);

    Door *door = new Door(r1, r2);

    r1->SetSide(Room::East, door);
    r1->SetSide(Room::South, new Wall());
    r1->SetSide(Room::West, new Wall());
    r1->SetSide(Room::North, new Wall());

    r2->SetSide(Room::East,  new Wall());
    r2->SetSide(Room::South, new Wall());
    r2->SetSide(Room::West, door);
    r2->SetSide(Room::North, new Wall());

    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);

    return aMaze;
}

#include "mazefactory.h"
Maze *MazeGame::CreateMaze(MazeFactory &mazeFactory)
{
    Maze *aMaze = mazeFactory.MakeMaze();
    Room *r1 = mazeFactory.MakeRoom(1);
    Room *r2 = mazeFactory.MakeRoom(2);

    Door *door = mazeFactory.MakeDoor(r1, r2);

    r1->SetSide(Room::East, door);
    r1->SetSide(Room::South, mazeFactory.MakeWall());
    r1->SetSide(Room::West, mazeFactory.MakeWall());
    r1->SetSide(Room::North, mazeFactory.MakeWall());

    r2->SetSide(Room::East,  mazeFactory.MakeWall());
    r2->SetSide(Room::South, mazeFactory.MakeWall());
    r2->SetSide(Room::West, door);
    r2->SetSide(Room::North, mazeFactory.MakeWall());

    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);

    return aMaze;
}

#include "mazebuilder.h"
Maze *MazeGame::CreateMaze(MazeBuilder &mazeBuilder)
{
    mazeBuilder.BuildMaze();

    mazeBuilder.BuildRoom(1);
    mazeBuilder.BuildRoom(2);

    mazeBuilder.BuildDoor(1, 2);

    return mazeBuilder.GetMaze();
}
