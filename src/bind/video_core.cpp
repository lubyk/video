/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for library video
 *
 * This file has been generated by dub 2.2.0.
 */
#include "dub/dub.h"
#include "video/Buffer.h"
#include "video/Camera.h"
#include "video/Decoder.h"

using namespace video;

extern "C" {
int luaopen_video_Buffer(lua_State *L);
int luaopen_video_Camera(lua_State *L);
int luaopen_video_Decoder(lua_State *L);
}

// --=============================================== FUNCTIONS
static const struct luaL_Reg video_functions[] = {
  { NULL, NULL},
};


extern "C" int luaopen_video_core(lua_State *L) {
  lua_newtable(L);
  // <lib>
  dub::fregister(L, video_functions);
  // <lib>

  luaopen_video_Buffer(L);
  // <video.Buffer>
  lua_setfield(L, -2, "Buffer");
  
  luaopen_video_Camera(L);
  // <video.Camera>
  lua_setfield(L, -2, "Camera");
  
  luaopen_video_Decoder(L);
  // <video.Decoder>
  lua_setfield(L, -2, "Decoder");
  
  // <lib>
  return 1;
}
