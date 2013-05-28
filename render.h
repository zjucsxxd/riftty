#ifndef RENDER_H
#define RENDER_H

#include "abaci.h"
#include "gb_text.h"

void RenderInit();

void TextRenderFunc(GB_GlyphQuad* quads, uint32_t num_quads);

#ifdef DEBUG
#define GL_ERROR_CHECK(x) GLErrorCheck(x)
void GLErrorCheck(const char* message);
#else
#define GL_ERROR_CHECK(x)
#endif

#endif  // #define RENDER_H
