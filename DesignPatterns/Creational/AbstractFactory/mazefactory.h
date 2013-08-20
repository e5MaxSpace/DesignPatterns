#ifndef MAZEFACTORY_H
#define MAZEFACTORY_H

class Maze;
class Room;
class Wall;
class Door;
class MazeFactory
{
public:
    MazeFactory();

    virtual Maze* MakeMaze() const;
    virtual Wall* MakeWall() const;
    virtual Room* MakeRoom(int roomNo) const;
    virtual Door* MakeDoor(Room *from, Room *to) const;
};

#endif // MAZEFACTORY_H
