#ifndef MAZEGAMECREATOR_H
#define MAZEGAMECREATOR_H

class Maze;
class Room;
class Wall;
class Door;
class MazeCreator
{
public:
    MazeCreator();

    Maze *CreateMaze(); // template method

private:
    // factory methods
    virtual Maze *MakeMaze() const;
    virtual Room *MakeRoom(int roomNo) const;
    virtual Wall *MakeWall() const;
    virtual Door *MakeDoor(Room *from, Room *to) const;

};

#endif // MAZEGAMECREATOR_H
