#ifndef FG4CPP_GL_FUNCTIONS_H
#define FG4CPP_GL_FUNCTIONS_H

#include "fg/gl/functions.h"
#include "fg4cpp/gl/types.h"

#define FG4CPP_GL_FUNCTIONS \
    /* GL_VERSION_1_0 */ \
    FG4CPP_GL_FUNCTION( 0, GLenum, GetError, (), () ) \
    FG4CPP_GL_VOID_FUNCTION( Begin, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( End, (), () ) \
    FG4CPP_GL_VOID_FUNCTION( EdgeFlag, ( GLboolean _1 ), ( FG4CPP_GL_ARG( FgGLboolean, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EdgeFlagv, ( const GLboolean * _1 ), ( FG4CPP_GL_ARG( const FgGLboolean *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex2s, ( GLshort _1, GLshort _2 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex2i, ( GLint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex2f, ( GLfloat _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex2d, ( GLdouble _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3i, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4s, ( GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4i, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4f, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4d, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex2sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex2iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex2fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex2dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1s, ( GLshort _1 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1i, ( GLint _1 ), ( FG4CPP_GL_ARG( FgGLint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1f, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1d, ( GLdouble _1 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2s, ( GLshort _1, GLshort _2 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2i, ( GLint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2f, ( GLfloat _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2d, ( GLdouble _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3i, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4s, ( GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4i, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4f, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4d, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3b, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3i, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3bv, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3b, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3i, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3ub, ( GLubyte _1, GLubyte _2, GLubyte _3 ), ( FG4CPP_GL_ARG( FgGLubyte, _1 ), FG4CPP_GL_ARG( FgGLubyte, _2 ), FG4CPP_GL_ARG( FgGLubyte, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3us, ( GLushort _1, GLushort _2, GLushort _3 ), ( FG4CPP_GL_ARG( FgGLushort, _1 ), FG4CPP_GL_ARG( FgGLushort, _2 ), FG4CPP_GL_ARG( FgGLushort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3ui, ( GLuint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4b, ( GLbyte _1, GLbyte _2, GLbyte _3, GLbyte _4 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ), FG4CPP_GL_ARG( FgGLbyte, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4s, ( GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4i, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4f, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4d, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4ub, ( GLubyte _1, GLubyte _2, GLubyte _3, GLubyte _4 ), ( FG4CPP_GL_ARG( FgGLubyte, _1 ), FG4CPP_GL_ARG( FgGLubyte, _2 ), FG4CPP_GL_ARG( FgGLubyte, _3 ), FG4CPP_GL_ARG( FgGLubyte, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4us, ( GLushort _1, GLushort _2, GLushort _3, GLushort _4 ), ( FG4CPP_GL_ARG( FgGLushort, _1 ), FG4CPP_GL_ARG( FgGLushort, _2 ), FG4CPP_GL_ARG( FgGLushort, _3 ), FG4CPP_GL_ARG( FgGLushort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4ui, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3bv, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3ubv, ( const GLubyte * _1 ), ( FG4CPP_GL_ARG( const FgGLubyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3usv, ( const GLushort * _1 ), ( FG4CPP_GL_ARG( const FgGLushort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3uiv, ( const GLuint * _1 ), ( FG4CPP_GL_ARG( const FgGLuint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4bv, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4ubv, ( const GLubyte * _1 ), ( FG4CPP_GL_ARG( const FgGLubyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4usv, ( const GLushort * _1 ), ( FG4CPP_GL_ARG( const FgGLushort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4uiv, ( const GLuint * _1 ), ( FG4CPP_GL_ARG( const FgGLuint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Indexs, ( GLshort _1 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Indexi, ( GLint _1 ), ( FG4CPP_GL_ARG( FgGLint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Indexf, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Indexd, ( GLdouble _1 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Indexsv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Indexiv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Indexfv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Indexdv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Rects, ( GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Recti, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Rectf, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Rectd, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Rectsv, ( const GLshort * _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Rectiv, ( const GLint * _1, const GLint * _2 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Rectfv, ( const GLfloat * _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Rectdv, ( const GLdouble * _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DepthRange, ( GLclampd _1, GLclampd _2 ), ( FG4CPP_GL_ARG( FgGLclampd, _1 ), FG4CPP_GL_ARG( FgGLclampd, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Viewport, ( GLint _1, GLint _2, GLsizei _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixMode, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LoadMatrixf, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LoadMatrixd, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultMatrixf, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultMatrixd, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LoadIdentity, (), () ) \
    FG4CPP_GL_VOID_FUNCTION( Rotatef, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Rotated, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Translatef, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Translated, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Scalef, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Scaled, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Frustum, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Ortho, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PushMatrix, (), () ) \
    FG4CPP_GL_VOID_FUNCTION( PopMatrix, (), () ) \
    FG4CPP_GL_VOID_FUNCTION( Enable, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Disable, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexGeni, ( GLenum _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexGenf, ( GLenum _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexGend, ( GLenum _1, GLenum _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexGeniv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexGenfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexGendv, ( GLenum _1, GLenum _2, const GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClipPlane, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos2s, ( GLshort _1, GLshort _2 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos2i, ( GLint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos2f, ( GLfloat _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos2d, ( GLdouble _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos2sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos2iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos2fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos2dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos3i, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos3sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos3iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos3fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos3dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos4s, ( GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos4i, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos4f, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos4d, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos4sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos4iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos4fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos4dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FrontFace, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Materiali, ( GLenum _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Materialf, ( GLenum _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Materialiv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Materialfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Lighti, ( GLenum _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Lightf, ( GLenum _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Lightiv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Lightfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LightModeli, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LightModelf, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LightModeliv, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LightModelfv, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorMaterial, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ShadeModel, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PointSize, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LineWidth, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LineStipple, ( GLint _1, GLushort _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLushort, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CullFace, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PolygonStipple, ( const GLubyte * _1 ), ( FG4CPP_GL_ARG( const FgGLubyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PolygonMode, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelStorei, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelStoref, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelTransferi, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelTransferf, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelMapuiv, ( GLenum _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelMapusv, ( GLenum _1, GLsizei _2, const GLushort * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLushort *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelMapfv, ( GLenum _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawPixels, ( GLsizei _1, GLsizei _2, GLenum _3, GLenum _4, const GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( const FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelZoom, ( GLfloat _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Bitmap, ( GLsizei _1, GLsizei _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, const GLubyte * _7 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( const FgGLubyte *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexImage1D, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLint _5, GLenum _6, GLenum _7, const GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( const FgGLvoid *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexImage2D, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLsizei _5, GLint _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( const FgGLvoid *, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexParameteri, ( GLenum _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexParameterf, ( GLenum _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexParameteriv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexParameterfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexEnvi, ( GLenum _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexEnvf, ( GLenum _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexEnviv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexEnvfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Fogi, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Fogf, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Fogiv, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Fogfv, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Scissor, ( GLint _1, GLint _2, GLsizei _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( AlphaFunc, ( GLenum _1, GLclampf _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLclampf, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( StencilFunc, ( GLenum _1, GLint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( StencilOp, ( GLenum _1, GLenum _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DepthFunc, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendFunc, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LogicOp, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawBuffer, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( IndexMask, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorMask, ( GLboolean _1, GLboolean _2, GLboolean _3, GLboolean _4 ), ( FG4CPP_GL_ARG( FgGLboolean, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DepthMask, ( GLboolean _1 ), ( FG4CPP_GL_ARG( FgGLboolean, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( StencilMask, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Clear, ( GLbitfield _1 ), ( FG4CPP_GL_ARG( FgGLbitfield, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearColor, ( GLclampf _1, GLclampf _2, GLclampf _3, GLclampf _4 ), ( FG4CPP_GL_ARG( FgGLclampf, _1 ), FG4CPP_GL_ARG( FgGLclampf, _2 ), FG4CPP_GL_ARG( FgGLclampf, _3 ), FG4CPP_GL_ARG( FgGLclampf, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearIndex, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearDepth, ( GLclampd _1 ), ( FG4CPP_GL_ARG( FgGLclampd, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearStencil, ( GLint _1 ), ( FG4CPP_GL_ARG( FgGLint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearAccum, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Accum, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReadPixels, ( GLint _1, GLint _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, GLvoid * _7 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( FgGLvoid *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReadBuffer, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyPixels, ( GLint _1, GLint _2, GLsizei _3, GLsizei _4, GLenum _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Map1f, ( GLenum _1, GLfloat _2, GLfloat _3, GLint _4, GLint _5, const GLfloat * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( const FgGLfloat *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Map1d, ( GLenum _1, GLdouble _2, GLdouble _3, GLint _4, GLint _5, const GLdouble * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( const FgGLdouble *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Map2f, ( GLenum _1, GLfloat _2, GLfloat _3, GLint _4, GLint _5, GLfloat _6, GLfloat _7, GLint _8, GLint _9, const GLfloat * _10 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLint, _9 ), FG4CPP_GL_ARG( const FgGLfloat *, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Map2d, ( GLenum _1, GLdouble _2, GLdouble _3, GLint _4, GLint _5, GLdouble _6, GLdouble _7, GLint _8, GLint _9, const GLdouble * _10 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ), FG4CPP_GL_ARG( FgGLdouble, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLint, _9 ), FG4CPP_GL_ARG( const FgGLdouble *, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalCoord1f, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalCoord1d, ( GLdouble _1 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalCoord2f, ( GLfloat _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalCoord2d, ( GLdouble _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalCoord1fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalCoord1dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalCoord2fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalCoord2dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MapGrid1f, ( GLint _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MapGrid1d, ( GLint _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MapGrid2f, ( GLint _1, GLfloat _2, GLfloat _3, GLint _4, GLfloat _5, GLfloat _6 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MapGrid2d, ( GLint _1, GLdouble _2, GLdouble _3, GLint _4, GLdouble _5, GLdouble _6 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalMesh1, ( GLenum _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalMesh2, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalPoint1, ( GLint _1 ), ( FG4CPP_GL_ARG( FgGLint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalPoint2, ( GLint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( InitNames, (), () ) \
    FG4CPP_GL_VOID_FUNCTION( PopName, (), () ) \
    FG4CPP_GL_VOID_FUNCTION( PushName, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LoadName, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, RenderMode, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SelectBuffer, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FeedbackBuffer, ( GLsizei _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PassThrough, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NewList, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndList, (), () ) \
    FG4CPP_GL_VOID_FUNCTION( CallList, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CallLists, ( GLsizei _1, GLenum _2, const GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ListBase, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, GenLists, ( GLsizei _1 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsList, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteLists, ( GLuint _1, GLsizei _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Flush, (), () ) \
    FG4CPP_GL_VOID_FUNCTION( Finish, (), () ) \
    FG4CPP_GL_VOID_FUNCTION( Hint, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetBooleanv, ( GLenum _1, GLboolean * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLboolean *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetIntegerv, ( GLenum _1, GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFloatv, ( GLenum _1, GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetDoublev, ( GLenum _1, GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsEnabled, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetClipPlane, ( GLenum _1, GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetLightiv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetLightfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMaterialiv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMaterialfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexEnviv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexEnvfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexGeniv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexGenfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexParameterfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexLevelParameteriv, ( GLenum _1, GLint _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexLevelParameterfv, ( GLenum _1, GLint _2, GLenum _3, GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPixelMapuiv, ( GLenum _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPixelMapusv, ( GLenum _1, GLushort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLushort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPixelMapfv, ( GLenum _1, GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMapiv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMapfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMapdv, ( GLenum _1, GLenum _2, GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexImage, ( GLenum _1, GLint _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPolygonStipple, ( GLubyte * _1 ), ( FG4CPP_GL_ARG( FgGLubyte *, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( nullptr, const GLubyte *, GetString, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PushAttrib, ( GLbitfield _1 ), ( FG4CPP_GL_ARG( FgGLbitfield, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PopAttrib, (), () ) \
\
    /* GL_VERSION_1_1 */ \
    FG4CPP_GL_VOID_FUNCTION( Indexub, ( GLubyte _1 ), ( FG4CPP_GL_ARG( FgGLubyte, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Indexubv, ( const GLubyte * _1 ), ( FG4CPP_GL_ARG( const FgGLubyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EdgeFlagPointer, ( GLsizei _1, const GLvoid * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLvoid *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoordPointer, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorPointer, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( IndexPointer, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalPointer, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexPointer, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EnableClientState, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DisableClientState, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ArrayElement, ( GLint _1 ), ( FG4CPP_GL_ARG( FgGLint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawArrays, ( GLenum _1, GLint _2, GLsizei _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawElements, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( InterleavedArrays, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PolygonOffset, ( GLfloat _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTexImage1D, ( GLenum _1, GLint _2, GLenum _3, GLint _4, GLint _5, GLsizei _6, GLint _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTexImage2D, ( GLenum _1, GLint _2, GLenum _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLint _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexSubImage1D, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( const FgGLvoid *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexSubImage2D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( const FgGLvoid *, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTexSubImage1D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTexSubImage2D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindTexture, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteTextures, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenTextures, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, AreTexturesResident, ( GLsizei _1, const GLuint * _2, GLboolean * _3 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ), FG4CPP_GL_ARG( FgGLboolean *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PrioritizeTextures, ( GLsizei _1, const GLuint * _2, const GLclampf * _3 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ), FG4CPP_GL_ARG( const FgGLclampf *, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsTexture, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPointerv, ( GLenum _1, GLvoid ** _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLvoid **, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PushClientAttrib, ( GLbitfield _1 ), ( FG4CPP_GL_ARG( FgGLbitfield, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PopClientAttrib, (), () ) \
\
    /* GL_VERSION_1_2 */ \
    FG4CPP_GL_VOID_FUNCTION( DrawRangeElements, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4, GLenum _5, const GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( const FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexImage3D, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLsizei _5, GLsizei _6, GLint _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( const FgGLvoid *, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexSubImage3D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( FgGLenum, _10 ), FG4CPP_GL_ARG( const FgGLvoid *, _11 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTexSubImage3D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLsizei _8, GLsizei _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ) ) ) \
\
    /* GL_VERSION_1_3 */ \
    FG4CPP_GL_VOID_FUNCTION( ActiveTexture, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SampleCoverage, ( GLfloat _1, GLboolean _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTexImage3D, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLint _7, GLsizei _8, const GLvoid * _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( const FgGLvoid *, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTexImage2D, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLint _6, GLsizei _7, const GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( const FgGLvoid *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTexImage1D, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLint _5, GLsizei _6, const GLvoid * _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( const FgGLvoid *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTexSubImage3D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLsizei _10, const GLvoid * _11 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( FgGLsizei, _10 ), FG4CPP_GL_ARG( const FgGLvoid *, _11 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTexSubImage2D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLenum _7, GLsizei _8, const GLvoid * _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( const FgGLvoid *, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTexSubImage1D, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLenum _5, GLsizei _6, const GLvoid * _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( const FgGLvoid *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetCompressedTexImage, ( GLenum _1, GLint _2, GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLvoid *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClientActiveTexture, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1d, ( GLenum _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1dv, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1f, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1fv, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1i, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1iv, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1s, ( GLenum _1, GLshort _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1sv, ( GLenum _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2d, ( GLenum _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2dv, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2f, ( GLenum _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2fv, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2i, ( GLenum _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2iv, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2s, ( GLenum _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2sv, ( GLenum _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3d, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3dv, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3f, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3fv, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3i, ( GLenum _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3iv, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3s, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3sv, ( GLenum _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4d, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4dv, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4f, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4fv, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4i, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4iv, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4s, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ), FG4CPP_GL_ARG( FgGLshort, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4sv, ( GLenum _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LoadTransposeMatrixf, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LoadTransposeMatrixd, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultTransposeMatrixf, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultTransposeMatrixd, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
\
    /* GL_VERSION_1_4 */ \
    FG4CPP_GL_VOID_FUNCTION( BlendFuncSeparate, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawArrays, ( GLenum _1, const GLint * _2, const GLsizei * _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ), FG4CPP_GL_ARG( const FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawElements, ( GLenum _1, const GLsizei * _2, GLenum _3, const GLvoid *const* _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLsizei *, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *const*, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PointParameterf, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PointParameterfv, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PointParameteri, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PointParameteriv, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogCoordf, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogCoordfv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogCoordd, ( GLdouble _1 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogCoorddv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogCoordPointer, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3b, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3bv, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3i, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3ub, ( GLubyte _1, GLubyte _2, GLubyte _3 ), ( FG4CPP_GL_ARG( FgGLubyte, _1 ), FG4CPP_GL_ARG( FgGLubyte, _2 ), FG4CPP_GL_ARG( FgGLubyte, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3ubv, ( const GLubyte * _1 ), ( FG4CPP_GL_ARG( const FgGLubyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3ui, ( GLuint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3uiv, ( const GLuint * _1 ), ( FG4CPP_GL_ARG( const FgGLuint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3us, ( GLushort _1, GLushort _2, GLushort _3 ), ( FG4CPP_GL_ARG( FgGLushort, _1 ), FG4CPP_GL_ARG( FgGLushort, _2 ), FG4CPP_GL_ARG( FgGLushort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3usv, ( const GLushort * _1 ), ( FG4CPP_GL_ARG( const FgGLushort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColorPointer, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2d, ( GLdouble _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2f, ( GLfloat _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2i, ( GLint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2s, ( GLshort _1, GLshort _2 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3dv, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3fv, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3i, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3iv, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3sv, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendColor, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendEquation, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
\
    /* GL_VERSION_1_5 */ \
    FG4CPP_GL_VOID_FUNCTION( GenQueries, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteQueries, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsQuery, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BeginQuery, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndQuery, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetQueryiv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetQueryObjectiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetQueryObjectuiv, ( GLuint _1, GLenum _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindBuffer, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteBuffers, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenBuffers, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsBuffer, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BufferData, ( GLenum _1, GLsizeiptr _2, const GLvoid * _3, GLenum _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizeiptr, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BufferSubData, ( GLenum _1, GLintptr _2, GLsizeiptr _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLintptr, _2 ), FG4CPP_GL_ARG( FgGLsizeiptr, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetBufferSubData, ( GLenum _1, GLintptr _2, GLsizeiptr _3, GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLintptr, _2 ), FG4CPP_GL_ARG( FgGLsizeiptr, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( nullptr, void *, MapBuffer, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, UnmapBuffer, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetBufferParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetBufferPointerv, ( GLenum _1, GLenum _2, GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLvoid **, _3 ) ) ) \
\
    /* GL_VERSION_2_0 */ \
    FG4CPP_GL_VOID_FUNCTION( BlendEquationSeparate, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawBuffers, ( GLsizei _1, const GLenum * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLenum *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( StencilOpSeparate, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( StencilFuncSeparate, ( GLenum _1, GLenum _2, GLint _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( StencilMaskSeparate, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( AttachShader, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindAttribLocation, ( GLuint _1, GLuint _2, const GLchar * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLchar *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompileShader, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, CreateProgram, ( ), ( ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, CreateShader, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteProgram, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteShader, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DetachShader, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DisableVertexAttribArray, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EnableVertexAttribArray, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetActiveAttrib, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLint * _5, GLenum * _6, GLchar * _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei *, _4 ), FG4CPP_GL_ARG( FgGLint *, _5 ), FG4CPP_GL_ARG( FgGLenum *, _6 ), FG4CPP_GL_ARG( FgGLchar *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetActiveUniform, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLint * _5, GLenum * _6, GLchar * _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei *, _4 ), FG4CPP_GL_ARG( FgGLint *, _5 ), FG4CPP_GL_ARG( FgGLenum *, _6 ), FG4CPP_GL_ARG( FgGLchar *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetAttachedShaders, ( GLuint _1, GLsizei _2, GLsizei * _3, GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, GetAttribLocation, ( GLuint _1, const GLchar * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLchar *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramInfoLog, ( GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLchar *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetShaderiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetShaderInfoLog, ( GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLchar *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetShaderSource, ( GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLchar *, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, GetUniformLocation, ( GLuint _1, const GLchar * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLchar *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetUniformfv, ( GLuint _1, GLint _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetUniformiv, ( GLuint _1, GLint _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribdv, ( GLuint _1, GLenum _2, GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribfv, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribPointerv, ( GLuint _1, GLenum _2, GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLvoid **, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsProgram, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsShader, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LinkProgram, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ShaderSource, ( GLuint _1, GLsizei _2, const GLchar *const* _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLchar *const*, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UseProgram, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1f, ( GLint _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2f, ( GLint _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3f, ( GLint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4f, ( GLint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1i, ( GLint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2i, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3i, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4i, ( GLint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1fv, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2fv, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3fv, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4fv, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1iv, ( GLint _1, GLsizei _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2iv, ( GLint _1, GLsizei _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3iv, ( GLint _1, GLsizei _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4iv, ( GLint _1, GLsizei _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix2fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix3fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix4fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ValidateProgram, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1d, ( GLuint _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1dv, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1f, ( GLuint _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1fv, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1s, ( GLuint _1, GLshort _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1sv, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2d, ( GLuint _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2dv, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2f, ( GLuint _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2fv, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2s, ( GLuint _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2sv, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3d, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3dv, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3f, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3fv, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3s, ( GLuint _1, GLshort _2, GLshort _3, GLshort _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3sv, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4Nbv, ( GLuint _1, const GLbyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLbyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4Niv, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4Nsv, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4Nub, ( GLuint _1, GLubyte _2, GLubyte _3, GLubyte _4, GLubyte _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLubyte, _2 ), FG4CPP_GL_ARG( FgGLubyte, _3 ), FG4CPP_GL_ARG( FgGLubyte, _4 ), FG4CPP_GL_ARG( FgGLubyte, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4Nubv, ( GLuint _1, const GLubyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLubyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4Nuiv, ( GLuint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4Nusv, ( GLuint _1, const GLushort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLushort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4bv, ( GLuint _1, const GLbyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLbyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4d, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4dv, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4f, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4fv, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4iv, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4s, ( GLuint _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ), FG4CPP_GL_ARG( FgGLshort, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4sv, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4ubv, ( GLuint _1, const GLubyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLubyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4uiv, ( GLuint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4usv, ( GLuint _1, const GLushort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLushort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribPointer, ( GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLsizei _5, const GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( const FgGLvoid *, _6 ) ) ) \
\
    /* GL_VERSION_2_1 */ \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix2x3fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix3x2fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix2x4fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix4x2fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix3x4fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix4x3fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
\
    /* GL_VERSION_3_0 */ \
    FG4CPP_GL_VOID_FUNCTION( ColorMaski, ( GLuint _1, GLboolean _2, GLboolean _3, GLboolean _4, GLboolean _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( FgGLboolean, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetBooleani_v, ( GLenum _1, GLuint _2, GLboolean * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLboolean *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetIntegeri_v, ( GLenum _1, GLuint _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Enablei, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Disablei, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsEnabledi, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BeginTransformFeedback, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndTransformFeedback, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindBufferRange, ( GLenum _1, GLuint _2, GLuint _3, GLintptr _4, GLsizeiptr _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLintptr, _4 ), FG4CPP_GL_ARG( FgGLsizeiptr, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindBufferBase, ( GLenum _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TransformFeedbackVaryings, ( GLuint _1, GLsizei _2, const GLchar *const* _3, GLenum _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLchar *const*, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTransformFeedbackVarying, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLsizei * _5, GLenum * _6, GLchar * _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei *, _4 ), FG4CPP_GL_ARG( FgGLsizei *, _5 ), FG4CPP_GL_ARG( FgGLenum *, _6 ), FG4CPP_GL_ARG( FgGLchar *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClampColor, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BeginConditionalRender, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndConditionalRender, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribIPointer, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribIiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribIuiv, ( GLuint _1, GLenum _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI1i, ( GLuint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI2i, ( GLuint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI3i, ( GLuint _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4i, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI1ui, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI2ui, ( GLuint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI3ui, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4ui, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI1iv, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI2iv, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI3iv, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4iv, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI1uiv, ( GLuint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI2uiv, ( GLuint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI3uiv, ( GLuint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4uiv, ( GLuint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4bv, ( GLuint _1, const GLbyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLbyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4sv, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4ubv, ( GLuint _1, const GLubyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLubyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4usv, ( GLuint _1, const GLushort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLushort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetUniformuiv, ( GLuint _1, GLint _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindFragDataLocation, ( GLuint _1, GLuint _2, const GLchar * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLchar *, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, GetFragDataLocation, ( GLuint _1, const GLchar * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLchar *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1ui, ( GLint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2ui, ( GLint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3ui, ( GLint _1, GLuint _2, GLuint _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4ui, ( GLint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1uiv, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2uiv, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3uiv, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4uiv, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexParameterIiv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexParameterIuiv, ( GLenum _1, GLenum _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexParameterIiv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexParameterIuiv, ( GLenum _1, GLenum _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearBufferiv, ( GLenum _1, GLint _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearBufferuiv, ( GLenum _1, GLint _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearBufferfv, ( GLenum _1, GLint _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearBufferfi, ( GLenum _1, GLint _2, GLfloat _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( nullptr, const GLubyte *, GetStringi, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsRenderbuffer, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindRenderbuffer, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteRenderbuffers, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenRenderbuffers, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RenderbufferStorage, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetRenderbufferParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsFramebuffer, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindFramebuffer, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteFramebuffers, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenFramebuffers, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLenum, CheckFramebufferStatus, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTexture1D, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTexture2D, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTexture3D, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5, GLint _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferRenderbuffer, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFramebufferAttachmentParameteriv, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenerateMipmap, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlitFramebuffer, ( GLint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLint _8, GLbitfield _9, GLenum _10 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLbitfield, _9 ), FG4CPP_GL_ARG( FgGLenum, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RenderbufferStorageMultisample, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTextureLayer, ( GLenum _1, GLenum _2, GLuint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_FUNCTION( nullptr, void *, MapBufferRange, ( GLenum _1, GLintptr _2, GLsizeiptr _3, GLbitfield _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLintptr, _2 ), FG4CPP_GL_ARG( FgGLsizeiptr, _3 ), FG4CPP_GL_ARG( FgGLbitfield, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FlushMappedBufferRange, ( GLenum _1, GLintptr _2, GLsizeiptr _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLintptr, _2 ), FG4CPP_GL_ARG( FgGLsizeiptr, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindVertexArray, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteVertexArrays, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenVertexArrays, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsVertexArray, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
\
    /* GL_VERSION_3_1 */ \
    FG4CPP_GL_VOID_FUNCTION( DrawArraysInstanced, ( GLenum _1, GLint _2, GLsizei _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawElementsInstanced, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexBuffer, ( GLenum _1, GLenum _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PrimitiveRestartIndex, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyBufferSubData, ( GLenum _1, GLenum _2, GLintptr _3, GLintptr _4, GLsizeiptr _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLintptr, _3 ), FG4CPP_GL_ARG( FgGLintptr, _4 ), FG4CPP_GL_ARG( FgGLsizeiptr, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetUniformIndices, ( GLuint _1, GLsizei _2, const GLchar *const* _3, GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLchar *const*, _3 ), FG4CPP_GL_ARG( FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetActiveUniformsiv, ( GLuint _1, GLsizei _2, const GLuint * _3, GLenum _4, GLint * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLint *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetActiveUniformName, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLchar * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei *, _4 ), FG4CPP_GL_ARG( FgGLchar *, _5 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, GetUniformBlockIndex, ( GLuint _1, const GLchar * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLchar *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetActiveUniformBlockiv, ( GLuint _1, GLuint _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetActiveUniformBlockName, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLchar * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei *, _4 ), FG4CPP_GL_ARG( FgGLchar *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformBlockBinding, ( GLuint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
\
    /* GL_VERSION_3_2 */ \
    FG4CPP_GL_VOID_FUNCTION( DrawElementsBaseVertex, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawRangeElementsBaseVertex, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4, GLenum _5, const GLvoid * _6, GLint _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( const FgGLvoid *, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawElementsInstancedBaseVertex, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLsizei _5, GLint _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawElementsBaseVertex, ( GLenum _1, const GLsizei * _2, GLenum _3, const GLvoid *const* _4, GLsizei _5, const GLint * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLsizei *, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *const*, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( const FgGLint *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProvokingVertex, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( nullptr, GLsync, FenceSync, ( GLenum _1, GLbitfield _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLbitfield, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsSync, ( GLsync _1 ), ( FG4CPP_GL_ARG( FgGLsync, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteSync, ( GLsync _1 ), ( FG4CPP_GL_ARG( FgGLsync, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLenum, ClientWaitSync, ( GLsync _1, GLbitfield _2, GLuint64 _3 ), ( FG4CPP_GL_ARG( FgGLsync, _1 ), FG4CPP_GL_ARG( FgGLbitfield, _2 ), FG4CPP_GL_ARG( FgGLuint64, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WaitSync, ( GLsync _1, GLbitfield _2, GLuint64 _3 ), ( FG4CPP_GL_ARG( FgGLsync, _1 ), FG4CPP_GL_ARG( FgGLbitfield, _2 ), FG4CPP_GL_ARG( FgGLuint64, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetInteger64v, ( GLenum _1, GLint64 * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint64 *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetSynciv, ( GLsync _1, GLenum _2, GLsizei _3, GLsizei * _4, GLint * _5 ), ( FG4CPP_GL_ARG( FgGLsync, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei *, _4 ), FG4CPP_GL_ARG( FgGLint *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetInteger64i_v, ( GLenum _1, GLuint _2, GLint64 * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint64 *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetBufferParameteri64v, ( GLenum _1, GLenum _2, GLint64 * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint64 *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTexture, ( GLenum _1, GLenum _2, GLuint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexImage2DMultisample, ( GLenum _1, GLsizei _2, GLint _3, GLsizei _4, GLsizei _5, GLboolean _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLboolean, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexImage3DMultisample, ( GLenum _1, GLsizei _2, GLint _3, GLsizei _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLboolean, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMultisamplefv, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SampleMaski, ( GLuint _1, GLbitfield _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLbitfield, _2 ) ) ) \
\
    /* GL_VERSION_3_3 */ \
    FG4CPP_GL_VOID_FUNCTION( BindFragDataLocationIndexed, ( GLuint _1, GLuint _2, GLuint _3, const GLchar * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( const FgGLchar *, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, GetFragDataIndex, ( GLuint _1, const GLchar * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLchar *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenSamplers, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteSamplers, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsSampler, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindSampler, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SamplerParameteri, ( GLuint _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SamplerParameteriv, ( GLuint _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SamplerParameterf, ( GLuint _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SamplerParameterfv, ( GLuint _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SamplerParameterIiv, ( GLuint _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SamplerParameterIuiv, ( GLuint _1, GLenum _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetSamplerParameteriv, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetSamplerParameterIiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetSamplerParameterfv, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetSamplerParameterIuiv, ( GLuint _1, GLenum _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( QueryCounter, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetQueryObjecti64v, ( GLuint _1, GLenum _2, GLint64 * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint64 *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetQueryObjectui64v, ( GLuint _1, GLenum _2, GLuint64 * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint64 *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribDivisor, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribP1ui, ( GLuint _1, GLenum _2, GLboolean _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribP1uiv, ( GLuint _1, GLenum _2, GLboolean _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribP2ui, ( GLuint _1, GLenum _2, GLboolean _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribP2uiv, ( GLuint _1, GLenum _2, GLboolean _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribP3ui, ( GLuint _1, GLenum _2, GLboolean _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribP3uiv, ( GLuint _1, GLenum _2, GLboolean _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribP4ui, ( GLuint _1, GLenum _2, GLboolean _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribP4uiv, ( GLuint _1, GLenum _2, GLboolean _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexP2ui, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexP2uiv, ( GLenum _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexP3ui, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexP3uiv, ( GLenum _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexP4ui, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexP4uiv, ( GLenum _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoordP1ui, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoordP1uiv, ( GLenum _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoordP2ui, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoordP2uiv, ( GLenum _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoordP3ui, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoordP3uiv, ( GLenum _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoordP4ui, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoordP4uiv, ( GLenum _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoordP1ui, ( GLenum _1, GLenum _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoordP1uiv, ( GLenum _1, GLenum _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoordP2ui, ( GLenum _1, GLenum _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoordP2uiv, ( GLenum _1, GLenum _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoordP3ui, ( GLenum _1, GLenum _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoordP3uiv, ( GLenum _1, GLenum _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoordP4ui, ( GLenum _1, GLenum _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoordP4uiv, ( GLenum _1, GLenum _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalP3ui, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalP3uiv, ( GLenum _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorP3ui, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorP3uiv, ( GLenum _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorP4ui, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorP4uiv, ( GLenum _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColorP3ui, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColorP3uiv, ( GLenum _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
\
    /* GL_VERSION_4_0 */ \
    FG4CPP_GL_VOID_FUNCTION( MinSampleShading, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendEquationi, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendEquationSeparatei, ( GLuint _1, GLenum _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendFunci, ( GLuint _1, GLenum _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendFuncSeparatei, ( GLuint _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawArraysIndirect, ( GLenum _1, const GLvoid * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLvoid *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawElementsIndirect, ( GLenum _1, GLenum _2, const GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1d, ( GLint _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2d, ( GLint _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3d, ( GLint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4d, ( GLint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1dv, ( GLint _1, GLsizei _2, const GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2dv, ( GLint _1, GLsizei _2, const GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3dv, ( GLint _1, GLsizei _2, const GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4dv, ( GLint _1, GLsizei _2, const GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix2dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix3dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix4dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix2x3dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix2x4dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix3x2dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix3x4dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix4x2dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix4x3dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetUniformdv, ( GLuint _1, GLint _2, GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, GetSubroutineUniformLocation, ( GLuint _1, GLenum _2, const GLchar * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLchar *, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, GetSubroutineIndex, ( GLuint _1, GLenum _2, const GLchar * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLchar *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetActiveSubroutineUniformiv, ( GLuint _1, GLenum _2, GLuint _3, GLenum _4, GLint * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLint *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetActiveSubroutineUniformName, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, GLsizei * _5, GLchar * _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei *, _5 ), FG4CPP_GL_ARG( FgGLchar *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetActiveSubroutineName, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, GLsizei * _5, GLchar * _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei *, _5 ), FG4CPP_GL_ARG( FgGLchar *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformSubroutinesuiv, ( GLenum _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetUniformSubroutineuiv, ( GLenum _1, GLint _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramStageiv, ( GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PatchParameteri, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PatchParameterfv, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindTransformFeedback, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteTransformFeedbacks, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenTransformFeedbacks, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsTransformFeedback, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PauseTransformFeedback, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( ResumeTransformFeedback, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawTransformFeedback, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawTransformFeedbackStream, ( GLenum _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BeginQueryIndexed, ( GLenum _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndQueryIndexed, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetQueryIndexediv, ( GLenum _1, GLuint _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
\
    /* GL_VERSION_4_1 */ \
    FG4CPP_GL_VOID_FUNCTION( ReleaseShaderCompiler, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( ShaderBinary, ( GLsizei _1, const GLuint * _2, GLenum _3, const GLvoid * _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetShaderPrecisionFormat, ( GLenum _1, GLenum _2, GLint * _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DepthRangef, ( GLfloat _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearDepthf, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramBinary, ( GLuint _1, GLsizei _2, GLsizei * _3, GLenum * _4, GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLenum *, _4 ), FG4CPP_GL_ARG( FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramBinary, ( GLuint _1, GLenum _2, const GLvoid * _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramParameteri, ( GLuint _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UseProgramStages, ( GLuint _1, GLbitfield _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLbitfield, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ActiveShaderProgram, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, CreateShaderProgramv, ( GLenum _1, GLsizei _2, const GLchar *const* _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLchar *const*, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindProgramPipeline, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteProgramPipelines, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenProgramPipelines, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsProgramPipeline, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramPipelineiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1i, ( GLuint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1iv, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1f, ( GLuint _1, GLint _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1fv, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1d, ( GLuint _1, GLint _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1dv, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1ui, ( GLuint _1, GLint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1uiv, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2i, ( GLuint _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2iv, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2f, ( GLuint _1, GLint _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2fv, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2d, ( GLuint _1, GLint _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2dv, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2ui, ( GLuint _1, GLint _2, GLuint _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2uiv, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3i, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3iv, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3f, ( GLuint _1, GLint _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3fv, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3d, ( GLuint _1, GLint _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3dv, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3ui, ( GLuint _1, GLint _2, GLuint _3, GLuint _4, GLuint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3uiv, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4i, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4iv, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4f, ( GLuint _1, GLint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4fv, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4d, ( GLuint _1, GLint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4dv, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4ui, ( GLuint _1, GLint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4uiv, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix2fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix3fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix4fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix2dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix3dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix4dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix2x3fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix3x2fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix2x4fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix4x2fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix3x4fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix4x3fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix2x3dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix3x2dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix2x4dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix4x2dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix3x4dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix4x3dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ValidateProgramPipeline, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramPipelineInfoLog, ( GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLchar *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL1d, ( GLuint _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL2d, ( GLuint _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL3d, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL4d, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL1dv, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL2dv, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL3dv, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL4dv, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribLPointer, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribLdv, ( GLuint _1, GLenum _2, GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ViewportArrayv, ( GLuint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ViewportIndexedf, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ViewportIndexedfv, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ScissorArrayv, ( GLuint _1, GLsizei _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ScissorIndexed, ( GLuint _1, GLint _2, GLint _3, GLsizei _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ScissorIndexedv, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DepthRangeArrayv, ( GLuint _1, GLsizei _2, const GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DepthRangeIndexed, ( GLuint _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFloati_v, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetDoublei_v, ( GLenum _1, GLuint _2, GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLdouble *, _3 ) ) ) \
\
    /* GL_VERSION_4_2 */ \
    FG4CPP_GL_VOID_FUNCTION( DrawArraysInstancedBaseInstance, ( GLenum _1, GLint _2, GLsizei _3, GLsizei _4, GLuint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawElementsInstancedBaseInstance, ( GLenum _1, GLsizei _2, GLenum _3, const void * _4, GLsizei _5, GLuint _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const void *, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawElementsInstancedBaseVertexBaseInstance, ( GLenum _1, GLsizei _2, GLenum _3, const void * _4, GLsizei _5, GLint _6, GLuint _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const void *, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLuint, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetInternalformativ, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLint * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLint *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetActiveAtomicCounterBufferiv, ( GLuint _1, GLuint _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindImageTexture, ( GLuint _1, GLuint _2, GLint _3, GLboolean _4, GLint _5, GLenum _6, GLenum _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MemoryBarrier, ( GLbitfield _1 ), ( FG4CPP_GL_ARG( FgGLbitfield, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexStorage1D, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexStorage2D, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexStorage3D, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawTransformFeedbackInstanced, ( GLenum _1, GLuint _2, GLsizei _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawTransformFeedbackStreamInstanced, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
\
    /* GL_VERSION_4_3 */ \
    FG4CPP_GL_VOID_FUNCTION( ClearBufferData, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4, const void * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( const void *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearBufferSubData, ( GLenum _1, GLenum _2, GLintptr _3, GLsizeiptr _4, GLenum _5, GLenum _6, const void * _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLintptr, _3 ), FG4CPP_GL_ARG( FgGLsizeiptr, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( const void *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DispatchCompute, ( GLuint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DispatchComputeIndirect, ( GLintptr _1 ), ( FG4CPP_GL_ARG( FgGLintptr, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyImageSubData, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLuint _7, GLenum _8, GLint _9, GLint _10, GLint _11, GLint _12, GLsizei _13, GLsizei _14, GLsizei _15 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLuint, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( FgGLint, _9 ), FG4CPP_GL_ARG( FgGLint, _10 ), FG4CPP_GL_ARG( FgGLint, _11 ), FG4CPP_GL_ARG( FgGLint, _12 ), FG4CPP_GL_ARG( FgGLsizei, _13 ), FG4CPP_GL_ARG( FgGLsizei, _14 ), FG4CPP_GL_ARG( FgGLsizei, _15 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferParameteri, ( GLenum _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFramebufferParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetInternalformati64v, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLint64 * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLint64 *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( InvalidateTexSubImage, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( InvalidateTexImage, ( GLuint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( InvalidateBufferSubData, ( GLuint _1, GLintptr _2, GLsizeiptr _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLintptr, _2 ), FG4CPP_GL_ARG( FgGLsizeiptr, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( InvalidateBufferData, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( InvalidateFramebuffer, ( GLenum _1, GLsizei _2, const GLenum * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLenum *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( InvalidateSubFramebuffer, ( GLenum _1, GLsizei _2, const GLenum * _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLenum *, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawArraysIndirect, ( GLenum _1, const void * _2, GLsizei _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const void *, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawElementsIndirect, ( GLenum _1, GLenum _2, const void * _3, GLsizei _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const void *, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramInterfaceiv, ( GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, GetProgramResourceIndex, ( GLuint _1, GLenum _2, const GLchar * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLchar *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramResourceName, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, GLsizei * _5, GLchar * _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei *, _5 ), FG4CPP_GL_ARG( FgGLchar *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramResourceiv, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, const GLenum * _5, GLsizei _6, GLsizei * _7, GLint * _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLenum *, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei *, _7 ), FG4CPP_GL_ARG( FgGLint *, _8 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, GetProgramResourceLocation, ( GLuint _1, GLenum _2, const GLchar * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLchar *, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, GetProgramResourceLocationIndex, ( GLuint _1, GLenum _2, const GLchar * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLchar *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ShaderStorageBlockBinding, ( GLuint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexBufferRange, ( GLenum _1, GLenum _2, GLuint _3, GLintptr _4, GLsizeiptr _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLintptr, _4 ), FG4CPP_GL_ARG( FgGLsizeiptr, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexStorage2DMultisample, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5, GLboolean _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLboolean, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexStorage3DMultisample, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLboolean, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureView, ( GLuint _1, GLenum _2, GLuint _3, GLenum _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ), FG4CPP_GL_ARG( FgGLuint, _7 ), FG4CPP_GL_ARG( FgGLuint, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindVertexBuffer, ( GLuint _1, GLuint _2, GLintptr _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLintptr, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribFormat, ( GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLuint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribIFormat, ( GLuint _1, GLint _2, GLenum _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribLFormat, ( GLuint _1, GLint _2, GLenum _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribBinding, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexBindingDivisor, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DebugMessageControl, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, const GLuint * _5, GLboolean _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLuint *, _5 ), FG4CPP_GL_ARG( FgGLboolean, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DebugMessageInsert, ( GLenum _1, GLenum _2, GLuint _3, GLenum _4, GLsizei _5, const GLchar * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( const FgGLchar *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DebugMessageCallback, ( GLDebugProc _1, const void * _2 ), ( FG4CPP_GL_ARG( FgGLDebugProc, _1 ), FG4CPP_GL_ARG( const void *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, GetDebugMessageLog, ( GLuint _1, GLsizei _2, GLenum * _3, GLenum * _4, GLuint * _5, GLenum * _6, GLsizei * _7, GLchar * _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum *, _3 ), FG4CPP_GL_ARG( FgGLenum *, _4 ), FG4CPP_GL_ARG( FgGLuint *, _5 ), FG4CPP_GL_ARG( FgGLenum *, _6 ), FG4CPP_GL_ARG( FgGLsizei *, _7 ), FG4CPP_GL_ARG( FgGLchar *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PushDebugGroup, ( GLenum _1, GLuint _2, GLsizei _3, const GLchar * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLchar *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PopDebugGroup, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( ObjectLabel, ( GLenum _1, GLuint _2, GLsizei _3, const GLchar * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLchar *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetObjectLabel, ( GLenum _1, GLuint _2, GLsizei _3, GLsizei * _4, GLchar * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei *, _4 ), FG4CPP_GL_ARG( FgGLchar *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ObjectPtrLabel, ( const void * _1, GLsizei _2, const GLchar * _3 ), ( FG4CPP_GL_ARG( const void *, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLchar *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetObjectPtrLabel, ( const void * _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( FG4CPP_GL_ARG( const void *, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLchar *, _4 ) ) ) \
\
    /* GL_VERSION_4_4 */ \
    FG4CPP_GL_VOID_FUNCTION( BufferStorage, ( GLenum _1, GLsizeiptr _2, const void * _3, GLbitfield _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizeiptr, _2 ), FG4CPP_GL_ARG( const void *, _3 ), FG4CPP_GL_ARG( FgGLbitfield, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearTexImage, ( GLuint _1, GLint _2, GLenum _3, GLenum _4, const void * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( const void *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearTexSubImage, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLenum _10, const void * _11 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( FgGLenum, _10 ), FG4CPP_GL_ARG( const void *, _11 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindBuffersBase, ( GLenum _1, GLuint _2, GLsizei _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindBuffersRange, ( GLenum _1, GLuint _2, GLsizei _3, const GLuint * _4, const GLintptr * _5, const GLsizeiptr * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ), FG4CPP_GL_ARG( const FgGLintptr *, _5 ), FG4CPP_GL_ARG( const FgGLsizeiptr *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindTextures, ( GLuint _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindSamplers, ( GLuint _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindImageTextures, ( GLuint _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindVertexBuffers, ( GLuint _1, GLsizei _2, const GLuint * _3, const GLintptr * _4, const GLsizei * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ), FG4CPP_GL_ARG( const FgGLintptr *, _4 ), FG4CPP_GL_ARG( const FgGLsizei *, _5 ) ) ) \
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
    FG4CPP_GL_FUNCTION( 0, GLuint64, GetTextureHandleARB, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint64, GetTextureSamplerHandleARB, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MakeTextureHandleResidentARB, ( GLuint64 _1 ), ( FG4CPP_GL_ARG( FgGLuint64, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MakeTextureHandleNonResidentARB, ( GLuint64 _1 ), ( FG4CPP_GL_ARG( FgGLuint64, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint64, GetImageHandleARB, ( GLuint _1, GLint _2, GLboolean _3, GLint _4, GLenum _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MakeImageHandleResidentARB, ( GLuint64 _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint64, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MakeImageHandleNonResidentARB, ( GLuint64 _1 ), ( FG4CPP_GL_ARG( FgGLuint64, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformHandleui64ARB, ( GLint _1, GLuint64 _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint64, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformHandleui64vARB, ( GLint _1, GLsizei _2, const GLuint64 * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint64 *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformHandleui64ARB, ( GLuint _1, GLint _2, GLuint64 _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint64, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformHandleui64vARB, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64 * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint64 *, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsTextureHandleResidentARB, ( GLuint64 _1 ), ( FG4CPP_GL_ARG( FgGLuint64, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsImageHandleResidentARB, ( GLuint64 _1 ), ( FG4CPP_GL_ARG( FgGLuint64, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL1ui64ARB, ( GLuint _1, GLuint64EXT _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint64EXT, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL1ui64vARB, ( GLuint _1, const GLuint64EXT * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribLui64vARB, ( GLuint _1, GLenum _2, GLuint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT *, _3 ) ) ) \
\
    /* GL_ARB_blend_func_extended */ \
\
    /* GL_ARB_buffer_storage */ \
\
    /* GL_ARB_cl_event */ \
    FG4CPP_GL_FUNCTION( nullptr, GLsync, CreateSyncFromCLeventARB, ( GLclcontext _1, GLclevent _2, GLbitfield _3 ), ( FG4CPP_GL_ARG( FgGLclcontext, _1 ), FG4CPP_GL_ARG( FgGLclevent, _2 ), FG4CPP_GL_ARG( FgGLbitfield, _3 ) ) ) \
\
    /* GL_ARB_clear_buffer_object */ \
\
    /* GL_ARB_clear_texture */ \
\
    /* GL_ARB_color_buffer_float */ \
    FG4CPP_GL_VOID_FUNCTION( ClampColorARB, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
\
    /* GL_ARB_compatibility */ \
\
    /* GL_ARB_compressed_texture_pixel_storage */ \
\
    /* GL_ARB_compute_shader */ \
\
    /* GL_ARB_compute_variable_group_size */ \
    FG4CPP_GL_VOID_FUNCTION( DispatchComputeGroupSizeARB, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ) ) ) \
\
    /* GL_ARB_conservative_depth */ \
\
    /* GL_ARB_copy_buffer */ \
\
    /* GL_ARB_copy_image */ \
\
    /* GL_ARB_debug_output */ \
    FG4CPP_GL_VOID_FUNCTION( DebugMessageControlARB, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, const GLuint * _5, GLboolean _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLuint *, _5 ), FG4CPP_GL_ARG( FgGLboolean, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DebugMessageInsertARB, ( GLenum _1, GLenum _2, GLuint _3, GLenum _4, GLsizei _5, const GLchar * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( const FgGLchar *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DebugMessageCallbackARB, ( GLDebugProcARB _1, const void * _2 ), ( FG4CPP_GL_ARG( FgGLDebugProcARB, _1 ), FG4CPP_GL_ARG( const void *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, GetDebugMessageLogARB, ( GLuint _1, GLsizei _2, GLenum * _3, GLenum * _4, GLuint * _5, GLenum * _6, GLsizei * _7, GLchar * _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum *, _3 ), FG4CPP_GL_ARG( FgGLenum *, _4 ), FG4CPP_GL_ARG( FgGLuint *, _5 ), FG4CPP_GL_ARG( FgGLenum *, _6 ), FG4CPP_GL_ARG( FgGLsizei *, _7 ), FG4CPP_GL_ARG( FgGLchar *, _8 ) ) ) \
\
    /* GL_ARB_depth_buffer_float */ \
\
    /* GL_ARB_depth_clamp */ \
\
    /* GL_ARB_depth_texture */ \
\
    /* GL_ARB_draw_buffers */ \
    FG4CPP_GL_VOID_FUNCTION( DrawBuffersARB, ( GLsizei _1, const GLenum * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLenum *, _2 ) ) ) \
\
    /* GL_ARB_draw_buffers_blend */ \
    FG4CPP_GL_VOID_FUNCTION( BlendEquationiARB, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendEquationSeparateiARB, ( GLuint _1, GLenum _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendFunciARB, ( GLuint _1, GLenum _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendFuncSeparateiARB, ( GLuint _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ) ) ) \
\
    /* GL_ARB_draw_elements_base_vertex */ \
\
    /* GL_ARB_draw_indirect */ \
\
    /* GL_ARB_draw_instanced */ \
    FG4CPP_GL_VOID_FUNCTION( DrawArraysInstancedARB, ( GLenum _1, GLint _2, GLsizei _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawElementsInstancedARB, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( ProgramStringARB, ( GLenum _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindProgramARB, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteProgramsARB, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenProgramsARB, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramEnvParameter4dARB, ( GLenum _1, GLuint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramEnvParameter4dvARB, ( GLenum _1, GLuint _2, const GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramEnvParameter4fARB, ( GLenum _1, GLuint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramEnvParameter4fvARB, ( GLenum _1, GLuint _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramLocalParameter4dARB, ( GLenum _1, GLuint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramLocalParameter4dvARB, ( GLenum _1, GLuint _2, const GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramLocalParameter4fARB, ( GLenum _1, GLuint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramLocalParameter4fvARB, ( GLenum _1, GLuint _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramEnvParameterdvARB, ( GLenum _1, GLuint _2, GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramEnvParameterfvARB, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramLocalParameterdvARB, ( GLenum _1, GLuint _2, GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramLocalParameterfvARB, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramivARB, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramStringARB, ( GLenum _1, GLenum _2, GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLvoid *, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsProgramARB, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( ProgramParameteriARB, ( GLuint _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTextureARB, ( GLenum _1, GLenum _2, GLuint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTextureLayerARB, ( GLenum _1, GLenum _2, GLuint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTextureFaceARB, ( GLenum _1, GLenum _2, GLuint _3, GLint _4, GLenum _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( ColorTable, ( GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( const FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorTableParameterfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorTableParameteriv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyColorTable, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetColorTable, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetColorTableParameterfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetColorTableParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorSubTable, ( GLenum _1, GLsizei _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( const FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyColorSubTable, ( GLenum _1, GLsizei _2, GLint _3, GLint _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionFilter1D, ( GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( const FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionFilter2D, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( const FgGLvoid *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionParameterf, ( GLenum _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionParameterfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionParameteri, ( GLenum _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionParameteriv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyConvolutionFilter1D, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyConvolutionFilter2D, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetConvolutionFilter, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetConvolutionParameterfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetConvolutionParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetSeparableFilter, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4, GLvoid * _5, GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ), FG4CPP_GL_ARG( FgGLvoid *, _5 ), FG4CPP_GL_ARG( FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SeparableFilter2D, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7, const GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( const FgGLvoid *, _7 ), FG4CPP_GL_ARG( const FgGLvoid *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetHistogram, ( GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetHistogramParameterfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetHistogramParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMinmax, ( GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMinmaxParameterfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMinmaxParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Histogram, ( GLenum _1, GLsizei _2, GLenum _3, GLboolean _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Minmax, ( GLenum _1, GLenum _2, GLboolean _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ResetHistogram, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ResetMinmax, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
\
    /* GL_ARB_indirect_parameters */ \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawArraysIndirectCountARB, ( GLenum _1, GLintptr _2, GLintptr _3, GLsizei _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLintptr, _2 ), FG4CPP_GL_ARG( FgGLintptr, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawElementsIndirectCountARB, ( GLenum _1, GLenum _2, GLintptr _3, GLintptr _4, GLsizei _5, GLsizei _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLintptr, _3 ), FG4CPP_GL_ARG( FgGLintptr, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ) ) ) \
\
    /* GL_ARB_instanced_arrays */ \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribDivisorARB, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( CurrentPaletteMatrixARB, ( GLint _1 ), ( FG4CPP_GL_ARG( FgGLint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixIndexubvARB, ( GLint _1, const GLubyte * _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLubyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixIndexusvARB, ( GLint _1, const GLushort * _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLushort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixIndexuivARB, ( GLint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixIndexPointerARB, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
\
    /* GL_ARB_multi_bind */ \
\
    /* GL_ARB_multi_draw_indirect */ \
\
    /* GL_ARB_multisample */ \
    FG4CPP_GL_VOID_FUNCTION( SampleCoverageARB, ( GLfloat _1, GLboolean _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ) ) ) \
\
    /* GL_ARB_multitexture */ \
    FG4CPP_GL_VOID_FUNCTION( ActiveTextureARB, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClientActiveTextureARB, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1dARB, ( GLenum _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1dvARB, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1fARB, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1fvARB, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1iARB, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1ivARB, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1sARB, ( GLenum _1, GLshort _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1svARB, ( GLenum _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2dARB, ( GLenum _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2dvARB, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2fARB, ( GLenum _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2fvARB, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2iARB, ( GLenum _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2ivARB, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2sARB, ( GLenum _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2svARB, ( GLenum _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3dARB, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3dvARB, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3fARB, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3fvARB, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3iARB, ( GLenum _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3ivARB, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3sARB, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3svARB, ( GLenum _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4dARB, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4dvARB, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4fARB, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4fvARB, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4iARB, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4ivARB, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4sARB, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ), FG4CPP_GL_ARG( FgGLshort, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4svARB, ( GLenum _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
\
    /* GL_ARB_occlusion_query */ \
    FG4CPP_GL_VOID_FUNCTION( GenQueriesARB, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteQueriesARB, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsQueryARB, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BeginQueryARB, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndQueryARB, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetQueryivARB, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetQueryObjectivARB, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetQueryObjectuivARB, ( GLuint _1, GLenum _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
\
    /* GL_ARB_occlusion_query2 */ \
\
    /* GL_ARB_pixel_buffer_object */ \
\
    /* GL_ARB_point_parameters */ \
    FG4CPP_GL_VOID_FUNCTION( PointParameterfARB, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PointParameterfvARB, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
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
    FG4CPP_GL_FUNCTION( 0, GLenum, GetGraphicsResetStatusARB, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnTexImageARB, ( GLenum _1, GLint _2, GLenum _3, GLenum _4, GLsizei _5, GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReadnPixelsARB, ( GLint _1, GLint _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, GLsizei _7, GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLvoid *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnCompressedTexImageARB, ( GLenum _1, GLint _2, GLsizei _3, GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnUniformfvARB, ( GLuint _1, GLint _2, GLsizei _3, GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnUniformivARB, ( GLuint _1, GLint _2, GLsizei _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnUniformuivARB, ( GLuint _1, GLint _2, GLsizei _3, GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnUniformdvARB, ( GLuint _1, GLint _2, GLsizei _3, GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnMapdvARB, ( GLenum _1, GLenum _2, GLsizei _3, GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnMapfvARB, ( GLenum _1, GLenum _2, GLsizei _3, GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnMapivARB, ( GLenum _1, GLenum _2, GLsizei _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnPixelMapfvARB, ( GLenum _1, GLsizei _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnPixelMapuivARB, ( GLenum _1, GLsizei _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnPixelMapusvARB, ( GLenum _1, GLsizei _2, GLushort * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLushort *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnPolygonStippleARB, ( GLsizei _1, GLubyte * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLubyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnColorTableARB, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnConvolutionFilterARB, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnSeparableFilterARB, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLvoid * _5, GLsizei _6, GLvoid * _7, GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLvoid *, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLvoid *, _7 ), FG4CPP_GL_ARG( FgGLvoid *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnHistogramARB, ( GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLsizei _5, GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetnMinmaxARB, ( GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLsizei _5, GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLvoid *, _6 ) ) ) \
\
    /* GL_ARB_robustness_isolation */ \
\
    /* GL_ARB_sample_shading */ \
    FG4CPP_GL_VOID_FUNCTION( MinSampleShadingARB, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( DeleteObjectARB, ( GLhandleARB _1 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLhandleARB, GetHandleARB, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DetachObjectARB, ( GLhandleARB _1, GLhandleARB _2 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( FgGLhandleARB, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLhandleARB, CreateShaderObjectARB, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ShaderSourceARB, ( GLhandleARB _1, GLsizei _2, const GLcharARB ** _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLcharARB **, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompileShaderARB, ( GLhandleARB _1 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLhandleARB, CreateProgramObjectARB, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( AttachObjectARB, ( GLhandleARB _1, GLhandleARB _2 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( FgGLhandleARB, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LinkProgramARB, ( GLhandleARB _1 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UseProgramObjectARB, ( GLhandleARB _1 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ValidateProgramARB, ( GLhandleARB _1 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1fARB, ( GLint _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2fARB, ( GLint _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3fARB, ( GLint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4fARB, ( GLint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1iARB, ( GLint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2iARB, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3iARB, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4iARB, ( GLint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1fvARB, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2fvARB, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3fvARB, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4fvARB, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1ivARB, ( GLint _1, GLsizei _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2ivARB, ( GLint _1, GLsizei _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3ivARB, ( GLint _1, GLsizei _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4ivARB, ( GLint _1, GLsizei _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix2fvARB, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix3fvARB, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformMatrix4fvARB, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetObjectParameterfvARB, ( GLhandleARB _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetObjectParameterivARB, ( GLhandleARB _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetInfoLogARB, ( GLhandleARB _1, GLsizei _2, GLsizei * _3, GLcharARB * _4 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLcharARB *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetAttachedObjectsARB, ( GLhandleARB _1, GLsizei _2, GLsizei * _3, GLhandleARB * _4 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLhandleARB *, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, GetUniformLocationARB, ( GLhandleARB _1, const GLcharARB * _2 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( const FgGLcharARB *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetActiveUniformARB, ( GLhandleARB _1, GLuint _2, GLsizei _3, GLsizei * _4, GLint * _5, GLenum * _6, GLcharARB * _7 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei *, _4 ), FG4CPP_GL_ARG( FgGLint *, _5 ), FG4CPP_GL_ARG( FgGLenum *, _6 ), FG4CPP_GL_ARG( FgGLcharARB *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetUniformfvARB, ( GLhandleARB _1, GLint _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetUniformivARB, ( GLhandleARB _1, GLint _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetShaderSourceARB, ( GLhandleARB _1, GLsizei _2, GLsizei * _3, GLcharARB * _4 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLcharARB *, _4 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( NamedStringARB, ( GLenum _1, GLint _2, const GLchar * _3, GLint _4, const GLchar * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( const FgGLchar *, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( const FgGLchar *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteNamedStringARB, ( GLint _1, const GLchar * _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLchar *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompileShaderIncludeARB, ( GLuint _1, GLsizei _2, const GLchar *const* _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLchar *const*, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsNamedStringARB, ( GLint _1, const GLchar * _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLchar *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedStringARB, ( GLint _1, const GLchar * _2, GLsizei _3, GLint * _4, GLchar * _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLchar *, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ), FG4CPP_GL_ARG( FgGLchar *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedStringivARB, ( GLint _1, const GLchar * _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLchar *, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
\
    /* GL_ARB_shading_language_packing */ \
\
    /* GL_ARB_shadow */ \
\
    /* GL_ARB_shadow_ambient */ \
\
    /* GL_ARB_sparse_texture */ \
    FG4CPP_GL_VOID_FUNCTION( TexPageCommitmentARB, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLboolean _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLboolean, _9 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( TexBufferARB, ( GLenum _1, GLenum _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
\
    /* GL_ARB_texture_buffer_object_rgb32 */ \
\
    /* GL_ARB_texture_buffer_range */ \
\
    /* GL_ARB_texture_compression */ \
    FG4CPP_GL_VOID_FUNCTION( CompressedTexImage3DARB, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLint _7, GLsizei _8, const GLvoid * _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( const FgGLvoid *, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTexImage2DARB, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLint _6, GLsizei _7, const GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( const FgGLvoid *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTexImage1DARB, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLint _5, GLsizei _6, const GLvoid * _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( const FgGLvoid *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTexSubImage3DARB, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLsizei _10, const GLvoid * _11 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( FgGLsizei, _10 ), FG4CPP_GL_ARG( const FgGLvoid *, _11 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTexSubImage2DARB, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLenum _7, GLsizei _8, const GLvoid * _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( const FgGLvoid *, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTexSubImage1DARB, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLenum _5, GLsizei _6, const GLvoid * _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( const FgGLvoid *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetCompressedTexImageARB, ( GLenum _1, GLint _2, GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLvoid *, _3 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( LoadTransposeMatrixfARB, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LoadTransposeMatrixdARB, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultTransposeMatrixfARB, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultTransposeMatrixdARB, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( WeightbvARB, ( GLint _1, const GLbyte * _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLbyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WeightsvARB, ( GLint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WeightivARB, ( GLint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WeightfvARB, ( GLint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WeightdvARB, ( GLint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WeightubvARB, ( GLint _1, const GLubyte * _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLubyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WeightusvARB, ( GLint _1, const GLushort * _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLushort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WeightuivARB, ( GLint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WeightPointerARB, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexBlendARB, ( GLint _1 ), ( FG4CPP_GL_ARG( FgGLint, _1 ) ) ) \
\
    /* GL_ARB_vertex_buffer_object */ \
    FG4CPP_GL_VOID_FUNCTION( BindBufferARB, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteBuffersARB, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenBuffersARB, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsBufferARB, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BufferDataARB, ( GLenum _1, GLsizeiptrARB _2, const GLvoid * _3, GLenum _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizeiptrARB, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BufferSubDataARB, ( GLenum _1, GLintptrARB _2, GLsizeiptrARB _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLintptrARB, _2 ), FG4CPP_GL_ARG( FgGLsizeiptrARB, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetBufferSubDataARB, ( GLenum _1, GLintptrARB _2, GLsizeiptrARB _3, GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLintptrARB, _2 ), FG4CPP_GL_ARG( FgGLsizeiptrARB, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( nullptr, void *, MapBufferARB, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, UnmapBufferARB, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetBufferParameterivARB, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetBufferPointervARB, ( GLenum _1, GLenum _2, GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLvoid **, _3 ) ) ) \
\
    /* GL_ARB_vertex_program */ \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1dARB, ( GLuint _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1dvARB, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1fARB, ( GLuint _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1fvARB, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1sARB, ( GLuint _1, GLshort _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1svARB, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2dARB, ( GLuint _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2dvARB, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2fARB, ( GLuint _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2fvARB, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2sARB, ( GLuint _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2svARB, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3dARB, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3dvARB, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3fARB, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3fvARB, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3sARB, ( GLuint _1, GLshort _2, GLshort _3, GLshort _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3svARB, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4NbvARB, ( GLuint _1, const GLbyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLbyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4NivARB, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4NsvARB, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4NubARB, ( GLuint _1, GLubyte _2, GLubyte _3, GLubyte _4, GLubyte _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLubyte, _2 ), FG4CPP_GL_ARG( FgGLubyte, _3 ), FG4CPP_GL_ARG( FgGLubyte, _4 ), FG4CPP_GL_ARG( FgGLubyte, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4NubvARB, ( GLuint _1, const GLubyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLubyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4NuivARB, ( GLuint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4NusvARB, ( GLuint _1, const GLushort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLushort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4bvARB, ( GLuint _1, const GLbyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLbyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4dARB, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4dvARB, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4fARB, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4fvARB, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4ivARB, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4sARB, ( GLuint _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ), FG4CPP_GL_ARG( FgGLshort, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4svARB, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4ubvARB, ( GLuint _1, const GLubyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLubyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4uivARB, ( GLuint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4usvARB, ( GLuint _1, const GLushort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLushort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribPointerARB, ( GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLsizei _5, const GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( const FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EnableVertexAttribArrayARB, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DisableVertexAttribArrayARB, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribdvARB, ( GLuint _1, GLenum _2, GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribfvARB, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribivARB, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribPointervARB, ( GLuint _1, GLenum _2, GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLvoid **, _3 ) ) ) \
\
    /* GL_ARB_vertex_shader */ \
    FG4CPP_GL_VOID_FUNCTION( BindAttribLocationARB, ( GLhandleARB _1, GLuint _2, const GLcharARB * _3 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLcharARB *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetActiveAttribARB, ( GLhandleARB _1, GLuint _2, GLsizei _3, GLsizei * _4, GLint * _5, GLenum * _6, GLcharARB * _7 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei *, _4 ), FG4CPP_GL_ARG( FgGLint *, _5 ), FG4CPP_GL_ARG( FgGLenum *, _6 ), FG4CPP_GL_ARG( FgGLcharARB *, _7 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, GetAttribLocationARB, ( GLhandleARB _1, const GLcharARB * _2 ), ( FG4CPP_GL_ARG( FgGLhandleARB, _1 ), FG4CPP_GL_ARG( const FgGLcharARB *, _2 ) ) ) \
\
    /* GL_ARB_vertex_type_10f_11f_11f_rev */ \
\
    /* GL_ARB_vertex_type_2_10_10_10_rev */ \
\
    /* GL_ARB_viewport_array */ \
\
    /* GL_ARB_window_pos */ \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2dARB, ( GLdouble _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2dvARB, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2fARB, ( GLfloat _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2fvARB, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2iARB, ( GLint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2ivARB, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2sARB, ( GLshort _1, GLshort _2 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2svARB, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3dARB, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3dvARB, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3fARB, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3fvARB, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3iARB, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3ivARB, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3sARB, ( GLshort _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3svARB, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
\
    /* GL_KHR_debug */ \
\
    /* GL_KHR_texture_compression_astc_ldr */ \
\
    /* GL_OES_byte_coordinates */ \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1bOES, ( GLenum _1, GLbyte _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1bvOES, ( GLenum _1, const GLbyte * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLbyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2bOES, ( GLenum _1, GLbyte _2, GLbyte _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2bvOES, ( GLenum _1, const GLbyte * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLbyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3bOES, ( GLenum _1, GLbyte _2, GLbyte _3, GLbyte _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ), FG4CPP_GL_ARG( FgGLbyte, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3bvOES, ( GLenum _1, const GLbyte * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLbyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4bOES, ( GLenum _1, GLbyte _2, GLbyte _3, GLbyte _4, GLbyte _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ), FG4CPP_GL_ARG( FgGLbyte, _4 ), FG4CPP_GL_ARG( FgGLbyte, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4bvOES, ( GLenum _1, const GLbyte * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLbyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1bOES, ( GLbyte _1 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1bvOES, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2bOES, ( GLbyte _1, GLbyte _2 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2bvOES, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3bOES, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3bvOES, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4bOES, ( GLbyte _1, GLbyte _2, GLbyte _3, GLbyte _4 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ), FG4CPP_GL_ARG( FgGLbyte, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4bvOES, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex2bOES, ( GLbyte _1 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex2bvOES, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3bOES, ( GLbyte _1, GLbyte _2 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3bvOES, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4bOES, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4bvOES, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
\
    /* GL_OES_compressed_paletted_texture */ \
\
    /* GL_OES_fixed_point */ \
    FG4CPP_GL_VOID_FUNCTION( AlphaFuncxOES, ( GLenum _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearColorxOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearDepthxOES, ( GLfixed _1 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClipPlanexOES, ( GLenum _1, const GLfixed * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfixed *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4xOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DepthRangexOES, ( GLfixed _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogxOES, ( GLenum _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogxvOES, ( GLenum _1, const GLfixed * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfixed *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FrustumxOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4, GLfixed _5, GLfixed _6 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ), FG4CPP_GL_ARG( FgGLfixed, _5 ), FG4CPP_GL_ARG( FgGLfixed, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetClipPlanexOES, ( GLenum _1, GLfixed * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFixedvOES, ( GLenum _1, GLfixed * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexEnvxvOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexParameterxvOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LightModelxOES, ( GLenum _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LightModelxvOES, ( GLenum _1, const GLfixed * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfixed *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LightxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LightxvOES, ( GLenum _1, GLenum _2, const GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LineWidthxOES, ( GLfixed _1 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LoadMatrixxOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MaterialxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MaterialxvOES, ( GLenum _1, GLenum _2, const GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultMatrixxOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4xOES, ( GLenum _1, GLfixed _2, GLfixed _3, GLfixed _4, GLfixed _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ), FG4CPP_GL_ARG( FgGLfixed, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3xOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( OrthoxOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4, GLfixed _5, GLfixed _6 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ), FG4CPP_GL_ARG( FgGLfixed, _5 ), FG4CPP_GL_ARG( FgGLfixed, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PointParameterxvOES, ( GLenum _1, const GLfixed * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfixed *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PointSizexOES, ( GLfixed _1 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PolygonOffsetxOES, ( GLfixed _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RotatexOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SampleCoverageOES, ( GLfixed _1, GLboolean _2 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ScalexOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexEnvxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexEnvxvOES, ( GLenum _1, GLenum _2, const GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexParameterxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexParameterxvOES, ( GLenum _1, GLenum _2, const GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TranslatexOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( AccumxOES, ( GLenum _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BitmapxOES, ( GLsizei _1, GLsizei _2, GLfixed _3, GLfixed _4, GLfixed _5, GLfixed _6, const GLubyte * _7 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ), FG4CPP_GL_ARG( FgGLfixed, _5 ), FG4CPP_GL_ARG( FgGLfixed, _6 ), FG4CPP_GL_ARG( const FgGLubyte *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendColorxOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearAccumxOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3xOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionParameterxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionParameterxvOES, ( GLenum _1, GLenum _2, const GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalCoord1xOES, ( GLfixed _1 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalCoord1xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalCoord2xOES, ( GLfixed _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalCoord2xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FeedbackBufferxOES, ( GLsizei _1, GLenum _2, const GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetConvolutionParameterxvOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetHistogramParameterxvOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetLightxOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMapxvOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMaterialxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPixelMapxv, ( GLenum _1, GLint _2, GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexGenxvOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexLevelParameterxvOES, ( GLenum _1, GLint _2, GLenum _3, GLfixed * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfixed *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( IndexxOES, ( GLfixed _1 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( IndexxvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LoadTransposeMatrixxOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Map1xOES, ( GLenum _1, GLfixed _2, GLfixed _3, GLint _4, GLint _5, GLfixed _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLfixed, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Map2xOES, ( GLenum _1, GLfixed _2, GLfixed _3, GLint _4, GLint _5, GLfixed _6, GLfixed _7, GLint _8, GLint _9, GLfixed _10 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLfixed, _6 ), FG4CPP_GL_ARG( FgGLfixed, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLint, _9 ), FG4CPP_GL_ARG( FgGLfixed, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MapGrid1xOES, ( GLint _1, GLfixed _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MapGrid2xOES, ( GLint _1, GLfixed _2, GLfixed _3, GLfixed _4, GLfixed _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ), FG4CPP_GL_ARG( FgGLfixed, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultTransposeMatrixxOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1xOES, ( GLenum _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1xvOES, ( GLenum _1, const GLfixed * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfixed *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2xOES, ( GLenum _1, GLfixed _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2xvOES, ( GLenum _1, const GLfixed * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfixed *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3xOES, ( GLenum _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3xvOES, ( GLenum _1, const GLfixed * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfixed *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4xvOES, ( GLenum _1, const GLfixed * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfixed *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PassThroughxOES, ( GLfixed _1 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelMapx, ( GLenum _1, GLint _2, const GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( const FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelStorex, ( GLenum _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelTransferxOES, ( GLenum _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelZoomxOES, ( GLfixed _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PrioritizeTexturesxOES, ( GLsizei _1, const GLuint * _2, const GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ), FG4CPP_GL_ARG( const FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos2xOES, ( GLfixed _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos2xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos3xOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos3xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos4xOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RasterPos4xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RectxOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RectxvOES, ( const GLfixed * _1, const GLfixed * _2 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ), FG4CPP_GL_ARG( const FgGLfixed *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1xOES, ( GLfixed _1 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2xOES, ( GLfixed _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3xOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4xOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ), FG4CPP_GL_ARG( FgGLfixed, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexGenxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexGenxvOES, ( GLenum _1, GLenum _2, const GLfixed * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfixed *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex2xOES, ( GLfixed _1 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex2xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3xOES, ( GLfixed _1, GLfixed _2 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4xOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( FG4CPP_GL_ARG( FgGLfixed, _1 ), FG4CPP_GL_ARG( FgGLfixed, _2 ), FG4CPP_GL_ARG( FgGLfixed, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4xvOES, ( const GLfixed * _1 ), ( FG4CPP_GL_ARG( const FgGLfixed *, _1 ) ) ) \
\
    /* GL_OES_query_matrix */ \
    FG4CPP_GL_FUNCTION( 0, GLbitfield, QueryMatrixxOES, ( GLfixed * _1, GLint * _2 ), ( FG4CPP_GL_ARG( FgGLfixed *, _1 ), FG4CPP_GL_ARG( FgGLint *, _2 ) ) ) \
\
    /* GL_OES_read_format */ \
\
    /* GL_OES_single_precision */ \
    FG4CPP_GL_VOID_FUNCTION( ClearDepthfOES, ( GLclampf _1 ), ( FG4CPP_GL_ARG( FgGLclampf, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClipPlanefOES, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DepthRangefOES, ( GLclampf _1, GLclampf _2 ), ( FG4CPP_GL_ARG( FgGLclampf, _1 ), FG4CPP_GL_ARG( FgGLclampf, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FrustumfOES, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetClipPlanefOES, ( GLenum _1, GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( OrthofOES, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ) ) ) \
\
    /* GL_3DFX_multisample */ \
\
    /* GL_3DFX_tbuffer */ \
    FG4CPP_GL_VOID_FUNCTION( TbufferMask3DFX, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
\
    /* GL_3DFX_texture_compression_FXT1 */ \
\
    /* GL_AMD_blend_minmax_factor */ \
\
    /* GL_AMD_conservative_depth */ \
\
    /* GL_AMD_debug_output */ \
    FG4CPP_GL_VOID_FUNCTION( DebugMessageEnableAMD, ( GLenum _1, GLenum _2, GLsizei _3, const GLuint * _4, GLboolean _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ), FG4CPP_GL_ARG( FgGLboolean, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DebugMessageInsertAMD, ( GLenum _1, GLenum _2, GLuint _3, GLsizei _4, const GLchar * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLchar *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DebugMessageCallbackAMD, ( GLDebugProcAMD _1, void * _2 ), ( FG4CPP_GL_ARG( FgGLDebugProcAMD, _1 ), FG4CPP_GL_ARG( void *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, GetDebugMessageLogAMD, ( GLuint _1, GLsizei _2, GLenum * _3, GLuint * _4, GLuint * _5, GLsizei * _6, GLchar * _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum *, _3 ), FG4CPP_GL_ARG( FgGLuint *, _4 ), FG4CPP_GL_ARG( FgGLuint *, _5 ), FG4CPP_GL_ARG( FgGLsizei *, _6 ), FG4CPP_GL_ARG( FgGLchar *, _7 ) ) ) \
\
    /* GL_AMD_depth_clamp_separate */ \
\
    /* GL_AMD_draw_buffers_blend */ \
    FG4CPP_GL_VOID_FUNCTION( BlendFuncIndexedAMD, ( GLuint _1, GLenum _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendFuncSeparateIndexedAMD, ( GLuint _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendEquationIndexedAMD, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendEquationSeparateIndexedAMD, ( GLuint _1, GLenum _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
\
    /* GL_AMD_interleaved_elements */ \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribParameteriAMD, ( GLuint _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
\
    /* GL_AMD_multi_draw_indirect */ \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawArraysIndirectAMD, ( GLenum _1, const GLvoid * _2, GLsizei _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLvoid *, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawElementsIndirectAMD, ( GLenum _1, GLenum _2, const GLvoid * _3, GLsizei _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
\
    /* GL_AMD_name_gen_delete */ \
    FG4CPP_GL_VOID_FUNCTION( GenNamesAMD, ( GLenum _1, GLuint _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteNamesAMD, ( GLenum _1, GLuint _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsNameAMD, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
\
    /* GL_AMD_performance_monitor */ \
    FG4CPP_GL_VOID_FUNCTION( GetPerfMonitorGroupsAMD, ( GLint * _1, GLsizei _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLint *, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPerfMonitorCountersAMD, ( GLuint _1, GLint * _2, GLint * _3, GLsizei _4, GLuint * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint *, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLuint *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPerfMonitorGroupStringAMD, ( GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLchar *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPerfMonitorCounterStringAMD, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLchar * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei *, _4 ), FG4CPP_GL_ARG( FgGLchar *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPerfMonitorCounterInfoAMD, ( GLuint _1, GLuint _2, GLenum _3, GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenPerfMonitorsAMD, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeletePerfMonitorsAMD, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SelectPerfMonitorCountersAMD, ( GLuint _1, GLboolean _2, GLuint _3, GLint _4, GLuint * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLuint *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BeginPerfMonitorAMD, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndPerfMonitorAMD, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPerfMonitorCounterDataAMD, ( GLuint _1, GLenum _2, GLsizei _3, GLuint * _4, GLint * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLuint *, _4 ), FG4CPP_GL_ARG( FgGLint *, _5 ) ) ) \
\
    /* GL_AMD_pinned_memory */ \
\
    /* GL_AMD_query_buffer_object */ \
\
    /* GL_AMD_sample_positions */ \
    FG4CPP_GL_VOID_FUNCTION( SetMultisamplefvAMD, ( GLenum _1, GLuint _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( TexStorageSparseAMD, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLsizei _5, GLsizei _6, GLbitfield _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLbitfield, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureStorageSparseAMD, ( GLuint _1, GLenum _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLsizei _7, GLbitfield _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLbitfield, _8 ) ) ) \
\
    /* GL_AMD_stencil_operation_extended */ \
    FG4CPP_GL_VOID_FUNCTION( StencilOpValueAMD, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
\
    /* GL_AMD_texture_texture4 */ \
\
    /* GL_AMD_transform_feedback3_lines_triangles */ \
\
    /* GL_AMD_vertex_shader_layer */ \
\
    /* GL_AMD_vertex_shader_tessellator */ \
    FG4CPP_GL_VOID_FUNCTION( TessellationFactorAMD, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TessellationModeAMD, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
\
    /* GL_AMD_vertex_shader_viewport_index */ \
\
    /* GL_APPLE_aux_depth_stencil */ \
\
    /* GL_APPLE_client_storage */ \
\
    /* GL_APPLE_element_array */ \
    FG4CPP_GL_VOID_FUNCTION( ElementPointerAPPLE, ( GLenum _1, const GLvoid * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLvoid *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawElementArrayAPPLE, ( GLenum _1, GLint _2, GLsizei _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawRangeElementArrayAPPLE, ( GLenum _1, GLuint _2, GLuint _3, GLint _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawElementArrayAPPLE, ( GLenum _1, const GLint * _2, const GLsizei * _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ), FG4CPP_GL_ARG( const FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawRangeElementArrayAPPLE, ( GLenum _1, GLuint _2, GLuint _3, const GLint * _4, const GLsizei * _5, GLsizei _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ), FG4CPP_GL_ARG( const FgGLsizei *, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ) ) ) \
\
    /* GL_APPLE_fence */ \
    FG4CPP_GL_VOID_FUNCTION( GenFencesAPPLE, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteFencesAPPLE, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SetFenceAPPLE, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsFenceAPPLE, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, TestFenceAPPLE, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FinishFenceAPPLE, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, TestObjectAPPLE, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FinishObjectAPPLE, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
\
    /* GL_APPLE_float_pixels */ \
\
    /* GL_APPLE_flush_buffer_range */ \
    FG4CPP_GL_VOID_FUNCTION( BufferParameteriAPPLE, ( GLenum _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FlushMappedBufferRangeAPPLE, ( GLenum _1, GLintptr _2, GLsizeiptr _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLintptr, _2 ), FG4CPP_GL_ARG( FgGLsizeiptr, _3 ) ) ) \
\
    /* GL_APPLE_object_purgeable */ \
    FG4CPP_GL_FUNCTION( 0, GLenum, ObjectPurgeableAPPLE, ( GLenum _1, GLuint _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLenum, ObjectUnpurgeableAPPLE, ( GLenum _1, GLuint _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetObjectParameterivAPPLE, ( GLenum _1, GLuint _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
\
    /* GL_APPLE_rgb_422 */ \
\
    /* GL_APPLE_row_bytes */ \
\
    /* GL_APPLE_specular_vector */ \
\
    /* GL_APPLE_texture_range */ \
    FG4CPP_GL_VOID_FUNCTION( TextureRangeAPPLE, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexParameterPointervAPPLE, ( GLenum _1, GLenum _2, GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLvoid **, _3 ) ) ) \
\
    /* GL_APPLE_transform_hint */ \
\
    /* GL_APPLE_vertex_array_object */ \
    FG4CPP_GL_VOID_FUNCTION( BindVertexArrayAPPLE, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteVertexArraysAPPLE, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenVertexArraysAPPLE, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsVertexArrayAPPLE, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
\
    /* GL_APPLE_vertex_array_range */ \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayRangeAPPLE, ( GLsizei _1, GLvoid * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLvoid *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FlushVertexArrayRangeAPPLE, ( GLsizei _1, GLvoid * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLvoid *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayParameteriAPPLE, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
\
    /* GL_APPLE_vertex_program_evaluators */ \
    FG4CPP_GL_VOID_FUNCTION( EnableVertexAttribAPPLE, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DisableVertexAttribAPPLE, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsVertexAttribEnabledAPPLE, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MapVertexAttrib1dAPPLE, ( GLuint _1, GLuint _2, GLdouble _3, GLdouble _4, GLint _5, GLint _6, const GLdouble * _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( const FgGLdouble *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MapVertexAttrib1fAPPLE, ( GLuint _1, GLuint _2, GLfloat _3, GLfloat _4, GLint _5, GLint _6, const GLfloat * _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( const FgGLfloat *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MapVertexAttrib2dAPPLE, ( GLuint _1, GLuint _2, GLdouble _3, GLdouble _4, GLint _5, GLint _6, GLdouble _7, GLdouble _8, GLint _9, GLint _10, const GLdouble * _11 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLdouble, _7 ), FG4CPP_GL_ARG( FgGLdouble, _8 ), FG4CPP_GL_ARG( FgGLint, _9 ), FG4CPP_GL_ARG( FgGLint, _10 ), FG4CPP_GL_ARG( const FgGLdouble *, _11 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MapVertexAttrib2fAPPLE, ( GLuint _1, GLuint _2, GLfloat _3, GLfloat _4, GLint _5, GLint _6, GLfloat _7, GLfloat _8, GLint _9, GLint _10, const GLfloat * _11 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLfloat, _8 ), FG4CPP_GL_ARG( FgGLint, _9 ), FG4CPP_GL_ARG( FgGLint, _10 ), FG4CPP_GL_ARG( const FgGLfloat *, _11 ) ) ) \
\
    /* GL_APPLE_ycbcr_422 */ \
\
    /* GL_ATI_draw_buffers */ \
    FG4CPP_GL_VOID_FUNCTION( DrawBuffersATI, ( GLsizei _1, const GLenum * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLenum *, _2 ) ) ) \
\
    /* GL_ATI_element_array */ \
    FG4CPP_GL_VOID_FUNCTION( ElementPointerATI, ( GLenum _1, const GLvoid * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLvoid *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawElementArrayATI, ( GLenum _1, GLsizei _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawRangeElementArrayATI, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
\
    /* GL_ATI_envmap_bumpmap */ \
    FG4CPP_GL_VOID_FUNCTION( TexBumpParameterivATI, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexBumpParameterfvATI, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexBumpParameterivATI, ( GLenum _1, GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexBumpParameterfvATI, ( GLenum _1, GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat *, _2 ) ) ) \
\
    /* GL_ATI_fragment_shader */ \
    FG4CPP_GL_FUNCTION( 0, GLuint, GenFragmentShadersATI, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindFragmentShaderATI, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteFragmentShaderATI, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BeginFragmentShaderATI, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndFragmentShaderATI, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( PassTexCoordATI, ( GLuint _1, GLuint _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SampleMapATI, ( GLuint _1, GLuint _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorFragmentOp1ATI, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ), FG4CPP_GL_ARG( FgGLuint, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorFragmentOp2ATI, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8, GLuint _9, GLuint _10 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ), FG4CPP_GL_ARG( FgGLuint, _7 ), FG4CPP_GL_ARG( FgGLuint, _8 ), FG4CPP_GL_ARG( FgGLuint, _9 ), FG4CPP_GL_ARG( FgGLuint, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorFragmentOp3ATI, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8, GLuint _9, GLuint _10, GLuint _11, GLuint _12, GLuint _13 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ), FG4CPP_GL_ARG( FgGLuint, _7 ), FG4CPP_GL_ARG( FgGLuint, _8 ), FG4CPP_GL_ARG( FgGLuint, _9 ), FG4CPP_GL_ARG( FgGLuint, _10 ), FG4CPP_GL_ARG( FgGLuint, _11 ), FG4CPP_GL_ARG( FgGLuint, _12 ), FG4CPP_GL_ARG( FgGLuint, _13 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( AlphaFragmentOp1ATI, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( AlphaFragmentOp2ATI, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8, GLuint _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ), FG4CPP_GL_ARG( FgGLuint, _7 ), FG4CPP_GL_ARG( FgGLuint, _8 ), FG4CPP_GL_ARG( FgGLuint, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( AlphaFragmentOp3ATI, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8, GLuint _9, GLuint _10, GLuint _11, GLuint _12 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ), FG4CPP_GL_ARG( FgGLuint, _7 ), FG4CPP_GL_ARG( FgGLuint, _8 ), FG4CPP_GL_ARG( FgGLuint, _9 ), FG4CPP_GL_ARG( FgGLuint, _10 ), FG4CPP_GL_ARG( FgGLuint, _11 ), FG4CPP_GL_ARG( FgGLuint, _12 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SetFragmentShaderConstantATI, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
\
    /* GL_ATI_map_object_buffer */ \
    FG4CPP_GL_FUNCTION( nullptr, void *, MapObjectBufferATI, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UnmapObjectBufferATI, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
\
    /* GL_ATI_meminfo */ \
\
    /* GL_ATI_pixel_format_float */ \
\
    /* GL_ATI_pn_triangles */ \
    FG4CPP_GL_VOID_FUNCTION( PNTrianglesiATI, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PNTrianglesfATI, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
\
    /* GL_ATI_separate_stencil */ \
    FG4CPP_GL_VOID_FUNCTION( StencilOpSeparateATI, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( StencilFuncSeparateATI, ( GLenum _1, GLenum _2, GLint _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
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
    FG4CPP_GL_FUNCTION( 0, GLuint, NewObjectBufferATI, ( GLsizei _1, const GLvoid * _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLvoid *, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsObjectBufferATI, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UpdateObjectBufferATI, ( GLuint _1, GLuint _2, GLsizei _3, const GLvoid * _4, GLenum _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetObjectBufferfvATI, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetObjectBufferivATI, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FreeObjectBufferATI, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ArrayObjectATI, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLuint _5, GLuint _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetArrayObjectfvATI, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetArrayObjectivATI, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VariantArrayObjectATI, ( GLuint _1, GLenum _2, GLsizei _3, GLuint _4, GLuint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVariantArrayObjectfvATI, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVariantArrayObjectivATI, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
\
    /* GL_ATI_vertex_attrib_array_object */ \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribArrayObjectATI, ( GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLsizei _5, GLuint _6, GLuint _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ), FG4CPP_GL_ARG( FgGLuint, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribArrayObjectfvATI, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribArrayObjectivATI, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
\
    /* GL_ATI_vertex_streams */ \
    FG4CPP_GL_VOID_FUNCTION( VertexStream1sATI, ( GLenum _1, GLshort _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream1svATI, ( GLenum _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream1iATI, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream1ivATI, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream1fATI, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream1fvATI, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream1dATI, ( GLenum _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream1dvATI, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream2sATI, ( GLenum _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream2svATI, ( GLenum _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream2iATI, ( GLenum _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream2ivATI, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream2fATI, ( GLenum _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream2fvATI, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream2dATI, ( GLenum _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream2dvATI, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream3sATI, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream3svATI, ( GLenum _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream3iATI, ( GLenum _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream3ivATI, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream3fATI, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream3fvATI, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream3dATI, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream3dvATI, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream4sATI, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ), FG4CPP_GL_ARG( FgGLshort, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream4svATI, ( GLenum _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream4iATI, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream4ivATI, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream4fATI, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream4fvATI, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream4dATI, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexStream4dvATI, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalStream3bATI, ( GLenum _1, GLbyte _2, GLbyte _3, GLbyte _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ), FG4CPP_GL_ARG( FgGLbyte, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalStream3bvATI, ( GLenum _1, const GLbyte * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLbyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalStream3sATI, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalStream3svATI, ( GLenum _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalStream3iATI, ( GLenum _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalStream3ivATI, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalStream3fATI, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalStream3fvATI, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalStream3dATI, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalStream3dvATI, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClientActiveVertexStreamATI, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexBlendEnviATI, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexBlendEnvfATI, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
\
    /* GL_EXT_422_pixels */ \
\
    /* GL_EXT_abgr */ \
\
    /* GL_EXT_bgra */ \
\
    /* GL_EXT_bindable_uniform */ \
    FG4CPP_GL_VOID_FUNCTION( UniformBufferEXT, ( GLuint _1, GLint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, GetUniformBufferSizeEXT, ( GLuint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLintptr, GetUniformOffsetEXT, ( GLuint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
\
    /* GL_EXT_blend_color */ \
    FG4CPP_GL_VOID_FUNCTION( BlendColorEXT, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
\
    /* GL_EXT_blend_equation_separate */ \
    FG4CPP_GL_VOID_FUNCTION( BlendEquationSeparateEXT, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
\
    /* GL_EXT_blend_func_separate */ \
    FG4CPP_GL_VOID_FUNCTION( BlendFuncSeparateEXT, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ) ) ) \
\
    /* GL_EXT_blend_logic_op */ \
\
    /* GL_EXT_blend_minmax */ \
    FG4CPP_GL_VOID_FUNCTION( BlendEquationEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
\
    /* GL_EXT_blend_subtract */ \
\
    /* GL_EXT_clip_volume_hint */ \
\
    /* GL_EXT_cmyka */ \
\
    /* GL_EXT_color_subtable */ \
    FG4CPP_GL_VOID_FUNCTION( ColorSubTableEXT, ( GLenum _1, GLsizei _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( const FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyColorSubTableEXT, ( GLenum _1, GLsizei _2, GLint _3, GLint _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
\
    /* GL_EXT_compiled_vertex_array */ \
    FG4CPP_GL_VOID_FUNCTION( LockArraysEXT, ( GLint _1, GLsizei _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UnlockArraysEXT, ( ), ( ) ) \
\
    /* GL_EXT_convolution */ \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionFilter1DEXT, ( GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( const FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionFilter2DEXT, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( const FgGLvoid *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionParameterfEXT, ( GLenum _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionParameterfvEXT, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionParameteriEXT, ( GLenum _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ConvolutionParameterivEXT, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyConvolutionFilter1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyConvolutionFilter2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetConvolutionFilterEXT, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetConvolutionParameterfvEXT, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetConvolutionParameterivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetSeparableFilterEXT, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4, GLvoid * _5, GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ), FG4CPP_GL_ARG( FgGLvoid *, _5 ), FG4CPP_GL_ARG( FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SeparableFilter2DEXT, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7, const GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( const FgGLvoid *, _7 ), FG4CPP_GL_ARG( const FgGLvoid *, _8 ) ) ) \
\
    /* GL_EXT_coordinate_frame */ \
    FG4CPP_GL_VOID_FUNCTION( Tangent3bEXT, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Tangent3bvEXT, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Tangent3dEXT, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Tangent3dvEXT, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Tangent3fEXT, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Tangent3fvEXT, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Tangent3iEXT, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Tangent3ivEXT, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Tangent3sEXT, ( GLshort _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Tangent3svEXT, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Binormal3bEXT, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Binormal3bvEXT, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Binormal3dEXT, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Binormal3dvEXT, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Binormal3fEXT, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Binormal3fvEXT, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Binormal3iEXT, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Binormal3ivEXT, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Binormal3sEXT, ( GLshort _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Binormal3svEXT, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TangentPointerEXT, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BinormalPointerEXT, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ) ) ) \
\
    /* GL_EXT_copy_texture */ \
    FG4CPP_GL_VOID_FUNCTION( CopyTexImage1DEXT, ( GLenum _1, GLint _2, GLenum _3, GLint _4, GLint _5, GLsizei _6, GLint _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTexImage2DEXT, ( GLenum _1, GLint _2, GLenum _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLint _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTexSubImage1DEXT, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTexSubImage2DEXT, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTexSubImage3DEXT, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLsizei _8, GLsizei _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ) ) ) \
\
    /* GL_EXT_cull_vertex */ \
    FG4CPP_GL_VOID_FUNCTION( CullParameterdvEXT, ( GLenum _1, GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CullParameterfvEXT, ( GLenum _1, GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat *, _2 ) ) ) \
\
    /* GL_EXT_depth_bounds_test */ \
    FG4CPP_GL_VOID_FUNCTION( DepthBoundsEXT, ( GLclampd _1, GLclampd _2 ), ( FG4CPP_GL_ARG( FgGLclampd, _1 ), FG4CPP_GL_ARG( FgGLclampd, _2 ) ) ) \
\
    /* GL_EXT_direct_state_access */ \
    FG4CPP_GL_VOID_FUNCTION( MatrixLoadfEXT, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixLoaddEXT, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixMultfEXT, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixMultdEXT, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixLoadIdentityEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixRotatefEXT, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixRotatedEXT, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixScalefEXT, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixScaledEXT, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixTranslatefEXT, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixTranslatedEXT, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixFrustumEXT, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6, GLdouble _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ), FG4CPP_GL_ARG( FgGLdouble, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixOrthoEXT, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6, GLdouble _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ), FG4CPP_GL_ARG( FgGLdouble, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixPopEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixPushEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClientAttribDefaultEXT, ( GLbitfield _1 ), ( FG4CPP_GL_ARG( FgGLbitfield, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PushClientAttribDefaultEXT, ( GLbitfield _1 ), ( FG4CPP_GL_ARG( FgGLbitfield, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureParameterfEXT, ( GLuint _1, GLenum _2, GLenum _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureParameterfvEXT, ( GLuint _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureParameteriEXT, ( GLuint _1, GLenum _2, GLenum _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureParameterivEXT, ( GLuint _1, GLenum _2, GLenum _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureImage1DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLint _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( const FgGLvoid *, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureImage2DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLint _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( const FgGLvoid *, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureSubImage1DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLenum _6, GLenum _7, const GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( const FgGLvoid *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureSubImage2DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( const FgGLvoid *, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTextureImage1DEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLint _5, GLint _6, GLsizei _7, GLint _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTextureImage2DEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLint _9 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLint, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTextureSubImage1DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTextureSubImage2DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLsizei _8, GLsizei _9 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTextureImageEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLenum _5, GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTextureParameterfvEXT, ( GLuint _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTextureParameterivEXT, ( GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTextureLevelParameterfvEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTextureLevelParameterivEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLint * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLint *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureImage3DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( FgGLenum, _10 ), FG4CPP_GL_ARG( const FgGLvoid *, _11 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureSubImage3DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLenum _10, GLenum _11, const GLvoid * _12 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ), FG4CPP_GL_ARG( FgGLenum, _10 ), FG4CPP_GL_ARG( FgGLenum, _11 ), FG4CPP_GL_ARG( const FgGLvoid *, _12 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyTextureSubImage3DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLint _8, GLsizei _9, GLsizei _10 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ), FG4CPP_GL_ARG( FgGLsizei, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindMultiTextureEXT, ( GLenum _1, GLenum _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoordPointerEXT, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexEnvfEXT, ( GLenum _1, GLenum _2, GLenum _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexEnvfvEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexEnviEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexEnvivEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexGendEXT, ( GLenum _1, GLenum _2, GLenum _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexGendvEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexGenfEXT, ( GLenum _1, GLenum _2, GLenum _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexGenfvEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexGeniEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexGenivEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMultiTexEnvfvEXT, ( GLenum _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMultiTexEnvivEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMultiTexGendvEXT, ( GLenum _1, GLenum _2, GLenum _3, GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMultiTexGenfvEXT, ( GLenum _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMultiTexGenivEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexParameteriEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexParameterivEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexParameterfEXT, ( GLenum _1, GLenum _2, GLenum _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexParameterfvEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexImage1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLint _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( const FgGLvoid *, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexImage2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLint _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( const FgGLvoid *, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexSubImage1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLenum _6, GLenum _7, const GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( const FgGLvoid *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexSubImage2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( const FgGLvoid *, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyMultiTexImage1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLint _5, GLint _6, GLsizei _7, GLint _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyMultiTexImage2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLint _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLint, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyMultiTexSubImage1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyMultiTexSubImage2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLsizei _8, GLsizei _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMultiTexImageEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLenum _5, GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMultiTexParameterfvEXT, ( GLenum _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMultiTexParameterivEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMultiTexLevelParameterfvEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMultiTexLevelParameterivEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLint * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLint *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexImage3DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( FgGLenum, _10 ), FG4CPP_GL_ARG( const FgGLvoid *, _11 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexSubImage3DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLenum _10, GLenum _11, const GLvoid * _12 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ), FG4CPP_GL_ARG( FgGLenum, _10 ), FG4CPP_GL_ARG( FgGLenum, _11 ), FG4CPP_GL_ARG( const FgGLvoid *, _12 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyMultiTexSubImage3DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLint _8, GLsizei _9, GLsizei _10 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ), FG4CPP_GL_ARG( FgGLsizei, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EnableClientStateIndexedEXT, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DisableClientStateIndexedEXT, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFloatIndexedvEXT, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetDoubleIndexedvEXT, ( GLenum _1, GLuint _2, GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPointerIndexedvEXT, ( GLenum _1, GLuint _2, GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLvoid **, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EnableIndexedEXT, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DisableIndexedEXT, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsEnabledIndexedEXT, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetIntegerIndexedvEXT, ( GLenum _1, GLuint _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetBooleanIndexedvEXT, ( GLenum _1, GLuint _2, GLboolean * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLboolean *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTextureImage3DEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLsizei _9, const GLvoid * _10 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ), FG4CPP_GL_ARG( const FgGLvoid *, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTextureImage2DEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLsizei _6, GLint _7, GLsizei _8, const GLvoid * _9 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( const FgGLvoid *, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTextureImage1DEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLint _6, GLsizei _7, const GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( const FgGLvoid *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTextureSubImage3DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLenum _10, GLsizei _11, const GLvoid * _12 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ), FG4CPP_GL_ARG( FgGLenum, _10 ), FG4CPP_GL_ARG( FgGLsizei, _11 ), FG4CPP_GL_ARG( const FgGLvoid *, _12 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTextureSubImage2DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLenum _8, GLsizei _9, const GLvoid * _10 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ), FG4CPP_GL_ARG( const FgGLvoid *, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedTextureSubImage1DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLenum _6, GLsizei _7, const GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( const FgGLvoid *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetCompressedTextureImageEXT, ( GLuint _1, GLenum _2, GLint _3, GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedMultiTexImage3DEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLsizei _9, const GLvoid * _10 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ), FG4CPP_GL_ARG( const FgGLvoid *, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedMultiTexImage2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLsizei _6, GLint _7, GLsizei _8, const GLvoid * _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( const FgGLvoid *, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedMultiTexImage1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLint _6, GLsizei _7, const GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( const FgGLvoid *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedMultiTexSubImage3DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLenum _10, GLsizei _11, const GLvoid * _12 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ), FG4CPP_GL_ARG( FgGLenum, _10 ), FG4CPP_GL_ARG( FgGLsizei, _11 ), FG4CPP_GL_ARG( const FgGLvoid *, _12 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedMultiTexSubImage2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLenum _8, GLsizei _9, const GLvoid * _10 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ), FG4CPP_GL_ARG( const FgGLvoid *, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CompressedMultiTexSubImage1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLenum _6, GLsizei _7, const GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( const FgGLvoid *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetCompressedMultiTexImageEXT, ( GLenum _1, GLenum _2, GLint _3, GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixLoadTransposefEXT, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixLoadTransposedEXT, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixMultTransposefEXT, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MatrixMultTransposedEXT, ( GLenum _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedBufferDataEXT, ( GLuint _1, GLsizeiptr _2, const GLvoid * _3, GLenum _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizeiptr, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedBufferSubDataEXT, ( GLuint _1, GLintptr _2, GLsizeiptr _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLintptr, _2 ), FG4CPP_GL_ARG( FgGLsizeiptr, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( nullptr, void *, MapNamedBufferEXT, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, UnmapNamedBufferEXT, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedBufferParameterivEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedBufferPointervEXT, ( GLuint _1, GLenum _2, GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLvoid **, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedBufferSubDataEXT, ( GLuint _1, GLintptr _2, GLsizeiptr _3, GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLintptr, _2 ), FG4CPP_GL_ARG( FgGLsizeiptr, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1fEXT, ( GLuint _1, GLint _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2fEXT, ( GLuint _1, GLint _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3fEXT, ( GLuint _1, GLint _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4fEXT, ( GLuint _1, GLint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1iEXT, ( GLuint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2iEXT, ( GLuint _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3iEXT, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4iEXT, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1fvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2fvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3fvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4fvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1ivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2ivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3ivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4ivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix2fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix3fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix4fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix2x3fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix3x2fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix2x4fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix4x2fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix3x4fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix4x3fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureBufferEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexBufferEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureParameterIivEXT, ( GLuint _1, GLenum _2, GLenum _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureParameterIuivEXT, ( GLuint _1, GLenum _2, GLenum _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTextureParameterIivEXT, ( GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTextureParameterIuivEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexParameterIivEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexParameterIuivEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMultiTexParameterIivEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMultiTexParameterIuivEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1uiEXT, ( GLuint _1, GLint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2uiEXT, ( GLuint _1, GLint _2, GLuint _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3uiEXT, ( GLuint _1, GLint _2, GLuint _3, GLuint _4, GLuint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4uiEXT, ( GLuint _1, GLint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1uivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2uivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3uivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4uivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedProgramLocalParameters4fvEXT, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedProgramLocalParameterI4iEXT, ( GLuint _1, GLenum _2, GLuint _3, GLint _4, GLint _5, GLint _6, GLint _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedProgramLocalParameterI4ivEXT, ( GLuint _1, GLenum _2, GLuint _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedProgramLocalParametersI4ivEXT, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, const GLint * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLint *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedProgramLocalParameterI4uiEXT, ( GLuint _1, GLenum _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ), FG4CPP_GL_ARG( FgGLuint, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedProgramLocalParameterI4uivEXT, ( GLuint _1, GLenum _2, GLuint _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedProgramLocalParametersI4uivEXT, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, const GLuint * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLuint *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedProgramLocalParameterIivEXT, ( GLuint _1, GLenum _2, GLuint _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedProgramLocalParameterIuivEXT, ( GLuint _1, GLenum _2, GLuint _3, GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EnableClientStateiEXT, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DisableClientStateiEXT, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFloati_vEXT, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetDoublei_vEXT, ( GLenum _1, GLuint _2, GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPointeri_vEXT, ( GLenum _1, GLuint _2, GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLvoid **, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedProgramStringEXT, ( GLuint _1, GLenum _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedProgramLocalParameter4dEXT, ( GLuint _1, GLenum _2, GLuint _3, GLdouble _4, GLdouble _5, GLdouble _6, GLdouble _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ), FG4CPP_GL_ARG( FgGLdouble, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedProgramLocalParameter4dvEXT, ( GLuint _1, GLenum _2, GLuint _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedProgramLocalParameter4fEXT, ( GLuint _1, GLenum _2, GLuint _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedProgramLocalParameter4fvEXT, ( GLuint _1, GLenum _2, GLuint _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedProgramLocalParameterdvEXT, ( GLuint _1, GLenum _2, GLuint _3, GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedProgramLocalParameterfvEXT, ( GLuint _1, GLenum _2, GLuint _3, GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedProgramivEXT, ( GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedProgramStringEXT, ( GLuint _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedRenderbufferStorageEXT, ( GLuint _1, GLenum _2, GLsizei _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedRenderbufferParameterivEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedRenderbufferStorageMultisampleEXT, ( GLuint _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedRenderbufferStorageMultisampleCoverageEXT, ( GLuint _1, GLsizei _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLenum, CheckNamedFramebufferStatusEXT, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedFramebufferTexture1DEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedFramebufferTexture2DEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedFramebufferTexture3DEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint _4, GLint _5, GLint _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedFramebufferRenderbufferEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedFramebufferAttachmentParameterivEXT, ( GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenerateTextureMipmapEXT, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenerateMultiTexMipmapEXT, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferDrawBufferEXT, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferDrawBuffersEXT, ( GLuint _1, GLsizei _2, const GLenum * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLenum *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferReadBufferEXT, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFramebufferParameterivEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedCopyBufferSubDataEXT, ( GLuint _1, GLuint _2, GLintptr _3, GLintptr _4, GLsizeiptr _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLintptr, _3 ), FG4CPP_GL_ARG( FgGLintptr, _4 ), FG4CPP_GL_ARG( FgGLsizeiptr, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedFramebufferTextureEXT, ( GLuint _1, GLenum _2, GLuint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedFramebufferTextureLayerEXT, ( GLuint _1, GLenum _2, GLuint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedFramebufferTextureFaceEXT, ( GLuint _1, GLenum _2, GLuint _3, GLint _4, GLenum _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureRenderbufferEXT, ( GLuint _1, GLenum _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexRenderbufferEXT, ( GLenum _1, GLenum _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayVertexOffsetEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLsizei _5, GLintptr _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLintptr, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayColorOffsetEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLsizei _5, GLintptr _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLintptr, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayEdgeFlagOffsetEXT, ( GLuint _1, GLuint _2, GLsizei _3, GLintptr _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLintptr, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayIndexOffsetEXT, ( GLuint _1, GLuint _2, GLenum _3, GLsizei _4, GLintptr _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLintptr, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayNormalOffsetEXT, ( GLuint _1, GLuint _2, GLenum _3, GLsizei _4, GLintptr _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLintptr, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayTexCoordOffsetEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLsizei _5, GLintptr _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLintptr, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayMultiTexCoordOffsetEXT, ( GLuint _1, GLuint _2, GLenum _3, GLint _4, GLenum _5, GLsizei _6, GLintptr _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLintptr, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayFogCoordOffsetEXT, ( GLuint _1, GLuint _2, GLenum _3, GLsizei _4, GLintptr _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLintptr, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArraySecondaryColorOffsetEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLsizei _5, GLintptr _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLintptr, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayVertexAttribOffsetEXT, ( GLuint _1, GLuint _2, GLuint _3, GLint _4, GLenum _5, GLboolean _6, GLsizei _7, GLintptr _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLboolean, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLintptr, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayVertexAttribIOffsetEXT, ( GLuint _1, GLuint _2, GLuint _3, GLint _4, GLenum _5, GLsizei _6, GLintptr _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLintptr, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EnableVertexArrayEXT, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DisableVertexArrayEXT, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EnableVertexArrayAttribEXT, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DisableVertexArrayAttribEXT, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexArrayIntegervEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexArrayPointervEXT, ( GLuint _1, GLenum _2, GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLvoid **, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexArrayIntegeri_vEXT, ( GLuint _1, GLuint _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexArrayPointeri_vEXT, ( GLuint _1, GLuint _2, GLenum _3, GLvoid ** _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLvoid **, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( nullptr, void *, MapNamedBufferRangeEXT, ( GLuint _1, GLintptr _2, GLsizeiptr _3, GLbitfield _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLintptr, _2 ), FG4CPP_GL_ARG( FgGLsizeiptr, _3 ), FG4CPP_GL_ARG( FgGLbitfield, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FlushMappedNamedBufferRangeEXT, ( GLuint _1, GLintptr _2, GLsizeiptr _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLintptr, _2 ), FG4CPP_GL_ARG( FgGLsizeiptr, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedBufferStorageEXT, ( GLuint _1, GLsizeiptr _2, const void * _3, GLbitfield _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizeiptr, _2 ), FG4CPP_GL_ARG( const void *, _3 ), FG4CPP_GL_ARG( FgGLbitfield, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearNamedBufferDataEXT, ( GLuint _1, GLenum _2, GLenum _3, GLenum _4, const void * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( const void *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearNamedBufferSubDataEXT, ( GLuint _1, GLenum _2, GLenum _3, GLenum _4, GLsizeiptr _5, GLsizeiptr _6, const void * _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizeiptr, _5 ), FG4CPP_GL_ARG( FgGLsizeiptr, _6 ), FG4CPP_GL_ARG( const void *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NamedFramebufferParameteriEXT, ( GLuint _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedFramebufferParameterivEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1dEXT, ( GLuint _1, GLint _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2dEXT, ( GLuint _1, GLint _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3dEXT, ( GLuint _1, GLint _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4dEXT, ( GLuint _1, GLint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1dvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2dvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3dvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4dvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix2dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix3dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix4dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix2x3dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix2x4dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix3x2dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix3x4dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix4x2dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformMatrix4x3dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( const FgGLdouble *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureBufferRangeEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint _4, GLintptr _5, GLsizeiptr _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLintptr, _5 ), FG4CPP_GL_ARG( FgGLsizeiptr, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureStorage1DEXT, ( GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureStorage2DEXT, ( GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureStorage3DEXT, ( GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6, GLsizei _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureStorage2DMultisampleEXT, ( GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLboolean, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureStorage3DMultisampleEXT, ( GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6, GLsizei _7, GLboolean _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLboolean, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayBindVertexBufferEXT, ( GLuint _1, GLuint _2, GLuint _3, GLintptr _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLintptr, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayVertexAttribFormatEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLboolean _5, GLuint _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLboolean, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayVertexAttribIFormatEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLuint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayVertexAttribLFormatEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLuint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayVertexAttribBindingEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayVertexBindingDivisorEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayVertexAttribLOffsetEXT, ( GLuint _1, GLuint _2, GLuint _3, GLint _4, GLenum _5, GLsizei _6, GLintptr _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLintptr, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexturePageCommitmentEXT, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLboolean _9 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLboolean, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayVertexAttribDivisorEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
\
    /* GL_EXT_draw_buffers2 */ \
    FG4CPP_GL_VOID_FUNCTION( ColorMaskIndexedEXT, ( GLuint _1, GLboolean _2, GLboolean _3, GLboolean _4, GLboolean _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( FgGLboolean, _5 ) ) ) \
\
    /* GL_EXT_draw_instanced */ \
    FG4CPP_GL_VOID_FUNCTION( DrawArraysInstancedEXT, ( GLenum _1, GLint _2, GLsizei _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawElementsInstancedEXT, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
\
    /* GL_EXT_draw_range_elements */ \
    FG4CPP_GL_VOID_FUNCTION( DrawRangeElementsEXT, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4, GLenum _5, const GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( const FgGLvoid *, _6 ) ) ) \
\
    /* GL_EXT_fog_coord */ \
    FG4CPP_GL_VOID_FUNCTION( FogCoordfEXT, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogCoordfvEXT, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogCoorddEXT, ( GLdouble _1 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogCoorddvEXT, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogCoordPointerEXT, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ) ) ) \
\
    /* GL_EXT_framebuffer_blit */ \
    FG4CPP_GL_VOID_FUNCTION( BlitFramebufferEXT, ( GLint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLint _8, GLbitfield _9, GLenum _10 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLbitfield, _9 ), FG4CPP_GL_ARG( FgGLenum, _10 ) ) ) \
\
    /* GL_EXT_framebuffer_multisample */ \
    FG4CPP_GL_VOID_FUNCTION( RenderbufferStorageMultisampleEXT, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
\
    /* GL_EXT_framebuffer_multisample_blit_scaled */ \
\
    /* GL_EXT_framebuffer_object */ \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsRenderbufferEXT, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindRenderbufferEXT, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteRenderbuffersEXT, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenRenderbuffersEXT, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RenderbufferStorageEXT, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetRenderbufferParameterivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsFramebufferEXT, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindFramebufferEXT, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteFramebuffersEXT, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenFramebuffersEXT, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLenum, CheckFramebufferStatusEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTexture1DEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTexture2DEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTexture3DEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5, GLint _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferRenderbufferEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFramebufferAttachmentParameterivEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenerateMipmapEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
\
    /* GL_EXT_framebuffer_sRGB */ \
\
    /* GL_EXT_geometry_shader4 */ \
    FG4CPP_GL_VOID_FUNCTION( ProgramParameteriEXT, ( GLuint _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
\
    /* GL_EXT_gpu_program_parameters */ \
    FG4CPP_GL_VOID_FUNCTION( ProgramEnvParameters4fvEXT, ( GLenum _1, GLuint _2, GLsizei _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramLocalParameters4fvEXT, ( GLenum _1, GLuint _2, GLsizei _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
\
    /* GL_EXT_gpu_shader4 */ \
    FG4CPP_GL_VOID_FUNCTION( GetUniformuivEXT, ( GLuint _1, GLint _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindFragDataLocationEXT, ( GLuint _1, GLuint _2, const GLchar * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLchar *, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, GetFragDataLocationEXT, ( GLuint _1, const GLchar * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLchar *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1uiEXT, ( GLint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2uiEXT, ( GLint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3uiEXT, ( GLint _1, GLuint _2, GLuint _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4uiEXT, ( GLint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1uivEXT, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2uivEXT, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3uivEXT, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4uivEXT, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
\
    /* GL_EXT_histogram */ \
    FG4CPP_GL_VOID_FUNCTION( GetHistogramEXT, ( GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetHistogramParameterfvEXT, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetHistogramParameterivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMinmaxEXT, ( GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMinmaxParameterfvEXT, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMinmaxParameterivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( HistogramEXT, ( GLenum _1, GLsizei _2, GLenum _3, GLboolean _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MinmaxEXT, ( GLenum _1, GLenum _2, GLboolean _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ResetHistogramEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ResetMinmaxEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
\
    /* GL_EXT_index_array_formats */ \
\
    /* GL_EXT_index_func */ \
    FG4CPP_GL_VOID_FUNCTION( IndexFuncEXT, ( GLenum _1, GLclampf _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLclampf, _2 ) ) ) \
\
    /* GL_EXT_index_material */ \
    FG4CPP_GL_VOID_FUNCTION( IndexMaterialEXT, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
\
    /* GL_EXT_index_texture */ \
\
    /* GL_EXT_light_texture */ \
    FG4CPP_GL_VOID_FUNCTION( ApplyTextureEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureLightEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureMaterialEXT, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
\
    /* GL_EXT_misc_attribute */ \
\
    /* GL_EXT_multi_draw_arrays */ \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawArraysEXT, ( GLenum _1, const GLint * _2, const GLsizei * _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ), FG4CPP_GL_ARG( const FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawElementsEXT, ( GLenum _1, const GLsizei * _2, GLenum _3, const GLvoid *const* _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLsizei *, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *const*, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
\
    /* GL_EXT_multisample */ \
    FG4CPP_GL_VOID_FUNCTION( SampleMaskEXT, ( GLclampf _1, GLboolean _2 ), ( FG4CPP_GL_ARG( FgGLclampf, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SamplePatternEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
\
    /* GL_EXT_packed_depth_stencil */ \
\
    /* GL_EXT_packed_float */ \
\
    /* GL_EXT_packed_pixels */ \
\
    /* GL_EXT_paletted_texture */ \
    FG4CPP_GL_VOID_FUNCTION( ColorTableEXT, ( GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( const FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetColorTableEXT, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetColorTableParameterivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetColorTableParameterfvEXT, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
\
    /* GL_EXT_pixel_buffer_object */ \
\
    /* GL_EXT_pixel_transform */ \
    FG4CPP_GL_VOID_FUNCTION( PixelTransformParameteriEXT, ( GLenum _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelTransformParameterfEXT, ( GLenum _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelTransformParameterivEXT, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelTransformParameterfvEXT, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPixelTransformParameterivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPixelTransformParameterfvEXT, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
\
    /* GL_EXT_pixel_transform_color_table */ \
\
    /* GL_EXT_point_parameters */ \
    FG4CPP_GL_VOID_FUNCTION( PointParameterfEXT, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PointParameterfvEXT, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
\
    /* GL_EXT_polygon_offset */ \
    FG4CPP_GL_VOID_FUNCTION( PolygonOffsetEXT, ( GLfloat _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
\
    /* GL_EXT_provoking_vertex */ \
    FG4CPP_GL_VOID_FUNCTION( ProvokingVertexEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
\
    /* GL_EXT_rescale_normal */ \
\
    /* GL_EXT_secondary_color */ \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3bEXT, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ), FG4CPP_GL_ARG( FgGLbyte, _2 ), FG4CPP_GL_ARG( FgGLbyte, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3bvEXT, ( const GLbyte * _1 ), ( FG4CPP_GL_ARG( const FgGLbyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3dEXT, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3dvEXT, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3fEXT, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3fvEXT, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3iEXT, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3ivEXT, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3sEXT, ( GLshort _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3svEXT, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3ubEXT, ( GLubyte _1, GLubyte _2, GLubyte _3 ), ( FG4CPP_GL_ARG( FgGLubyte, _1 ), FG4CPP_GL_ARG( FgGLubyte, _2 ), FG4CPP_GL_ARG( FgGLubyte, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3ubvEXT, ( const GLubyte * _1 ), ( FG4CPP_GL_ARG( const FgGLubyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3uiEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3uivEXT, ( const GLuint * _1 ), ( FG4CPP_GL_ARG( const FgGLuint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3usEXT, ( GLushort _1, GLushort _2, GLushort _3 ), ( FG4CPP_GL_ARG( FgGLushort, _1 ), FG4CPP_GL_ARG( FgGLushort, _2 ), FG4CPP_GL_ARG( FgGLushort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3usvEXT, ( const GLushort * _1 ), ( FG4CPP_GL_ARG( const FgGLushort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColorPointerEXT, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
\
    /* GL_EXT_separate_shader_objects */ \
    FG4CPP_GL_VOID_FUNCTION( UseShaderProgramEXT, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ActiveProgramEXT, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, CreateShaderProgramEXT, ( GLenum _1, const GLchar * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLchar *, _2 ) ) ) \
\
    /* GL_EXT_separate_specular_color */ \
\
    /* GL_EXT_shader_image_load_store */ \
    FG4CPP_GL_VOID_FUNCTION( BindImageTextureEXT, ( GLuint _1, GLuint _2, GLint _3, GLboolean _4, GLint _5, GLenum _6, GLint _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MemoryBarrierEXT, ( GLbitfield _1 ), ( FG4CPP_GL_ARG( FgGLbitfield, _1 ) ) ) \
\
    /* GL_EXT_shadow_funcs */ \
\
    /* GL_EXT_shared_texture_palette */ \
\
    /* GL_EXT_stencil_clear_tag */ \
    FG4CPP_GL_VOID_FUNCTION( StencilClearTagEXT, ( GLsizei _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
\
    /* GL_EXT_stencil_two_side */ \
    FG4CPP_GL_VOID_FUNCTION( ActiveStencilFaceEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
\
    /* GL_EXT_stencil_wrap */ \
\
    /* GL_EXT_subtexture */ \
    FG4CPP_GL_VOID_FUNCTION( TexSubImage1DEXT, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( const FgGLvoid *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexSubImage2DEXT, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( const FgGLvoid *, _9 ) ) ) \
\
    /* GL_EXT_texture */ \
\
    /* GL_EXT_texture3D */ \
    FG4CPP_GL_VOID_FUNCTION( TexImage3DEXT, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLint _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( const FgGLvoid *, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexSubImage3DEXT, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( FgGLenum, _10 ), FG4CPP_GL_ARG( const FgGLvoid *, _11 ) ) ) \
\
    /* GL_EXT_texture_array */ \
\
    /* GL_EXT_texture_buffer_object */ \
    FG4CPP_GL_VOID_FUNCTION( TexBufferEXT, ( GLenum _1, GLenum _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( TexParameterIivEXT, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexParameterIuivEXT, ( GLenum _1, GLenum _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexParameterIivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTexParameterIuivEXT, ( GLenum _1, GLenum _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearColorIiEXT, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearColorIuiEXT, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
\
    /* GL_EXT_texture_lod_bias */ \
\
    /* GL_EXT_texture_mirror_clamp */ \
\
    /* GL_EXT_texture_object */ \
    FG4CPP_GL_FUNCTION( 0, GLboolean, AreTexturesResidentEXT, ( GLsizei _1, const GLuint * _2, GLboolean * _3 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ), FG4CPP_GL_ARG( FgGLboolean *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindTextureEXT, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteTexturesEXT, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenTexturesEXT, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsTextureEXT, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PrioritizeTexturesEXT, ( GLsizei _1, const GLuint * _2, const GLclampf * _3 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ), FG4CPP_GL_ARG( const FgGLclampf *, _3 ) ) ) \
\
    /* GL_EXT_texture_perturb_normal */ \
    FG4CPP_GL_VOID_FUNCTION( TextureNormalEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( GetQueryObjecti64vEXT, ( GLuint _1, GLenum _2, GLint64 * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint64 *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetQueryObjectui64vEXT, ( GLuint _1, GLenum _2, GLuint64 * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint64 *, _3 ) ) ) \
\
    /* GL_EXT_transform_feedback */ \
    FG4CPP_GL_VOID_FUNCTION( BeginTransformFeedbackEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndTransformFeedbackEXT, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindBufferRangeEXT, ( GLenum _1, GLuint _2, GLuint _3, GLintptr _4, GLsizeiptr _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLintptr, _4 ), FG4CPP_GL_ARG( FgGLsizeiptr, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindBufferOffsetEXT, ( GLenum _1, GLuint _2, GLuint _3, GLintptr _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLintptr, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindBufferBaseEXT, ( GLenum _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TransformFeedbackVaryingsEXT, ( GLuint _1, GLsizei _2, const GLchar *const* _3, GLenum _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLchar *const*, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTransformFeedbackVaryingEXT, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLsizei * _5, GLenum * _6, GLchar * _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei *, _4 ), FG4CPP_GL_ARG( FgGLsizei *, _5 ), FG4CPP_GL_ARG( FgGLenum *, _6 ), FG4CPP_GL_ARG( FgGLchar *, _7 ) ) ) \
\
    /* GL_EXT_vertex_array */ \
    FG4CPP_GL_VOID_FUNCTION( ArrayElementEXT, ( GLint _1 ), ( FG4CPP_GL_ARG( FgGLint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorPointerEXT, ( GLint _1, GLenum _2, GLsizei _3, GLsizei _4, const GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawArraysEXT, ( GLenum _1, GLint _2, GLsizei _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EdgeFlagPointerEXT, ( GLsizei _1, GLsizei _2, const GLboolean * _3 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLboolean *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPointervEXT, ( GLenum _1, GLvoid ** _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLvoid **, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( IndexPointerEXT, ( GLenum _1, GLsizei _2, GLsizei _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalPointerEXT, ( GLenum _1, GLsizei _2, GLsizei _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoordPointerEXT, ( GLint _1, GLenum _2, GLsizei _3, GLsizei _4, const GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexPointerEXT, ( GLint _1, GLenum _2, GLsizei _3, GLsizei _4, const GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLvoid *, _5 ) ) ) \
\
    /* GL_EXT_vertex_array_bgra */ \
\
    /* GL_EXT_vertex_attrib_64bit */ \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL1dEXT, ( GLuint _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL2dEXT, ( GLuint _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL3dEXT, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL4dEXT, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL1dvEXT, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL2dvEXT, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL3dvEXT, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL4dvEXT, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribLPointerEXT, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribLdvEXT, ( GLuint _1, GLenum _2, GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLdouble *, _3 ) ) ) \
\
    /* GL_EXT_vertex_shader */ \
    FG4CPP_GL_VOID_FUNCTION( BeginVertexShaderEXT, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndVertexShaderEXT, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindVertexShaderEXT, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, GenVertexShadersEXT, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteVertexShaderEXT, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ShaderOp1EXT, ( GLenum _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ShaderOp2EXT, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ShaderOp3EXT, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SwizzleEXT, ( GLuint _1, GLuint _2, GLenum _3, GLenum _4, GLenum _5, GLenum _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WriteMaskEXT, ( GLuint _1, GLuint _2, GLenum _3, GLenum _4, GLenum _5, GLenum _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( InsertComponentEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ExtractComponentEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, GenSymbolsEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SetInvariantEXT, ( GLuint _1, GLenum _2, const GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SetLocalConstantEXT, ( GLuint _1, GLenum _2, const GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VariantbvEXT, ( GLuint _1, const GLbyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLbyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VariantsvEXT, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VariantivEXT, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VariantfvEXT, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VariantdvEXT, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VariantubvEXT, ( GLuint _1, const GLubyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLubyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VariantusvEXT, ( GLuint _1, const GLushort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLushort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VariantuivEXT, ( GLuint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VariantPointerEXT, ( GLuint _1, GLenum _2, GLuint _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EnableVariantClientStateEXT, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DisableVariantClientStateEXT, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, BindLightParameterEXT, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, BindMaterialParameterEXT, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, BindTexGenParameterEXT, ( GLenum _1, GLenum _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, BindTextureUnitParameterEXT, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, BindParameterEXT, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsVariantEnabledEXT, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVariantBooleanvEXT, ( GLuint _1, GLenum _2, GLboolean * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLboolean *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVariantIntegervEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVariantFloatvEXT, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVariantPointervEXT, ( GLuint _1, GLenum _2, GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLvoid **, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetInvariantBooleanvEXT, ( GLuint _1, GLenum _2, GLboolean * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLboolean *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetInvariantIntegervEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetInvariantFloatvEXT, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetLocalConstantBooleanvEXT, ( GLuint _1, GLenum _2, GLboolean * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLboolean *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetLocalConstantIntegervEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetLocalConstantFloatvEXT, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
\
    /* GL_EXT_vertex_weighting */ \
    FG4CPP_GL_VOID_FUNCTION( VertexWeightfEXT, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexWeightfvEXT, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexWeightPointerEXT, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
\
    /* GL_EXT_x11_sync_object */ \
    FG4CPP_GL_FUNCTION( nullptr, GLsync, ImportSyncEXT, ( GLenum _1, GLintptr _2, GLbitfield _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLintptr, _2 ), FG4CPP_GL_ARG( FgGLbitfield, _3 ) ) ) \
\
    /* GL_GREMEDY_frame_terminator */ \
    FG4CPP_GL_VOID_FUNCTION( FrameTerminatorGREMEDY, ( ), ( ) ) \
\
    /* GL_GREMEDY_string_marker */ \
    FG4CPP_GL_VOID_FUNCTION( StringMarkerGREMEDY, ( GLsizei _1, const GLvoid * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLvoid *, _2 ) ) ) \
\
    /* GL_HP_convolution_border_modes */ \
\
    /* GL_HP_image_transform */ \
    FG4CPP_GL_VOID_FUNCTION( ImageTransformParameteriHP, ( GLenum _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ImageTransformParameterfHP, ( GLenum _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ImageTransformParameterivHP, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ImageTransformParameterfvHP, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetImageTransformParameterivHP, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetImageTransformParameterfvHP, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
\
    /* GL_HP_occlusion_test */ \
\
    /* GL_HP_texture_lighting */ \
\
    /* GL_IBM_cull_vertex */ \
\
    /* GL_IBM_multimode_draw_arrays */ \
    FG4CPP_GL_VOID_FUNCTION( MultiModeDrawArraysIBM, ( const GLenum * _1, const GLint * _2, const GLsizei * _3, GLsizei _4, GLint _5 ), ( FG4CPP_GL_ARG( const FgGLenum *, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ), FG4CPP_GL_ARG( const FgGLsizei *, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiModeDrawElementsIBM, ( const GLenum * _1, const GLsizei * _2, GLenum _3, const GLvoid *const* _4, GLsizei _5, GLint _6 ), ( FG4CPP_GL_ARG( const FgGLenum *, _1 ), FG4CPP_GL_ARG( const FgGLsizei *, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *const*, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ) ) ) \
\
    /* GL_IBM_rasterpos_clip */ \
\
    /* GL_IBM_static_data */ \
    FG4CPP_GL_VOID_FUNCTION( FlushStaticDataIBM, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
\
    /* GL_IBM_texture_mirrored_repeat */ \
\
    /* GL_IBM_vertex_array_lists */ \
    FG4CPP_GL_VOID_FUNCTION( ColorPointerListIBM, ( GLint _1, GLenum _2, GLint _3, const GLvoid ** _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( const FgGLvoid **, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColorPointerListIBM, ( GLint _1, GLenum _2, GLint _3, const GLvoid ** _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( const FgGLvoid **, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EdgeFlagPointerListIBM, ( GLint _1, const GLboolean ** _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( const FgGLboolean **, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogCoordPointerListIBM, ( GLenum _1, GLint _2, const GLvoid ** _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( const FgGLvoid **, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( IndexPointerListIBM, ( GLenum _1, GLint _2, const GLvoid ** _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( const FgGLvoid **, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalPointerListIBM, ( GLenum _1, GLint _2, const GLvoid ** _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( const FgGLvoid **, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoordPointerListIBM, ( GLint _1, GLenum _2, GLint _3, const GLvoid ** _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( const FgGLvoid **, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexPointerListIBM, ( GLint _1, GLenum _2, GLint _3, const GLvoid ** _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( const FgGLvoid **, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
\
    /* GL_INGR_blend_func_separate */ \
    FG4CPP_GL_VOID_FUNCTION( BlendFuncSeparateINGR, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ) ) ) \
\
    /* GL_INGR_color_clamp */ \
\
    /* GL_INGR_interlace_read */ \
\
    /* GL_INTEL_map_texture */ \
    FG4CPP_GL_VOID_FUNCTION( SyncTextureINTEL, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UnmapTexture2DINTEL, ( GLuint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( nullptr, void *, MapTexture2DINTEL, ( GLuint _1, GLint _2, GLbitfield _3, const GLint * _4, const GLenum * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLbitfield, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ), FG4CPP_GL_ARG( const FgGLenum *, _5 ) ) ) \
\
    /* GL_INTEL_parallel_arrays */ \
    FG4CPP_GL_VOID_FUNCTION( VertexPointervINTEL, ( GLint _1, GLenum _2, const GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid **, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalPointervINTEL, ( GLenum _1, const GLvoid ** _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLvoid **, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorPointervINTEL, ( GLint _1, GLenum _2, const GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid **, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoordPointervINTEL, ( GLint _1, GLenum _2, const GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid **, _3 ) ) ) \
\
    /* GL_MESAX_texture_stack */ \
\
    /* GL_MESA_pack_invert */ \
\
    /* GL_MESA_resize_buffers */ \
    FG4CPP_GL_VOID_FUNCTION( ResizeBuffersMESA, ( ), ( ) ) \
\
    /* GL_MESA_window_pos */ \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2dMESA, ( GLdouble _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2dvMESA, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2fMESA, ( GLfloat _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2fvMESA, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2iMESA, ( GLint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2ivMESA, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2sMESA, ( GLshort _1, GLshort _2 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos2svMESA, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3dMESA, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3dvMESA, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3fMESA, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3fvMESA, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3iMESA, ( GLint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3ivMESA, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3sMESA, ( GLshort _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos3svMESA, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos4dMESA, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos4dvMESA, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos4fMESA, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos4fvMESA, ( const GLfloat * _1 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos4iMESA, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos4ivMESA, ( const GLint * _1 ), ( FG4CPP_GL_ARG( const FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos4sMESA, ( GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WindowPos4svMESA, ( const GLshort * _1 ), ( FG4CPP_GL_ARG( const FgGLshort *, _1 ) ) ) \
\
    /* GL_MESA_ycbcr_texture */ \
\
    /* GL_NVX_conditional_render */ \
    FG4CPP_GL_VOID_FUNCTION( BeginConditionalRenderNVX, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndConditionalRenderNVX, ( ), ( ) ) \
\
    /* GL_NV_bindless_multi_draw_indirect */ \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawArraysIndirectBindlessNV, ( GLenum _1, const GLvoid * _2, GLsizei _3, GLsizei _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLvoid *, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiDrawElementsIndirectBindlessNV, ( GLenum _1, GLenum _2, const GLvoid * _3, GLsizei _4, GLsizei _5, GLint _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ) ) ) \
\
    /* GL_NV_bindless_texture */ \
    FG4CPP_GL_FUNCTION( 0, GLuint64, GetTextureHandleNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint64, GetTextureSamplerHandleNV, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MakeTextureHandleResidentNV, ( GLuint64 _1 ), ( FG4CPP_GL_ARG( FgGLuint64, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MakeTextureHandleNonResidentNV, ( GLuint64 _1 ), ( FG4CPP_GL_ARG( FgGLuint64, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint64, GetImageHandleNV, ( GLuint _1, GLint _2, GLboolean _3, GLint _4, GLenum _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MakeImageHandleResidentNV, ( GLuint64 _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint64, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MakeImageHandleNonResidentNV, ( GLuint64 _1 ), ( FG4CPP_GL_ARG( FgGLuint64, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformHandleui64NV, ( GLint _1, GLuint64 _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint64, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( UniformHandleui64vNV, ( GLint _1, GLsizei _2, const GLuint64 * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint64 *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformHandleui64NV, ( GLuint _1, GLint _2, GLuint64 _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint64, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformHandleui64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64 * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint64 *, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsTextureHandleResidentNV, ( GLuint64 _1 ), ( FG4CPP_GL_ARG( FgGLuint64, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsImageHandleResidentNV, ( GLuint64 _1 ), ( FG4CPP_GL_ARG( FgGLuint64, _1 ) ) ) \
\
    /* GL_NV_blend_equation_advanced */ \
    FG4CPP_GL_VOID_FUNCTION( BlendParameteriNV, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BlendBarrierNV, ( ), ( ) ) \
\
    /* GL_NV_blend_equation_advanced_coherent */ \
\
    /* GL_NV_blend_square */ \
\
    /* GL_NV_compute_program5 */ \
\
    /* GL_NV_conditional_render */ \
    FG4CPP_GL_VOID_FUNCTION( BeginConditionalRenderNV, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndConditionalRenderNV, ( ), ( ) ) \
\
    /* GL_NV_copy_depth_to_color */ \
\
    /* GL_NV_copy_image */ \
    FG4CPP_GL_VOID_FUNCTION( CopyImageSubDataNV, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLuint _7, GLenum _8, GLint _9, GLint _10, GLint _11, GLint _12, GLsizei _13, GLsizei _14, GLsizei _15 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLuint, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( FgGLint, _9 ), FG4CPP_GL_ARG( FgGLint, _10 ), FG4CPP_GL_ARG( FgGLint, _11 ), FG4CPP_GL_ARG( FgGLint, _12 ), FG4CPP_GL_ARG( FgGLsizei, _13 ), FG4CPP_GL_ARG( FgGLsizei, _14 ), FG4CPP_GL_ARG( FgGLsizei, _15 ) ) ) \
\
    /* GL_NV_deep_texture3D */ \
\
    /* GL_NV_depth_buffer_float */ \
    FG4CPP_GL_VOID_FUNCTION( DepthRangedNV, ( GLdouble _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ClearDepthdNV, ( GLdouble _1 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DepthBoundsdNV, ( GLdouble _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
\
    /* GL_NV_depth_clamp */ \
\
    /* GL_NV_draw_texture */ \
    FG4CPP_GL_VOID_FUNCTION( DrawTextureNV, ( GLuint _1, GLuint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLfloat, _8 ), FG4CPP_GL_ARG( FgGLfloat, _9 ), FG4CPP_GL_ARG( FgGLfloat, _10 ), FG4CPP_GL_ARG( FgGLfloat, _11 ) ) ) \
\
    /* GL_NV_evaluators */ \
    FG4CPP_GL_VOID_FUNCTION( MapControlPointsNV, ( GLenum _1, GLuint _2, GLenum _3, GLsizei _4, GLsizei _5, GLint _6, GLint _7, GLboolean _8, const GLvoid * _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLint, _7 ), FG4CPP_GL_ARG( FgGLboolean, _8 ), FG4CPP_GL_ARG( const FgGLvoid *, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MapParameterivNV, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MapParameterfvNV, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMapControlPointsNV, ( GLenum _1, GLuint _2, GLenum _3, GLsizei _4, GLsizei _5, GLboolean _6, GLvoid * _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLboolean, _6 ), FG4CPP_GL_ARG( FgGLvoid *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMapParameterivNV, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMapParameterfvNV, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMapAttribParameterivNV, ( GLenum _1, GLuint _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetMapAttribParameterfvNV, ( GLenum _1, GLuint _2, GLenum _3, GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EvalMapsNV, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
\
    /* GL_NV_explicit_multisample */ \
    FG4CPP_GL_VOID_FUNCTION( GetMultisamplefvNV, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SampleMaskIndexedNV, ( GLuint _1, GLbitfield _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLbitfield, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexRenderbufferNV, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
\
    /* GL_NV_fence */ \
    FG4CPP_GL_VOID_FUNCTION( DeleteFencesNV, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenFencesNV, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsFenceNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, TestFenceNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFenceivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FinishFenceNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SetFenceNV, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
\
    /* GL_NV_float_buffer */ \
\
    /* GL_NV_fog_distance */ \
\
    /* GL_NV_fragment_program */ \
    FG4CPP_GL_VOID_FUNCTION( ProgramNamedParameter4fNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLubyte *, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramNamedParameter4fvNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLubyte *, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramNamedParameter4dNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, GLdouble _4, GLdouble _5, GLdouble _6, GLdouble _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLubyte *, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ), FG4CPP_GL_ARG( FgGLdouble, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramNamedParameter4dvNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLubyte *, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramNamedParameterfvNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLubyte *, _3 ), FG4CPP_GL_ARG( FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramNamedParameterdvNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLubyte *, _3 ), FG4CPP_GL_ARG( FgGLdouble *, _4 ) ) ) \
\
    /* GL_NV_fragment_program2 */ \
\
    /* GL_NV_fragment_program4 */ \
\
    /* GL_NV_fragment_program_option */ \
\
    /* GL_NV_framebuffer_multisample_coverage */ \
    FG4CPP_GL_VOID_FUNCTION( RenderbufferStorageMultisampleCoverageNV, ( GLenum _1, GLsizei _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ) ) ) \
\
    /* GL_NV_geometry_program4 */ \
    FG4CPP_GL_VOID_FUNCTION( ProgramVertexLimitNV, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTextureEXT, ( GLenum _1, GLenum _2, GLuint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTextureLayerEXT, ( GLenum _1, GLenum _2, GLuint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FramebufferTextureFaceEXT, ( GLenum _1, GLenum _2, GLuint _3, GLint _4, GLenum _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ) ) ) \
\
    /* GL_NV_geometry_shader4 */ \
\
    /* GL_NV_gpu_program4 */ \
    FG4CPP_GL_VOID_FUNCTION( ProgramLocalParameterI4iNV, ( GLenum _1, GLuint _2, GLint _3, GLint _4, GLint _5, GLint _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramLocalParameterI4ivNV, ( GLenum _1, GLuint _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramLocalParametersI4ivNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramLocalParameterI4uiNV, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramLocalParameterI4uivNV, ( GLenum _1, GLuint _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramLocalParametersI4uivNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramEnvParameterI4iNV, ( GLenum _1, GLuint _2, GLint _3, GLint _4, GLint _5, GLint _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramEnvParameterI4ivNV, ( GLenum _1, GLuint _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramEnvParametersI4ivNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramEnvParameterI4uiNV, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramEnvParameterI4uivNV, ( GLenum _1, GLuint _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramEnvParametersI4uivNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramLocalParameterIivNV, ( GLenum _1, GLuint _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramLocalParameterIuivNV, ( GLenum _1, GLuint _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramEnvParameterIivNV, ( GLenum _1, GLuint _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramEnvParameterIuivNV, ( GLenum _1, GLuint _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
\
    /* GL_NV_gpu_program5 */ \
    FG4CPP_GL_VOID_FUNCTION( ProgramSubroutineParametersuivNV, ( GLenum _1, GLsizei _2, const GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramSubroutineParameteruivNV, ( GLenum _1, GLuint _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
\
    /* GL_NV_gpu_program5_mem_extended */ \
\
    /* GL_NV_gpu_shader5 */ \
    FG4CPP_GL_VOID_FUNCTION( Uniform1i64NV, ( GLint _1, GLint64EXT _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint64EXT, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2i64NV, ( GLint _1, GLint64EXT _2, GLint64EXT _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint64EXT, _2 ), FG4CPP_GL_ARG( FgGLint64EXT, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3i64NV, ( GLint _1, GLint64EXT _2, GLint64EXT _3, GLint64EXT _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint64EXT, _2 ), FG4CPP_GL_ARG( FgGLint64EXT, _3 ), FG4CPP_GL_ARG( FgGLint64EXT, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4i64NV, ( GLint _1, GLint64EXT _2, GLint64EXT _3, GLint64EXT _4, GLint64EXT _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLint64EXT, _2 ), FG4CPP_GL_ARG( FgGLint64EXT, _3 ), FG4CPP_GL_ARG( FgGLint64EXT, _4 ), FG4CPP_GL_ARG( FgGLint64EXT, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1i64vNV, ( GLint _1, GLsizei _2, const GLint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2i64vNV, ( GLint _1, GLsizei _2, const GLint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3i64vNV, ( GLint _1, GLsizei _2, const GLint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4i64vNV, ( GLint _1, GLsizei _2, const GLint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1ui64NV, ( GLint _1, GLuint64EXT _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint64EXT, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2ui64NV, ( GLint _1, GLuint64EXT _2, GLuint64EXT _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint64EXT, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3ui64NV, ( GLint _1, GLuint64EXT _2, GLuint64EXT _3, GLuint64EXT _4 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint64EXT, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT, _3 ), FG4CPP_GL_ARG( FgGLuint64EXT, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4ui64NV, ( GLint _1, GLuint64EXT _2, GLuint64EXT _3, GLuint64EXT _4, GLuint64EXT _5 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint64EXT, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT, _3 ), FG4CPP_GL_ARG( FgGLuint64EXT, _4 ), FG4CPP_GL_ARG( FgGLuint64EXT, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform1ui64vNV, ( GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform2ui64vNV, ( GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform3ui64vNV, ( GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniform4ui64vNV, ( GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetUniformi64vNV, ( GLuint _1, GLint _2, GLint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1i64NV, ( GLuint _1, GLint _2, GLint64EXT _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint64EXT, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2i64NV, ( GLuint _1, GLint _2, GLint64EXT _3, GLint64EXT _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint64EXT, _3 ), FG4CPP_GL_ARG( FgGLint64EXT, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3i64NV, ( GLuint _1, GLint _2, GLint64EXT _3, GLint64EXT _4, GLint64EXT _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint64EXT, _3 ), FG4CPP_GL_ARG( FgGLint64EXT, _4 ), FG4CPP_GL_ARG( FgGLint64EXT, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4i64NV, ( GLuint _1, GLint _2, GLint64EXT _3, GLint64EXT _4, GLint64EXT _5, GLint64EXT _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint64EXT, _3 ), FG4CPP_GL_ARG( FgGLint64EXT, _4 ), FG4CPP_GL_ARG( FgGLint64EXT, _5 ), FG4CPP_GL_ARG( FgGLint64EXT, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1i64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLint64EXT * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint64EXT *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2i64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLint64EXT * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint64EXT *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3i64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLint64EXT * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint64EXT *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4i64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLint64EXT * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint64EXT *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1ui64NV, ( GLuint _1, GLint _2, GLuint64EXT _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2ui64NV, ( GLuint _1, GLint _2, GLuint64EXT _3, GLuint64EXT _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT, _3 ), FG4CPP_GL_ARG( FgGLuint64EXT, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3ui64NV, ( GLuint _1, GLint _2, GLuint64EXT _3, GLuint64EXT _4, GLuint64EXT _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT, _3 ), FG4CPP_GL_ARG( FgGLuint64EXT, _4 ), FG4CPP_GL_ARG( FgGLuint64EXT, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4ui64NV, ( GLuint _1, GLint _2, GLuint64EXT _3, GLuint64EXT _4, GLuint64EXT _5, GLuint64EXT _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT, _3 ), FG4CPP_GL_ARG( FgGLuint64EXT, _4 ), FG4CPP_GL_ARG( FgGLuint64EXT, _5 ), FG4CPP_GL_ARG( FgGLuint64EXT, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform1ui64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform2ui64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform3ui64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniform4ui64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _4 ) ) ) \
\
    /* GL_NV_half_float */ \
    FG4CPP_GL_VOID_FUNCTION( Vertex2hNV, ( GLhalfNV _1, GLhalfNV _2 ), ( FG4CPP_GL_ARG( FgGLhalfNV, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex2hvNV, ( const GLhalfNV * _1 ), ( FG4CPP_GL_ARG( const FgGLhalfNV *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( FG4CPP_GL_ARG( FgGLhalfNV, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex3hvNV, ( const GLhalfNV * _1 ), ( FG4CPP_GL_ARG( const FgGLhalfNV *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( FG4CPP_GL_ARG( FgGLhalfNV, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ), FG4CPP_GL_ARG( FgGLhalfNV, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Vertex4hvNV, ( const GLhalfNV * _1 ), ( FG4CPP_GL_ARG( const FgGLhalfNV *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( FG4CPP_GL_ARG( FgGLhalfNV, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3hvNV, ( const GLhalfNV * _1 ), ( FG4CPP_GL_ARG( const FgGLhalfNV *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( FG4CPP_GL_ARG( FgGLhalfNV, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3hvNV, ( const GLhalfNV * _1 ), ( FG4CPP_GL_ARG( const FgGLhalfNV *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( FG4CPP_GL_ARG( FgGLhalfNV, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ), FG4CPP_GL_ARG( FgGLhalfNV, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4hvNV, ( const GLhalfNV * _1 ), ( FG4CPP_GL_ARG( const FgGLhalfNV *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1hNV, ( GLhalfNV _1 ), ( FG4CPP_GL_ARG( FgGLhalfNV, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord1hvNV, ( const GLhalfNV * _1 ), ( FG4CPP_GL_ARG( const FgGLhalfNV *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2hNV, ( GLhalfNV _1, GLhalfNV _2 ), ( FG4CPP_GL_ARG( FgGLhalfNV, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2hvNV, ( const GLhalfNV * _1 ), ( FG4CPP_GL_ARG( const FgGLhalfNV *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( FG4CPP_GL_ARG( FgGLhalfNV, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord3hvNV, ( const GLhalfNV * _1 ), ( FG4CPP_GL_ARG( const FgGLhalfNV *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( FG4CPP_GL_ARG( FgGLhalfNV, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ), FG4CPP_GL_ARG( FgGLhalfNV, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4hvNV, ( const GLhalfNV * _1 ), ( FG4CPP_GL_ARG( const FgGLhalfNV *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1hNV, ( GLenum _1, GLhalfNV _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord1hvNV, ( GLenum _1, const GLhalfNV * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLhalfNV *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2hNV, ( GLenum _1, GLhalfNV _2, GLhalfNV _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord2hvNV, ( GLenum _1, const GLhalfNV * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLhalfNV *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3hNV, ( GLenum _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ), FG4CPP_GL_ARG( FgGLhalfNV, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord3hvNV, ( GLenum _1, const GLhalfNV * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLhalfNV *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4hNV, ( GLenum _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4, GLhalfNV _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ), FG4CPP_GL_ARG( FgGLhalfNV, _4 ), FG4CPP_GL_ARG( FgGLhalfNV, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MultiTexCoord4hvNV, ( GLenum _1, const GLhalfNV * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLhalfNV *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogCoordhNV, ( GLhalfNV _1 ), ( FG4CPP_GL_ARG( FgGLhalfNV, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogCoordhvNV, ( const GLhalfNV * _1 ), ( FG4CPP_GL_ARG( const FgGLhalfNV *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( FG4CPP_GL_ARG( FgGLhalfNV, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColor3hvNV, ( const GLhalfNV * _1 ), ( FG4CPP_GL_ARG( const FgGLhalfNV *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexWeighthNV, ( GLhalfNV _1 ), ( FG4CPP_GL_ARG( FgGLhalfNV, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexWeighthvNV, ( const GLhalfNV * _1 ), ( FG4CPP_GL_ARG( const FgGLhalfNV *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1hNV, ( GLuint _1, GLhalfNV _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1hvNV, ( GLuint _1, const GLhalfNV * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLhalfNV *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2hNV, ( GLuint _1, GLhalfNV _2, GLhalfNV _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2hvNV, ( GLuint _1, const GLhalfNV * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLhalfNV *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3hNV, ( GLuint _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ), FG4CPP_GL_ARG( FgGLhalfNV, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3hvNV, ( GLuint _1, const GLhalfNV * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLhalfNV *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4hNV, ( GLuint _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4, GLhalfNV _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLhalfNV, _2 ), FG4CPP_GL_ARG( FgGLhalfNV, _3 ), FG4CPP_GL_ARG( FgGLhalfNV, _4 ), FG4CPP_GL_ARG( FgGLhalfNV, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4hvNV, ( GLuint _1, const GLhalfNV * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLhalfNV *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs1hvNV, ( GLuint _1, GLsizei _2, const GLhalfNV * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLhalfNV *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs2hvNV, ( GLuint _1, GLsizei _2, const GLhalfNV * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLhalfNV *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs3hvNV, ( GLuint _1, GLsizei _2, const GLhalfNV * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLhalfNV *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs4hvNV, ( GLuint _1, GLsizei _2, const GLhalfNV * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLhalfNV *, _3 ) ) ) \
\
    /* GL_NV_light_max_exponent */ \
\
    /* GL_NV_multisample_coverage */ \
\
    /* GL_NV_multisample_filter_hint */ \
\
    /* GL_NV_occlusion_query */ \
    FG4CPP_GL_VOID_FUNCTION( GenOcclusionQueriesNV, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteOcclusionQueriesNV, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsOcclusionQueryNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BeginOcclusionQueryNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndOcclusionQueryNV, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetOcclusionQueryivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetOcclusionQueryuivNV, ( GLuint _1, GLenum _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
\
    /* GL_NV_packed_depth_stencil */ \
\
    /* GL_NV_parameter_buffer_object */ \
    FG4CPP_GL_VOID_FUNCTION( ProgramBufferParametersfvNV, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramBufferParametersIivNV, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4, const GLint * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLint *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramBufferParametersIuivNV, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4, const GLuint * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLuint *, _5 ) ) ) \
\
    /* GL_NV_parameter_buffer_object2 */ \
\
    /* GL_NV_path_rendering */ \
    FG4CPP_GL_FUNCTION( 0, GLuint, GenPathsNV, ( GLsizei _1 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeletePathsNV, ( GLuint _1, GLsizei _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsPathNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathCommandsNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, GLsizei _4, GLenum _5, const GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLubyte *, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( const FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathCoordsNV, ( GLuint _1, GLsizei _2, GLenum _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathSubCommandsNV, ( GLuint _1, GLsizei _2, GLsizei _3, GLsizei _4, const GLubyte * _5, GLsizei _6, GLenum _7, const GLvoid * _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLubyte *, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( const FgGLvoid *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathSubCoordsNV, ( GLuint _1, GLsizei _2, GLsizei _3, GLenum _4, const GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( const FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathStringNV, ( GLuint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathGlyphsNV, ( GLuint _1, GLenum _2, const GLvoid * _3, GLbitfield _4, GLsizei _5, GLenum _6, const GLvoid * _7, GLenum _8, GLuint _9, GLfloat _10 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ), FG4CPP_GL_ARG( FgGLbitfield, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( const FgGLvoid *, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( FgGLuint, _9 ), FG4CPP_GL_ARG( FgGLfloat, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathGlyphRangeNV, ( GLuint _1, GLenum _2, const GLvoid * _3, GLbitfield _4, GLuint _5, GLsizei _6, GLenum _7, GLuint _8, GLfloat _9 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ), FG4CPP_GL_ARG( FgGLbitfield, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( FgGLuint, _8 ), FG4CPP_GL_ARG( FgGLfloat, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( WeightPathsNV, ( GLuint _1, GLsizei _2, const GLuint * _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint *, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyPathNV, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( InterpolatePathsNV, ( GLuint _1, GLuint _2, GLuint _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TransformPathNV, ( GLuint _1, GLuint _2, GLenum _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathParameterivNV, ( GLuint _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathParameteriNV, ( GLuint _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathParameterfvNV, ( GLuint _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathParameterfNV, ( GLuint _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathDashArrayNV, ( GLuint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathStencilFuncNV, ( GLenum _1, GLint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathStencilDepthOffsetNV, ( GLfloat _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( StencilFillPathNV, ( GLuint _1, GLenum _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( StencilStrokePathNV, ( GLuint _1, GLint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( StencilFillPathInstancedNV, ( GLsizei _1, GLenum _2, const GLvoid * _3, GLuint _4, GLenum _5, GLuint _6, GLenum _7, const GLfloat * _8 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( const FgGLfloat *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( StencilStrokePathInstancedNV, ( GLsizei _1, GLenum _2, const GLvoid * _3, GLuint _4, GLint _5, GLuint _6, GLenum _7, const GLfloat * _8 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLuint, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( const FgGLfloat *, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathCoverDepthFuncNV, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathColorGenNV, ( GLenum _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathTexGenNV, ( GLenum _1, GLenum _2, GLint _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PathFogGenNV, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CoverFillPathNV, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CoverStrokePathNV, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CoverFillPathInstancedNV, ( GLsizei _1, GLenum _2, const GLvoid * _3, GLuint _4, GLenum _5, GLenum _6, const GLfloat * _7 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( const FgGLfloat *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CoverStrokePathInstancedNV, ( GLsizei _1, GLenum _2, const GLvoid * _3, GLuint _4, GLenum _5, GLenum _6, const GLfloat * _7 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( const FgGLfloat *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPathParameterivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPathParameterfvNV, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPathCommandsNV, ( GLuint _1, GLubyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLubyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPathCoordsNV, ( GLuint _1, GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPathDashArrayNV, ( GLuint _1, GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPathMetricsNV, ( GLbitfield _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLuint _5, GLsizei _6, GLfloat * _7 ), ( FG4CPP_GL_ARG( FgGLbitfield, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLfloat *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPathMetricRangeNV, ( GLbitfield _1, GLuint _2, GLsizei _3, GLsizei _4, GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLbitfield, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPathSpacingNV, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLuint _5, GLfloat _6, GLfloat _7, GLenum _8, GLfloat * _9 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLvoid *, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( FgGLfloat *, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPathColorGenivNV, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPathColorGenfvNV, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPathTexGenivNV, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPathTexGenfvNV, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsPointInFillPathNV, ( GLuint _1, GLuint _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsPointInStrokePathNV, ( GLuint _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLfloat, GetPathLengthNV, ( GLuint _1, GLsizei _2, GLsizei _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, PointAlongPathNV, ( GLuint _1, GLsizei _2, GLsizei _3, GLfloat _4, GLfloat * _5, GLfloat * _6, GLfloat * _7, GLfloat * _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat *, _5 ), FG4CPP_GL_ARG( FgGLfloat *, _6 ), FG4CPP_GL_ARG( FgGLfloat *, _7 ), FG4CPP_GL_ARG( FgGLfloat *, _8 ) ) ) \
\
    /* GL_NV_pixel_data_range */ \
    FG4CPP_GL_VOID_FUNCTION( PixelDataRangeNV, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLvoid *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FlushPixelDataRangeNV, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
\
    /* GL_NV_point_sprite */ \
    FG4CPP_GL_VOID_FUNCTION( PointParameteriNV, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PointParameterivNV, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
\
    /* GL_NV_present_video */ \
    FG4CPP_GL_VOID_FUNCTION( PresentFrameKeyedNV, ( GLuint _1, GLuint64EXT _2, GLuint _3, GLuint _4, GLenum _5, GLenum _6, GLuint _7, GLuint _8, GLenum _9, GLuint _10, GLuint _11 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint64EXT, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( FgGLuint, _7 ), FG4CPP_GL_ARG( FgGLuint, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( FgGLuint, _10 ), FG4CPP_GL_ARG( FgGLuint, _11 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PresentFrameDualFillNV, ( GLuint _1, GLuint64EXT _2, GLuint _3, GLuint _4, GLenum _5, GLenum _6, GLuint _7, GLenum _8, GLuint _9, GLenum _10, GLuint _11, GLenum _12, GLuint _13 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint64EXT, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( FgGLuint, _7 ), FG4CPP_GL_ARG( FgGLenum, _8 ), FG4CPP_GL_ARG( FgGLuint, _9 ), FG4CPP_GL_ARG( FgGLenum, _10 ), FG4CPP_GL_ARG( FgGLuint, _11 ), FG4CPP_GL_ARG( FgGLenum, _12 ), FG4CPP_GL_ARG( FgGLuint, _13 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVideoivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVideouivNV, ( GLuint _1, GLenum _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVideoi64vNV, ( GLuint _1, GLenum _2, GLint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVideoui64vNV, ( GLuint _1, GLenum _2, GLuint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT *, _3 ) ) ) \
\
    /* GL_NV_primitive_restart */ \
    FG4CPP_GL_VOID_FUNCTION( PrimitiveRestartNV, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( PrimitiveRestartIndexNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
\
    /* GL_NV_register_combiners */ \
    FG4CPP_GL_VOID_FUNCTION( CombinerParameterfvNV, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CombinerParameterfNV, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CombinerParameterivNV, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CombinerParameteriNV, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CombinerInputNV, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5, GLenum _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CombinerOutputNV, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5, GLenum _6, GLenum _7, GLboolean _8, GLboolean _9, GLboolean _10 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( FgGLenum, _6 ), FG4CPP_GL_ARG( FgGLenum, _7 ), FG4CPP_GL_ARG( FgGLboolean, _8 ), FG4CPP_GL_ARG( FgGLboolean, _9 ), FG4CPP_GL_ARG( FgGLboolean, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FinalCombinerInputNV, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetCombinerInputParameterfvNV, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4, GLfloat * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLfloat *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetCombinerInputParameterivNV, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4, GLint * _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLint *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetCombinerOutputParameterfvNV, ( GLenum _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetCombinerOutputParameterivNV, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFinalCombinerInputParameterfvNV, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFinalCombinerInputParameterivNV, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
\
    /* GL_NV_register_combiners2 */ \
    FG4CPP_GL_VOID_FUNCTION( CombinerStageParameterfvNV, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetCombinerStageParameterfvNV, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
\
    /* GL_NV_shader_atomic_counters */ \
\
    /* GL_NV_shader_atomic_float */ \
\
    /* GL_NV_shader_buffer_load */ \
    FG4CPP_GL_VOID_FUNCTION( MakeBufferResidentNV, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MakeBufferNonResidentNV, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsBufferResidentNV, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MakeNamedBufferResidentNV, ( GLuint _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( MakeNamedBufferNonResidentNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsNamedBufferResidentNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetBufferParameterui64vNV, ( GLenum _1, GLenum _2, GLuint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetNamedBufferParameterui64vNV, ( GLuint _1, GLenum _2, GLuint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetIntegerui64vNV, ( GLenum _1, GLuint64EXT * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint64EXT *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniformui64NV, ( GLint _1, GLuint64EXT _2 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLuint64EXT, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Uniformui64vNV, ( GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetUniformui64vNV, ( GLuint _1, GLint _2, GLuint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformui64NV, ( GLuint _1, GLint _2, GLuint64EXT _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramUniformui64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _4 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( TextureBarrierNV, ( ), ( ) ) \
\
    /* GL_NV_texture_compression_vtc */ \
\
    /* GL_NV_texture_env_combine4 */ \
\
    /* GL_NV_texture_expand_normal */ \
\
    /* GL_NV_texture_multisample */ \
    FG4CPP_GL_VOID_FUNCTION( TexImage2DMultisampleCoverageNV, ( GLenum _1, GLsizei _2, GLsizei _3, GLint _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLboolean, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexImage3DMultisampleCoverageNV, ( GLenum _1, GLsizei _2, GLsizei _3, GLint _4, GLsizei _5, GLsizei _6, GLsizei _7, GLboolean _8 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLboolean, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureImage2DMultisampleNV, ( GLuint _1, GLenum _2, GLsizei _3, GLint _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLboolean, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureImage3DMultisampleNV, ( GLuint _1, GLenum _2, GLsizei _3, GLint _4, GLsizei _5, GLsizei _6, GLsizei _7, GLboolean _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLboolean, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureImage2DMultisampleCoverageNV, ( GLuint _1, GLenum _2, GLsizei _3, GLsizei _4, GLint _5, GLsizei _6, GLsizei _7, GLboolean _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLboolean, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TextureImage3DMultisampleCoverageNV, ( GLuint _1, GLenum _2, GLsizei _3, GLsizei _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLboolean _9 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLboolean, _9 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( BeginTransformFeedbackNV, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndTransformFeedbackNV, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( TransformFeedbackAttribsNV, ( GLuint _1, const GLint * _2, GLenum _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindBufferRangeNV, ( GLenum _1, GLuint _2, GLuint _3, GLintptr _4, GLsizeiptr _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLintptr, _4 ), FG4CPP_GL_ARG( FgGLsizeiptr, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindBufferOffsetNV, ( GLenum _1, GLuint _2, GLuint _3, GLintptr _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLintptr, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindBufferBaseNV, ( GLenum _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TransformFeedbackVaryingsNV, ( GLuint _1, GLsizei _2, const GLint * _3, GLenum _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ActiveVaryingNV, ( GLuint _1, const GLchar * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLchar *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, GetVaryingLocationNV, ( GLuint _1, const GLchar * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLchar *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetActiveVaryingNV, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLsizei * _5, GLenum * _6, GLchar * _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei *, _4 ), FG4CPP_GL_ARG( FgGLsizei *, _5 ), FG4CPP_GL_ARG( FgGLenum *, _6 ), FG4CPP_GL_ARG( FgGLchar *, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTransformFeedbackVaryingNV, ( GLuint _1, GLuint _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TransformFeedbackStreamAttribsNV, ( GLsizei _1, const GLint * _2, GLsizei _3, const GLint * _4, GLenum _5 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ) ) ) \
\
    /* GL_NV_transform_feedback2 */ \
    FG4CPP_GL_VOID_FUNCTION( BindTransformFeedbackNV, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteTransformFeedbacksNV, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenTransformFeedbacksNV, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsTransformFeedbackNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PauseTransformFeedbackNV, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( ResumeTransformFeedbackNV, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( DrawTransformFeedbackNV, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
\
    /* GL_NV_vdpau_interop */ \
    FG4CPP_GL_VOID_FUNCTION( VDPAUInitNV, ( const GLvoid * _1, const GLvoid * _2 ), ( FG4CPP_GL_ARG( const FgGLvoid *, _1 ), FG4CPP_GL_ARG( const FgGLvoid *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VDPAUFiniNV, ( ), ( ) ) \
    FG4CPP_GL_FUNCTION( 0, GLvdpauSurfaceNV, VDPAURegisterVideoSurfaceNV, ( const GLvoid * _1, GLenum _2, GLsizei _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( const FgGLvoid *, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLvdpauSurfaceNV, VDPAURegisterOutputSurfaceNV, ( const GLvoid * _1, GLenum _2, GLsizei _3, const GLuint * _4 ), ( FG4CPP_GL_ARG( const FgGLvoid *, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLuint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VDPAUIsSurfaceNV, ( GLvdpauSurfaceNV _1 ), ( FG4CPP_GL_ARG( FgGLvdpauSurfaceNV, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VDPAUUnregisterSurfaceNV, ( GLvdpauSurfaceNV _1 ), ( FG4CPP_GL_ARG( FgGLvdpauSurfaceNV, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VDPAUGetSurfaceivNV, ( GLvdpauSurfaceNV _1, GLenum _2, GLsizei _3, GLsizei * _4, GLint * _5 ), ( FG4CPP_GL_ARG( FgGLvdpauSurfaceNV, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei *, _4 ), FG4CPP_GL_ARG( FgGLint *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VDPAUSurfaceAccessNV, ( GLvdpauSurfaceNV _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLvdpauSurfaceNV, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VDPAUMapSurfacesNV, ( GLsizei _1, const GLvdpauSurfaceNV * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLvdpauSurfaceNV *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VDPAUUnmapSurfacesNV, ( GLsizei _1, const GLvdpauSurfaceNV * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLvdpauSurfaceNV *, _2 ) ) ) \
\
    /* GL_NV_vertex_array_range */ \
    FG4CPP_GL_VOID_FUNCTION( FlushVertexArrayRangeNV, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexArrayRangeNV, ( GLsizei _1, const GLvoid * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLvoid *, _2 ) ) ) \
\
    /* GL_NV_vertex_array_range2 */ \
\
    /* GL_NV_vertex_attrib_integer_64bit */ \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL1i64NV, ( GLuint _1, GLint64EXT _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint64EXT, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL2i64NV, ( GLuint _1, GLint64EXT _2, GLint64EXT _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint64EXT, _2 ), FG4CPP_GL_ARG( FgGLint64EXT, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL3i64NV, ( GLuint _1, GLint64EXT _2, GLint64EXT _3, GLint64EXT _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint64EXT, _2 ), FG4CPP_GL_ARG( FgGLint64EXT, _3 ), FG4CPP_GL_ARG( FgGLint64EXT, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL4i64NV, ( GLuint _1, GLint64EXT _2, GLint64EXT _3, GLint64EXT _4, GLint64EXT _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint64EXT, _2 ), FG4CPP_GL_ARG( FgGLint64EXT, _3 ), FG4CPP_GL_ARG( FgGLint64EXT, _4 ), FG4CPP_GL_ARG( FgGLint64EXT, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL1i64vNV, ( GLuint _1, const GLint64EXT * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint64EXT *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL2i64vNV, ( GLuint _1, const GLint64EXT * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint64EXT *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL3i64vNV, ( GLuint _1, const GLint64EXT * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint64EXT *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL4i64vNV, ( GLuint _1, const GLint64EXT * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint64EXT *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL1ui64NV, ( GLuint _1, GLuint64EXT _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint64EXT, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL2ui64NV, ( GLuint _1, GLuint64EXT _2, GLuint64EXT _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint64EXT, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL3ui64NV, ( GLuint _1, GLuint64EXT _2, GLuint64EXT _3, GLuint64EXT _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint64EXT, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT, _3 ), FG4CPP_GL_ARG( FgGLuint64EXT, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL4ui64NV, ( GLuint _1, GLuint64EXT _2, GLuint64EXT _3, GLuint64EXT _4, GLuint64EXT _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint64EXT, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT, _3 ), FG4CPP_GL_ARG( FgGLuint64EXT, _4 ), FG4CPP_GL_ARG( FgGLuint64EXT, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL1ui64vNV, ( GLuint _1, const GLuint64EXT * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL2ui64vNV, ( GLuint _1, const GLuint64EXT * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL3ui64vNV, ( GLuint _1, const GLuint64EXT * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribL4ui64vNV, ( GLuint _1, const GLuint64EXT * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint64EXT *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribLi64vNV, ( GLuint _1, GLenum _2, GLint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribLui64vNV, ( GLuint _1, GLenum _2, GLuint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribLFormatNV, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
\
    /* GL_NV_vertex_buffer_unified_memory */ \
    FG4CPP_GL_VOID_FUNCTION( BufferAddressRangeNV, ( GLenum _1, GLuint _2, GLuint64EXT _3, GLsizeiptr _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT, _3 ), FG4CPP_GL_ARG( FgGLsizeiptr, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexFormatNV, ( GLint _1, GLenum _2, GLsizei _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( NormalFormatNV, ( GLenum _1, GLsizei _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorFormatNV, ( GLint _1, GLenum _2, GLsizei _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( IndexFormatNV, ( GLenum _1, GLsizei _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoordFormatNV, ( GLint _1, GLenum _2, GLsizei _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EdgeFlagFormatNV, ( GLsizei _1 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SecondaryColorFormatNV, ( GLint _1, GLenum _2, GLsizei _3 ), ( FG4CPP_GL_ARG( FgGLint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FogCoordFormatNV, ( GLenum _1, GLsizei _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribFormatNV, ( GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribIFormatNV, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetIntegerui64i_vNV, ( GLenum _1, GLuint _2, GLuint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT *, _3 ) ) ) \
\
    /* GL_NV_vertex_program */ \
    FG4CPP_GL_FUNCTION( 0, GLboolean, AreProgramsResidentNV, ( GLsizei _1, const GLuint * _2, GLboolean * _3 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ), FG4CPP_GL_ARG( FgGLboolean *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindProgramNV, ( GLenum _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteProgramsNV, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ExecuteProgramNV, ( GLenum _1, GLuint _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GenProgramsNV, ( GLsizei _1, GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramParameterdvNV, ( GLenum _1, GLuint _2, GLenum _3, GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramParameterfvNV, ( GLenum _1, GLuint _2, GLenum _3, GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetProgramStringNV, ( GLuint _1, GLenum _2, GLubyte * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLubyte *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetTrackMatrixivNV, ( GLenum _1, GLuint _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribdvNV, ( GLuint _1, GLenum _2, GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribfvNV, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribPointervNV, ( GLuint _1, GLenum _2, GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLvoid **, _3 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsProgramNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LoadProgramNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLubyte * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLubyte *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramParameter4dNV, ( GLenum _1, GLuint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramParameter4dvNV, ( GLenum _1, GLuint _2, const GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramParameter4fNV, ( GLenum _1, GLuint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramParameter4fvNV, ( GLenum _1, GLuint _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramParameters4dvNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ProgramParameters4fvNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( RequestResidentProgramsNV, ( GLsizei _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TrackMatrixNV, ( GLenum _1, GLuint _2, GLenum _3, GLenum _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribPointerNV, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1dNV, ( GLuint _1, GLdouble _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1dvNV, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1fNV, ( GLuint _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1fvNV, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1sNV, ( GLuint _1, GLshort _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib1svNV, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2dNV, ( GLuint _1, GLdouble _2, GLdouble _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2dvNV, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2fNV, ( GLuint _1, GLfloat _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2fvNV, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2sNV, ( GLuint _1, GLshort _2, GLshort _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib2svNV, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3dNV, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3dvNV, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3fNV, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3fvNV, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3sNV, ( GLuint _1, GLshort _2, GLshort _3, GLshort _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib3svNV, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4dNV, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLdouble, _4 ), FG4CPP_GL_ARG( FgGLdouble, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4dvNV, ( GLuint _1, const GLdouble * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLdouble *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4fNV, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4fvNV, ( GLuint _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4sNV, ( GLuint _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLshort, _2 ), FG4CPP_GL_ARG( FgGLshort, _3 ), FG4CPP_GL_ARG( FgGLshort, _4 ), FG4CPP_GL_ARG( FgGLshort, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4svNV, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4ubNV, ( GLuint _1, GLubyte _2, GLubyte _3, GLubyte _4, GLubyte _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLubyte, _2 ), FG4CPP_GL_ARG( FgGLubyte, _3 ), FG4CPP_GL_ARG( FgGLubyte, _4 ), FG4CPP_GL_ARG( FgGLubyte, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttrib4ubvNV, ( GLuint _1, const GLubyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLubyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs1dvNV, ( GLuint _1, GLsizei _2, const GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs1fvNV, ( GLuint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs1svNV, ( GLuint _1, GLsizei _2, const GLshort * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLshort *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs2dvNV, ( GLuint _1, GLsizei _2, const GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs2fvNV, ( GLuint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs2svNV, ( GLuint _1, GLsizei _2, const GLshort * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLshort *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs3dvNV, ( GLuint _1, GLsizei _2, const GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs3fvNV, ( GLuint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs3svNV, ( GLuint _1, GLsizei _2, const GLshort * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLshort *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs4dvNV, ( GLuint _1, GLsizei _2, const GLdouble * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLdouble *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs4fvNV, ( GLuint _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs4svNV, ( GLuint _1, GLsizei _2, const GLshort * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLshort *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribs4ubvNV, ( GLuint _1, GLsizei _2, const GLubyte * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLubyte *, _3 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI1iEXT, ( GLuint _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI2iEXT, ( GLuint _1, GLint _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI3iEXT, ( GLuint _1, GLint _2, GLint _3, GLint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4iEXT, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI1uiEXT, ( GLuint _1, GLuint _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI2uiEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI3uiEXT, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4uiEXT, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLuint, _3 ), FG4CPP_GL_ARG( FgGLuint, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI1ivEXT, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI2ivEXT, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI3ivEXT, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4ivEXT, ( GLuint _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI1uivEXT, ( GLuint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI2uivEXT, ( GLuint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI3uivEXT, ( GLuint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4uivEXT, ( GLuint _1, const GLuint * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLuint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4bvEXT, ( GLuint _1, const GLbyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLbyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4svEXT, ( GLuint _1, const GLshort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLshort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4ubvEXT, ( GLuint _1, const GLubyte * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLubyte *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribI4usvEXT, ( GLuint _1, const GLushort * _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( const FgGLushort *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VertexAttribIPointerEXT, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( const FgGLvoid *, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribIivEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVertexAttribIuivEXT, ( GLuint _1, GLenum _2, GLuint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLuint *, _3 ) ) ) \
\
    /* GL_NV_video_capture */ \
    FG4CPP_GL_VOID_FUNCTION( BeginVideoCaptureNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindVideoCaptureStreamBufferNV, ( GLuint _1, GLuint _2, GLenum _3, GLintptrARB _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLintptrARB, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( BindVideoCaptureStreamTextureNV, ( GLuint _1, GLuint _2, GLenum _3, GLenum _4, GLuint _5 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLuint, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( EndVideoCaptureNV, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVideoCaptureivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVideoCaptureStreamivNV, ( GLuint _1, GLuint _2, GLenum _3, GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVideoCaptureStreamfvNV, ( GLuint _1, GLuint _2, GLenum _3, GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetVideoCaptureStreamdvNV, ( GLuint _1, GLuint _2, GLenum _3, GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLdouble *, _4 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLenum, VideoCaptureNV, ( GLuint _1, GLuint * _2, GLuint64EXT * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint *, _2 ), FG4CPP_GL_ARG( FgGLuint64EXT *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VideoCaptureStreamParameterivNV, ( GLuint _1, GLuint _2, GLenum _3, const GLint * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLint *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VideoCaptureStreamParameterfvNV, ( GLuint _1, GLuint _2, GLenum _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( VideoCaptureStreamParameterdvNV, ( GLuint _1, GLuint _2, GLenum _3, const GLdouble * _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLuint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( const FgGLdouble *, _4 ) ) ) \
\
    /* GL_OML_interlace */ \
\
    /* GL_OML_resample */ \
\
    /* GL_OML_subsample */ \
\
    /* GL_PGI_misc_hints */ \
    FG4CPP_GL_VOID_FUNCTION( HintPGI, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
\
    /* GL_PGI_vertex_hints */ \
\
    /* GL_REND_screen_coordinates */ \
\
    /* GL_S3_s3tc */ \
\
    /* GL_SGIS_detail_texture */ \
    FG4CPP_GL_VOID_FUNCTION( DetailTexFuncSGIS, ( GLenum _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetDetailTexFuncSGIS, ( GLenum _1, GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat *, _2 ) ) ) \
\
    /* GL_SGIS_fog_function */ \
    FG4CPP_GL_VOID_FUNCTION( FogFuncSGIS, ( GLsizei _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFogFuncSGIS, ( GLfloat * _1 ), ( FG4CPP_GL_ARG( FgGLfloat *, _1 ) ) ) \
\
    /* GL_SGIS_generate_mipmap */ \
\
    /* GL_SGIS_multisample */ \
    FG4CPP_GL_VOID_FUNCTION( SampleMaskSGIS, ( GLclampf _1, GLboolean _2 ), ( FG4CPP_GL_ARG( FgGLclampf, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SamplePatternSGIS, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
\
    /* GL_SGIS_pixel_texture */ \
    FG4CPP_GL_VOID_FUNCTION( PixelTexGenParameteriSGIS, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelTexGenParameterivSGIS, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelTexGenParameterfSGIS, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PixelTexGenParameterfvSGIS, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPixelTexGenParameterivSGIS, ( GLenum _1, GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetPixelTexGenParameterfvSGIS, ( GLenum _1, GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat *, _2 ) ) ) \
\
    /* GL_SGIS_point_line_texgen */ \
\
    /* GL_SGIS_point_parameters */ \
    FG4CPP_GL_VOID_FUNCTION( PointParameterfSGIS, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( PointParameterfvSGIS, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
\
    /* GL_SGIS_sharpen_texture */ \
    FG4CPP_GL_VOID_FUNCTION( SharpenTexFuncSGIS, ( GLenum _1, GLsizei _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetSharpenTexFuncSGIS, ( GLenum _1, GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat *, _2 ) ) ) \
\
    /* GL_SGIS_texture4D */ \
    FG4CPP_GL_VOID_FUNCTION( TexImage4DSGIS, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ), FG4CPP_GL_ARG( FgGLsizei, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLenum, _9 ), FG4CPP_GL_ARG( FgGLenum, _10 ), FG4CPP_GL_ARG( const FgGLvoid *, _11 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexSubImage4DSGIS, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLsizei _10, GLenum _11, GLenum _12, const GLvoid * _13 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLint, _6 ), FG4CPP_GL_ARG( FgGLsizei, _7 ), FG4CPP_GL_ARG( FgGLsizei, _8 ), FG4CPP_GL_ARG( FgGLsizei, _9 ), FG4CPP_GL_ARG( FgGLsizei, _10 ), FG4CPP_GL_ARG( FgGLenum, _11 ), FG4CPP_GL_ARG( FgGLenum, _12 ), FG4CPP_GL_ARG( const FgGLvoid *, _13 ) ) ) \
\
    /* GL_SGIS_texture_border_clamp */ \
\
    /* GL_SGIS_texture_color_mask */ \
    FG4CPP_GL_VOID_FUNCTION( TextureColorMaskSGIS, ( GLboolean _1, GLboolean _2, GLboolean _3, GLboolean _4 ), ( FG4CPP_GL_ARG( FgGLboolean, _1 ), FG4CPP_GL_ARG( FgGLboolean, _2 ), FG4CPP_GL_ARG( FgGLboolean, _3 ), FG4CPP_GL_ARG( FgGLboolean, _4 ) ) ) \
\
    /* GL_SGIS_texture_edge_clamp */ \
\
    /* GL_SGIS_texture_filter4 */ \
    FG4CPP_GL_VOID_FUNCTION( GetTexFilterFuncSGIS, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexFilterFuncSGIS, ( GLenum _1, GLenum _2, GLsizei _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
\
    /* GL_SGIS_texture_lod */ \
\
    /* GL_SGIS_texture_select */ \
\
    /* GL_SGIX_async */ \
    FG4CPP_GL_VOID_FUNCTION( AsyncMarkerSGIX, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, FinishAsyncSGIX, ( GLuint * _1 ), ( FG4CPP_GL_ARG( FgGLuint *, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, PollAsyncSGIX, ( GLuint * _1 ), ( FG4CPP_GL_ARG( FgGLuint *, _1 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLuint, GenAsyncMarkersSGIX, ( GLsizei _1 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeleteAsyncMarkersSGIX, ( GLuint _1, GLsizei _2 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLboolean, IsAsyncMarkerSGIX, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( FlushRasterSGIX, ( ), ( ) ) \
\
    /* GL_SGIX_fog_offset */ \
\
    /* GL_SGIX_fragment_lighting */ \
    FG4CPP_GL_VOID_FUNCTION( FragmentColorMaterialSGIX, ( GLenum _1, GLenum _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FragmentLightfSGIX, ( GLenum _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FragmentLightfvSGIX, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FragmentLightiSGIX, ( GLenum _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FragmentLightivSGIX, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FragmentLightModelfSGIX, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FragmentLightModelfvSGIX, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FragmentLightModeliSGIX, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FragmentLightModelivSGIX, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FragmentMaterialfSGIX, ( GLenum _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FragmentMaterialfvSGIX, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FragmentMaterialiSGIX, ( GLenum _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( FragmentMaterialivSGIX, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFragmentLightfvSGIX, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFragmentLightivSGIX, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFragmentMaterialfvSGIX, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetFragmentMaterialivSGIX, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LightEnviSGIX, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
\
    /* GL_SGIX_framezoom */ \
    FG4CPP_GL_VOID_FUNCTION( FrameZoomSGIX, ( GLint _1 ), ( FG4CPP_GL_ARG( FgGLint, _1 ) ) ) \
\
    /* GL_SGIX_igloo_interface */ \
    FG4CPP_GL_VOID_FUNCTION( IglooInterfaceSGIX, ( GLenum _1, const GLvoid * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLvoid *, _2 ) ) ) \
\
    /* GL_SGIX_instruments */ \
    FG4CPP_GL_FUNCTION( 0, GLint, GetInstrumentsSGIX, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( InstrumentsBufferSGIX, ( GLsizei _1, GLint * _2 ), ( FG4CPP_GL_ARG( FgGLsizei, _1 ), FG4CPP_GL_ARG( FgGLint *, _2 ) ) ) \
    FG4CPP_GL_FUNCTION( 0, GLint, PollInstrumentsSGIX, ( GLint * _1 ), ( FG4CPP_GL_ARG( FgGLint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReadInstrumentsSGIX, ( GLint _1 ), ( FG4CPP_GL_ARG( FgGLint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( StartInstrumentsSGIX, ( ), ( ) ) \
    FG4CPP_GL_VOID_FUNCTION( StopInstrumentsSGIX, ( GLint _1 ), ( FG4CPP_GL_ARG( FgGLint, _1 ) ) ) \
\
    /* GL_SGIX_interlace */ \
\
    /* GL_SGIX_ir_instrument1 */ \
\
    /* GL_SGIX_list_priority */ \
    FG4CPP_GL_VOID_FUNCTION( GetListParameterfvSGIX, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetListParameterivSGIX, ( GLuint _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ListParameterfSGIX, ( GLuint _1, GLenum _2, GLfloat _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ListParameterfvSGIX, ( GLuint _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ListParameteriSGIX, ( GLuint _1, GLenum _2, GLint _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ListParameterivSGIX, ( GLuint _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
\
    /* GL_SGIX_pixel_texture */ \
    FG4CPP_GL_VOID_FUNCTION( PixelTexGenSGIX, ( GLenum _1 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ) ) ) \
\
    /* GL_SGIX_pixel_tiles */ \
\
    /* GL_SGIX_polynomial_ffd */ \
    FG4CPP_GL_VOID_FUNCTION( DeformationMap3dSGIX, ( GLenum _1, GLdouble _2, GLdouble _3, GLint _4, GLint _5, GLdouble _6, GLdouble _7, GLint _8, GLint _9, GLdouble _10, GLdouble _11, GLint _12, GLint _13, const GLdouble * _14 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLdouble, _2 ), FG4CPP_GL_ARG( FgGLdouble, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLdouble, _6 ), FG4CPP_GL_ARG( FgGLdouble, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLint, _9 ), FG4CPP_GL_ARG( FgGLdouble, _10 ), FG4CPP_GL_ARG( FgGLdouble, _11 ), FG4CPP_GL_ARG( FgGLint, _12 ), FG4CPP_GL_ARG( FgGLint, _13 ), FG4CPP_GL_ARG( const FgGLdouble *, _14 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeformationMap3fSGIX, ( GLenum _1, GLfloat _2, GLfloat _3, GLint _4, GLint _5, GLfloat _6, GLfloat _7, GLint _8, GLint _9, GLfloat _10, GLfloat _11, GLint _12, GLint _13, const GLfloat * _14 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLint, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLint, _8 ), FG4CPP_GL_ARG( FgGLint, _9 ), FG4CPP_GL_ARG( FgGLfloat, _10 ), FG4CPP_GL_ARG( FgGLfloat, _11 ), FG4CPP_GL_ARG( FgGLint, _12 ), FG4CPP_GL_ARG( FgGLint, _13 ), FG4CPP_GL_ARG( const FgGLfloat *, _14 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( DeformSGIX, ( GLbitfield _1 ), ( FG4CPP_GL_ARG( FgGLbitfield, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( LoadIdentityDeformationMapSGIX, ( GLbitfield _1 ), ( FG4CPP_GL_ARG( FgGLbitfield, _1 ) ) ) \
\
    /* GL_SGIX_reference_plane */ \
    FG4CPP_GL_VOID_FUNCTION( ReferencePlaneSGIX, ( const GLdouble * _1 ), ( FG4CPP_GL_ARG( const FgGLdouble *, _1 ) ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( SpriteParameterfSGIX, ( GLenum _1, GLfloat _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SpriteParameterfvSGIX, ( GLenum _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SpriteParameteriSGIX, ( GLenum _1, GLint _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( SpriteParameterivSGIX, ( GLenum _1, const GLint * _2 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( const FgGLint *, _2 ) ) ) \
\
    /* GL_SGIX_subsample */ \
\
    /* GL_SGIX_tag_sample_buffer */ \
    FG4CPP_GL_VOID_FUNCTION( TagSampleBufferSGIX, ( ), ( ) ) \
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
    FG4CPP_GL_VOID_FUNCTION( ColorTableSGI, ( GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLenum, _4 ), FG4CPP_GL_ARG( FgGLenum, _5 ), FG4CPP_GL_ARG( const FgGLvoid *, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorTableParameterfvSGI, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ColorTableParameterivSGI, ( GLenum _1, GLenum _2, const GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( const FgGLint *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( CopyColorTableSGI, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint, _3 ), FG4CPP_GL_ARG( FgGLint, _4 ), FG4CPP_GL_ARG( FgGLsizei, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetColorTableSGI, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLenum, _3 ), FG4CPP_GL_ARG( FgGLvoid *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetColorTableParameterfvSGI, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GetColorTableParameterivSGI, ( GLenum _1, GLenum _2, GLint * _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLenum, _2 ), FG4CPP_GL_ARG( FgGLint *, _3 ) ) ) \
\
    /* GL_SGI_texture_color_table */ \
\
    /* GL_SUNX_constant_data */ \
    FG4CPP_GL_VOID_FUNCTION( FinishTextureSUNX, ( ), ( ) ) \
\
    /* GL_SUN_convolution_border_modes */ \
\
    /* GL_SUN_global_alpha */ \
    FG4CPP_GL_VOID_FUNCTION( GlobalAlphaFactorbSUN, ( GLbyte _1 ), ( FG4CPP_GL_ARG( FgGLbyte, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GlobalAlphaFactorsSUN, ( GLshort _1 ), ( FG4CPP_GL_ARG( FgGLshort, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GlobalAlphaFactoriSUN, ( GLint _1 ), ( FG4CPP_GL_ARG( FgGLint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GlobalAlphaFactorfSUN, ( GLfloat _1 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GlobalAlphaFactordSUN, ( GLdouble _1 ), ( FG4CPP_GL_ARG( FgGLdouble, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GlobalAlphaFactorubSUN, ( GLubyte _1 ), ( FG4CPP_GL_ARG( FgGLubyte, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GlobalAlphaFactorusSUN, ( GLushort _1 ), ( FG4CPP_GL_ARG( FgGLushort, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( GlobalAlphaFactoruiSUN, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
\
    /* GL_SUN_mesh_array */ \
    FG4CPP_GL_VOID_FUNCTION( DrawMeshArraysSUN, ( GLenum _1, GLint _2, GLsizei _3, GLsizei _4 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLint, _2 ), FG4CPP_GL_ARG( FgGLsizei, _3 ), FG4CPP_GL_ARG( FgGLsizei, _4 ) ) ) \
\
    /* GL_SUN_slice_accum */ \
\
    /* GL_SUN_triangle_list */ \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiSUN, ( GLuint _1 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeusSUN, ( GLushort _1 ), ( FG4CPP_GL_ARG( FgGLushort, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeubSUN, ( GLubyte _1 ), ( FG4CPP_GL_ARG( FgGLubyte, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuivSUN, ( const GLuint * _1 ), ( FG4CPP_GL_ARG( const FgGLuint *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeusvSUN, ( const GLushort * _1 ), ( FG4CPP_GL_ARG( const FgGLushort *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeubvSUN, ( const GLubyte * _1 ), ( FG4CPP_GL_ARG( const FgGLubyte *, _1 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodePointerSUN, ( GLenum _1, GLsizei _2, const GLvoid ** _3 ), ( FG4CPP_GL_ARG( FgGLenum, _1 ), FG4CPP_GL_ARG( FgGLsizei, _2 ), FG4CPP_GL_ARG( const FgGLvoid **, _3 ) ) ) \
\
    /* GL_SUN_vertex */ \
    FG4CPP_GL_VOID_FUNCTION( Color4ubVertex2fSUN, ( GLubyte _1, GLubyte _2, GLubyte _3, GLubyte _4, GLfloat _5, GLfloat _6 ), ( FG4CPP_GL_ARG( FgGLubyte, _1 ), FG4CPP_GL_ARG( FgGLubyte, _2 ), FG4CPP_GL_ARG( FgGLubyte, _3 ), FG4CPP_GL_ARG( FgGLubyte, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4ubVertex2fvSUN, ( const GLubyte * _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( const FgGLubyte *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4ubVertex3fSUN, ( GLubyte _1, GLubyte _2, GLubyte _3, GLubyte _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( FG4CPP_GL_ARG( FgGLubyte, _1 ), FG4CPP_GL_ARG( FgGLubyte, _2 ), FG4CPP_GL_ARG( FgGLubyte, _3 ), FG4CPP_GL_ARG( FgGLubyte, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4ubVertex3fvSUN, ( const GLubyte * _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( const FgGLubyte *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color3fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Normal3fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4fNormal3fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLfloat, _8 ), FG4CPP_GL_ARG( FgGLfloat, _9 ), FG4CPP_GL_ARG( FgGLfloat, _10 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( Color4fNormal3fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4fVertex4fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLfloat, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4fVertex4fvSUN, ( const GLfloat * _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2fColor4ubVertex3fSUN, ( GLfloat _1, GLfloat _2, GLubyte _3, GLubyte _4, GLubyte _5, GLubyte _6, GLfloat _7, GLfloat _8, GLfloat _9 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLubyte, _3 ), FG4CPP_GL_ARG( FgGLubyte, _4 ), FG4CPP_GL_ARG( FgGLubyte, _5 ), FG4CPP_GL_ARG( FgGLubyte, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLfloat, _8 ), FG4CPP_GL_ARG( FgGLfloat, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2fColor4ubVertex3fvSUN, ( const GLfloat * _1, const GLubyte * _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ), FG4CPP_GL_ARG( const FgGLubyte *, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2fColor3fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLfloat, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2fColor3fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2fNormal3fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLfloat, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2fNormal3fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2fColor4fNormal3fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11, GLfloat _12 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLfloat, _8 ), FG4CPP_GL_ARG( FgGLfloat, _9 ), FG4CPP_GL_ARG( FgGLfloat, _10 ), FG4CPP_GL_ARG( FgGLfloat, _11 ), FG4CPP_GL_ARG( FgGLfloat, _12 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord2fColor4fNormal3fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4fColor4fNormal3fVertex4fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11, GLfloat _12, GLfloat _13, GLfloat _14, GLfloat _15 ), ( FG4CPP_GL_ARG( FgGLfloat, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLfloat, _8 ), FG4CPP_GL_ARG( FgGLfloat, _9 ), FG4CPP_GL_ARG( FgGLfloat, _10 ), FG4CPP_GL_ARG( FgGLfloat, _11 ), FG4CPP_GL_ARG( FgGLfloat, _12 ), FG4CPP_GL_ARG( FgGLfloat, _13 ), FG4CPP_GL_ARG( FgGLfloat, _14 ), FG4CPP_GL_ARG( FgGLfloat, _15 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( TexCoord4fColor4fNormal3fVertex4fvSUN, ( const GLfloat * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( const FgGLfloat *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2 ), ( FG4CPP_GL_ARG( const FgGLuint *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiColor4ubVertex3fSUN, ( GLuint _1, GLubyte _2, GLubyte _3, GLubyte _4, GLubyte _5, GLfloat _6, GLfloat _7, GLfloat _8 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLubyte, _2 ), FG4CPP_GL_ARG( FgGLubyte, _3 ), FG4CPP_GL_ARG( FgGLubyte, _4 ), FG4CPP_GL_ARG( FgGLubyte, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLfloat, _8 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiColor4ubVertex3fvSUN, ( const GLuint * _1, const GLubyte * _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( const FgGLuint *, _1 ), FG4CPP_GL_ARG( const FgGLubyte *, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiColor3fVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiColor3fVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( const FgGLuint *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiNormal3fVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiNormal3fVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( const FgGLuint *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiColor4fNormal3fVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLfloat, _8 ), FG4CPP_GL_ARG( FgGLfloat, _9 ), FG4CPP_GL_ARG( FgGLfloat, _10 ), FG4CPP_GL_ARG( FgGLfloat, _11 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiColor4fNormal3fVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( const FgGLuint *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiTexCoord2fVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiTexCoord2fVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2, const GLfloat * _3 ), ( FG4CPP_GL_ARG( const FgGLuint *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLfloat, _8 ), FG4CPP_GL_ARG( FgGLfloat, _9 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4 ), ( FG4CPP_GL_ARG( const FgGLuint *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11, GLfloat _12, GLfloat _13 ), ( FG4CPP_GL_ARG( FgGLuint, _1 ), FG4CPP_GL_ARG( FgGLfloat, _2 ), FG4CPP_GL_ARG( FgGLfloat, _3 ), FG4CPP_GL_ARG( FgGLfloat, _4 ), FG4CPP_GL_ARG( FgGLfloat, _5 ), FG4CPP_GL_ARG( FgGLfloat, _6 ), FG4CPP_GL_ARG( FgGLfloat, _7 ), FG4CPP_GL_ARG( FgGLfloat, _8 ), FG4CPP_GL_ARG( FgGLfloat, _9 ), FG4CPP_GL_ARG( FgGLfloat, _10 ), FG4CPP_GL_ARG( FgGLfloat, _11 ), FG4CPP_GL_ARG( FgGLfloat, _12 ), FG4CPP_GL_ARG( FgGLfloat, _13 ) ) ) \
    FG4CPP_GL_VOID_FUNCTION( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4, const GLfloat * _5 ), ( FG4CPP_GL_ARG( const FgGLuint *, _1 ), FG4CPP_GL_ARG( const FgGLfloat *, _2 ), FG4CPP_GL_ARG( const FgGLfloat *, _3 ), FG4CPP_GL_ARG( const FgGLfloat *, _4 ), FG4CPP_GL_ARG( const FgGLfloat *, _5 ) ) ) \
\
    /* GL_WIN_phong_shading */ \
\
    /* GL_WIN_specular_fog */ \

#define GL_DEFINE_FUNCTION( _returnType, _name, _args, _proc ) \
    inline _returnType gl##_name _args \
    { \
        _proc \
    } \

#define GL_PROC( _name, _argValues ) fgGL##_name _argValues

#define FG4CPP_GL_ARG( _type, _value ) toFgGL< _type >( _value )

#define FG4CPP_GL_FUNCTION( _dummyReturnValue, _returnType, _name, _args, _argValues ) \
    GL_DEFINE_FUNCTION( _returnType, _name, _args, return toFgppGL< _returnType >( GL_PROC( _name, _argValues ) ); )

#define FG4CPP_GL_VOID_FUNCTION( _name, _args, _argValues ) \
    GL_DEFINE_FUNCTION( void, _name, _args, GL_PROC( _name, _argValues ); )

namespace fg {
    FG4CPP_GL_FUNCTIONS
}

#undef  FG4CPP_GL_VOID_FUNCTION

#undef  FG4CPP_GL_FUNCTION

#undef  FG4CPP_GL_ARG

#undef  GL_PROC

#undef  GL_DEFINE_FUNCTION

#endif  // FG4CPP_GL_FUNCTIONS_H
