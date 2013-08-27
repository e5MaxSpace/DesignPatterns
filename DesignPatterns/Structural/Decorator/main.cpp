#include <iostream>

#include "client_window.h"
#include "textview_decorated.h"
#include "borderdecorator.h"
#include "scrolldecorator.h"

using namespace std;

int main()
{
    Client_Window *window = new Client_Window;
    TextView_Decorated *view = new TextView_Decorated;
    window->SetContents(new BorderDecorator(new ScrollDecorator(view), 2));

    cout << "Hello World!" << endl;
    return 0;
}

