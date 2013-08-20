#ifndef STANDARDMAZEBUILDER_H
#define STANDARDMAZEBUILDER_H

#include "mazebuilder.h"

#include "room.h"

class StandardMazeBuilder : public MazeBuilder
{
public:
    StandardMazeBuilder();

    virtual void BuildMaze();
    virtual void BuildRoom(int roomNo);
    virtual void BuildDoor(int roomFrom, int roomTo);

    virtual Maze *GetMaze() { return m_currentMaze; }

private:
    Room::Direction CommononWall(Room *from, Room *to);
    Maze *m_currentMaze;
};

#endif // STANDARDMAZEBUILDER_H
