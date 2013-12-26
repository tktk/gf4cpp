#ifndef FG4CPP_DEF_GL_FUNCTIONS_H
#define FG4CPP_DEF_GL_FUNCTIONS_H

#include "fg4cpp/gl/types.h"

#define FG4CPP_GL_FUNCTIONS \
    /* GL_VERSION_1_0 */ \
    FG4CPP_GL_FUNCTION_NUM( GetError, GLenum, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( Begin, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( End, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( EdgeFlag, ( , GLboolean _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EdgeFlagv, ( , const GLboolean * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex2s, ( , GLshort _1, GLshort _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex2i, ( , GLint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex2f, ( , GLfloat _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex2d, ( , GLdouble _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3s, ( , GLshort _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3i, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3f, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3d, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4s, ( , GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4i, ( , GLint _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4f, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4d, ( , GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex2sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex2iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex2fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex2dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1s, ( , GLshort _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1i, ( , GLint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1f, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1d, ( , GLdouble _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2s, ( , GLshort _1, GLshort _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2i, ( , GLint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2f, ( , GLfloat _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2d, ( , GLdouble _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3s, ( , GLshort _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3i, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3f, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3d, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4s, ( , GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4i, ( , GLint _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4f, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4d, ( , GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3b, ( , GLbyte _1, GLbyte _2, GLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3s, ( , GLshort _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3i, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3f, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3d, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3bv, ( , const GLbyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3b, ( , GLbyte _1, GLbyte _2, GLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3s, ( , GLshort _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3i, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3f, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3d, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3ub, ( , GLubyte _1, GLubyte _2, GLubyte _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3us, ( , GLushort _1, GLushort _2, GLushort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3ui, ( , GLuint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4b, ( , GLbyte _1, GLbyte _2, GLbyte _3, GLbyte _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4s, ( , GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4i, ( , GLint _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4f, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4d, ( , GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4ub, ( , GLubyte _1, GLubyte _2, GLubyte _3, GLubyte _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4us, ( , GLushort _1, GLushort _2, GLushort _3, GLushort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4ui, ( , GLuint _1, GLuint _2, GLuint _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3bv, ( , const GLbyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3ubv, ( , const GLubyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3usv, ( , const GLushort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3uiv, ( , const GLuint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4bv, ( , const GLbyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4ubv, ( , const GLubyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4usv, ( , const GLushort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4uiv, ( , const GLuint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Indexs, ( , GLshort _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Indexi, ( , GLint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Indexf, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Indexd, ( , GLdouble _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Indexsv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Indexiv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Indexfv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Indexdv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Rects, ( , GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Recti, ( , GLint _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Rectf, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Rectd, ( , GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Rectsv, ( , const GLshort * _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Rectiv, ( , const GLint * _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Rectfv, ( , const GLfloat * _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Rectdv, ( , const GLdouble * _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DepthRange, ( , GLclampd _1, GLclampd _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Viewport, ( , GLint _1, GLint _2, GLsizei _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixMode, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LoadMatrixf, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LoadMatrixd, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultMatrixf, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultMatrixd, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LoadIdentity, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( Rotatef, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Rotated, ( , GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Translatef, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Translated, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Scalef, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Scaled, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Frustum, ( , GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Ortho, ( , GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PushMatrix, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( PopMatrix, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( Enable, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Disable, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexGeni, ( , GLenum _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexGenf, ( , GLenum _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexGend, ( , GLenum _1, GLenum _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexGeniv, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexGenfv, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexGendv, ( , GLenum _1, GLenum _2, const GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClipPlane, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos2s, ( , GLshort _1, GLshort _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos2i, ( , GLint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos2f, ( , GLfloat _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos2d, ( , GLdouble _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos2sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos2iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos2fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos2dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos3s, ( , GLshort _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos3i, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos3f, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos3d, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos3sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos3iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos3fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos3dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos4s, ( , GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos4i, ( , GLint _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos4f, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos4d, ( , GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos4sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos4iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos4fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos4dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FrontFace, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Materiali, ( , GLenum _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Materialf, ( , GLenum _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Materialiv, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Materialfv, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Lighti, ( , GLenum _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Lightf, ( , GLenum _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Lightiv, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Lightfv, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LightModeli, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LightModelf, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LightModeliv, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LightModelfv, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorMaterial, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ShadeModel, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PointSize, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LineWidth, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LineStipple, ( , GLint _1, GLushort _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CullFace, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PolygonStipple, ( , const GLubyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PolygonMode, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelStorei, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelStoref, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelTransferi, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelTransferf, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelMapuiv, ( , GLenum _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelMapusv, ( , GLenum _1, GLsizei _2, const GLushort * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelMapfv, ( , GLenum _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawPixels, ( , GLsizei _1, GLsizei _2, GLenum _3, GLenum _4, const GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelZoom, ( , GLfloat _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Bitmap, ( , GLsizei _1, GLsizei _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, const GLubyte * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexImage1D, ( , GLenum _1, GLint _2, GLint _3, GLsizei _4, GLint _5, GLenum _6, GLenum _7, const GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexImage2D, ( , GLenum _1, GLint _2, GLint _3, GLsizei _4, GLsizei _5, GLint _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexParameteri, ( , GLenum _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexParameterf, ( , GLenum _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexParameteriv, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexParameterfv, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexEnvi, ( , GLenum _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexEnvf, ( , GLenum _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexEnviv, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexEnvfv, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Fogi, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Fogf, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Fogiv, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Fogfv, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Scissor, ( , GLint _1, GLint _2, GLsizei _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( AlphaFunc, ( , GLenum _1, GLclampf _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( StencilFunc, ( , GLenum _1, GLint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( StencilOp, ( , GLenum _1, GLenum _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DepthFunc, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendFunc, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LogicOp, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawBuffer, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( IndexMask, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorMask, ( , GLboolean _1, GLboolean _2, GLboolean _3, GLboolean _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DepthMask, ( , GLboolean _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( StencilMask, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Clear, ( , GLbitfield _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearColor, ( , GLclampf _1, GLclampf _2, GLclampf _3, GLclampf _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearIndex, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearDepth, ( , GLclampd _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearStencil, ( , GLint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearAccum, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Accum, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReadPixels, ( , GLint _1, GLint _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, GLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReadBuffer, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyPixels, ( , GLint _1, GLint _2, GLsizei _3, GLsizei _4, GLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Map1f, ( , GLenum _1, GLfloat _2, GLfloat _3, GLint _4, GLint _5, const GLfloat * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Map1d, ( , GLenum _1, GLdouble _2, GLdouble _3, GLint _4, GLint _5, const GLdouble * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Map2f, ( , GLenum _1, GLfloat _2, GLfloat _3, GLint _4, GLint _5, GLfloat _6, GLfloat _7, GLint _8, GLint _9, const GLfloat * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Map2d, ( , GLenum _1, GLdouble _2, GLdouble _3, GLint _4, GLint _5, GLdouble _6, GLdouble _7, GLint _8, GLint _9, const GLdouble * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalCoord1f, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalCoord1d, ( , GLdouble _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalCoord2f, ( , GLfloat _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalCoord2d, ( , GLdouble _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalCoord1fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalCoord1dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalCoord2fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalCoord2dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MapGrid1f, ( , GLint _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MapGrid1d, ( , GLint _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MapGrid2f, ( , GLint _1, GLfloat _2, GLfloat _3, GLint _4, GLfloat _5, GLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MapGrid2d, ( , GLint _1, GLdouble _2, GLdouble _3, GLint _4, GLdouble _5, GLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalMesh1, ( , GLenum _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalMesh2, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalPoint1, ( , GLint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalPoint2, ( , GLint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( InitNames, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( PopName, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( PushName, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LoadName, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( RenderMode, GLint, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SelectBuffer, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FeedbackBuffer, ( , GLsizei _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PassThrough, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NewList, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EndList, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( CallList, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CallLists, ( , GLsizei _1, GLenum _2, const GLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ListBase, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GenLists, GLuint, ( , GLsizei _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsList, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteLists, ( , GLuint _1, GLsizei _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Flush, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( Finish, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( Hint, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetBooleanv, ( , GLenum _1, GLboolean * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetIntegerv, ( , GLenum _1, GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFloatv, ( , GLenum _1, GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetDoublev, ( , GLenum _1, GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsEnabled, GLboolean, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetClipPlane, ( , GLenum _1, GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetLightiv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetLightfv, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMaterialiv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMaterialfv, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexEnviv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexEnvfv, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexGeniv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexGenfv, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexParameteriv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexParameterfv, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexLevelParameteriv, ( , GLenum _1, GLint _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexLevelParameterfv, ( , GLenum _1, GLint _2, GLenum _3, GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPixelMapuiv, ( , GLenum _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPixelMapusv, ( , GLenum _1, GLushort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPixelMapfv, ( , GLenum _1, GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMapiv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMapfv, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMapdv, ( , GLenum _1, GLenum _2, GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexImage, ( , GLenum _1, GLint _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPolygonStipple, ( , GLubyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_PTR( GetString, const GLubyte *, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PushAttrib, ( , GLbitfield _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PopAttrib, (), () ) \
\
    /* GL_VERSION_1_1 */ \
    FG4CPP_GL_FUNCTION_VOID( Indexub, ( , GLubyte _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Indexubv, ( , const GLubyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EdgeFlagPointer, ( , GLsizei _1, const GLvoid * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoordPointer, ( , GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorPointer, ( , GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( IndexPointer, ( , GLenum _1, GLsizei _2, const GLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalPointer, ( , GLenum _1, GLsizei _2, const GLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexPointer, ( , GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EnableClientState, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DisableClientState, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ArrayElement, ( , GLint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawArrays, ( , GLenum _1, GLint _2, GLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawElements, ( , GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( InterleavedArrays, ( , GLenum _1, GLsizei _2, const GLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PolygonOffset, ( , GLfloat _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTexImage1D, ( , GLenum _1, GLint _2, GLenum _3, GLint _4, GLint _5, GLsizei _6, GLint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTexImage2D, ( , GLenum _1, GLint _2, GLenum _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLint _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexSubImage1D, ( , GLenum _1, GLint _2, GLint _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexSubImage2D, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTexSubImage1D, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTexSubImage2D, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindTexture, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteTextures, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenTextures, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( AreTexturesResident, GLboolean, ( , GLsizei _1, const GLuint * _2, GLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PrioritizeTextures, ( , GLsizei _1, const GLuint * _2, const GLclampf * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsTexture, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPointerv, ( , GLenum _1, GLvoid ** _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PushClientAttrib, ( , GLbitfield _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PopClientAttrib, (), () ) \
\
    /* GL_VERSION_1_2 */ \
    FG4CPP_GL_FUNCTION_VOID( DrawRangeElements, ( , GLenum _1, GLuint _2, GLuint _3, GLsizei _4, GLenum _5, const GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexImage3D, ( , GLenum _1, GLint _2, GLint _3, GLsizei _4, GLsizei _5, GLsizei _6, GLint _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexSubImage3D, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTexSubImage3D, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLsizei _8, GLsizei _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_VERSION_1_3 */ \
    FG4CPP_GL_FUNCTION_VOID( ActiveTexture, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SampleCoverage, ( , GLfloat _1, GLboolean _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTexImage3D, ( , GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLint _7, GLsizei _8, const GLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTexImage2D, ( , GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLint _6, GLsizei _7, const GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTexImage1D, ( , GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLint _5, GLsizei _6, const GLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTexSubImage3D, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLsizei _10, const GLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTexSubImage2D, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLenum _7, GLsizei _8, const GLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTexSubImage1D, ( , GLenum _1, GLint _2, GLint _3, GLsizei _4, GLenum _5, GLsizei _6, const GLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetCompressedTexImage, ( , GLenum _1, GLint _2, GLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClientActiveTexture, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1d, ( , GLenum _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1dv, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1f, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1fv, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1i, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1iv, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1s, ( , GLenum _1, GLshort _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1sv, ( , GLenum _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2d, ( , GLenum _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2dv, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2f, ( , GLenum _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2fv, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2i, ( , GLenum _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2iv, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2s, ( , GLenum _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2sv, ( , GLenum _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3d, ( , GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3dv, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3f, ( , GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3fv, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3i, ( , GLenum _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3iv, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3s, ( , GLenum _1, GLshort _2, GLshort _3, GLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3sv, ( , GLenum _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4d, ( , GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4dv, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4f, ( , GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4fv, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4i, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4iv, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4s, ( , GLenum _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4sv, ( , GLenum _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LoadTransposeMatrixf, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LoadTransposeMatrixd, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultTransposeMatrixf, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultTransposeMatrixd, ( , const GLdouble * _1 ), ( , _1 ) ) \
\
    /* GL_VERSION_1_4 */ \
    FG4CPP_GL_FUNCTION_VOID( BlendFuncSeparate, ( , GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawArrays, ( , GLenum _1, const GLint * _2, const GLsizei * _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawElements, ( , GLenum _1, const GLsizei * _2, GLenum _3, const GLvoid *const* _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PointParameterf, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PointParameterfv, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PointParameteri, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PointParameteriv, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogCoordf, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogCoordfv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogCoordd, ( , GLdouble _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogCoorddv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogCoordPointer, ( , GLenum _1, GLsizei _2, const GLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3b, ( , GLbyte _1, GLbyte _2, GLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3bv, ( , const GLbyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3d, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3f, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3i, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3s, ( , GLshort _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3ub, ( , GLubyte _1, GLubyte _2, GLubyte _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3ubv, ( , const GLubyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3ui, ( , GLuint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3uiv, ( , const GLuint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3us, ( , GLushort _1, GLushort _2, GLushort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3usv, ( , const GLushort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColorPointer, ( , GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2d, ( , GLdouble _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2f, ( , GLfloat _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2i, ( , GLint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2s, ( , GLshort _1, GLshort _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3d, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3dv, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3f, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3fv, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3i, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3iv, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3s, ( , GLshort _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3sv, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendColor, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendEquation, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_VERSION_1_5 */ \
    FG4CPP_GL_FUNCTION_VOID( GenQueries, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteQueries, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsQuery, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BeginQuery, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EndQuery, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetQueryiv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetQueryObjectiv, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetQueryObjectuiv, ( , GLuint _1, GLenum _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindBuffer, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteBuffers, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenBuffers, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsBuffer, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BufferData, ( , GLenum _1, GLsizeiptr _2, const GLvoid * _3, GLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BufferSubData, ( , GLenum _1, GLintptr _2, GLsizeiptr _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetBufferSubData, ( , GLenum _1, GLintptr _2, GLsizeiptr _3, GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_PTR( MapBuffer, void *, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( UnmapBuffer, GLboolean, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetBufferParameteriv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetBufferPointerv, ( , GLenum _1, GLenum _2, GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_VERSION_2_0 */ \
    FG4CPP_GL_FUNCTION_VOID( BlendEquationSeparate, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawBuffers, ( , GLsizei _1, const GLenum * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( StencilOpSeparate, ( , GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( StencilFuncSeparate, ( , GLenum _1, GLenum _2, GLint _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( StencilMaskSeparate, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( AttachShader, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindAttribLocation, ( , GLuint _1, GLuint _2, const GLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompileShader, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( CreateProgram, GLuint, (), () ) \
    FG4CPP_GL_FUNCTION_NUM( CreateShader, GLuint, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteProgram, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteShader, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DetachShader, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DisableVertexAttribArray, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EnableVertexAttribArray, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetActiveAttrib, ( , GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLint * _5, GLenum * _6, GLchar * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetActiveUniform, ( , GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLint * _5, GLenum * _6, GLchar * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetAttachedShaders, ( , GLuint _1, GLsizei _2, GLsizei * _3, GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetAttribLocation, GLint, ( , GLuint _1, const GLchar * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramiv, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramInfoLog, ( , GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetShaderiv, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetShaderInfoLog, ( , GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetShaderSource, ( , GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetUniformLocation, GLint, ( , GLuint _1, const GLchar * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetUniformfv, ( , GLuint _1, GLint _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetUniformiv, ( , GLuint _1, GLint _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribdv, ( , GLuint _1, GLenum _2, GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribfv, ( , GLuint _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribiv, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribPointerv, ( , GLuint _1, GLenum _2, GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsProgram, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsShader, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LinkProgram, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ShaderSource, ( , GLuint _1, GLsizei _2, const GLchar *const* _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UseProgram, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1f, ( , GLint _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2f, ( , GLint _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3f, ( , GLint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4f, ( , GLint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1i, ( , GLint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2i, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3i, ( , GLint _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4i, ( , GLint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1fv, ( , GLint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2fv, ( , GLint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3fv, ( , GLint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4fv, ( , GLint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1iv, ( , GLint _1, GLsizei _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2iv, ( , GLint _1, GLsizei _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3iv, ( , GLint _1, GLsizei _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4iv, ( , GLint _1, GLsizei _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix2fv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix3fv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix4fv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ValidateProgram, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1d, ( , GLuint _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1dv, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1f, ( , GLuint _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1fv, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1s, ( , GLuint _1, GLshort _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1sv, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2d, ( , GLuint _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2dv, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2f, ( , GLuint _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2fv, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2s, ( , GLuint _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2sv, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3d, ( , GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3dv, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3f, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3fv, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3s, ( , GLuint _1, GLshort _2, GLshort _3, GLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3sv, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4Nbv, ( , GLuint _1, const GLbyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4Niv, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4Nsv, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4Nub, ( , GLuint _1, GLubyte _2, GLubyte _3, GLubyte _4, GLubyte _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4Nubv, ( , GLuint _1, const GLubyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4Nuiv, ( , GLuint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4Nusv, ( , GLuint _1, const GLushort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4bv, ( , GLuint _1, const GLbyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4d, ( , GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4dv, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4f, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4fv, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4iv, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4s, ( , GLuint _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4sv, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4ubv, ( , GLuint _1, const GLubyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4uiv, ( , GLuint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4usv, ( , GLuint _1, const GLushort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribPointer, ( , GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLsizei _5, const GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_VERSION_2_1 */ \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix2x3fv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix3x2fv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix2x4fv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix4x2fv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix3x4fv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix4x3fv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_3_0 */ \
    FG4CPP_GL_FUNCTION_VOID( ColorMaski, ( , GLuint _1, GLboolean _2, GLboolean _3, GLboolean _4, GLboolean _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetBooleani_v, ( , GLenum _1, GLuint _2, GLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetIntegeri_v, ( , GLenum _1, GLuint _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Enablei, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Disablei, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsEnabledi, GLboolean, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BeginTransformFeedback, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EndTransformFeedback, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( BindBufferRange, ( , GLenum _1, GLuint _2, GLuint _3, GLintptr _4, GLsizeiptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindBufferBase, ( , GLenum _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TransformFeedbackVaryings, ( , GLuint _1, GLsizei _2, const GLchar *const* _3, GLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTransformFeedbackVarying, ( , GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLsizei * _5, GLenum * _6, GLchar * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClampColor, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BeginConditionalRender, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EndConditionalRender, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribIPointer, ( , GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribIiv, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribIuiv, ( , GLuint _1, GLenum _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI1i, ( , GLuint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI2i, ( , GLuint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI3i, ( , GLuint _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4i, ( , GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI1ui, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI2ui, ( , GLuint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI3ui, ( , GLuint _1, GLuint _2, GLuint _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4ui, ( , GLuint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI1iv, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI2iv, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI3iv, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4iv, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI1uiv, ( , GLuint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI2uiv, ( , GLuint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI3uiv, ( , GLuint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4uiv, ( , GLuint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4bv, ( , GLuint _1, const GLbyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4sv, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4ubv, ( , GLuint _1, const GLubyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4usv, ( , GLuint _1, const GLushort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetUniformuiv, ( , GLuint _1, GLint _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindFragDataLocation, ( , GLuint _1, GLuint _2, const GLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetFragDataLocation, GLint, ( , GLuint _1, const GLchar * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1ui, ( , GLint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2ui, ( , GLint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3ui, ( , GLint _1, GLuint _2, GLuint _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4ui, ( , GLint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1uiv, ( , GLint _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2uiv, ( , GLint _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3uiv, ( , GLint _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4uiv, ( , GLint _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexParameterIiv, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexParameterIuiv, ( , GLenum _1, GLenum _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexParameterIiv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexParameterIuiv, ( , GLenum _1, GLenum _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearBufferiv, ( , GLenum _1, GLint _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearBufferuiv, ( , GLenum _1, GLint _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearBufferfv, ( , GLenum _1, GLint _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearBufferfi, ( , GLenum _1, GLint _2, GLfloat _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_PTR( GetStringi, const GLubyte *, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsRenderbuffer, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindRenderbuffer, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteRenderbuffers, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenRenderbuffers, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RenderbufferStorage, ( , GLenum _1, GLenum _2, GLsizei _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetRenderbufferParameteriv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsFramebuffer, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindFramebuffer, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteFramebuffers, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenFramebuffers, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( CheckFramebufferStatus, GLenum, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTexture1D, ( , GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTexture2D, ( , GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTexture3D, ( , GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5, GLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferRenderbuffer, ( , GLenum _1, GLenum _2, GLenum _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFramebufferAttachmentParameteriv, ( , GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenerateMipmap, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlitFramebuffer, ( , GLint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLint _8, GLbitfield _9, GLenum _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RenderbufferStorageMultisample, ( , GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTextureLayer, ( , GLenum _1, GLenum _2, GLuint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_PTR( MapBufferRange, void *, ( , GLenum _1, GLintptr _2, GLsizeiptr _3, GLbitfield _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FlushMappedBufferRange, ( , GLenum _1, GLintptr _2, GLsizeiptr _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindVertexArray, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteVertexArrays, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenVertexArrays, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsVertexArray, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
\
    /* GL_VERSION_3_1 */ \
    FG4CPP_GL_FUNCTION_VOID( DrawArraysInstanced, ( , GLenum _1, GLint _2, GLsizei _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawElementsInstanced, ( , GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexBuffer, ( , GLenum _1, GLenum _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PrimitiveRestartIndex, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyBufferSubData, ( , GLenum _1, GLenum _2, GLintptr _3, GLintptr _4, GLsizeiptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetUniformIndices, ( , GLuint _1, GLsizei _2, const GLchar *const* _3, GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetActiveUniformsiv, ( , GLuint _1, GLsizei _2, const GLuint * _3, GLenum _4, GLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetActiveUniformName, ( , GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetUniformBlockIndex, GLuint, ( , GLuint _1, const GLchar * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetActiveUniformBlockiv, ( , GLuint _1, GLuint _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetActiveUniformBlockName, ( , GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformBlockBinding, ( , GLuint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_VERSION_3_2 */ \
    FG4CPP_GL_FUNCTION_VOID( DrawElementsBaseVertex, ( , GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawRangeElementsBaseVertex, ( , GLenum _1, GLuint _2, GLuint _3, GLsizei _4, GLenum _5, const GLvoid * _6, GLint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawElementsInstancedBaseVertex, ( , GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLsizei _5, GLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawElementsBaseVertex, ( , GLenum _1, const GLsizei * _2, GLenum _3, const GLvoid *const* _4, GLsizei _5, const GLint * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProvokingVertex, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_PTR( FenceSync, GLsync, ( , GLenum _1, GLbitfield _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsSync, GLboolean, ( , GLsync _1 ), ( , toFg( _1 ) ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteSync, ( , GLsync _1 ), ( , toFg( _1 ) ) ) \
    FG4CPP_GL_FUNCTION_NUM( ClientWaitSync, GLenum, ( , GLsync _1, GLbitfield _2, GLuint64 _3 ), ( , toFg( _1 ), _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WaitSync, ( , GLsync _1, GLbitfield _2, GLuint64 _3 ), ( , toFg( _1 ), _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetInteger64v, ( , GLenum _1, GLint64 * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetSynciv, ( , GLsync _1, GLenum _2, GLsizei _3, GLsizei * _4, GLint * _5 ), ( , toFg( _1 ), _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetInteger64i_v, ( , GLenum _1, GLuint _2, GLint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetBufferParameteri64v, ( , GLenum _1, GLenum _2, GLint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTexture, ( , GLenum _1, GLenum _2, GLuint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexImage2DMultisample, ( , GLenum _1, GLsizei _2, GLint _3, GLsizei _4, GLsizei _5, GLboolean _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexImage3DMultisample, ( , GLenum _1, GLsizei _2, GLint _3, GLsizei _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMultisamplefv, ( , GLenum _1, GLuint _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SampleMaski, ( , GLuint _1, GLbitfield _2 ), ( , _1, _2 ) ) \
\
    /* GL_VERSION_3_3 */ \
    FG4CPP_GL_FUNCTION_VOID( BindFragDataLocationIndexed, ( , GLuint _1, GLuint _2, GLuint _3, const GLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetFragDataIndex, GLint, ( , GLuint _1, const GLchar * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenSamplers, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteSamplers, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsSampler, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindSampler, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SamplerParameteri, ( , GLuint _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SamplerParameteriv, ( , GLuint _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SamplerParameterf, ( , GLuint _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SamplerParameterfv, ( , GLuint _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SamplerParameterIiv, ( , GLuint _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SamplerParameterIuiv, ( , GLuint _1, GLenum _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetSamplerParameteriv, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetSamplerParameterIiv, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetSamplerParameterfv, ( , GLuint _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetSamplerParameterIuiv, ( , GLuint _1, GLenum _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( QueryCounter, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetQueryObjecti64v, ( , GLuint _1, GLenum _2, GLint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetQueryObjectui64v, ( , GLuint _1, GLenum _2, GLuint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribDivisor, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribP1ui, ( , GLuint _1, GLenum _2, GLboolean _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribP1uiv, ( , GLuint _1, GLenum _2, GLboolean _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribP2ui, ( , GLuint _1, GLenum _2, GLboolean _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribP2uiv, ( , GLuint _1, GLenum _2, GLboolean _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribP3ui, ( , GLuint _1, GLenum _2, GLboolean _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribP3uiv, ( , GLuint _1, GLenum _2, GLboolean _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribP4ui, ( , GLuint _1, GLenum _2, GLboolean _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribP4uiv, ( , GLuint _1, GLenum _2, GLboolean _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexP2ui, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexP2uiv, ( , GLenum _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexP3ui, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexP3uiv, ( , GLenum _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexP4ui, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexP4uiv, ( , GLenum _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoordP1ui, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoordP1uiv, ( , GLenum _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoordP2ui, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoordP2uiv, ( , GLenum _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoordP3ui, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoordP3uiv, ( , GLenum _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoordP4ui, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoordP4uiv, ( , GLenum _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoordP1ui, ( , GLenum _1, GLenum _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoordP1uiv, ( , GLenum _1, GLenum _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoordP2ui, ( , GLenum _1, GLenum _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoordP2uiv, ( , GLenum _1, GLenum _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoordP3ui, ( , GLenum _1, GLenum _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoordP3uiv, ( , GLenum _1, GLenum _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoordP4ui, ( , GLenum _1, GLenum _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoordP4uiv, ( , GLenum _1, GLenum _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalP3ui, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalP3uiv, ( , GLenum _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorP3ui, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorP3uiv, ( , GLenum _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorP4ui, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorP4uiv, ( , GLenum _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColorP3ui, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColorP3uiv, ( , GLenum _1, const GLuint * _2 ), ( , _1, _2 ) ) \
\
    /* GL_VERSION_4_0 */ \
    FG4CPP_GL_FUNCTION_VOID( MinSampleShading, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendEquationi, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendEquationSeparatei, ( , GLuint _1, GLenum _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendFunci, ( , GLuint _1, GLenum _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendFuncSeparatei, ( , GLuint _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawArraysIndirect, ( , GLenum _1, const GLvoid * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawElementsIndirect, ( , GLenum _1, GLenum _2, const GLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1d, ( , GLint _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2d, ( , GLint _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3d, ( , GLint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4d, ( , GLint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1dv, ( , GLint _1, GLsizei _2, const GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2dv, ( , GLint _1, GLsizei _2, const GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3dv, ( , GLint _1, GLsizei _2, const GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4dv, ( , GLint _1, GLsizei _2, const GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix2dv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix3dv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix4dv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix2x3dv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix2x4dv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix3x2dv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix3x4dv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix4x2dv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix4x3dv, ( , GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetUniformdv, ( , GLuint _1, GLint _2, GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetSubroutineUniformLocation, GLint, ( , GLuint _1, GLenum _2, const GLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetSubroutineIndex, GLuint, ( , GLuint _1, GLenum _2, const GLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetActiveSubroutineUniformiv, ( , GLuint _1, GLenum _2, GLuint _3, GLenum _4, GLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetActiveSubroutineUniformName, ( , GLuint _1, GLenum _2, GLuint _3, GLsizei _4, GLsizei * _5, GLchar * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetActiveSubroutineName, ( , GLuint _1, GLenum _2, GLuint _3, GLsizei _4, GLsizei * _5, GLchar * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformSubroutinesuiv, ( , GLenum _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetUniformSubroutineuiv, ( , GLenum _1, GLint _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramStageiv, ( , GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PatchParameteri, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PatchParameterfv, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindTransformFeedback, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteTransformFeedbacks, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenTransformFeedbacks, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsTransformFeedback, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PauseTransformFeedback, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( ResumeTransformFeedback, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( DrawTransformFeedback, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawTransformFeedbackStream, ( , GLenum _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BeginQueryIndexed, ( , GLenum _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EndQueryIndexed, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetQueryIndexediv, ( , GLenum _1, GLuint _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_4_1 */ \
    FG4CPP_GL_FUNCTION_VOID( ReleaseShaderCompiler, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( ShaderBinary, ( , GLsizei _1, const GLuint * _2, GLenum _3, const GLvoid * _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetShaderPrecisionFormat, ( , GLenum _1, GLenum _2, GLint * _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DepthRangef, ( , GLfloat _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearDepthf, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramBinary, ( , GLuint _1, GLsizei _2, GLsizei * _3, GLenum * _4, GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramBinary, ( , GLuint _1, GLenum _2, const GLvoid * _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramParameteri, ( , GLuint _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UseProgramStages, ( , GLuint _1, GLbitfield _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ActiveShaderProgram, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( CreateShaderProgramv, GLuint, ( , GLenum _1, GLsizei _2, const GLchar *const* _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindProgramPipeline, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteProgramPipelines, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenProgramPipelines, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsProgramPipeline, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramPipelineiv, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1i, ( , GLuint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1iv, ( , GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1f, ( , GLuint _1, GLint _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1fv, ( , GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1d, ( , GLuint _1, GLint _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1dv, ( , GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1ui, ( , GLuint _1, GLint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1uiv, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2i, ( , GLuint _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2iv, ( , GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2f, ( , GLuint _1, GLint _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2fv, ( , GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2d, ( , GLuint _1, GLint _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2dv, ( , GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2ui, ( , GLuint _1, GLint _2, GLuint _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2uiv, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3i, ( , GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3iv, ( , GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3f, ( , GLuint _1, GLint _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3fv, ( , GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3d, ( , GLuint _1, GLint _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3dv, ( , GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3ui, ( , GLuint _1, GLint _2, GLuint _3, GLuint _4, GLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3uiv, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4i, ( , GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4iv, ( , GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4f, ( , GLuint _1, GLint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4fv, ( , GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4d, ( , GLuint _1, GLint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4dv, ( , GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4ui, ( , GLuint _1, GLint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4uiv, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix2fv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix3fv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix4fv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix2dv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix3dv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix4dv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x3fv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x2fv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x4fv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x2fv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x4fv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x3fv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x3dv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x2dv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x4dv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x2dv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x4dv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x3dv, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ValidateProgramPipeline, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramPipelineInfoLog, ( , GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL1d, ( , GLuint _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL2d, ( , GLuint _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL3d, ( , GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL4d, ( , GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL1dv, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL2dv, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL3dv, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL4dv, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribLPointer, ( , GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribLdv, ( , GLuint _1, GLenum _2, GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ViewportArrayv, ( , GLuint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ViewportIndexedf, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ViewportIndexedfv, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ScissorArrayv, ( , GLuint _1, GLsizei _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ScissorIndexed, ( , GLuint _1, GLint _2, GLint _3, GLsizei _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ScissorIndexedv, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DepthRangeArrayv, ( , GLuint _1, GLsizei _2, const GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DepthRangeIndexed, ( , GLuint _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFloati_v, ( , GLenum _1, GLuint _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetDoublei_v, ( , GLenum _1, GLuint _2, GLdouble * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_VERSION_4_2 */ \
    FG4CPP_GL_FUNCTION_VOID( DrawArraysInstancedBaseInstance, ( , GLenum _1, GLint _2, GLsizei _3, GLsizei _4, GLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawElementsInstancedBaseInstance, ( , GLenum _1, GLsizei _2, GLenum _3, const void * _4, GLsizei _5, GLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawElementsInstancedBaseVertexBaseInstance, ( , GLenum _1, GLsizei _2, GLenum _3, const void * _4, GLsizei _5, GLint _6, GLuint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetInternalformativ, ( , GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetActiveAtomicCounterBufferiv, ( , GLuint _1, GLuint _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindImageTexture, ( , GLuint _1, GLuint _2, GLint _3, GLboolean _4, GLint _5, GLenum _6, GLenum _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MemoryBarrier, ( , GLbitfield _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexStorage1D, ( , GLenum _1, GLsizei _2, GLenum _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexStorage2D, ( , GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexStorage3D, ( , GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawTransformFeedbackInstanced, ( , GLenum _1, GLuint _2, GLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawTransformFeedbackStreamInstanced, ( , GLenum _1, GLuint _2, GLuint _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_4_3 */ \
    FG4CPP_GL_FUNCTION_VOID( ClearBufferData, ( , GLenum _1, GLenum _2, GLenum _3, GLenum _4, const void * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearBufferSubData, ( , GLenum _1, GLenum _2, GLintptr _3, GLsizeiptr _4, GLenum _5, GLenum _6, const void * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DispatchCompute, ( , GLuint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DispatchComputeIndirect, ( , GLintptr _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyImageSubData, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLuint _7, GLenum _8, GLint _9, GLint _10, GLint _11, GLint _12, GLsizei _13, GLsizei _14, GLsizei _15 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferParameteri, ( , GLenum _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFramebufferParameteriv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetInternalformati64v, ( , GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLint64 * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( InvalidateTexSubImage, ( , GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( InvalidateTexImage, ( , GLuint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( InvalidateBufferSubData, ( , GLuint _1, GLintptr _2, GLsizeiptr _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( InvalidateBufferData, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( InvalidateFramebuffer, ( , GLenum _1, GLsizei _2, const GLenum * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( InvalidateSubFramebuffer, ( , GLenum _1, GLsizei _2, const GLenum * _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawArraysIndirect, ( , GLenum _1, const void * _2, GLsizei _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawElementsIndirect, ( , GLenum _1, GLenum _2, const void * _3, GLsizei _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramInterfaceiv, ( , GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetProgramResourceIndex, GLuint, ( , GLuint _1, GLenum _2, const GLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramResourceName, ( , GLuint _1, GLenum _2, GLuint _3, GLsizei _4, GLsizei * _5, GLchar * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramResourceiv, ( , GLuint _1, GLenum _2, GLuint _3, GLsizei _4, const GLenum * _5, GLsizei _6, GLsizei * _7, GLint * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetProgramResourceLocation, GLint, ( , GLuint _1, GLenum _2, const GLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetProgramResourceLocationIndex, GLint, ( , GLuint _1, GLenum _2, const GLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ShaderStorageBlockBinding, ( , GLuint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexBufferRange, ( , GLenum _1, GLenum _2, GLuint _3, GLintptr _4, GLsizeiptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexStorage2DMultisample, ( , GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5, GLboolean _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexStorage3DMultisample, ( , GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureView, ( , GLuint _1, GLenum _2, GLuint _3, GLenum _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindVertexBuffer, ( , GLuint _1, GLuint _2, GLintptr _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribFormat, ( , GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribIFormat, ( , GLuint _1, GLint _2, GLenum _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribLFormat, ( , GLuint _1, GLint _2, GLenum _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribBinding, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexBindingDivisor, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DebugMessageControl, ( , GLenum _1, GLenum _2, GLenum _3, GLsizei _4, const GLuint * _5, GLboolean _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DebugMessageInsert, ( , GLenum _1, GLenum _2, GLuint _3, GLenum _4, GLsizei _5, const GLchar * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DebugMessageCallback, ( , GLDebugProc _1, const void * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetDebugMessageLog, GLuint, ( , GLuint _1, GLsizei _2, GLenum * _3, GLenum * _4, GLuint * _5, GLenum * _6, GLsizei * _7, GLchar * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PushDebugGroup, ( , GLenum _1, GLuint _2, GLsizei _3, const GLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PopDebugGroup, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( ObjectLabel, ( , GLenum _1, GLuint _2, GLsizei _3, const GLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetObjectLabel, ( , GLenum _1, GLuint _2, GLsizei _3, GLsizei * _4, GLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ObjectPtrLabel, ( , const void * _1, GLsizei _2, const GLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetObjectPtrLabel, ( , const void * _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_4_4 */ \
    FG4CPP_GL_FUNCTION_VOID( BufferStorage, ( , GLenum _1, GLsizeiptr _2, const void * _3, GLbitfield _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearTexImage, ( , GLuint _1, GLint _2, GLenum _3, GLenum _4, const void * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearTexSubImage, ( , GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLenum _10, const void * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindBuffersBase, ( , GLenum _1, GLuint _2, GLsizei _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindBuffersRange, ( , GLenum _1, GLuint _2, GLsizei _3, const GLuint * _4, const GLintptr * _5, const GLsizeiptr * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindTextures, ( , GLuint _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindSamplers, ( , GLuint _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindImageTextures, ( , GLuint _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindVertexBuffers, ( , GLuint _1, GLsizei _2, const GLuint * _3, const GLintptr * _4, const GLsizei * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_ARB_ES2_compatibility */ \
\
    /* GL_ARB_ES3_compatibility */ \
\
    /* GL_ARB_arrays_of_arrays */ \
\
    /* GL_ARB_base_instance */ \
\
    /* GL_ARB_bindless_texture */ \
    FG4CPP_GL_FUNCTION_NUM( GetTextureHandleARB, GLuint64, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetTextureSamplerHandleARB, GLuint64, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MakeTextureHandleResidentARB, ( , GLuint64 _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MakeTextureHandleNonResidentARB, ( , GLuint64 _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetImageHandleARB, GLuint64, ( , GLuint _1, GLint _2, GLboolean _3, GLint _4, GLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MakeImageHandleResidentARB, ( , GLuint64 _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MakeImageHandleNonResidentARB, ( , GLuint64 _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformHandleui64ARB, ( , GLint _1, GLuint64 _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformHandleui64vARB, ( , GLint _1, GLsizei _2, const GLuint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformHandleui64ARB, ( , GLuint _1, GLint _2, GLuint64 _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformHandleui64vARB, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint64 * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsTextureHandleResidentARB, GLboolean, ( , GLuint64 _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsImageHandleResidentARB, GLboolean, ( , GLuint64 _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL1ui64ARB, ( , GLuint _1, GLuint64EXT _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL1ui64vARB, ( , GLuint _1, const GLuint64EXT * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribLui64vARB, ( , GLuint _1, GLenum _2, GLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ARB_blend_func_extended */ \
\
    /* GL_ARB_buffer_storage */ \
\
    /* GL_ARB_cl_event */ \
    FG4CPP_GL_FUNCTION_PTR( CreateSyncFromCLeventARB, GLsync, ( , GLclcontext _1, GLclevent _2, GLbitfield _3 ), ( , toFg( _1 ), toFg( _2 ), _3 ) ) \
\
    /* GL_ARB_clear_buffer_object */ \
\
    /* GL_ARB_clear_texture */ \
\
    /* GL_ARB_color_buffer_float */ \
    FG4CPP_GL_FUNCTION_VOID( ClampColorARB, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
\
    /* GL_ARB_compatibility */ \
\
    /* GL_ARB_compressed_texture_pixel_storage */ \
\
    /* GL_ARB_compute_shader */ \
\
    /* GL_ARB_compute_variable_group_size */ \
    FG4CPP_GL_FUNCTION_VOID( DispatchComputeGroupSizeARB, ( , GLuint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_ARB_conservative_depth */ \
\
    /* GL_ARB_copy_buffer */ \
\
    /* GL_ARB_copy_image */ \
\
    /* GL_ARB_debug_output */ \
    FG4CPP_GL_FUNCTION_VOID( DebugMessageControlARB, ( , GLenum _1, GLenum _2, GLenum _3, GLsizei _4, const GLuint * _5, GLboolean _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DebugMessageInsertARB, ( , GLenum _1, GLenum _2, GLuint _3, GLenum _4, GLsizei _5, const GLchar * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DebugMessageCallbackARB, ( , GLDebugProcARB _1, const void * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetDebugMessageLogARB, GLuint, ( , GLuint _1, GLsizei _2, GLenum * _3, GLenum * _4, GLuint * _5, GLenum * _6, GLsizei * _7, GLchar * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_ARB_depth_buffer_float */ \
\
    /* GL_ARB_depth_clamp */ \
\
    /* GL_ARB_depth_texture */ \
\
    /* GL_ARB_draw_buffers */ \
    FG4CPP_GL_FUNCTION_VOID( DrawBuffersARB, ( , GLsizei _1, const GLenum * _2 ), ( , _1, _2 ) ) \
\
    /* GL_ARB_draw_buffers_blend */ \
    FG4CPP_GL_FUNCTION_VOID( BlendEquationiARB, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendEquationSeparateiARB, ( , GLuint _1, GLenum _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendFunciARB, ( , GLuint _1, GLenum _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendFuncSeparateiARB, ( , GLuint _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_ARB_draw_elements_base_vertex */ \
\
    /* GL_ARB_draw_indirect */ \
\
    /* GL_ARB_draw_instanced */ \
    FG4CPP_GL_FUNCTION_VOID( DrawArraysInstancedARB, ( , GLenum _1, GLint _2, GLsizei _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawElementsInstancedARB, ( , GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_ARB_enhanced_layouts */ \
\
    /* GL_ARB_explicit_attrib_location */ \
\
    /* GL_ARB_explicit_uniform_location */ \
\
    /* GL_ARB_fragment_coord_conventions */ \
\
    /* GL_ARB_fragment_layer_viewport */ \
\
    /* GL_ARB_fragment_program */ \
    FG4CPP_GL_FUNCTION_VOID( ProgramStringARB, ( , GLenum _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindProgramARB, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteProgramsARB, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenProgramsARB, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramEnvParameter4dARB, ( , GLenum _1, GLuint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramEnvParameter4dvARB, ( , GLenum _1, GLuint _2, const GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramEnvParameter4fARB, ( , GLenum _1, GLuint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramEnvParameter4fvARB, ( , GLenum _1, GLuint _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramLocalParameter4dARB, ( , GLenum _1, GLuint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramLocalParameter4dvARB, ( , GLenum _1, GLuint _2, const GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramLocalParameter4fARB, ( , GLenum _1, GLuint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramLocalParameter4fvARB, ( , GLenum _1, GLuint _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramEnvParameterdvARB, ( , GLenum _1, GLuint _2, GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramEnvParameterfvARB, ( , GLenum _1, GLuint _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramLocalParameterdvARB, ( , GLenum _1, GLuint _2, GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramLocalParameterfvARB, ( , GLenum _1, GLuint _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramivARB, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramStringARB, ( , GLenum _1, GLenum _2, GLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsProgramARB, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
\
    /* GL_ARB_fragment_program_shadow */ \
\
    /* GL_ARB_fragment_shader */ \
\
    /* GL_ARB_framebuffer_no_attachments */ \
\
    /* GL_ARB_framebuffer_object */ \
\
    /* GL_ARB_framebuffer_sRGB */ \
\
    /* GL_ARB_geometry_shader4 */ \
    FG4CPP_GL_FUNCTION_VOID( ProgramParameteriARB, ( , GLuint _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTextureARB, ( , GLenum _1, GLenum _2, GLuint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTextureLayerARB, ( , GLenum _1, GLenum _2, GLuint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTextureFaceARB, ( , GLenum _1, GLenum _2, GLuint _3, GLint _4, GLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_ARB_get_program_binary */ \
\
    /* GL_ARB_gpu_shader5 */ \
\
    /* GL_ARB_gpu_shader_fp64 */ \
\
    /* GL_ARB_half_float_pixel */ \
\
    /* GL_ARB_half_float_vertex */ \
\
    /* GL_ARB_imaging */ \
    FG4CPP_GL_FUNCTION_VOID( ColorTable, ( , GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorTableParameterfv, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorTableParameteriv, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyColorTable, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetColorTable, ( , GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetColorTableParameterfv, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetColorTableParameteriv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorSubTable, ( , GLenum _1, GLsizei _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyColorSubTable, ( , GLenum _1, GLsizei _2, GLint _3, GLint _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionFilter1D, ( , GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionFilter2D, ( , GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionParameterf, ( , GLenum _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionParameterfv, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionParameteri, ( , GLenum _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionParameteriv, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyConvolutionFilter1D, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyConvolutionFilter2D, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetConvolutionFilter, ( , GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetConvolutionParameterfv, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetConvolutionParameteriv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetSeparableFilter, ( , GLenum _1, GLenum _2, GLenum _3, GLvoid * _4, GLvoid * _5, GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SeparableFilter2D, ( , GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7, const GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetHistogram, ( , GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetHistogramParameterfv, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetHistogramParameteriv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMinmax, ( , GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMinmaxParameterfv, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMinmaxParameteriv, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Histogram, ( , GLenum _1, GLsizei _2, GLenum _3, GLboolean _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Minmax, ( , GLenum _1, GLenum _2, GLboolean _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ResetHistogram, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ResetMinmax, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_ARB_indirect_parameters */ \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawArraysIndirectCountARB, ( , GLenum _1, GLintptr _2, GLintptr _3, GLsizei _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawElementsIndirectCountARB, ( , GLenum _1, GLenum _2, GLintptr _3, GLintptr _4, GLsizei _5, GLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_ARB_instanced_arrays */ \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribDivisorARB, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
\
    /* GL_ARB_internalformat_query */ \
\
    /* GL_ARB_internalformat_query2 */ \
\
    /* GL_ARB_invalidate_subdata */ \
\
    /* GL_ARB_map_buffer_alignment */ \
\
    /* GL_ARB_map_buffer_range */ \
\
    /* GL_ARB_matrix_palette */ \
    FG4CPP_GL_FUNCTION_VOID( CurrentPaletteMatrixARB, ( , GLint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixIndexubvARB, ( , GLint _1, const GLubyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixIndexusvARB, ( , GLint _1, const GLushort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixIndexuivARB, ( , GLint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixIndexPointerARB, ( , GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_ARB_multi_bind */ \
\
    /* GL_ARB_multi_draw_indirect */ \
\
    /* GL_ARB_multisample */ \
    FG4CPP_GL_FUNCTION_VOID( SampleCoverageARB, ( , GLfloat _1, GLboolean _2 ), ( , _1, _2 ) ) \
\
    /* GL_ARB_multitexture */ \
    FG4CPP_GL_FUNCTION_VOID( ActiveTextureARB, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClientActiveTextureARB, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1dARB, ( , GLenum _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1dvARB, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1fARB, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1fvARB, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1iARB, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1ivARB, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1sARB, ( , GLenum _1, GLshort _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1svARB, ( , GLenum _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2dARB, ( , GLenum _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2dvARB, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2fARB, ( , GLenum _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2fvARB, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2iARB, ( , GLenum _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2ivARB, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2sARB, ( , GLenum _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2svARB, ( , GLenum _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3dARB, ( , GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3dvARB, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3fARB, ( , GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3fvARB, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3iARB, ( , GLenum _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3ivARB, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3sARB, ( , GLenum _1, GLshort _2, GLshort _3, GLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3svARB, ( , GLenum _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4dARB, ( , GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4dvARB, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4fARB, ( , GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4fvARB, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4iARB, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4ivARB, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4sARB, ( , GLenum _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4svARB, ( , GLenum _1, const GLshort * _2 ), ( , _1, _2 ) ) \
\
    /* GL_ARB_occlusion_query */ \
    FG4CPP_GL_FUNCTION_VOID( GenQueriesARB, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteQueriesARB, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsQueryARB, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BeginQueryARB, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EndQueryARB, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetQueryivARB, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetQueryObjectivARB, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetQueryObjectuivARB, ( , GLuint _1, GLenum _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ARB_occlusion_query2 */ \
\
    /* GL_ARB_pixel_buffer_object */ \
\
    /* GL_ARB_point_parameters */ \
    FG4CPP_GL_FUNCTION_VOID( PointParameterfARB, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PointParameterfvARB, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_ARB_point_sprite */ \
\
    /* GL_ARB_program_interface_query */ \
\
    /* GL_ARB_provoking_vertex */ \
\
    /* GL_ARB_query_buffer_object */ \
\
    /* GL_ARB_robust_buffer_access_behavior */ \
\
    /* GL_ARB_robustness */ \
    FG4CPP_GL_FUNCTION_NUM( GetGraphicsResetStatusARB, GLenum, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( GetnTexImageARB, ( , GLenum _1, GLint _2, GLenum _3, GLenum _4, GLsizei _5, GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReadnPixelsARB, ( , GLint _1, GLint _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, GLsizei _7, GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnCompressedTexImageARB, ( , GLenum _1, GLint _2, GLsizei _3, GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnUniformfvARB, ( , GLuint _1, GLint _2, GLsizei _3, GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnUniformivARB, ( , GLuint _1, GLint _2, GLsizei _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnUniformuivARB, ( , GLuint _1, GLint _2, GLsizei _3, GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnUniformdvARB, ( , GLuint _1, GLint _2, GLsizei _3, GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnMapdvARB, ( , GLenum _1, GLenum _2, GLsizei _3, GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnMapfvARB, ( , GLenum _1, GLenum _2, GLsizei _3, GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnMapivARB, ( , GLenum _1, GLenum _2, GLsizei _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnPixelMapfvARB, ( , GLenum _1, GLsizei _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnPixelMapuivARB, ( , GLenum _1, GLsizei _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnPixelMapusvARB, ( , GLenum _1, GLsizei _2, GLushort * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnPolygonStippleARB, ( , GLsizei _1, GLubyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnColorTableARB, ( , GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnConvolutionFilterARB, ( , GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnSeparableFilterARB, ( , GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLvoid * _5, GLsizei _6, GLvoid * _7, GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnHistogramARB, ( , GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLsizei _5, GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetnMinmaxARB, ( , GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLsizei _5, GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_ARB_robustness_isolation */ \
\
    /* GL_ARB_sample_shading */ \
    FG4CPP_GL_FUNCTION_VOID( MinSampleShadingARB, ( , GLfloat _1 ), ( , _1 ) ) \
\
    /* GL_ARB_sampler_objects */ \
\
    /* GL_ARB_seamless_cube_map */ \
\
    /* GL_ARB_seamless_cubemap_per_texture */ \
\
    /* GL_ARB_separate_shader_objects */ \
\
    /* GL_ARB_shader_atomic_counters */ \
\
    /* GL_ARB_shader_bit_encoding */ \
\
    /* GL_ARB_shader_draw_parameters */ \
\
    /* GL_ARB_shader_group_vote */ \
\
    /* GL_ARB_shader_image_load_store */ \
\
    /* GL_ARB_shader_image_size */ \
\
    /* GL_ARB_shader_objects */ \
    FG4CPP_GL_FUNCTION_VOID( DeleteObjectARB, ( , GLhandleARB _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetHandleARB, GLhandleARB, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DetachObjectARB, ( , GLhandleARB _1, GLhandleARB _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( CreateShaderObjectARB, GLhandleARB, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ShaderSourceARB, ( , GLhandleARB _1, GLsizei _2, const GLcharARB ** _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompileShaderARB, ( , GLhandleARB _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( CreateProgramObjectARB, GLhandleARB, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( AttachObjectARB, ( , GLhandleARB _1, GLhandleARB _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LinkProgramARB, ( , GLhandleARB _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UseProgramObjectARB, ( , GLhandleARB _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ValidateProgramARB, ( , GLhandleARB _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1fARB, ( , GLint _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2fARB, ( , GLint _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3fARB, ( , GLint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4fARB, ( , GLint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1iARB, ( , GLint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2iARB, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3iARB, ( , GLint _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4iARB, ( , GLint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1fvARB, ( , GLint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2fvARB, ( , GLint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3fvARB, ( , GLint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4fvARB, ( , GLint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1ivARB, ( , GLint _1, GLsizei _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2ivARB, ( , GLint _1, GLsizei _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3ivARB, ( , GLint _1, GLsizei _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4ivARB, ( , GLint _1, GLsizei _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix2fvARB, ( , GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix3fvARB, ( , GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformMatrix4fvARB, ( , GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetObjectParameterfvARB, ( , GLhandleARB _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetObjectParameterivARB, ( , GLhandleARB _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetInfoLogARB, ( , GLhandleARB _1, GLsizei _2, GLsizei * _3, GLcharARB * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetAttachedObjectsARB, ( , GLhandleARB _1, GLsizei _2, GLsizei * _3, GLhandleARB * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetUniformLocationARB, GLint, ( , GLhandleARB _1, const GLcharARB * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetActiveUniformARB, ( , GLhandleARB _1, GLuint _2, GLsizei _3, GLsizei * _4, GLint * _5, GLenum * _6, GLcharARB * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetUniformfvARB, ( , GLhandleARB _1, GLint _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetUniformivARB, ( , GLhandleARB _1, GLint _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetShaderSourceARB, ( , GLhandleARB _1, GLsizei _2, GLsizei * _3, GLcharARB * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_ARB_shader_precision */ \
\
    /* GL_ARB_shader_stencil_export */ \
\
    /* GL_ARB_shader_storage_buffer_object */ \
\
    /* GL_ARB_shader_subroutine */ \
\
    /* GL_ARB_shader_texture_lod */ \
\
    /* GL_ARB_shading_language_100 */ \
\
    /* GL_ARB_shading_language_420pack */ \
\
    /* GL_ARB_shading_language_include */ \
    FG4CPP_GL_FUNCTION_VOID( NamedStringARB, ( , GLenum _1, GLint _2, const GLchar * _3, GLint _4, const GLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteNamedStringARB, ( , GLint _1, const GLchar * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompileShaderIncludeARB, ( , GLuint _1, GLsizei _2, const GLchar *const* _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsNamedStringARB, GLboolean, ( , GLint _1, const GLchar * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedStringARB, ( , GLint _1, const GLchar * _2, GLsizei _3, GLint * _4, GLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedStringivARB, ( , GLint _1, const GLchar * _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_ARB_shading_language_packing */ \
\
    /* GL_ARB_shadow */ \
\
    /* GL_ARB_shadow_ambient */ \
\
    /* GL_ARB_sparse_texture */ \
    FG4CPP_GL_FUNCTION_VOID( TexPageCommitmentARB, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLboolean _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_ARB_stencil_texturing */ \
\
    /* GL_ARB_sync */ \
\
    /* GL_ARB_tessellation_shader */ \
\
    /* GL_ARB_texture_border_clamp */ \
\
    /* GL_ARB_texture_buffer_object */ \
    FG4CPP_GL_FUNCTION_VOID( TexBufferARB, ( , GLenum _1, GLenum _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ARB_texture_buffer_object_rgb32 */ \
\
    /* GL_ARB_texture_buffer_range */ \
\
    /* GL_ARB_texture_compression */ \
    FG4CPP_GL_FUNCTION_VOID( CompressedTexImage3DARB, ( , GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLint _7, GLsizei _8, const GLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTexImage2DARB, ( , GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLint _6, GLsizei _7, const GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTexImage1DARB, ( , GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLint _5, GLsizei _6, const GLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTexSubImage3DARB, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLsizei _10, const GLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTexSubImage2DARB, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLenum _7, GLsizei _8, const GLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTexSubImage1DARB, ( , GLenum _1, GLint _2, GLint _3, GLsizei _4, GLenum _5, GLsizei _6, const GLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetCompressedTexImageARB, ( , GLenum _1, GLint _2, GLvoid * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ARB_texture_compression_bptc */ \
\
    /* GL_ARB_texture_compression_rgtc */ \
\
    /* GL_ARB_texture_cube_map */ \
\
    /* GL_ARB_texture_cube_map_array */ \
\
    /* GL_ARB_texture_env_add */ \
\
    /* GL_ARB_texture_env_combine */ \
\
    /* GL_ARB_texture_env_crossbar */ \
\
    /* GL_ARB_texture_env_dot3 */ \
\
    /* GL_ARB_texture_float */ \
\
    /* GL_ARB_texture_gather */ \
\
    /* GL_ARB_texture_mirror_clamp_to_edge */ \
\
    /* GL_ARB_texture_mirrored_repeat */ \
\
    /* GL_ARB_texture_multisample */ \
\
    /* GL_ARB_texture_non_power_of_two */ \
\
    /* GL_ARB_texture_query_levels */ \
\
    /* GL_ARB_texture_query_lod */ \
\
    /* GL_ARB_texture_rectangle */ \
\
    /* GL_ARB_texture_rg */ \
\
    /* GL_ARB_texture_rgb10_a2ui */ \
\
    /* GL_ARB_texture_stencil8 */ \
\
    /* GL_ARB_texture_storage */ \
\
    /* GL_ARB_texture_storage_multisample */ \
\
    /* GL_ARB_texture_swizzle */ \
\
    /* GL_ARB_texture_view */ \
\
    /* GL_ARB_timer_query */ \
\
    /* GL_ARB_transform_feedback2 */ \
\
    /* GL_ARB_transform_feedback3 */ \
\
    /* GL_ARB_transform_feedback_instanced */ \
\
    /* GL_ARB_transpose_matrix */ \
    FG4CPP_GL_FUNCTION_VOID( LoadTransposeMatrixfARB, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LoadTransposeMatrixdARB, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultTransposeMatrixfARB, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultTransposeMatrixdARB, ( , const GLdouble * _1 ), ( , _1 ) ) \
\
    /* GL_ARB_uniform_buffer_object */ \
\
    /* GL_ARB_vertex_array_bgra */ \
\
    /* GL_ARB_vertex_array_object */ \
\
    /* GL_ARB_vertex_attrib_64bit */ \
\
    /* GL_ARB_vertex_attrib_binding */ \
\
    /* GL_ARB_vertex_blend */ \
    FG4CPP_GL_FUNCTION_VOID( WeightbvARB, ( , GLint _1, const GLbyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WeightsvARB, ( , GLint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WeightivARB, ( , GLint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WeightfvARB, ( , GLint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WeightdvARB, ( , GLint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WeightubvARB, ( , GLint _1, const GLubyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WeightusvARB, ( , GLint _1, const GLushort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WeightuivARB, ( , GLint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WeightPointerARB, ( , GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexBlendARB, ( , GLint _1 ), ( , _1 ) ) \
\
    /* GL_ARB_vertex_buffer_object */ \
    FG4CPP_GL_FUNCTION_VOID( BindBufferARB, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteBuffersARB, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenBuffersARB, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsBufferARB, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BufferDataARB, ( , GLenum _1, GLsizeiptrARB _2, const GLvoid * _3, GLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BufferSubDataARB, ( , GLenum _1, GLintptrARB _2, GLsizeiptrARB _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetBufferSubDataARB, ( , GLenum _1, GLintptrARB _2, GLsizeiptrARB _3, GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_PTR( MapBufferARB, void *, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( UnmapBufferARB, GLboolean, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetBufferParameterivARB, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetBufferPointervARB, ( , GLenum _1, GLenum _2, GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ARB_vertex_program */ \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1dARB, ( , GLuint _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1dvARB, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1fARB, ( , GLuint _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1fvARB, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1sARB, ( , GLuint _1, GLshort _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1svARB, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2dARB, ( , GLuint _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2dvARB, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2fARB, ( , GLuint _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2fvARB, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2sARB, ( , GLuint _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2svARB, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3dARB, ( , GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3dvARB, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3fARB, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3fvARB, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3sARB, ( , GLuint _1, GLshort _2, GLshort _3, GLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3svARB, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4NbvARB, ( , GLuint _1, const GLbyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4NivARB, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4NsvARB, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4NubARB, ( , GLuint _1, GLubyte _2, GLubyte _3, GLubyte _4, GLubyte _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4NubvARB, ( , GLuint _1, const GLubyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4NuivARB, ( , GLuint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4NusvARB, ( , GLuint _1, const GLushort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4bvARB, ( , GLuint _1, const GLbyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4dARB, ( , GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4dvARB, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4fARB, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4fvARB, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4ivARB, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4sARB, ( , GLuint _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4svARB, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4ubvARB, ( , GLuint _1, const GLubyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4uivARB, ( , GLuint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4usvARB, ( , GLuint _1, const GLushort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribPointerARB, ( , GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLsizei _5, const GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EnableVertexAttribArrayARB, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DisableVertexAttribArrayARB, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribdvARB, ( , GLuint _1, GLenum _2, GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribfvARB, ( , GLuint _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribivARB, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribPointervARB, ( , GLuint _1, GLenum _2, GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ARB_vertex_shader */ \
    FG4CPP_GL_FUNCTION_VOID( BindAttribLocationARB, ( , GLhandleARB _1, GLuint _2, const GLcharARB * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetActiveAttribARB, ( , GLhandleARB _1, GLuint _2, GLsizei _3, GLsizei * _4, GLint * _5, GLenum * _6, GLcharARB * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetAttribLocationARB, GLint, ( , GLhandleARB _1, const GLcharARB * _2 ), ( , _1, _2 ) ) \
\
    /* GL_ARB_vertex_type_10f_11f_11f_rev */ \
\
    /* GL_ARB_vertex_type_2_10_10_10_rev */ \
\
    /* GL_ARB_viewport_array */ \
\
    /* GL_ARB_window_pos */ \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2dARB, ( , GLdouble _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2dvARB, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2fARB, ( , GLfloat _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2fvARB, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2iARB, ( , GLint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2ivARB, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2sARB, ( , GLshort _1, GLshort _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2svARB, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3dARB, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3dvARB, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3fARB, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3fvARB, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3iARB, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3ivARB, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3sARB, ( , GLshort _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3svARB, ( , const GLshort * _1 ), ( , _1 ) ) \
\
    /* GL_KHR_debug */ \
\
    /* GL_KHR_texture_compression_astc_ldr */ \
\
    /* GL_OES_byte_coordinates */ \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1bOES, ( , GLenum _1, GLbyte _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1bvOES, ( , GLenum _1, const GLbyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2bOES, ( , GLenum _1, GLbyte _2, GLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2bvOES, ( , GLenum _1, const GLbyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3bOES, ( , GLenum _1, GLbyte _2, GLbyte _3, GLbyte _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3bvOES, ( , GLenum _1, const GLbyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4bOES, ( , GLenum _1, GLbyte _2, GLbyte _3, GLbyte _4, GLbyte _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4bvOES, ( , GLenum _1, const GLbyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1bOES, ( , GLbyte _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1bvOES, ( , const GLbyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2bOES, ( , GLbyte _1, GLbyte _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2bvOES, ( , const GLbyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3bOES, ( , GLbyte _1, GLbyte _2, GLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3bvOES, ( , const GLbyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4bOES, ( , GLbyte _1, GLbyte _2, GLbyte _3, GLbyte _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4bvOES, ( , const GLbyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex2bOES, ( , GLbyte _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex2bvOES, ( , const GLbyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3bOES, ( , GLbyte _1, GLbyte _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3bvOES, ( , const GLbyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4bOES, ( , GLbyte _1, GLbyte _2, GLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4bvOES, ( , const GLbyte * _1 ), ( , _1 ) ) \
\
    /* GL_OES_compressed_paletted_texture */ \
\
    /* GL_OES_fixed_point */ \
    FG4CPP_GL_FUNCTION_VOID( AlphaFuncxOES, ( , GLenum _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearColorxOES, ( , GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearDepthxOES, ( , GLfixed _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClipPlanexOES, ( , GLenum _1, const GLfixed * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4xOES, ( , GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DepthRangexOES, ( , GLfixed _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogxOES, ( , GLenum _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogxvOES, ( , GLenum _1, const GLfixed * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FrustumxOES, ( , GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4, GLfixed _5, GLfixed _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetClipPlanexOES, ( , GLenum _1, GLfixed * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFixedvOES, ( , GLenum _1, GLfixed * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexEnvxvOES, ( , GLenum _1, GLenum _2, GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexParameterxvOES, ( , GLenum _1, GLenum _2, GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LightModelxOES, ( , GLenum _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LightModelxvOES, ( , GLenum _1, const GLfixed * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LightxOES, ( , GLenum _1, GLenum _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LightxvOES, ( , GLenum _1, GLenum _2, const GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LineWidthxOES, ( , GLfixed _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LoadMatrixxOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MaterialxOES, ( , GLenum _1, GLenum _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MaterialxvOES, ( , GLenum _1, GLenum _2, const GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultMatrixxOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4xOES, ( , GLenum _1, GLfixed _2, GLfixed _3, GLfixed _4, GLfixed _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3xOES, ( , GLfixed _1, GLfixed _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( OrthoxOES, ( , GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4, GLfixed _5, GLfixed _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PointParameterxvOES, ( , GLenum _1, const GLfixed * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PointSizexOES, ( , GLfixed _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PolygonOffsetxOES, ( , GLfixed _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RotatexOES, ( , GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SampleCoverageOES, ( , GLfixed _1, GLboolean _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ScalexOES, ( , GLfixed _1, GLfixed _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexEnvxOES, ( , GLenum _1, GLenum _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexEnvxvOES, ( , GLenum _1, GLenum _2, const GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexParameterxOES, ( , GLenum _1, GLenum _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexParameterxvOES, ( , GLenum _1, GLenum _2, const GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TranslatexOES, ( , GLfixed _1, GLfixed _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( AccumxOES, ( , GLenum _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BitmapxOES, ( , GLsizei _1, GLsizei _2, GLfixed _3, GLfixed _4, GLfixed _5, GLfixed _6, const GLubyte * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendColorxOES, ( , GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearAccumxOES, ( , GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3xOES, ( , GLfixed _1, GLfixed _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionParameterxOES, ( , GLenum _1, GLenum _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionParameterxvOES, ( , GLenum _1, GLenum _2, const GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalCoord1xOES, ( , GLfixed _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalCoord1xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalCoord2xOES, ( , GLfixed _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalCoord2xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FeedbackBufferxOES, ( , GLsizei _1, GLenum _2, const GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetConvolutionParameterxvOES, ( , GLenum _1, GLenum _2, GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetHistogramParameterxvOES, ( , GLenum _1, GLenum _2, GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetLightxOES, ( , GLenum _1, GLenum _2, GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMapxvOES, ( , GLenum _1, GLenum _2, GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMaterialxOES, ( , GLenum _1, GLenum _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPixelMapxv, ( , GLenum _1, GLint _2, GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexGenxvOES, ( , GLenum _1, GLenum _2, GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexLevelParameterxvOES, ( , GLenum _1, GLint _2, GLenum _3, GLfixed * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( IndexxOES, ( , GLfixed _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( IndexxvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LoadTransposeMatrixxOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Map1xOES, ( , GLenum _1, GLfixed _2, GLfixed _3, GLint _4, GLint _5, GLfixed _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Map2xOES, ( , GLenum _1, GLfixed _2, GLfixed _3, GLint _4, GLint _5, GLfixed _6, GLfixed _7, GLint _8, GLint _9, GLfixed _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MapGrid1xOES, ( , GLint _1, GLfixed _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MapGrid2xOES, ( , GLint _1, GLfixed _2, GLfixed _3, GLfixed _4, GLfixed _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultTransposeMatrixxOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1xOES, ( , GLenum _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1xvOES, ( , GLenum _1, const GLfixed * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2xOES, ( , GLenum _1, GLfixed _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2xvOES, ( , GLenum _1, const GLfixed * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3xOES, ( , GLenum _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3xvOES, ( , GLenum _1, const GLfixed * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4xvOES, ( , GLenum _1, const GLfixed * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PassThroughxOES, ( , GLfixed _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelMapx, ( , GLenum _1, GLint _2, const GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelStorex, ( , GLenum _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelTransferxOES, ( , GLenum _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelZoomxOES, ( , GLfixed _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PrioritizeTexturesxOES, ( , GLsizei _1, const GLuint * _2, const GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos2xOES, ( , GLfixed _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos2xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos3xOES, ( , GLfixed _1, GLfixed _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos3xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos4xOES, ( , GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RasterPos4xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RectxOES, ( , GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RectxvOES, ( , const GLfixed * _1, const GLfixed * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1xOES, ( , GLfixed _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2xOES, ( , GLfixed _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3xOES, ( , GLfixed _1, GLfixed _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4xOES, ( , GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexGenxOES, ( , GLenum _1, GLenum _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexGenxvOES, ( , GLenum _1, GLenum _2, const GLfixed * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex2xOES, ( , GLfixed _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex2xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3xOES, ( , GLfixed _1, GLfixed _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4xOES, ( , GLfixed _1, GLfixed _2, GLfixed _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4xvOES, ( , const GLfixed * _1 ), ( , _1 ) ) \
\
    /* GL_OES_query_matrix */ \
    FG4CPP_GL_FUNCTION_NUM( QueryMatrixxOES, GLbitfield, ( , GLfixed * _1, GLint * _2 ), ( , _1, _2 ) ) \
\
    /* GL_OES_read_format */ \
\
    /* GL_OES_single_precision */ \
    FG4CPP_GL_FUNCTION_VOID( ClearDepthfOES, ( , GLclampf _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClipPlanefOES, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DepthRangefOES, ( , GLclampf _1, GLclampf _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FrustumfOES, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetClipPlanefOES, ( , GLenum _1, GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( OrthofOES, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_3DFX_multisample */ \
\
    /* GL_3DFX_tbuffer */ \
    FG4CPP_GL_FUNCTION_VOID( TbufferMask3DFX, ( , GLuint _1 ), ( , _1 ) ) \
\
    /* GL_3DFX_texture_compression_FXT1 */ \
\
    /* GL_AMD_blend_minmax_factor */ \
\
    /* GL_AMD_conservative_depth */ \
\
    /* GL_AMD_debug_output */ \
    FG4CPP_GL_FUNCTION_VOID( DebugMessageEnableAMD, ( , GLenum _1, GLenum _2, GLsizei _3, const GLuint * _4, GLboolean _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DebugMessageInsertAMD, ( , GLenum _1, GLenum _2, GLuint _3, GLsizei _4, const GLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DebugMessageCallbackAMD, ( , GLDebugProcAMD _1, void * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetDebugMessageLogAMD, GLuint, ( , GLuint _1, GLsizei _2, GLenum * _3, GLuint * _4, GLuint * _5, GLsizei * _6, GLchar * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
\
    /* GL_AMD_depth_clamp_separate */ \
\
    /* GL_AMD_draw_buffers_blend */ \
    FG4CPP_GL_FUNCTION_VOID( BlendFuncIndexedAMD, ( , GLuint _1, GLenum _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendFuncSeparateIndexedAMD, ( , GLuint _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendEquationIndexedAMD, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendEquationSeparateIndexedAMD, ( , GLuint _1, GLenum _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_AMD_interleaved_elements */ \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribParameteriAMD, ( , GLuint _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_AMD_multi_draw_indirect */ \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawArraysIndirectAMD, ( , GLenum _1, const GLvoid * _2, GLsizei _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawElementsIndirectAMD, ( , GLenum _1, GLenum _2, const GLvoid * _3, GLsizei _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_AMD_name_gen_delete */ \
    FG4CPP_GL_FUNCTION_VOID( GenNamesAMD, ( , GLenum _1, GLuint _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteNamesAMD, ( , GLenum _1, GLuint _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsNameAMD, GLboolean, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
\
    /* GL_AMD_performance_monitor */ \
    FG4CPP_GL_FUNCTION_VOID( GetPerfMonitorGroupsAMD, ( , GLint * _1, GLsizei _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPerfMonitorCountersAMD, ( , GLuint _1, GLint * _2, GLint * _3, GLsizei _4, GLuint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPerfMonitorGroupStringAMD, ( , GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPerfMonitorCounterStringAMD, ( , GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLchar * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPerfMonitorCounterInfoAMD, ( , GLuint _1, GLuint _2, GLenum _3, GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenPerfMonitorsAMD, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeletePerfMonitorsAMD, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SelectPerfMonitorCountersAMD, ( , GLuint _1, GLboolean _2, GLuint _3, GLint _4, GLuint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BeginPerfMonitorAMD, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EndPerfMonitorAMD, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPerfMonitorCounterDataAMD, ( , GLuint _1, GLenum _2, GLsizei _3, GLuint * _4, GLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_AMD_pinned_memory */ \
\
    /* GL_AMD_query_buffer_object */ \
\
    /* GL_AMD_sample_positions */ \
    FG4CPP_GL_FUNCTION_VOID( SetMultisamplefvAMD, ( , GLenum _1, GLuint _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_AMD_seamless_cubemap_per_texture */ \
\
    /* GL_AMD_shader_atomic_counter_ops */ \
\
    /* GL_AMD_shader_stencil_export */ \
\
    /* GL_AMD_shader_trinary_minmax */ \
\
    /* GL_AMD_sparse_texture */ \
    FG4CPP_GL_FUNCTION_VOID( TexStorageSparseAMD, ( , GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLsizei _5, GLsizei _6, GLbitfield _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureStorageSparseAMD, ( , GLuint _1, GLenum _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLsizei _7, GLbitfield _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_AMD_stencil_operation_extended */ \
    FG4CPP_GL_FUNCTION_VOID( StencilOpValueAMD, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
\
    /* GL_AMD_texture_texture4 */ \
\
    /* GL_AMD_transform_feedback3_lines_triangles */ \
\
    /* GL_AMD_vertex_shader_layer */ \
\
    /* GL_AMD_vertex_shader_tessellator */ \
    FG4CPP_GL_FUNCTION_VOID( TessellationFactorAMD, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TessellationModeAMD, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_AMD_vertex_shader_viewport_index */ \
\
    /* GL_APPLE_aux_depth_stencil */ \
\
    /* GL_APPLE_client_storage */ \
\
    /* GL_APPLE_element_array */ \
    FG4CPP_GL_FUNCTION_VOID( ElementPointerAPPLE, ( , GLenum _1, const GLvoid * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawElementArrayAPPLE, ( , GLenum _1, GLint _2, GLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawRangeElementArrayAPPLE, ( , GLenum _1, GLuint _2, GLuint _3, GLint _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawElementArrayAPPLE, ( , GLenum _1, const GLint * _2, const GLsizei * _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawRangeElementArrayAPPLE, ( , GLenum _1, GLuint _2, GLuint _3, const GLint * _4, const GLsizei * _5, GLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_APPLE_fence */ \
    FG4CPP_GL_FUNCTION_VOID( GenFencesAPPLE, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteFencesAPPLE, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SetFenceAPPLE, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsFenceAPPLE, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( TestFenceAPPLE, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FinishFenceAPPLE, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( TestObjectAPPLE, GLboolean, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FinishObjectAPPLE, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
\
    /* GL_APPLE_float_pixels */ \
\
    /* GL_APPLE_flush_buffer_range */ \
    FG4CPP_GL_FUNCTION_VOID( BufferParameteriAPPLE, ( , GLenum _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FlushMappedBufferRangeAPPLE, ( , GLenum _1, GLintptr _2, GLsizeiptr _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_APPLE_object_purgeable */ \
    FG4CPP_GL_FUNCTION_NUM( ObjectPurgeableAPPLE, GLenum, ( , GLenum _1, GLuint _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( ObjectUnpurgeableAPPLE, GLenum, ( , GLenum _1, GLuint _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetObjectParameterivAPPLE, ( , GLenum _1, GLuint _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_APPLE_rgb_422 */ \
\
    /* GL_APPLE_row_bytes */ \
\
    /* GL_APPLE_specular_vector */ \
\
    /* GL_APPLE_texture_range */ \
    FG4CPP_GL_FUNCTION_VOID( TextureRangeAPPLE, ( , GLenum _1, GLsizei _2, const GLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexParameterPointervAPPLE, ( , GLenum _1, GLenum _2, GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_APPLE_transform_hint */ \
\
    /* GL_APPLE_vertex_array_object */ \
    FG4CPP_GL_FUNCTION_VOID( BindVertexArrayAPPLE, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteVertexArraysAPPLE, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenVertexArraysAPPLE, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsVertexArrayAPPLE, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
\
    /* GL_APPLE_vertex_array_range */ \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayRangeAPPLE, ( , GLsizei _1, GLvoid * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FlushVertexArrayRangeAPPLE, ( , GLsizei _1, GLvoid * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayParameteriAPPLE, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
\
    /* GL_APPLE_vertex_program_evaluators */ \
    FG4CPP_GL_FUNCTION_VOID( EnableVertexAttribAPPLE, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DisableVertexAttribAPPLE, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsVertexAttribEnabledAPPLE, GLboolean, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MapVertexAttrib1dAPPLE, ( , GLuint _1, GLuint _2, GLdouble _3, GLdouble _4, GLint _5, GLint _6, const GLdouble * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MapVertexAttrib1fAPPLE, ( , GLuint _1, GLuint _2, GLfloat _3, GLfloat _4, GLint _5, GLint _6, const GLfloat * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MapVertexAttrib2dAPPLE, ( , GLuint _1, GLuint _2, GLdouble _3, GLdouble _4, GLint _5, GLint _6, GLdouble _7, GLdouble _8, GLint _9, GLint _10, const GLdouble * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MapVertexAttrib2fAPPLE, ( , GLuint _1, GLuint _2, GLfloat _3, GLfloat _4, GLint _5, GLint _6, GLfloat _7, GLfloat _8, GLint _9, GLint _10, const GLfloat * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
\
    /* GL_APPLE_ycbcr_422 */ \
\
    /* GL_ATI_draw_buffers */ \
    FG4CPP_GL_FUNCTION_VOID( DrawBuffersATI, ( , GLsizei _1, const GLenum * _2 ), ( , _1, _2 ) ) \
\
    /* GL_ATI_element_array */ \
    FG4CPP_GL_FUNCTION_VOID( ElementPointerATI, ( , GLenum _1, const GLvoid * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawElementArrayATI, ( , GLenum _1, GLsizei _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawRangeElementArrayATI, ( , GLenum _1, GLuint _2, GLuint _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_ATI_envmap_bumpmap */ \
    FG4CPP_GL_FUNCTION_VOID( TexBumpParameterivATI, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexBumpParameterfvATI, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexBumpParameterivATI, ( , GLenum _1, GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexBumpParameterfvATI, ( , GLenum _1, GLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_ATI_fragment_shader */ \
    FG4CPP_GL_FUNCTION_NUM( GenFragmentShadersATI, GLuint, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindFragmentShaderATI, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteFragmentShaderATI, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BeginFragmentShaderATI, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( EndFragmentShaderATI, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( PassTexCoordATI, ( , GLuint _1, GLuint _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SampleMapATI, ( , GLuint _1, GLuint _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorFragmentOp1ATI, ( , GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorFragmentOp2ATI, ( , GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8, GLuint _9, GLuint _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorFragmentOp3ATI, ( , GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8, GLuint _9, GLuint _10, GLuint _11, GLuint _12, GLuint _13 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
    FG4CPP_GL_FUNCTION_VOID( AlphaFragmentOp1ATI, ( , GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( AlphaFragmentOp2ATI, ( , GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8, GLuint _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( AlphaFragmentOp3ATI, ( , GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8, GLuint _9, GLuint _10, GLuint _11, GLuint _12 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SetFragmentShaderConstantATI, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_ATI_map_object_buffer */ \
    FG4CPP_GL_FUNCTION_PTR( MapObjectBufferATI, void *, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UnmapObjectBufferATI, ( , GLuint _1 ), ( , _1 ) ) \
\
    /* GL_ATI_meminfo */ \
\
    /* GL_ATI_pixel_format_float */ \
\
    /* GL_ATI_pn_triangles */ \
    FG4CPP_GL_FUNCTION_VOID( PNTrianglesiATI, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PNTrianglesfATI, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
\
    /* GL_ATI_separate_stencil */ \
    FG4CPP_GL_FUNCTION_VOID( StencilOpSeparateATI, ( , GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( StencilFuncSeparateATI, ( , GLenum _1, GLenum _2, GLint _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_ATI_text_fragment_shader */ \
\
    /* GL_ATI_texture_env_combine3 */ \
\
    /* GL_ATI_texture_float */ \
\
    /* GL_ATI_texture_mirror_once */ \
\
    /* GL_ATI_vertex_array_object */ \
    FG4CPP_GL_FUNCTION_NUM( NewObjectBufferATI, GLuint, ( , GLsizei _1, const GLvoid * _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsObjectBufferATI, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UpdateObjectBufferATI, ( , GLuint _1, GLuint _2, GLsizei _3, const GLvoid * _4, GLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetObjectBufferfvATI, ( , GLuint _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetObjectBufferivATI, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FreeObjectBufferATI, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ArrayObjectATI, ( , GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLuint _5, GLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetArrayObjectfvATI, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetArrayObjectivATI, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VariantArrayObjectATI, ( , GLuint _1, GLenum _2, GLsizei _3, GLuint _4, GLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVariantArrayObjectfvATI, ( , GLuint _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVariantArrayObjectivATI, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ATI_vertex_attrib_array_object */ \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribArrayObjectATI, ( , GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLsizei _5, GLuint _6, GLuint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribArrayObjectfvATI, ( , GLuint _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribArrayObjectivATI, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_ATI_vertex_streams */ \
    FG4CPP_GL_FUNCTION_VOID( VertexStream1sATI, ( , GLenum _1, GLshort _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream1svATI, ( , GLenum _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream1iATI, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream1ivATI, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream1fATI, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream1fvATI, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream1dATI, ( , GLenum _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream1dvATI, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream2sATI, ( , GLenum _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream2svATI, ( , GLenum _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream2iATI, ( , GLenum _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream2ivATI, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream2fATI, ( , GLenum _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream2fvATI, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream2dATI, ( , GLenum _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream2dvATI, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream3sATI, ( , GLenum _1, GLshort _2, GLshort _3, GLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream3svATI, ( , GLenum _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream3iATI, ( , GLenum _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream3ivATI, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream3fATI, ( , GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream3fvATI, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream3dATI, ( , GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream3dvATI, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream4sATI, ( , GLenum _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream4svATI, ( , GLenum _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream4iATI, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream4ivATI, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream4fATI, ( , GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream4fvATI, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream4dATI, ( , GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexStream4dvATI, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalStream3bATI, ( , GLenum _1, GLbyte _2, GLbyte _3, GLbyte _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalStream3bvATI, ( , GLenum _1, const GLbyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalStream3sATI, ( , GLenum _1, GLshort _2, GLshort _3, GLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalStream3svATI, ( , GLenum _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalStream3iATI, ( , GLenum _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalStream3ivATI, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalStream3fATI, ( , GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalStream3fvATI, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalStream3dATI, ( , GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalStream3dvATI, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClientActiveVertexStreamATI, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexBlendEnviATI, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexBlendEnvfATI, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_422_pixels */ \
\
    /* GL_EXT_abgr */ \
\
    /* GL_EXT_bgra */ \
\
    /* GL_EXT_bindable_uniform */ \
    FG4CPP_GL_FUNCTION_VOID( UniformBufferEXT, ( , GLuint _1, GLint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetUniformBufferSizeEXT, GLint, ( , GLuint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetUniformOffsetEXT, GLintptr, ( , GLuint _1, GLint _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_blend_color */ \
    FG4CPP_GL_FUNCTION_VOID( BlendColorEXT, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_blend_equation_separate */ \
    FG4CPP_GL_FUNCTION_VOID( BlendEquationSeparateEXT, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_blend_func_separate */ \
    FG4CPP_GL_FUNCTION_VOID( BlendFuncSeparateEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_blend_logic_op */ \
\
    /* GL_EXT_blend_minmax */ \
    FG4CPP_GL_FUNCTION_VOID( BlendEquationEXT, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_EXT_blend_subtract */ \
\
    /* GL_EXT_clip_volume_hint */ \
\
    /* GL_EXT_cmyka */ \
\
    /* GL_EXT_color_subtable */ \
    FG4CPP_GL_FUNCTION_VOID( ColorSubTableEXT, ( , GLenum _1, GLsizei _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyColorSubTableEXT, ( , GLenum _1, GLsizei _2, GLint _3, GLint _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_compiled_vertex_array */ \
    FG4CPP_GL_FUNCTION_VOID( LockArraysEXT, ( , GLint _1, GLsizei _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UnlockArraysEXT, (), () ) \
\
    /* GL_EXT_convolution */ \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionFilter1DEXT, ( , GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionFilter2DEXT, ( , GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionParameterfEXT, ( , GLenum _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionParameterfvEXT, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionParameteriEXT, ( , GLenum _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ConvolutionParameterivEXT, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyConvolutionFilter1DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyConvolutionFilter2DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetConvolutionFilterEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetConvolutionParameterfvEXT, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetConvolutionParameterivEXT, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetSeparableFilterEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLvoid * _4, GLvoid * _5, GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SeparableFilter2DEXT, ( , GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7, const GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_EXT_coordinate_frame */ \
    FG4CPP_GL_FUNCTION_VOID( Tangent3bEXT, ( , GLbyte _1, GLbyte _2, GLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Tangent3bvEXT, ( , const GLbyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Tangent3dEXT, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Tangent3dvEXT, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Tangent3fEXT, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Tangent3fvEXT, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Tangent3iEXT, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Tangent3ivEXT, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Tangent3sEXT, ( , GLshort _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Tangent3svEXT, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Binormal3bEXT, ( , GLbyte _1, GLbyte _2, GLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Binormal3bvEXT, ( , const GLbyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Binormal3dEXT, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Binormal3dvEXT, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Binormal3fEXT, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Binormal3fvEXT, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Binormal3iEXT, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Binormal3ivEXT, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Binormal3sEXT, ( , GLshort _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Binormal3svEXT, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TangentPointerEXT, ( , GLenum _1, GLsizei _2, const GLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BinormalPointerEXT, ( , GLenum _1, GLsizei _2, const GLvoid * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_copy_texture */ \
    FG4CPP_GL_FUNCTION_VOID( CopyTexImage1DEXT, ( , GLenum _1, GLint _2, GLenum _3, GLint _4, GLint _5, GLsizei _6, GLint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTexImage2DEXT, ( , GLenum _1, GLint _2, GLenum _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLint _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTexSubImage1DEXT, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTexSubImage2DEXT, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTexSubImage3DEXT, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLsizei _8, GLsizei _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_EXT_cull_vertex */ \
    FG4CPP_GL_FUNCTION_VOID( CullParameterdvEXT, ( , GLenum _1, GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CullParameterfvEXT, ( , GLenum _1, GLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_depth_bounds_test */ \
    FG4CPP_GL_FUNCTION_VOID( DepthBoundsEXT, ( , GLclampd _1, GLclampd _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_direct_state_access */ \
    FG4CPP_GL_FUNCTION_VOID( MatrixLoadfEXT, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixLoaddEXT, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixMultfEXT, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixMultdEXT, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixLoadIdentityEXT, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixRotatefEXT, ( , GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixRotatedEXT, ( , GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixScalefEXT, ( , GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixScaledEXT, ( , GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixTranslatefEXT, ( , GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixTranslatedEXT, ( , GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixFrustumEXT, ( , GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6, GLdouble _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixOrthoEXT, ( , GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6, GLdouble _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixPopEXT, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixPushEXT, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClientAttribDefaultEXT, ( , GLbitfield _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PushClientAttribDefaultEXT, ( , GLbitfield _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureParameterfEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureParameterfvEXT, ( , GLuint _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureParameteriEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureParameterivEXT, ( , GLuint _1, GLenum _2, GLenum _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureImage1DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLint _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureImage2DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLint _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureSubImage1DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLenum _6, GLenum _7, const GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureSubImage2DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTextureImage1DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLenum _4, GLint _5, GLint _6, GLsizei _7, GLint _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTextureImage2DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLenum _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLint _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTextureSubImage1DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTextureSubImage2DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLsizei _8, GLsizei _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTextureImageEXT, ( , GLuint _1, GLenum _2, GLint _3, GLenum _4, GLenum _5, GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTextureParameterfvEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTextureParameterivEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTextureLevelParameterfvEXT, ( , GLuint _1, GLenum _2, GLint _3, GLenum _4, GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTextureLevelParameterivEXT, ( , GLuint _1, GLenum _2, GLint _3, GLenum _4, GLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureImage3DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureSubImage3DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLenum _10, GLenum _11, const GLvoid * _12 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyTextureSubImage3DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLint _8, GLsizei _9, GLsizei _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindMultiTextureEXT, ( , GLenum _1, GLenum _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoordPointerEXT, ( , GLenum _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexEnvfEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexEnvfvEXT, ( , GLenum _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexEnviEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexEnvivEXT, ( , GLenum _1, GLenum _2, GLenum _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexGendEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexGendvEXT, ( , GLenum _1, GLenum _2, GLenum _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexGenfEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexGenfvEXT, ( , GLenum _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexGeniEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexGenivEXT, ( , GLenum _1, GLenum _2, GLenum _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMultiTexEnvfvEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMultiTexEnvivEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMultiTexGendvEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMultiTexGenfvEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMultiTexGenivEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexParameteriEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexParameterivEXT, ( , GLenum _1, GLenum _2, GLenum _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexParameterfEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexParameterfvEXT, ( , GLenum _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexImage1DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLint _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexImage2DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLint _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexSubImage1DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLenum _6, GLenum _7, const GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexSubImage2DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyMultiTexImage1DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLenum _4, GLint _5, GLint _6, GLsizei _7, GLint _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyMultiTexImage2DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLenum _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLint _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyMultiTexSubImage1DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyMultiTexSubImage2DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLsizei _8, GLsizei _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMultiTexImageEXT, ( , GLenum _1, GLenum _2, GLint _3, GLenum _4, GLenum _5, GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMultiTexParameterfvEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMultiTexParameterivEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMultiTexLevelParameterfvEXT, ( , GLenum _1, GLenum _2, GLint _3, GLenum _4, GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMultiTexLevelParameterivEXT, ( , GLenum _1, GLenum _2, GLint _3, GLenum _4, GLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexImage3DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexSubImage3DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLenum _10, GLenum _11, const GLvoid * _12 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyMultiTexSubImage3DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLint _8, GLsizei _9, GLsizei _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EnableClientStateIndexedEXT, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DisableClientStateIndexedEXT, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFloatIndexedvEXT, ( , GLenum _1, GLuint _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetDoubleIndexedvEXT, ( , GLenum _1, GLuint _2, GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPointerIndexedvEXT, ( , GLenum _1, GLuint _2, GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EnableIndexedEXT, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DisableIndexedEXT, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsEnabledIndexedEXT, GLboolean, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetIntegerIndexedvEXT, ( , GLenum _1, GLuint _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetBooleanIndexedvEXT, ( , GLenum _1, GLuint _2, GLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTextureImage3DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLsizei _9, const GLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTextureImage2DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLsizei _6, GLint _7, GLsizei _8, const GLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTextureImage1DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLint _6, GLsizei _7, const GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTextureSubImage3DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLenum _10, GLsizei _11, const GLvoid * _12 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTextureSubImage2DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLenum _8, GLsizei _9, const GLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedTextureSubImage1DEXT, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLenum _6, GLsizei _7, const GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetCompressedTextureImageEXT, ( , GLuint _1, GLenum _2, GLint _3, GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedMultiTexImage3DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLsizei _9, const GLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedMultiTexImage2DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLsizei _6, GLint _7, GLsizei _8, const GLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedMultiTexImage1DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLint _6, GLsizei _7, const GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedMultiTexSubImage3DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLenum _10, GLsizei _11, const GLvoid * _12 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedMultiTexSubImage2DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLenum _8, GLsizei _9, const GLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CompressedMultiTexSubImage1DEXT, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLenum _6, GLsizei _7, const GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetCompressedMultiTexImageEXT, ( , GLenum _1, GLenum _2, GLint _3, GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixLoadTransposefEXT, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixLoadTransposedEXT, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixMultTransposefEXT, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MatrixMultTransposedEXT, ( , GLenum _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedBufferDataEXT, ( , GLuint _1, GLsizeiptr _2, const GLvoid * _3, GLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedBufferSubDataEXT, ( , GLuint _1, GLintptr _2, GLsizeiptr _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_PTR( MapNamedBufferEXT, void *, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( UnmapNamedBufferEXT, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedBufferParameterivEXT, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedBufferPointervEXT, ( , GLuint _1, GLenum _2, GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedBufferSubDataEXT, ( , GLuint _1, GLintptr _2, GLsizeiptr _3, GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1fEXT, ( , GLuint _1, GLint _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2fEXT, ( , GLuint _1, GLint _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3fEXT, ( , GLuint _1, GLint _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4fEXT, ( , GLuint _1, GLint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1iEXT, ( , GLuint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2iEXT, ( , GLuint _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3iEXT, ( , GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4iEXT, ( , GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1fvEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2fvEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3fvEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4fvEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1ivEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2ivEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3ivEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4ivEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix2fvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix3fvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix4fvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x3fvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x2fvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x4fvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x2fvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x4fvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x3fvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureBufferEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexBufferEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureParameterIivEXT, ( , GLuint _1, GLenum _2, GLenum _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureParameterIuivEXT, ( , GLuint _1, GLenum _2, GLenum _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTextureParameterIivEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTextureParameterIuivEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexParameterIivEXT, ( , GLenum _1, GLenum _2, GLenum _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexParameterIuivEXT, ( , GLenum _1, GLenum _2, GLenum _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMultiTexParameterIivEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMultiTexParameterIuivEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1uiEXT, ( , GLuint _1, GLint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2uiEXT, ( , GLuint _1, GLint _2, GLuint _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3uiEXT, ( , GLuint _1, GLint _2, GLuint _3, GLuint _4, GLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4uiEXT, ( , GLuint _1, GLint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1uivEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2uivEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3uivEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4uivEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedProgramLocalParameters4fvEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLsizei _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedProgramLocalParameterI4iEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLint _4, GLint _5, GLint _6, GLint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedProgramLocalParameterI4ivEXT, ( , GLuint _1, GLenum _2, GLuint _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedProgramLocalParametersI4ivEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLsizei _4, const GLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedProgramLocalParameterI4uiEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedProgramLocalParameterI4uivEXT, ( , GLuint _1, GLenum _2, GLuint _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedProgramLocalParametersI4uivEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLsizei _4, const GLuint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedProgramLocalParameterIivEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedProgramLocalParameterIuivEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EnableClientStateiEXT, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DisableClientStateiEXT, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFloati_vEXT, ( , GLenum _1, GLuint _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetDoublei_vEXT, ( , GLenum _1, GLuint _2, GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPointeri_vEXT, ( , GLenum _1, GLuint _2, GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedProgramStringEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedProgramLocalParameter4dEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLdouble _4, GLdouble _5, GLdouble _6, GLdouble _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedProgramLocalParameter4dvEXT, ( , GLuint _1, GLenum _2, GLuint _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedProgramLocalParameter4fEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedProgramLocalParameter4fvEXT, ( , GLuint _1, GLenum _2, GLuint _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedProgramLocalParameterdvEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedProgramLocalParameterfvEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedProgramivEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedProgramStringEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedRenderbufferStorageEXT, ( , GLuint _1, GLenum _2, GLsizei _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedRenderbufferParameterivEXT, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedRenderbufferStorageMultisampleEXT, ( , GLuint _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedRenderbufferStorageMultisampleCoverageEXT, ( , GLuint _1, GLsizei _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_NUM( CheckNamedFramebufferStatusEXT, GLenum, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedFramebufferTexture1DEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedFramebufferTexture2DEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedFramebufferTexture3DEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLuint _4, GLint _5, GLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedFramebufferRenderbufferEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedFramebufferAttachmentParameterivEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenerateTextureMipmapEXT, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenerateMultiTexMipmapEXT, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferDrawBufferEXT, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferDrawBuffersEXT, ( , GLuint _1, GLsizei _2, const GLenum * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferReadBufferEXT, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFramebufferParameterivEXT, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedCopyBufferSubDataEXT, ( , GLuint _1, GLuint _2, GLintptr _3, GLintptr _4, GLsizeiptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedFramebufferTextureEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedFramebufferTextureLayerEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedFramebufferTextureFaceEXT, ( , GLuint _1, GLenum _2, GLuint _3, GLint _4, GLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureRenderbufferEXT, ( , GLuint _1, GLenum _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexRenderbufferEXT, ( , GLenum _1, GLenum _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayVertexOffsetEXT, ( , GLuint _1, GLuint _2, GLint _3, GLenum _4, GLsizei _5, GLintptr _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayColorOffsetEXT, ( , GLuint _1, GLuint _2, GLint _3, GLenum _4, GLsizei _5, GLintptr _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayEdgeFlagOffsetEXT, ( , GLuint _1, GLuint _2, GLsizei _3, GLintptr _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayIndexOffsetEXT, ( , GLuint _1, GLuint _2, GLenum _3, GLsizei _4, GLintptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayNormalOffsetEXT, ( , GLuint _1, GLuint _2, GLenum _3, GLsizei _4, GLintptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayTexCoordOffsetEXT, ( , GLuint _1, GLuint _2, GLint _3, GLenum _4, GLsizei _5, GLintptr _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayMultiTexCoordOffsetEXT, ( , GLuint _1, GLuint _2, GLenum _3, GLint _4, GLenum _5, GLsizei _6, GLintptr _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayFogCoordOffsetEXT, ( , GLuint _1, GLuint _2, GLenum _3, GLsizei _4, GLintptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArraySecondaryColorOffsetEXT, ( , GLuint _1, GLuint _2, GLint _3, GLenum _4, GLsizei _5, GLintptr _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayVertexAttribOffsetEXT, ( , GLuint _1, GLuint _2, GLuint _3, GLint _4, GLenum _5, GLboolean _6, GLsizei _7, GLintptr _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayVertexAttribIOffsetEXT, ( , GLuint _1, GLuint _2, GLuint _3, GLint _4, GLenum _5, GLsizei _6, GLintptr _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EnableVertexArrayEXT, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DisableVertexArrayEXT, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EnableVertexArrayAttribEXT, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DisableVertexArrayAttribEXT, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexArrayIntegervEXT, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexArrayPointervEXT, ( , GLuint _1, GLenum _2, GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexArrayIntegeri_vEXT, ( , GLuint _1, GLuint _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexArrayPointeri_vEXT, ( , GLuint _1, GLuint _2, GLenum _3, GLvoid ** _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_PTR( MapNamedBufferRangeEXT, void *, ( , GLuint _1, GLintptr _2, GLsizeiptr _3, GLbitfield _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FlushMappedNamedBufferRangeEXT, ( , GLuint _1, GLintptr _2, GLsizeiptr _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedBufferStorageEXT, ( , GLuint _1, GLsizeiptr _2, const void * _3, GLbitfield _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearNamedBufferDataEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLenum _4, const void * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearNamedBufferSubDataEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLenum _4, GLsizeiptr _5, GLsizeiptr _6, const void * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NamedFramebufferParameteriEXT, ( , GLuint _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedFramebufferParameterivEXT, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1dEXT, ( , GLuint _1, GLint _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2dEXT, ( , GLuint _1, GLint _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3dEXT, ( , GLuint _1, GLint _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4dEXT, ( , GLuint _1, GLint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1dvEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2dvEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3dvEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4dvEXT, ( , GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix2dvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix3dvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix4dvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x3dvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x4dvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x2dvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x4dvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x2dvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x3dvEXT, ( , GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureBufferRangeEXT, ( , GLuint _1, GLenum _2, GLenum _3, GLuint _4, GLintptr _5, GLsizeiptr _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureStorage1DEXT, ( , GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureStorage2DEXT, ( , GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureStorage3DEXT, ( , GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6, GLsizei _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureStorage2DMultisampleEXT, ( , GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureStorage3DMultisampleEXT, ( , GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6, GLsizei _7, GLboolean _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayBindVertexBufferEXT, ( , GLuint _1, GLuint _2, GLuint _3, GLintptr _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayVertexAttribFormatEXT, ( , GLuint _1, GLuint _2, GLint _3, GLenum _4, GLboolean _5, GLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayVertexAttribIFormatEXT, ( , GLuint _1, GLuint _2, GLint _3, GLenum _4, GLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayVertexAttribLFormatEXT, ( , GLuint _1, GLuint _2, GLint _3, GLenum _4, GLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayVertexAttribBindingEXT, ( , GLuint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayVertexBindingDivisorEXT, ( , GLuint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayVertexAttribLOffsetEXT, ( , GLuint _1, GLuint _2, GLuint _3, GLint _4, GLenum _5, GLsizei _6, GLintptr _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexturePageCommitmentEXT, ( , GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLboolean _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayVertexAttribDivisorEXT, ( , GLuint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_draw_buffers2 */ \
    FG4CPP_GL_FUNCTION_VOID( ColorMaskIndexedEXT, ( , GLuint _1, GLboolean _2, GLboolean _3, GLboolean _4, GLboolean _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_draw_instanced */ \
    FG4CPP_GL_FUNCTION_VOID( DrawArraysInstancedEXT, ( , GLenum _1, GLint _2, GLsizei _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawElementsInstancedEXT, ( , GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_draw_range_elements */ \
    FG4CPP_GL_FUNCTION_VOID( DrawRangeElementsEXT, ( , GLenum _1, GLuint _2, GLuint _3, GLsizei _4, GLenum _5, const GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_EXT_fog_coord */ \
    FG4CPP_GL_FUNCTION_VOID( FogCoordfEXT, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogCoordfvEXT, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogCoorddEXT, ( , GLdouble _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogCoorddvEXT, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogCoordPointerEXT, ( , GLenum _1, GLsizei _2, const GLvoid * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_framebuffer_blit */ \
    FG4CPP_GL_FUNCTION_VOID( BlitFramebufferEXT, ( , GLint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLint _8, GLbitfield _9, GLenum _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
\
    /* GL_EXT_framebuffer_multisample */ \
    FG4CPP_GL_FUNCTION_VOID( RenderbufferStorageMultisampleEXT, ( , GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_framebuffer_multisample_blit_scaled */ \
\
    /* GL_EXT_framebuffer_object */ \
    FG4CPP_GL_FUNCTION_NUM( IsRenderbufferEXT, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindRenderbufferEXT, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteRenderbuffersEXT, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenRenderbuffersEXT, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RenderbufferStorageEXT, ( , GLenum _1, GLenum _2, GLsizei _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetRenderbufferParameterivEXT, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsFramebufferEXT, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindFramebufferEXT, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteFramebuffersEXT, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenFramebuffersEXT, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( CheckFramebufferStatusEXT, GLenum, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTexture1DEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTexture2DEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTexture3DEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5, GLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferRenderbufferEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFramebufferAttachmentParameterivEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenerateMipmapEXT, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_EXT_framebuffer_sRGB */ \
\
    /* GL_EXT_geometry_shader4 */ \
    FG4CPP_GL_FUNCTION_VOID( ProgramParameteriEXT, ( , GLuint _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_gpu_program_parameters */ \
    FG4CPP_GL_FUNCTION_VOID( ProgramEnvParameters4fvEXT, ( , GLenum _1, GLuint _2, GLsizei _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramLocalParameters4fvEXT, ( , GLenum _1, GLuint _2, GLsizei _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_gpu_shader4 */ \
    FG4CPP_GL_FUNCTION_VOID( GetUniformuivEXT, ( , GLuint _1, GLint _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindFragDataLocationEXT, ( , GLuint _1, GLuint _2, const GLchar * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetFragDataLocationEXT, GLint, ( , GLuint _1, const GLchar * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1uiEXT, ( , GLint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2uiEXT, ( , GLint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3uiEXT, ( , GLint _1, GLuint _2, GLuint _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4uiEXT, ( , GLint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1uivEXT, ( , GLint _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2uivEXT, ( , GLint _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3uivEXT, ( , GLint _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4uivEXT, ( , GLint _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_histogram */ \
    FG4CPP_GL_FUNCTION_VOID( GetHistogramEXT, ( , GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetHistogramParameterfvEXT, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetHistogramParameterivEXT, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMinmaxEXT, ( , GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMinmaxParameterfvEXT, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMinmaxParameterivEXT, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( HistogramEXT, ( , GLenum _1, GLsizei _2, GLenum _3, GLboolean _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MinmaxEXT, ( , GLenum _1, GLenum _2, GLboolean _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ResetHistogramEXT, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ResetMinmaxEXT, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_EXT_index_array_formats */ \
\
    /* GL_EXT_index_func */ \
    FG4CPP_GL_FUNCTION_VOID( IndexFuncEXT, ( , GLenum _1, GLclampf _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_index_material */ \
    FG4CPP_GL_FUNCTION_VOID( IndexMaterialEXT, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_index_texture */ \
\
    /* GL_EXT_light_texture */ \
    FG4CPP_GL_FUNCTION_VOID( ApplyTextureEXT, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureLightEXT, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureMaterialEXT, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_misc_attribute */ \
\
    /* GL_EXT_multi_draw_arrays */ \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawArraysEXT, ( , GLenum _1, const GLint * _2, const GLsizei * _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawElementsEXT, ( , GLenum _1, const GLsizei * _2, GLenum _3, const GLvoid *const* _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_multisample */ \
    FG4CPP_GL_FUNCTION_VOID( SampleMaskEXT, ( , GLclampf _1, GLboolean _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SamplePatternEXT, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_EXT_packed_depth_stencil */ \
\
    /* GL_EXT_packed_float */ \
\
    /* GL_EXT_packed_pixels */ \
\
    /* GL_EXT_paletted_texture */ \
    FG4CPP_GL_FUNCTION_VOID( ColorTableEXT, ( , GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetColorTableEXT, ( , GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetColorTableParameterivEXT, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetColorTableParameterfvEXT, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_pixel_buffer_object */ \
\
    /* GL_EXT_pixel_transform */ \
    FG4CPP_GL_FUNCTION_VOID( PixelTransformParameteriEXT, ( , GLenum _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelTransformParameterfEXT, ( , GLenum _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelTransformParameterivEXT, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelTransformParameterfvEXT, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPixelTransformParameterivEXT, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPixelTransformParameterfvEXT, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_pixel_transform_color_table */ \
\
    /* GL_EXT_point_parameters */ \
    FG4CPP_GL_FUNCTION_VOID( PointParameterfEXT, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PointParameterfvEXT, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_polygon_offset */ \
    FG4CPP_GL_FUNCTION_VOID( PolygonOffsetEXT, ( , GLfloat _1, GLfloat _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_provoking_vertex */ \
    FG4CPP_GL_FUNCTION_VOID( ProvokingVertexEXT, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_EXT_rescale_normal */ \
\
    /* GL_EXT_secondary_color */ \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3bEXT, ( , GLbyte _1, GLbyte _2, GLbyte _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3bvEXT, ( , const GLbyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3dEXT, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3dvEXT, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3fEXT, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3fvEXT, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3iEXT, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3ivEXT, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3sEXT, ( , GLshort _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3svEXT, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3ubEXT, ( , GLubyte _1, GLubyte _2, GLubyte _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3ubvEXT, ( , const GLubyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3uiEXT, ( , GLuint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3uivEXT, ( , const GLuint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3usEXT, ( , GLushort _1, GLushort _2, GLushort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3usvEXT, ( , const GLushort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColorPointerEXT, ( , GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_separate_shader_objects */ \
    FG4CPP_GL_FUNCTION_VOID( UseShaderProgramEXT, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ActiveProgramEXT, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( CreateShaderProgramEXT, GLuint, ( , GLenum _1, const GLchar * _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_separate_specular_color */ \
\
    /* GL_EXT_shader_image_load_store */ \
    FG4CPP_GL_FUNCTION_VOID( BindImageTextureEXT, ( , GLuint _1, GLuint _2, GLint _3, GLboolean _4, GLint _5, GLenum _6, GLint _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MemoryBarrierEXT, ( , GLbitfield _1 ), ( , _1 ) ) \
\
    /* GL_EXT_shadow_funcs */ \
\
    /* GL_EXT_shared_texture_palette */ \
\
    /* GL_EXT_stencil_clear_tag */ \
    FG4CPP_GL_FUNCTION_VOID( StencilClearTagEXT, ( , GLsizei _1, GLuint _2 ), ( , _1, _2 ) ) \
\
    /* GL_EXT_stencil_two_side */ \
    FG4CPP_GL_FUNCTION_VOID( ActiveStencilFaceEXT, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_EXT_stencil_wrap */ \
\
    /* GL_EXT_subtexture */ \
    FG4CPP_GL_FUNCTION_VOID( TexSubImage1DEXT, ( , GLenum _1, GLint _2, GLint _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexSubImage2DEXT, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_EXT_texture */ \
\
    /* GL_EXT_texture3D */ \
    FG4CPP_GL_FUNCTION_VOID( TexImage3DEXT, ( , GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLint _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexSubImage3DEXT, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
\
    /* GL_EXT_texture_array */ \
\
    /* GL_EXT_texture_buffer_object */ \
    FG4CPP_GL_FUNCTION_VOID( TexBufferEXT, ( , GLenum _1, GLenum _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_texture_compression_latc */ \
\
    /* GL_EXT_texture_compression_rgtc */ \
\
    /* GL_EXT_texture_compression_s3tc */ \
\
    /* GL_EXT_texture_cube_map */ \
\
    /* GL_EXT_texture_env_add */ \
\
    /* GL_EXT_texture_env_combine */ \
\
    /* GL_EXT_texture_env_dot3 */ \
\
    /* GL_EXT_texture_filter_anisotropic */ \
\
    /* GL_EXT_texture_integer */ \
    FG4CPP_GL_FUNCTION_VOID( TexParameterIivEXT, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexParameterIuivEXT, ( , GLenum _1, GLenum _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexParameterIivEXT, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTexParameterIuivEXT, ( , GLenum _1, GLenum _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearColorIiEXT, ( , GLint _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearColorIuiEXT, ( , GLuint _1, GLuint _2, GLuint _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_texture_lod_bias */ \
\
    /* GL_EXT_texture_mirror_clamp */ \
\
    /* GL_EXT_texture_object */ \
    FG4CPP_GL_FUNCTION_NUM( AreTexturesResidentEXT, GLboolean, ( , GLsizei _1, const GLuint * _2, GLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindTextureEXT, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteTexturesEXT, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenTexturesEXT, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsTextureEXT, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PrioritizeTexturesEXT, ( , GLsizei _1, const GLuint * _2, const GLclampf * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_texture_perturb_normal */ \
    FG4CPP_GL_FUNCTION_VOID( TextureNormalEXT, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_EXT_texture_sRGB */ \
\
    /* GL_EXT_texture_sRGB_decode */ \
\
    /* GL_EXT_texture_shared_exponent */ \
\
    /* GL_EXT_texture_snorm */ \
\
    /* GL_EXT_texture_swizzle */ \
\
    /* GL_EXT_timer_query */ \
    FG4CPP_GL_FUNCTION_VOID( GetQueryObjecti64vEXT, ( , GLuint _1, GLenum _2, GLint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetQueryObjectui64vEXT, ( , GLuint _1, GLenum _2, GLuint64 * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_transform_feedback */ \
    FG4CPP_GL_FUNCTION_VOID( BeginTransformFeedbackEXT, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EndTransformFeedbackEXT, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( BindBufferRangeEXT, ( , GLenum _1, GLuint _2, GLuint _3, GLintptr _4, GLsizeiptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindBufferOffsetEXT, ( , GLenum _1, GLuint _2, GLuint _3, GLintptr _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindBufferBaseEXT, ( , GLenum _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TransformFeedbackVaryingsEXT, ( , GLuint _1, GLsizei _2, const GLchar *const* _3, GLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTransformFeedbackVaryingEXT, ( , GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLsizei * _5, GLenum * _6, GLchar * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
\
    /* GL_EXT_vertex_array */ \
    FG4CPP_GL_FUNCTION_VOID( ArrayElementEXT, ( , GLint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorPointerEXT, ( , GLint _1, GLenum _2, GLsizei _3, GLsizei _4, const GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DrawArraysEXT, ( , GLenum _1, GLint _2, GLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EdgeFlagPointerEXT, ( , GLsizei _1, GLsizei _2, const GLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPointervEXT, ( , GLenum _1, GLvoid ** _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( IndexPointerEXT, ( , GLenum _1, GLsizei _2, GLsizei _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalPointerEXT, ( , GLenum _1, GLsizei _2, GLsizei _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoordPointerEXT, ( , GLint _1, GLenum _2, GLsizei _3, GLsizei _4, const GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexPointerEXT, ( , GLint _1, GLenum _2, GLsizei _3, GLsizei _4, const GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_vertex_array_bgra */ \
\
    /* GL_EXT_vertex_attrib_64bit */ \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL1dEXT, ( , GLuint _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL2dEXT, ( , GLuint _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL3dEXT, ( , GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL4dEXT, ( , GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL1dvEXT, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL2dvEXT, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL3dvEXT, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL4dvEXT, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribLPointerEXT, ( , GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribLdvEXT, ( , GLuint _1, GLenum _2, GLdouble * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_vertex_shader */ \
    FG4CPP_GL_FUNCTION_VOID( BeginVertexShaderEXT, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( EndVertexShaderEXT, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( BindVertexShaderEXT, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GenVertexShadersEXT, GLuint, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteVertexShaderEXT, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ShaderOp1EXT, ( , GLenum _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ShaderOp2EXT, ( , GLenum _1, GLuint _2, GLuint _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ShaderOp3EXT, ( , GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SwizzleEXT, ( , GLuint _1, GLuint _2, GLenum _3, GLenum _4, GLenum _5, GLenum _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WriteMaskEXT, ( , GLuint _1, GLuint _2, GLenum _3, GLenum _4, GLenum _5, GLenum _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( InsertComponentEXT, ( , GLuint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ExtractComponentEXT, ( , GLuint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GenSymbolsEXT, GLuint, ( , GLenum _1, GLenum _2, GLenum _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SetInvariantEXT, ( , GLuint _1, GLenum _2, const GLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SetLocalConstantEXT, ( , GLuint _1, GLenum _2, const GLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VariantbvEXT, ( , GLuint _1, const GLbyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VariantsvEXT, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VariantivEXT, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VariantfvEXT, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VariantdvEXT, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VariantubvEXT, ( , GLuint _1, const GLubyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VariantusvEXT, ( , GLuint _1, const GLushort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VariantuivEXT, ( , GLuint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VariantPointerEXT, ( , GLuint _1, GLenum _2, GLuint _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EnableVariantClientStateEXT, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DisableVariantClientStateEXT, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( BindLightParameterEXT, GLuint, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( BindMaterialParameterEXT, GLuint, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( BindTexGenParameterEXT, GLuint, ( , GLenum _1, GLenum _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( BindTextureUnitParameterEXT, GLuint, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( BindParameterEXT, GLuint, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsVariantEnabledEXT, GLboolean, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVariantBooleanvEXT, ( , GLuint _1, GLenum _2, GLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVariantIntegervEXT, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVariantFloatvEXT, ( , GLuint _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVariantPointervEXT, ( , GLuint _1, GLenum _2, GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetInvariantBooleanvEXT, ( , GLuint _1, GLenum _2, GLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetInvariantIntegervEXT, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetInvariantFloatvEXT, ( , GLuint _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetLocalConstantBooleanvEXT, ( , GLuint _1, GLenum _2, GLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetLocalConstantIntegervEXT, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetLocalConstantFloatvEXT, ( , GLuint _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_EXT_vertex_weighting */ \
    FG4CPP_GL_FUNCTION_VOID( VertexWeightfEXT, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexWeightfvEXT, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexWeightPointerEXT, ( , GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_x11_sync_object */ \
    FG4CPP_GL_FUNCTION_PTR( ImportSyncEXT, GLsync, ( , GLenum _1, GLintptr _2, GLbitfield _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_GREMEDY_frame_terminator */ \
    FG4CPP_GL_FUNCTION_VOID( FrameTerminatorGREMEDY, (), () ) \
\
    /* GL_GREMEDY_string_marker */ \
    FG4CPP_GL_FUNCTION_VOID( StringMarkerGREMEDY, ( , GLsizei _1, const GLvoid * _2 ), ( , _1, _2 ) ) \
\
    /* GL_HP_convolution_border_modes */ \
\
    /* GL_HP_image_transform */ \
    FG4CPP_GL_FUNCTION_VOID( ImageTransformParameteriHP, ( , GLenum _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ImageTransformParameterfHP, ( , GLenum _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ImageTransformParameterivHP, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ImageTransformParameterfvHP, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetImageTransformParameterivHP, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetImageTransformParameterfvHP, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_HP_occlusion_test */ \
\
    /* GL_HP_texture_lighting */ \
\
    /* GL_IBM_cull_vertex */ \
\
    /* GL_IBM_multimode_draw_arrays */ \
    FG4CPP_GL_FUNCTION_VOID( MultiModeDrawArraysIBM, ( , const GLenum * _1, const GLint * _2, const GLsizei * _3, GLsizei _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiModeDrawElementsIBM, ( , const GLenum * _1, const GLsizei * _2, GLenum _3, const GLvoid *const* _4, GLsizei _5, GLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_IBM_rasterpos_clip */ \
\
    /* GL_IBM_static_data */ \
    FG4CPP_GL_FUNCTION_VOID( FlushStaticDataIBM, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_IBM_texture_mirrored_repeat */ \
\
    /* GL_IBM_vertex_array_lists */ \
    FG4CPP_GL_FUNCTION_VOID( ColorPointerListIBM, ( , GLint _1, GLenum _2, GLint _3, const GLvoid ** _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColorPointerListIBM, ( , GLint _1, GLenum _2, GLint _3, const GLvoid ** _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EdgeFlagPointerListIBM, ( , GLint _1, const GLboolean ** _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogCoordPointerListIBM, ( , GLenum _1, GLint _2, const GLvoid ** _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( IndexPointerListIBM, ( , GLenum _1, GLint _2, const GLvoid ** _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalPointerListIBM, ( , GLenum _1, GLint _2, const GLvoid ** _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoordPointerListIBM, ( , GLint _1, GLenum _2, GLint _3, const GLvoid ** _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexPointerListIBM, ( , GLint _1, GLenum _2, GLint _3, const GLvoid ** _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_INGR_blend_func_separate */ \
    FG4CPP_GL_FUNCTION_VOID( BlendFuncSeparateINGR, ( , GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_INGR_color_clamp */ \
\
    /* GL_INGR_interlace_read */ \
\
    /* GL_INTEL_map_texture */ \
    FG4CPP_GL_FUNCTION_VOID( SyncTextureINTEL, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UnmapTexture2DINTEL, ( , GLuint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_PTR( MapTexture2DINTEL, void *, ( , GLuint _1, GLint _2, GLbitfield _3, const GLint * _4, const GLenum * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_INTEL_parallel_arrays */ \
    FG4CPP_GL_FUNCTION_VOID( VertexPointervINTEL, ( , GLint _1, GLenum _2, const GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalPointervINTEL, ( , GLenum _1, const GLvoid ** _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorPointervINTEL, ( , GLint _1, GLenum _2, const GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoordPointervINTEL, ( , GLint _1, GLenum _2, const GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_MESAX_texture_stack */ \
\
    /* GL_MESA_pack_invert */ \
\
    /* GL_MESA_resize_buffers */ \
    FG4CPP_GL_FUNCTION_VOID( ResizeBuffersMESA, (), () ) \
\
    /* GL_MESA_window_pos */ \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2dMESA, ( , GLdouble _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2dvMESA, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2fMESA, ( , GLfloat _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2fvMESA, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2iMESA, ( , GLint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2ivMESA, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2sMESA, ( , GLshort _1, GLshort _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos2svMESA, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3dMESA, ( , GLdouble _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3dvMESA, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3fMESA, ( , GLfloat _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3fvMESA, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3iMESA, ( , GLint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3ivMESA, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3sMESA, ( , GLshort _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos3svMESA, ( , const GLshort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos4dMESA, ( , GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos4dvMESA, ( , const GLdouble * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos4fMESA, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos4fvMESA, ( , const GLfloat * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos4iMESA, ( , GLint _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos4ivMESA, ( , const GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos4sMESA, ( , GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WindowPos4svMESA, ( , const GLshort * _1 ), ( , _1 ) ) \
\
    /* GL_MESA_ycbcr_texture */ \
\
    /* GL_NVX_conditional_render */ \
    FG4CPP_GL_FUNCTION_VOID( BeginConditionalRenderNVX, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EndConditionalRenderNVX, (), () ) \
\
    /* GL_NV_bindless_multi_draw_indirect */ \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawArraysIndirectBindlessNV, ( , GLenum _1, const GLvoid * _2, GLsizei _3, GLsizei _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiDrawElementsIndirectBindlessNV, ( , GLenum _1, GLenum _2, const GLvoid * _3, GLsizei _4, GLsizei _5, GLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_NV_bindless_texture */ \
    FG4CPP_GL_FUNCTION_NUM( GetTextureHandleNV, GLuint64, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetTextureSamplerHandleNV, GLuint64, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MakeTextureHandleResidentNV, ( , GLuint64 _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MakeTextureHandleNonResidentNV, ( , GLuint64 _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetImageHandleNV, GLuint64, ( , GLuint _1, GLint _2, GLboolean _3, GLint _4, GLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MakeImageHandleResidentNV, ( , GLuint64 _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MakeImageHandleNonResidentNV, ( , GLuint64 _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformHandleui64NV, ( , GLint _1, GLuint64 _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( UniformHandleui64vNV, ( , GLint _1, GLsizei _2, const GLuint64 * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformHandleui64NV, ( , GLuint _1, GLint _2, GLuint64 _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformHandleui64vNV, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint64 * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsTextureHandleResidentNV, GLboolean, ( , GLuint64 _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsImageHandleResidentNV, GLboolean, ( , GLuint64 _1 ), ( , _1 ) ) \
\
    /* GL_NV_blend_equation_advanced */ \
    FG4CPP_GL_FUNCTION_VOID( BlendParameteriNV, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BlendBarrierNV, (), () ) \
\
    /* GL_NV_blend_equation_advanced_coherent */ \
\
    /* GL_NV_blend_square */ \
\
    /* GL_NV_compute_program5 */ \
\
    /* GL_NV_conditional_render */ \
    FG4CPP_GL_FUNCTION_VOID( BeginConditionalRenderNV, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EndConditionalRenderNV, (), () ) \
\
    /* GL_NV_copy_depth_to_color */ \
\
    /* GL_NV_copy_image */ \
    FG4CPP_GL_FUNCTION_VOID( CopyImageSubDataNV, ( , GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLuint _7, GLenum _8, GLint _9, GLint _10, GLint _11, GLint _12, GLsizei _13, GLsizei _14, GLsizei _15 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 ) ) \
\
    /* GL_NV_deep_texture3D */ \
\
    /* GL_NV_depth_buffer_float */ \
    FG4CPP_GL_FUNCTION_VOID( DepthRangedNV, ( , GLdouble _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ClearDepthdNV, ( , GLdouble _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DepthBoundsdNV, ( , GLdouble _1, GLdouble _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_depth_clamp */ \
\
    /* GL_NV_draw_texture */ \
    FG4CPP_GL_FUNCTION_VOID( DrawTextureNV, ( , GLuint _1, GLuint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
\
    /* GL_NV_evaluators */ \
    FG4CPP_GL_FUNCTION_VOID( MapControlPointsNV, ( , GLenum _1, GLuint _2, GLenum _3, GLsizei _4, GLsizei _5, GLint _6, GLint _7, GLboolean _8, const GLvoid * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MapParameterivNV, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MapParameterfvNV, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMapControlPointsNV, ( , GLenum _1, GLuint _2, GLenum _3, GLsizei _4, GLsizei _5, GLboolean _6, GLvoid * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMapParameterivNV, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMapParameterfvNV, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMapAttribParameterivNV, ( , GLenum _1, GLuint _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetMapAttribParameterfvNV, ( , GLenum _1, GLuint _2, GLenum _3, GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EvalMapsNV, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_explicit_multisample */ \
    FG4CPP_GL_FUNCTION_VOID( GetMultisamplefvNV, ( , GLenum _1, GLuint _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SampleMaskIndexedNV, ( , GLuint _1, GLbitfield _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexRenderbufferNV, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_fence */ \
    FG4CPP_GL_FUNCTION_VOID( DeleteFencesNV, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenFencesNV, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsFenceNV, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( TestFenceNV, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFenceivNV, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FinishFenceNV, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SetFenceNV, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_float_buffer */ \
\
    /* GL_NV_fog_distance */ \
\
    /* GL_NV_fragment_program */ \
    FG4CPP_GL_FUNCTION_VOID( ProgramNamedParameter4fNV, ( , GLuint _1, GLsizei _2, const GLubyte * _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramNamedParameter4fvNV, ( , GLuint _1, GLsizei _2, const GLubyte * _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramNamedParameter4dNV, ( , GLuint _1, GLsizei _2, const GLubyte * _3, GLdouble _4, GLdouble _5, GLdouble _6, GLdouble _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramNamedParameter4dvNV, ( , GLuint _1, GLsizei _2, const GLubyte * _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramNamedParameterfvNV, ( , GLuint _1, GLsizei _2, const GLubyte * _3, GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramNamedParameterdvNV, ( , GLuint _1, GLsizei _2, const GLubyte * _3, GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_NV_fragment_program2 */ \
\
    /* GL_NV_fragment_program4 */ \
\
    /* GL_NV_fragment_program_option */ \
\
    /* GL_NV_framebuffer_multisample_coverage */ \
    FG4CPP_GL_FUNCTION_VOID( RenderbufferStorageMultisampleCoverageNV, ( , GLenum _1, GLsizei _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_NV_geometry_program4 */ \
    FG4CPP_GL_FUNCTION_VOID( ProgramVertexLimitNV, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTextureEXT, ( , GLenum _1, GLenum _2, GLuint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTextureLayerEXT, ( , GLenum _1, GLenum _2, GLuint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FramebufferTextureFaceEXT, ( , GLenum _1, GLenum _2, GLuint _3, GLint _4, GLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_NV_geometry_shader4 */ \
\
    /* GL_NV_gpu_program4 */ \
    FG4CPP_GL_FUNCTION_VOID( ProgramLocalParameterI4iNV, ( , GLenum _1, GLuint _2, GLint _3, GLint _4, GLint _5, GLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramLocalParameterI4ivNV, ( , GLenum _1, GLuint _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramLocalParametersI4ivNV, ( , GLenum _1, GLuint _2, GLsizei _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramLocalParameterI4uiNV, ( , GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramLocalParameterI4uivNV, ( , GLenum _1, GLuint _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramLocalParametersI4uivNV, ( , GLenum _1, GLuint _2, GLsizei _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramEnvParameterI4iNV, ( , GLenum _1, GLuint _2, GLint _3, GLint _4, GLint _5, GLint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramEnvParameterI4ivNV, ( , GLenum _1, GLuint _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramEnvParametersI4ivNV, ( , GLenum _1, GLuint _2, GLsizei _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramEnvParameterI4uiNV, ( , GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramEnvParameterI4uivNV, ( , GLenum _1, GLuint _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramEnvParametersI4uivNV, ( , GLenum _1, GLuint _2, GLsizei _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramLocalParameterIivNV, ( , GLenum _1, GLuint _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramLocalParameterIuivNV, ( , GLenum _1, GLuint _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramEnvParameterIivNV, ( , GLenum _1, GLuint _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramEnvParameterIuivNV, ( , GLenum _1, GLuint _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_gpu_program5 */ \
    FG4CPP_GL_FUNCTION_VOID( ProgramSubroutineParametersuivNV, ( , GLenum _1, GLsizei _2, const GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramSubroutineParameteruivNV, ( , GLenum _1, GLuint _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_gpu_program5_mem_extended */ \
\
    /* GL_NV_gpu_shader5 */ \
    FG4CPP_GL_FUNCTION_VOID( Uniform1i64NV, ( , GLint _1, GLint64EXT _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2i64NV, ( , GLint _1, GLint64EXT _2, GLint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3i64NV, ( , GLint _1, GLint64EXT _2, GLint64EXT _3, GLint64EXT _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4i64NV, ( , GLint _1, GLint64EXT _2, GLint64EXT _3, GLint64EXT _4, GLint64EXT _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1i64vNV, ( , GLint _1, GLsizei _2, const GLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2i64vNV, ( , GLint _1, GLsizei _2, const GLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3i64vNV, ( , GLint _1, GLsizei _2, const GLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4i64vNV, ( , GLint _1, GLsizei _2, const GLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1ui64NV, ( , GLint _1, GLuint64EXT _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2ui64NV, ( , GLint _1, GLuint64EXT _2, GLuint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3ui64NV, ( , GLint _1, GLuint64EXT _2, GLuint64EXT _3, GLuint64EXT _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4ui64NV, ( , GLint _1, GLuint64EXT _2, GLuint64EXT _3, GLuint64EXT _4, GLuint64EXT _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform1ui64vNV, ( , GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform2ui64vNV, ( , GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform3ui64vNV, ( , GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniform4ui64vNV, ( , GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetUniformi64vNV, ( , GLuint _1, GLint _2, GLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1i64NV, ( , GLuint _1, GLint _2, GLint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2i64NV, ( , GLuint _1, GLint _2, GLint64EXT _3, GLint64EXT _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3i64NV, ( , GLuint _1, GLint _2, GLint64EXT _3, GLint64EXT _4, GLint64EXT _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4i64NV, ( , GLuint _1, GLint _2, GLint64EXT _3, GLint64EXT _4, GLint64EXT _5, GLint64EXT _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1i64vNV, ( , GLuint _1, GLint _2, GLsizei _3, const GLint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2i64vNV, ( , GLuint _1, GLint _2, GLsizei _3, const GLint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3i64vNV, ( , GLuint _1, GLint _2, GLsizei _3, const GLint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4i64vNV, ( , GLuint _1, GLint _2, GLsizei _3, const GLint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1ui64NV, ( , GLuint _1, GLint _2, GLuint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2ui64NV, ( , GLuint _1, GLint _2, GLuint64EXT _3, GLuint64EXT _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3ui64NV, ( , GLuint _1, GLint _2, GLuint64EXT _3, GLuint64EXT _4, GLuint64EXT _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4ui64NV, ( , GLuint _1, GLint _2, GLuint64EXT _3, GLuint64EXT _4, GLuint64EXT _5, GLuint64EXT _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform1ui64vNV, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform2ui64vNV, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform3ui64vNV, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniform4ui64vNV, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_NV_half_float */ \
    FG4CPP_GL_FUNCTION_VOID( Vertex2hNV, ( , GLhalfNV _1, GLhalfNV _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex2hvNV, ( , const GLhalfNV * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3hNV, ( , GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex3hvNV, ( , const GLhalfNV * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4hNV, ( , GLhalfNV _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Vertex4hvNV, ( , const GLhalfNV * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3hNV, ( , GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3hvNV, ( , const GLhalfNV * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3hNV, ( , GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3hvNV, ( , const GLhalfNV * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4hNV, ( , GLhalfNV _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4hvNV, ( , const GLhalfNV * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1hNV, ( , GLhalfNV _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord1hvNV, ( , const GLhalfNV * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2hNV, ( , GLhalfNV _1, GLhalfNV _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2hvNV, ( , const GLhalfNV * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3hNV, ( , GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord3hvNV, ( , const GLhalfNV * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4hNV, ( , GLhalfNV _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4hvNV, ( , const GLhalfNV * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1hNV, ( , GLenum _1, GLhalfNV _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord1hvNV, ( , GLenum _1, const GLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2hNV, ( , GLenum _1, GLhalfNV _2, GLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord2hvNV, ( , GLenum _1, const GLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3hNV, ( , GLenum _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord3hvNV, ( , GLenum _1, const GLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4hNV, ( , GLenum _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4, GLhalfNV _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MultiTexCoord4hvNV, ( , GLenum _1, const GLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogCoordhNV, ( , GLhalfNV _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogCoordhvNV, ( , const GLhalfNV * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3hNV, ( , GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColor3hvNV, ( , const GLhalfNV * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexWeighthNV, ( , GLhalfNV _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexWeighthvNV, ( , const GLhalfNV * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1hNV, ( , GLuint _1, GLhalfNV _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1hvNV, ( , GLuint _1, const GLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2hNV, ( , GLuint _1, GLhalfNV _2, GLhalfNV _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2hvNV, ( , GLuint _1, const GLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3hNV, ( , GLuint _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3hvNV, ( , GLuint _1, const GLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4hNV, ( , GLuint _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4, GLhalfNV _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4hvNV, ( , GLuint _1, const GLhalfNV * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs1hvNV, ( , GLuint _1, GLsizei _2, const GLhalfNV * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs2hvNV, ( , GLuint _1, GLsizei _2, const GLhalfNV * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs3hvNV, ( , GLuint _1, GLsizei _2, const GLhalfNV * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs4hvNV, ( , GLuint _1, GLsizei _2, const GLhalfNV * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_light_max_exponent */ \
\
    /* GL_NV_multisample_coverage */ \
\
    /* GL_NV_multisample_filter_hint */ \
\
    /* GL_NV_occlusion_query */ \
    FG4CPP_GL_FUNCTION_VOID( GenOcclusionQueriesNV, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteOcclusionQueriesNV, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsOcclusionQueryNV, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BeginOcclusionQueryNV, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EndOcclusionQueryNV, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( GetOcclusionQueryivNV, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetOcclusionQueryuivNV, ( , GLuint _1, GLenum _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_packed_depth_stencil */ \
\
    /* GL_NV_parameter_buffer_object */ \
    FG4CPP_GL_FUNCTION_VOID( ProgramBufferParametersfvNV, ( , GLenum _1, GLuint _2, GLuint _3, GLsizei _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramBufferParametersIivNV, ( , GLenum _1, GLuint _2, GLuint _3, GLsizei _4, const GLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramBufferParametersIuivNV, ( , GLenum _1, GLuint _2, GLuint _3, GLsizei _4, const GLuint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_NV_parameter_buffer_object2 */ \
\
    /* GL_NV_path_rendering */ \
    FG4CPP_GL_FUNCTION_NUM( GenPathsNV, GLuint, ( , GLsizei _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeletePathsNV, ( , GLuint _1, GLsizei _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsPathNV, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathCommandsNV, ( , GLuint _1, GLsizei _2, const GLubyte * _3, GLsizei _4, GLenum _5, const GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathCoordsNV, ( , GLuint _1, GLsizei _2, GLenum _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathSubCommandsNV, ( , GLuint _1, GLsizei _2, GLsizei _3, GLsizei _4, const GLubyte * _5, GLsizei _6, GLenum _7, const GLvoid * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathSubCoordsNV, ( , GLuint _1, GLsizei _2, GLsizei _3, GLenum _4, const GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathStringNV, ( , GLuint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathGlyphsNV, ( , GLuint _1, GLenum _2, const GLvoid * _3, GLbitfield _4, GLsizei _5, GLenum _6, const GLvoid * _7, GLenum _8, GLuint _9, GLfloat _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathGlyphRangeNV, ( , GLuint _1, GLenum _2, const GLvoid * _3, GLbitfield _4, GLuint _5, GLsizei _6, GLenum _7, GLuint _8, GLfloat _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( WeightPathsNV, ( , GLuint _1, GLsizei _2, const GLuint * _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyPathNV, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( InterpolatePathsNV, ( , GLuint _1, GLuint _2, GLuint _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TransformPathNV, ( , GLuint _1, GLuint _2, GLenum _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathParameterivNV, ( , GLuint _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathParameteriNV, ( , GLuint _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathParameterfvNV, ( , GLuint _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathParameterfNV, ( , GLuint _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathDashArrayNV, ( , GLuint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathStencilFuncNV, ( , GLenum _1, GLint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathStencilDepthOffsetNV, ( , GLfloat _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( StencilFillPathNV, ( , GLuint _1, GLenum _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( StencilStrokePathNV, ( , GLuint _1, GLint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( StencilFillPathInstancedNV, ( , GLsizei _1, GLenum _2, const GLvoid * _3, GLuint _4, GLenum _5, GLuint _6, GLenum _7, const GLfloat * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( StencilStrokePathInstancedNV, ( , GLsizei _1, GLenum _2, const GLvoid * _3, GLuint _4, GLint _5, GLuint _6, GLenum _7, const GLfloat * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathCoverDepthFuncNV, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathColorGenNV, ( , GLenum _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathTexGenNV, ( , GLenum _1, GLenum _2, GLint _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PathFogGenNV, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CoverFillPathNV, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CoverStrokePathNV, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CoverFillPathInstancedNV, ( , GLsizei _1, GLenum _2, const GLvoid * _3, GLuint _4, GLenum _5, GLenum _6, const GLfloat * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CoverStrokePathInstancedNV, ( , GLsizei _1, GLenum _2, const GLvoid * _3, GLuint _4, GLenum _5, GLenum _6, const GLfloat * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPathParameterivNV, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPathParameterfvNV, ( , GLuint _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPathCommandsNV, ( , GLuint _1, GLubyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPathCoordsNV, ( , GLuint _1, GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPathDashArrayNV, ( , GLuint _1, GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPathMetricsNV, ( , GLbitfield _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLuint _5, GLsizei _6, GLfloat * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPathMetricRangeNV, ( , GLbitfield _1, GLuint _2, GLsizei _3, GLsizei _4, GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPathSpacingNV, ( , GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLuint _5, GLfloat _6, GLfloat _7, GLenum _8, GLfloat * _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPathColorGenivNV, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPathColorGenfvNV, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPathTexGenivNV, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPathTexGenfvNV, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsPointInFillPathNV, GLboolean, ( , GLuint _1, GLuint _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsPointInStrokePathNV, GLboolean, ( , GLuint _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetPathLengthNV, GLfloat, ( , GLuint _1, GLsizei _2, GLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( PointAlongPathNV, GLboolean, ( , GLuint _1, GLsizei _2, GLsizei _3, GLfloat _4, GLfloat * _5, GLfloat * _6, GLfloat * _7, GLfloat * _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_NV_pixel_data_range */ \
    FG4CPP_GL_FUNCTION_VOID( PixelDataRangeNV, ( , GLenum _1, GLsizei _2, const GLvoid * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FlushPixelDataRangeNV, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_NV_point_sprite */ \
    FG4CPP_GL_FUNCTION_VOID( PointParameteriNV, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PointParameterivNV, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_present_video */ \
    FG4CPP_GL_FUNCTION_VOID( PresentFrameKeyedNV, ( , GLuint _1, GLuint64EXT _2, GLuint _3, GLuint _4, GLenum _5, GLenum _6, GLuint _7, GLuint _8, GLenum _9, GLuint _10, GLuint _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PresentFrameDualFillNV, ( , GLuint _1, GLuint64EXT _2, GLuint _3, GLuint _4, GLenum _5, GLenum _6, GLuint _7, GLenum _8, GLuint _9, GLenum _10, GLuint _11, GLenum _12, GLuint _13 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVideoivNV, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVideouivNV, ( , GLuint _1, GLenum _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVideoi64vNV, ( , GLuint _1, GLenum _2, GLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVideoui64vNV, ( , GLuint _1, GLenum _2, GLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_primitive_restart */ \
    FG4CPP_GL_FUNCTION_VOID( PrimitiveRestartNV, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( PrimitiveRestartIndexNV, ( , GLuint _1 ), ( , _1 ) ) \
\
    /* GL_NV_register_combiners */ \
    FG4CPP_GL_FUNCTION_VOID( CombinerParameterfvNV, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CombinerParameterfNV, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CombinerParameterivNV, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CombinerParameteriNV, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CombinerInputNV, ( , GLenum _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5, GLenum _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CombinerOutputNV, ( , GLenum _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5, GLenum _6, GLenum _7, GLboolean _8, GLboolean _9, GLboolean _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FinalCombinerInputNV, ( , GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetCombinerInputParameterfvNV, ( , GLenum _1, GLenum _2, GLenum _3, GLenum _4, GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetCombinerInputParameterivNV, ( , GLenum _1, GLenum _2, GLenum _3, GLenum _4, GLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetCombinerOutputParameterfvNV, ( , GLenum _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetCombinerOutputParameterivNV, ( , GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFinalCombinerInputParameterfvNV, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFinalCombinerInputParameterivNV, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_register_combiners2 */ \
    FG4CPP_GL_FUNCTION_VOID( CombinerStageParameterfvNV, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetCombinerStageParameterfvNV, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_shader_atomic_counters */ \
\
    /* GL_NV_shader_atomic_float */ \
\
    /* GL_NV_shader_buffer_load */ \
    FG4CPP_GL_FUNCTION_VOID( MakeBufferResidentNV, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MakeBufferNonResidentNV, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsBufferResidentNV, GLboolean, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MakeNamedBufferResidentNV, ( , GLuint _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( MakeNamedBufferNonResidentNV, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsNamedBufferResidentNV, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetBufferParameterui64vNV, ( , GLenum _1, GLenum _2, GLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetNamedBufferParameterui64vNV, ( , GLuint _1, GLenum _2, GLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetIntegerui64vNV, ( , GLenum _1, GLuint64EXT * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniformui64NV, ( , GLint _1, GLuint64EXT _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Uniformui64vNV, ( , GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetUniformui64vNV, ( , GLuint _1, GLint _2, GLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformui64NV, ( , GLuint _1, GLint _2, GLuint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramUniformui64vNV, ( , GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_NV_shader_buffer_store */ \
\
    /* GL_NV_shader_storage_buffer_object */ \
\
    /* GL_NV_tessellation_program5 */ \
\
    /* GL_NV_texgen_emboss */ \
\
    /* GL_NV_texgen_reflection */ \
\
    /* GL_NV_texture_barrier */ \
    FG4CPP_GL_FUNCTION_VOID( TextureBarrierNV, (), () ) \
\
    /* GL_NV_texture_compression_vtc */ \
\
    /* GL_NV_texture_env_combine4 */ \
\
    /* GL_NV_texture_expand_normal */ \
\
    /* GL_NV_texture_multisample */ \
    FG4CPP_GL_FUNCTION_VOID( TexImage2DMultisampleCoverageNV, ( , GLenum _1, GLsizei _2, GLsizei _3, GLint _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexImage3DMultisampleCoverageNV, ( , GLenum _1, GLsizei _2, GLsizei _3, GLint _4, GLsizei _5, GLsizei _6, GLsizei _7, GLboolean _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureImage2DMultisampleNV, ( , GLuint _1, GLenum _2, GLsizei _3, GLint _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureImage3DMultisampleNV, ( , GLuint _1, GLenum _2, GLsizei _3, GLint _4, GLsizei _5, GLsizei _6, GLsizei _7, GLboolean _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureImage2DMultisampleCoverageNV, ( , GLuint _1, GLenum _2, GLsizei _3, GLsizei _4, GLint _5, GLsizei _6, GLsizei _7, GLboolean _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TextureImage3DMultisampleCoverageNV, ( , GLuint _1, GLenum _2, GLsizei _3, GLsizei _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLboolean _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_NV_texture_rectangle */ \
\
    /* GL_NV_texture_shader */ \
\
    /* GL_NV_texture_shader2 */ \
\
    /* GL_NV_texture_shader3 */ \
\
    /* GL_NV_transform_feedback */ \
    FG4CPP_GL_FUNCTION_VOID( BeginTransformFeedbackNV, ( , GLenum _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EndTransformFeedbackNV, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( TransformFeedbackAttribsNV, ( , GLuint _1, const GLint * _2, GLenum _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindBufferRangeNV, ( , GLenum _1, GLuint _2, GLuint _3, GLintptr _4, GLsizeiptr _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindBufferOffsetNV, ( , GLenum _1, GLuint _2, GLuint _3, GLintptr _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindBufferBaseNV, ( , GLenum _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TransformFeedbackVaryingsNV, ( , GLuint _1, GLsizei _2, const GLint * _3, GLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ActiveVaryingNV, ( , GLuint _1, const GLchar * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GetVaryingLocationNV, GLint, ( , GLuint _1, const GLchar * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetActiveVaryingNV, ( , GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLsizei * _5, GLenum * _6, GLchar * _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTransformFeedbackVaryingNV, ( , GLuint _1, GLuint _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TransformFeedbackStreamAttribsNV, ( , GLsizei _1, const GLint * _2, GLsizei _3, const GLint * _4, GLenum _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_NV_transform_feedback2 */ \
    FG4CPP_GL_FUNCTION_VOID( BindTransformFeedbackNV, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteTransformFeedbacksNV, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenTransformFeedbacksNV, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsTransformFeedbackNV, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PauseTransformFeedbackNV, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( ResumeTransformFeedbackNV, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( DrawTransformFeedbackNV, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_vdpau_interop */ \
    FG4CPP_GL_FUNCTION_VOID( VDPAUInitNV, ( , const GLvoid * _1, const GLvoid * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VDPAUFiniNV, (), () ) \
    FG4CPP_GL_FUNCTION_NUM( VDPAURegisterVideoSurfaceNV, GLvdpauSurfaceNV, ( , const GLvoid * _1, GLenum _2, GLsizei _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_NUM( VDPAURegisterOutputSurfaceNV, GLvdpauSurfaceNV, ( , const GLvoid * _1, GLenum _2, GLsizei _3, const GLuint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VDPAUIsSurfaceNV, ( , GLvdpauSurfaceNV _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VDPAUUnregisterSurfaceNV, ( , GLvdpauSurfaceNV _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VDPAUGetSurfaceivNV, ( , GLvdpauSurfaceNV _1, GLenum _2, GLsizei _3, GLsizei * _4, GLint * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VDPAUSurfaceAccessNV, ( , GLvdpauSurfaceNV _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VDPAUMapSurfacesNV, ( , GLsizei _1, const GLvdpauSurfaceNV * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VDPAUUnmapSurfacesNV, ( , GLsizei _1, const GLvdpauSurfaceNV * _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_vertex_array_range */ \
    FG4CPP_GL_FUNCTION_VOID( FlushVertexArrayRangeNV, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( VertexArrayRangeNV, ( , GLsizei _1, const GLvoid * _2 ), ( , _1, _2 ) ) \
\
    /* GL_NV_vertex_array_range2 */ \
\
    /* GL_NV_vertex_attrib_integer_64bit */ \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL1i64NV, ( , GLuint _1, GLint64EXT _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL2i64NV, ( , GLuint _1, GLint64EXT _2, GLint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL3i64NV, ( , GLuint _1, GLint64EXT _2, GLint64EXT _3, GLint64EXT _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL4i64NV, ( , GLuint _1, GLint64EXT _2, GLint64EXT _3, GLint64EXT _4, GLint64EXT _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL1i64vNV, ( , GLuint _1, const GLint64EXT * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL2i64vNV, ( , GLuint _1, const GLint64EXT * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL3i64vNV, ( , GLuint _1, const GLint64EXT * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL4i64vNV, ( , GLuint _1, const GLint64EXT * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL1ui64NV, ( , GLuint _1, GLuint64EXT _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL2ui64NV, ( , GLuint _1, GLuint64EXT _2, GLuint64EXT _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL3ui64NV, ( , GLuint _1, GLuint64EXT _2, GLuint64EXT _3, GLuint64EXT _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL4ui64NV, ( , GLuint _1, GLuint64EXT _2, GLuint64EXT _3, GLuint64EXT _4, GLuint64EXT _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL1ui64vNV, ( , GLuint _1, const GLuint64EXT * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL2ui64vNV, ( , GLuint _1, const GLuint64EXT * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL3ui64vNV, ( , GLuint _1, const GLuint64EXT * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribL4ui64vNV, ( , GLuint _1, const GLuint64EXT * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribLi64vNV, ( , GLuint _1, GLenum _2, GLint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribLui64vNV, ( , GLuint _1, GLenum _2, GLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribLFormatNV, ( , GLuint _1, GLint _2, GLenum _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_NV_vertex_buffer_unified_memory */ \
    FG4CPP_GL_FUNCTION_VOID( BufferAddressRangeNV, ( , GLenum _1, GLuint _2, GLuint64EXT _3, GLsizeiptr _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexFormatNV, ( , GLint _1, GLenum _2, GLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( NormalFormatNV, ( , GLenum _1, GLsizei _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorFormatNV, ( , GLint _1, GLenum _2, GLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( IndexFormatNV, ( , GLenum _1, GLsizei _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoordFormatNV, ( , GLint _1, GLenum _2, GLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EdgeFlagFormatNV, ( , GLsizei _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SecondaryColorFormatNV, ( , GLint _1, GLenum _2, GLsizei _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FogCoordFormatNV, ( , GLenum _1, GLsizei _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribFormatNV, ( , GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribIFormatNV, ( , GLuint _1, GLint _2, GLenum _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetIntegerui64i_vNV, ( , GLenum _1, GLuint _2, GLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_vertex_program */ \
    FG4CPP_GL_FUNCTION_NUM( AreProgramsResidentNV, GLboolean, ( , GLsizei _1, const GLuint * _2, GLboolean * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindProgramNV, ( , GLenum _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteProgramsNV, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ExecuteProgramNV, ( , GLenum _1, GLuint _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GenProgramsNV, ( , GLsizei _1, GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramParameterdvNV, ( , GLenum _1, GLuint _2, GLenum _3, GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramParameterfvNV, ( , GLenum _1, GLuint _2, GLenum _3, GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramivNV, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetProgramStringNV, ( , GLuint _1, GLenum _2, GLubyte * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetTrackMatrixivNV, ( , GLenum _1, GLuint _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribdvNV, ( , GLuint _1, GLenum _2, GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribfvNV, ( , GLuint _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribivNV, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribPointervNV, ( , GLuint _1, GLenum _2, GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsProgramNV, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LoadProgramNV, ( , GLenum _1, GLuint _2, GLsizei _3, const GLubyte * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramParameter4dNV, ( , GLenum _1, GLuint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramParameter4dvNV, ( , GLenum _1, GLuint _2, const GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramParameter4fNV, ( , GLenum _1, GLuint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramParameter4fvNV, ( , GLenum _1, GLuint _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramParameters4dvNV, ( , GLenum _1, GLuint _2, GLsizei _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ProgramParameters4fvNV, ( , GLenum _1, GLuint _2, GLsizei _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( RequestResidentProgramsNV, ( , GLsizei _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TrackMatrixNV, ( , GLenum _1, GLuint _2, GLenum _3, GLenum _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribPointerNV, ( , GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1dNV, ( , GLuint _1, GLdouble _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1dvNV, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1fNV, ( , GLuint _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1fvNV, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1sNV, ( , GLuint _1, GLshort _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib1svNV, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2dNV, ( , GLuint _1, GLdouble _2, GLdouble _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2dvNV, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2fNV, ( , GLuint _1, GLfloat _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2fvNV, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2sNV, ( , GLuint _1, GLshort _2, GLshort _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib2svNV, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3dNV, ( , GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3dvNV, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3fNV, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3fvNV, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3sNV, ( , GLuint _1, GLshort _2, GLshort _3, GLshort _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib3svNV, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4dNV, ( , GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4dvNV, ( , GLuint _1, const GLdouble * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4fNV, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4fvNV, ( , GLuint _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4sNV, ( , GLuint _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4svNV, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4ubNV, ( , GLuint _1, GLubyte _2, GLubyte _3, GLubyte _4, GLubyte _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttrib4ubvNV, ( , GLuint _1, const GLubyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs1dvNV, ( , GLuint _1, GLsizei _2, const GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs1fvNV, ( , GLuint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs1svNV, ( , GLuint _1, GLsizei _2, const GLshort * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs2dvNV, ( , GLuint _1, GLsizei _2, const GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs2fvNV, ( , GLuint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs2svNV, ( , GLuint _1, GLsizei _2, const GLshort * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs3dvNV, ( , GLuint _1, GLsizei _2, const GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs3fvNV, ( , GLuint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs3svNV, ( , GLuint _1, GLsizei _2, const GLshort * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs4dvNV, ( , GLuint _1, GLsizei _2, const GLdouble * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs4fvNV, ( , GLuint _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs4svNV, ( , GLuint _1, GLsizei _2, const GLshort * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribs4ubvNV, ( , GLuint _1, GLsizei _2, const GLubyte * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_vertex_program1_1 */ \
\
    /* GL_NV_vertex_program2 */ \
\
    /* GL_NV_vertex_program2_option */ \
\
    /* GL_NV_vertex_program3 */ \
\
    /* GL_NV_vertex_program4 */ \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI1iEXT, ( , GLuint _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI2iEXT, ( , GLuint _1, GLint _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI3iEXT, ( , GLuint _1, GLint _2, GLint _3, GLint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4iEXT, ( , GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI1uiEXT, ( , GLuint _1, GLuint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI2uiEXT, ( , GLuint _1, GLuint _2, GLuint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI3uiEXT, ( , GLuint _1, GLuint _2, GLuint _3, GLuint _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4uiEXT, ( , GLuint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI1ivEXT, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI2ivEXT, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI3ivEXT, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4ivEXT, ( , GLuint _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI1uivEXT, ( , GLuint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI2uivEXT, ( , GLuint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI3uivEXT, ( , GLuint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4uivEXT, ( , GLuint _1, const GLuint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4bvEXT, ( , GLuint _1, const GLbyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4svEXT, ( , GLuint _1, const GLshort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4ubvEXT, ( , GLuint _1, const GLubyte * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribI4usvEXT, ( , GLuint _1, const GLushort * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VertexAttribIPointerEXT, ( , GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribIivEXT, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVertexAttribIuivEXT, ( , GLuint _1, GLenum _2, GLuint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_NV_video_capture */ \
    FG4CPP_GL_FUNCTION_VOID( BeginVideoCaptureNV, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindVideoCaptureStreamBufferNV, ( , GLuint _1, GLuint _2, GLenum _3, GLintptrARB _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( BindVideoCaptureStreamTextureNV, ( , GLuint _1, GLuint _2, GLenum _3, GLenum _4, GLuint _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( EndVideoCaptureNV, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVideoCaptureivNV, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVideoCaptureStreamivNV, ( , GLuint _1, GLuint _2, GLenum _3, GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVideoCaptureStreamfvNV, ( , GLuint _1, GLuint _2, GLenum _3, GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetVideoCaptureStreamdvNV, ( , GLuint _1, GLuint _2, GLenum _3, GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_NUM( VideoCaptureNV, GLenum, ( , GLuint _1, GLuint * _2, GLuint64EXT * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VideoCaptureStreamParameterivNV, ( , GLuint _1, GLuint _2, GLenum _3, const GLint * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VideoCaptureStreamParameterfvNV, ( , GLuint _1, GLuint _2, GLenum _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( VideoCaptureStreamParameterdvNV, ( , GLuint _1, GLuint _2, GLenum _3, const GLdouble * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_OML_interlace */ \
\
    /* GL_OML_resample */ \
\
    /* GL_OML_subsample */ \
\
    /* GL_PGI_misc_hints */ \
    FG4CPP_GL_FUNCTION_VOID( HintPGI, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
\
    /* GL_PGI_vertex_hints */ \
\
    /* GL_REND_screen_coordinates */ \
\
    /* GL_S3_s3tc */ \
\
    /* GL_SGIS_detail_texture */ \
    FG4CPP_GL_FUNCTION_VOID( DetailTexFuncSGIS, ( , GLenum _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetDetailTexFuncSGIS, ( , GLenum _1, GLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIS_fog_function */ \
    FG4CPP_GL_FUNCTION_VOID( FogFuncSGIS, ( , GLsizei _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFogFuncSGIS, ( , GLfloat * _1 ), ( , _1 ) ) \
\
    /* GL_SGIS_generate_mipmap */ \
\
    /* GL_SGIS_multisample */ \
    FG4CPP_GL_FUNCTION_VOID( SampleMaskSGIS, ( , GLclampf _1, GLboolean _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SamplePatternSGIS, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_SGIS_pixel_texture */ \
    FG4CPP_GL_FUNCTION_VOID( PixelTexGenParameteriSGIS, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelTexGenParameterivSGIS, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelTexGenParameterfSGIS, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PixelTexGenParameterfvSGIS, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPixelTexGenParameterivSGIS, ( , GLenum _1, GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetPixelTexGenParameterfvSGIS, ( , GLenum _1, GLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIS_point_line_texgen */ \
\
    /* GL_SGIS_point_parameters */ \
    FG4CPP_GL_FUNCTION_VOID( PointParameterfSGIS, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( PointParameterfvSGIS, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIS_sharpen_texture */ \
    FG4CPP_GL_FUNCTION_VOID( SharpenTexFuncSGIS, ( , GLenum _1, GLsizei _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetSharpenTexFuncSGIS, ( , GLenum _1, GLfloat * _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIS_texture4D */ \
    FG4CPP_GL_FUNCTION_VOID( TexImage4DSGIS, ( , GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexSubImage4DSGIS, ( , GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLsizei _10, GLenum _11, GLenum _12, const GLvoid * _13 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
\
    /* GL_SGIS_texture_border_clamp */ \
\
    /* GL_SGIS_texture_color_mask */ \
    FG4CPP_GL_FUNCTION_VOID( TextureColorMaskSGIS, ( , GLboolean _1, GLboolean _2, GLboolean _3, GLboolean _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_SGIS_texture_edge_clamp */ \
\
    /* GL_SGIS_texture_filter4 */ \
    FG4CPP_GL_FUNCTION_VOID( GetTexFilterFuncSGIS, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexFilterFuncSGIS, ( , GLenum _1, GLenum _2, GLsizei _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_SGIS_texture_lod */ \
\
    /* GL_SGIS_texture_select */ \
\
    /* GL_SGIX_async */ \
    FG4CPP_GL_FUNCTION_VOID( AsyncMarkerSGIX, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( FinishAsyncSGIX, GLint, ( , GLuint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( PollAsyncSGIX, GLint, ( , GLuint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_NUM( GenAsyncMarkersSGIX, GLuint, ( , GLsizei _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeleteAsyncMarkersSGIX, ( , GLuint _1, GLsizei _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( IsAsyncMarkerSGIX, GLboolean, ( , GLuint _1 ), ( , _1 ) ) \
\
    /* GL_SGIX_async_histogram */ \
\
    /* GL_SGIX_async_pixel */ \
\
    /* GL_SGIX_blend_alpha_minmax */ \
\
    /* GL_SGIX_calligraphic_fragment */ \
\
    /* GL_SGIX_clipmap */ \
\
    /* GL_SGIX_convolution_accuracy */ \
\
    /* GL_SGIX_depth_pass_instrument */ \
\
    /* GL_SGIX_depth_texture */ \
\
    /* GL_SGIX_flush_raster */ \
    FG4CPP_GL_FUNCTION_VOID( FlushRasterSGIX, (), () ) \
\
    /* GL_SGIX_fog_offset */ \
\
    /* GL_SGIX_fragment_lighting */ \
    FG4CPP_GL_FUNCTION_VOID( FragmentColorMaterialSGIX, ( , GLenum _1, GLenum _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FragmentLightfSGIX, ( , GLenum _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FragmentLightfvSGIX, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FragmentLightiSGIX, ( , GLenum _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FragmentLightivSGIX, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FragmentLightModelfSGIX, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FragmentLightModelfvSGIX, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FragmentLightModeliSGIX, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FragmentLightModelivSGIX, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FragmentMaterialfSGIX, ( , GLenum _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FragmentMaterialfvSGIX, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FragmentMaterialiSGIX, ( , GLenum _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( FragmentMaterialivSGIX, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFragmentLightfvSGIX, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFragmentLightivSGIX, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFragmentMaterialfvSGIX, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetFragmentMaterialivSGIX, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LightEnviSGIX, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIX_framezoom */ \
    FG4CPP_GL_FUNCTION_VOID( FrameZoomSGIX, ( , GLint _1 ), ( , _1 ) ) \
\
    /* GL_SGIX_igloo_interface */ \
    FG4CPP_GL_FUNCTION_VOID( IglooInterfaceSGIX, ( , GLenum _1, const GLvoid * _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIX_instruments */ \
    FG4CPP_GL_FUNCTION_NUM( GetInstrumentsSGIX, GLint, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( InstrumentsBufferSGIX, ( , GLsizei _1, GLint * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_NUM( PollInstrumentsSGIX, GLint, ( , GLint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReadInstrumentsSGIX, ( , GLint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( StartInstrumentsSGIX, (), () ) \
    FG4CPP_GL_FUNCTION_VOID( StopInstrumentsSGIX, ( , GLint _1 ), ( , _1 ) ) \
\
    /* GL_SGIX_interlace */ \
\
    /* GL_SGIX_ir_instrument1 */ \
\
    /* GL_SGIX_list_priority */ \
    FG4CPP_GL_FUNCTION_VOID( GetListParameterfvSGIX, ( , GLuint _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetListParameterivSGIX, ( , GLuint _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ListParameterfSGIX, ( , GLuint _1, GLenum _2, GLfloat _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ListParameterfvSGIX, ( , GLuint _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ListParameteriSGIX, ( , GLuint _1, GLenum _2, GLint _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ListParameterivSGIX, ( , GLuint _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_SGIX_pixel_texture */ \
    FG4CPP_GL_FUNCTION_VOID( PixelTexGenSGIX, ( , GLenum _1 ), ( , _1 ) ) \
\
    /* GL_SGIX_pixel_tiles */ \
\
    /* GL_SGIX_polynomial_ffd */ \
    FG4CPP_GL_FUNCTION_VOID( DeformationMap3dSGIX, ( , GLenum _1, GLdouble _2, GLdouble _3, GLint _4, GLint _5, GLdouble _6, GLdouble _7, GLint _8, GLint _9, GLdouble _10, GLdouble _11, GLint _12, GLint _13, const GLdouble * _14 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeformationMap3fSGIX, ( , GLenum _1, GLfloat _2, GLfloat _3, GLint _4, GLint _5, GLfloat _6, GLfloat _7, GLint _8, GLint _9, GLfloat _10, GLfloat _11, GLint _12, GLint _13, const GLfloat * _14 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 ) ) \
    FG4CPP_GL_FUNCTION_VOID( DeformSGIX, ( , GLbitfield _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( LoadIdentityDeformationMapSGIX, ( , GLbitfield _1 ), ( , _1 ) ) \
\
    /* GL_SGIX_reference_plane */ \
    FG4CPP_GL_FUNCTION_VOID( ReferencePlaneSGIX, ( , const GLdouble * _1 ), ( , _1 ) ) \
\
    /* GL_SGIX_resample */ \
\
    /* GL_SGIX_scalebias_hint */ \
\
    /* GL_SGIX_shadow */ \
\
    /* GL_SGIX_shadow_ambient */ \
\
    /* GL_SGIX_sprite */ \
    FG4CPP_GL_FUNCTION_VOID( SpriteParameterfSGIX, ( , GLenum _1, GLfloat _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SpriteParameterfvSGIX, ( , GLenum _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SpriteParameteriSGIX, ( , GLenum _1, GLint _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( SpriteParameterivSGIX, ( , GLenum _1, const GLint * _2 ), ( , _1, _2 ) ) \
\
    /* GL_SGIX_subsample */ \
\
    /* GL_SGIX_tag_sample_buffer */ \
    FG4CPP_GL_FUNCTION_VOID( TagSampleBufferSGIX, (), () ) \
\
    /* GL_SGIX_texture_add_env */ \
\
    /* GL_SGIX_texture_coordinate_clamp */ \
\
    /* GL_SGIX_texture_lod_bias */ \
\
    /* GL_SGIX_texture_multi_buffer */ \
\
    /* GL_SGIX_texture_scale_bias */ \
\
    /* GL_SGIX_vertex_preclip */ \
\
    /* GL_SGIX_ycrcb */ \
\
    /* GL_SGIX_ycrcb_subsample */ \
\
    /* GL_SGIX_ycrcba */ \
\
    /* GL_SGI_color_matrix */ \
\
    /* GL_SGI_color_table */ \
    FG4CPP_GL_FUNCTION_VOID( ColorTableSGI, ( , GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorTableParameterfvSGI, ( , GLenum _1, GLenum _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ColorTableParameterivSGI, ( , GLenum _1, GLenum _2, const GLint * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( CopyColorTableSGI, ( , GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetColorTableSGI, ( , GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetColorTableParameterfvSGI, ( , GLenum _1, GLenum _2, GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GetColorTableParameterivSGI, ( , GLenum _1, GLenum _2, GLint * _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_SGI_texture_color_table */ \
\
    /* GL_SUNX_constant_data */ \
    FG4CPP_GL_FUNCTION_VOID( FinishTextureSUNX, (), () ) \
\
    /* GL_SUN_convolution_border_modes */ \
\
    /* GL_SUN_global_alpha */ \
    FG4CPP_GL_FUNCTION_VOID( GlobalAlphaFactorbSUN, ( , GLbyte _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GlobalAlphaFactorsSUN, ( , GLshort _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GlobalAlphaFactoriSUN, ( , GLint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GlobalAlphaFactorfSUN, ( , GLfloat _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GlobalAlphaFactordSUN, ( , GLdouble _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GlobalAlphaFactorubSUN, ( , GLubyte _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GlobalAlphaFactorusSUN, ( , GLushort _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( GlobalAlphaFactoruiSUN, ( , GLuint _1 ), ( , _1 ) ) \
\
    /* GL_SUN_mesh_array */ \
    FG4CPP_GL_FUNCTION_VOID( DrawMeshArraysSUN, ( , GLenum _1, GLint _2, GLsizei _3, GLsizei _4 ), ( , _1, _2, _3, _4 ) ) \
\
    /* GL_SUN_slice_accum */ \
\
    /* GL_SUN_triangle_list */ \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiSUN, ( , GLuint _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeusSUN, ( , GLushort _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeubSUN, ( , GLubyte _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuivSUN, ( , const GLuint * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeusvSUN, ( , const GLushort * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeubvSUN, ( , const GLubyte * _1 ), ( , _1 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodePointerSUN, ( , GLenum _1, GLsizei _2, const GLvoid ** _3 ), ( , _1, _2, _3 ) ) \
\
    /* GL_SUN_vertex */ \
    FG4CPP_GL_FUNCTION_VOID( Color4ubVertex2fSUN, ( , GLubyte _1, GLubyte _2, GLubyte _3, GLubyte _4, GLfloat _5, GLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4ubVertex2fvSUN, ( , const GLubyte * _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4ubVertex3fSUN, ( , GLubyte _1, GLubyte _2, GLubyte _3, GLubyte _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4ubVertex3fvSUN, ( , const GLubyte * _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3fVertex3fSUN, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color3fVertex3fvSUN, ( , const GLfloat * _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3fVertex3fSUN, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Normal3fVertex3fvSUN, ( , const GLfloat * _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4fNormal3fVertex3fSUN, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FG4CPP_GL_FUNCTION_VOID( Color4fNormal3fVertex3fvSUN, ( , const GLfloat * _1, const GLfloat * _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2fVertex3fSUN, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( , _1, _2, _3, _4, _5 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2fVertex3fvSUN, ( , const GLfloat * _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4fVertex4fSUN, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4fVertex4fvSUN, ( , const GLfloat * _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2fColor4ubVertex3fSUN, ( , GLfloat _1, GLfloat _2, GLubyte _3, GLubyte _4, GLubyte _5, GLubyte _6, GLfloat _7, GLfloat _8, GLfloat _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2fColor4ubVertex3fvSUN, ( , const GLfloat * _1, const GLubyte * _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2fColor3fVertex3fSUN, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2fColor3fVertex3fvSUN, ( , const GLfloat * _1, const GLfloat * _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2fNormal3fVertex3fSUN, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2fNormal3fVertex3fvSUN, ( , const GLfloat * _1, const GLfloat * _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2fColor4fNormal3fVertex3fSUN, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11, GLfloat _12 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord2fColor4fNormal3fVertex3fvSUN, ( , const GLfloat * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4fColor4fNormal3fVertex4fSUN, ( , GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11, GLfloat _12, GLfloat _13, GLfloat _14, GLfloat _15 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 ) ) \
    FG4CPP_GL_FUNCTION_VOID( TexCoord4fColor4fNormal3fVertex4fvSUN, ( , const GLfloat * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiVertex3fSUN, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiVertex3fvSUN, ( , const GLuint * _1, const GLfloat * _2 ), ( , _1, _2 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiColor4ubVertex3fSUN, ( , GLuint _1, GLubyte _2, GLubyte _3, GLubyte _4, GLubyte _5, GLfloat _6, GLfloat _7, GLfloat _8 ), ( , _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiColor4ubVertex3fvSUN, ( , const GLuint * _1, const GLubyte * _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiColor3fVertex3fSUN, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiColor3fVertex3fvSUN, ( , const GLuint * _1, const GLfloat * _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiNormal3fVertex3fSUN, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( , _1, _2, _3, _4, _5, _6, _7 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiNormal3fVertex3fvSUN, ( , const GLuint * _1, const GLfloat * _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiColor4fNormal3fVertex3fSUN, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiColor4fNormal3fVertex3fvSUN, ( , const GLuint * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fVertex3fSUN, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( , _1, _2, _3, _4, _5, _6 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fVertex3fvSUN, ( , const GLuint * _1, const GLfloat * _2, const GLfloat * _3 ), ( , _1, _2, _3 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, ( , const GLuint * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4 ), ( , _1, _2, _3, _4 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, ( , GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11, GLfloat _12, GLfloat _13 ), ( , _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
    FG4CPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, ( , const GLuint * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4, const GLfloat * _5 ), ( , _1, _2, _3, _4, _5 ) ) \
\
    /* GL_WIN_phong_shading */ \
\
    /* GL_WIN_specular_fog */ \

#endif  // FG4CPP_DEF_GL_FUNCTIONS_H
