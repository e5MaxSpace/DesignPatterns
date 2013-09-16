#include <iostream>

using namespace std;

#include "composition.h"
#include "simplecompositor.h"
#include "texcompositor.h"
#include "arraycompositor.h"

int main()
{
    Composition *quick = new Composition(new SimpleCompositor());
    Composition *slick = new Composition(new TexCompositor());
    Composition *icon = new Composition(new ArrayCompositor(100));


    cout << "Hello World!" << endl;
    return 0;
}
