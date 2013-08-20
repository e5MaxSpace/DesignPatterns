#ifndef MAZEGAME_H
#define MAZEGAME_H

class Maze;
class MazeFactory;
class MazeBuilder;
class MazeGame
{
public:
    MazeGame();

    Maze *CreateMaze();

    Maze *CreateMaze(MazeFactory &mazeFactory);
    Maze *CreateMaze(MazeBuilder &mazeBuilder);
};

#endif // MAZEGAME_H
