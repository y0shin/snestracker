#include "gui/Text.h"
#include "Colors.h"
#include "sdlfont.h"

Text::Text(const char *str/*=""*/) : str(str)
{
  rect.w = strlen(str) * CHAR_WIDTH;
  rect.h = CHAR_HEIGHT;
}

void Text::draw(SDL_Surface *screen/*=RenderContext::screen*/,
  Uint32 color/*=Colors::Interface::color[Colors::Interface::Type::text_fg]*/,
  bool prefill/*=true*/, bool Vflip/*=false*/, bool Hflip/*=false*/)
{
  sdlfont_drawString(screen, rect.x, rect.y, str, color,
    Colors::Interface::color[Colors::Interface::Type::text_bg], prefill, Vflip, Hflip);
}
