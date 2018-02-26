#include "rendergles.h"

#include <GLES2/gl2.h>

//using namespace gles;

void initializeGLES()
{
    //glesbinding::Binding::initialize();
}

void uninitializeGLES()
{
    //glesbinding::Binding::releaseCurrentContext();
}

void resizeGLES(int width, int height)
{
    glViewport(0, 0, width, height);
}

void renderGLES()
{
    glClearColor(1.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
}
