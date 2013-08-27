#include <iostream>

#include "textdocument.h"
#include "imageproxy.h"

#include "imageptr.h"

using namespace std;

int main()
{
    TextDocument *text = new TextDocument();
    const std::string fileName("anImageFileName");
    text->Insert(new ImageProxy(fileName));

    ImagePtr image(fileName);
    image->Draw(Point(50, 100));
    //  µÈ¼ÛÓÚ image.operator ->()->Draw(Point(50, 100));

    cout << "Hello World!" << endl;
    return 0;
}
