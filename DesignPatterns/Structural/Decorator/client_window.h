#ifndef CLIENT_WINDOW_H
#define CLIENT_WINDOW_H

class VisualComponent;
class Client_Window
{
public:
    Client_Window();

    void SetContents(VisualComponent *component);
};

#endif // CLIENT_WINDOW_H
