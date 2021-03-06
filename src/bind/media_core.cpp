/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for library media
 *
 * This file has been generated by dub 2.2.1.
 */
#include "dub/dub.h"
#include "media/Buffer.h"
#include "media/Camera.h"
#include "media/Decoder.h"

using namespace media;

extern "C" {
int luaopen_media_Buffer(lua_State *L);
int luaopen_media_Camera(lua_State *L);
int luaopen_media_Decoder(lua_State *L);
}

// --=============================================== FUNCTIONS
static const struct luaL_Reg media_functions[] = {
  { NULL, NULL},
};


extern "C" int luaopen_media_core(lua_State *L) {
  lua_newtable(L);
  // <lib>
  dub::fregister(L, media_functions);
  // <lib>

  luaopen_media_Buffer(L);
  // <media.Buffer>
  lua_setfield(L, -2, "Buffer");
  
  luaopen_media_Camera(L);
  // <media.Camera>
  lua_setfield(L, -2, "Camera");
  
  luaopen_media_Decoder(L);
  // <media.Decoder>
  lua_setfield(L, -2, "Decoder");
  
  // <lib>
  return 1;
}
