#ifndef MAZEBUILDER_H
#define MAZEBUILDER_H

class Maze;
class Room;
class MazeBuilder
{
public:
    virtual void BuildMaze() {}
    virtual void BuildRoom(int roomNo) { (void)roomNo; }
    virtual void BuildDoor(int roomFrom, int roomTo) {}

    virtual Maze *GetMaze() { return 0; }

protected:
    MazeBuilder();
};

#endif // MAZEBUILDER_H
