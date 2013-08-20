#ifndef MAZE_H
#define MAZE_H

#include <map>

class Room;
class Maze
{
public:
    Maze();

    void AddRoom(Room *room);
    Room *RoomNo(int roomNo) const;

private:
    std::map<int, Room*> m_rooms;

};

#endif // MAZE_H
