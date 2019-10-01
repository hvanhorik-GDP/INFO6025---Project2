#pragma once

#include <KHR/khrplatform.h>
#define APIENTRY 

// This is an attempt to put all of the openGL functions in a logical order 
// These will just be flowthrough methods so I can get rid of all OpenGL from my other code
// Note the deep namespace to make it irritating for anyone to actually use these apis.
//

namespace gl
{
	namespace raw
	{
		namespace prototypes
		{
			typedef unsigned int GLenum;
			typedef unsigned char GLboolean;
			typedef unsigned int GLbitfield;
			typedef void GLvoid;
			typedef khronos_int8_t GLbyte;
			typedef khronos_uint8_t GLubyte;
			typedef khronos_int16_t GLshort;
			typedef khronos_uint16_t GLushort;
			typedef int GLint;
			typedef unsigned int GLuint;
			typedef khronos_int32_t GLclampx;
			typedef int GLsizei;
			typedef khronos_float_t GLfloat;
			typedef khronos_float_t GLclampf;
			typedef double GLdouble;
			typedef double GLclampd;
			typedef void* GLeglClientBufferEXT;
			typedef void* GLeglImageOES;
			typedef char GLchar;
			typedef char GLcharARB;
	#ifdef __APPLE__
			typedef void* GLhandleARB;
	#else
			typedef unsigned int GLhandleARB;
	#endif
			typedef khronos_uint16_t GLhalf;
			typedef khronos_uint16_t GLhalfARB;
			typedef khronos_int32_t GLfixed;
			typedef khronos_intptr_t GLintptr;
			typedef khronos_intptr_t GLintptrARB;
			typedef khronos_ssize_t GLsizeiptr;
			typedef khronos_ssize_t GLsizeiptrARB;
			typedef khronos_int64_t GLint64;
			typedef khronos_int64_t GLint64EXT;
			typedef khronos_uint64_t GLuint64;
			typedef khronos_uint64_t GLuint64EXT;
			typedef struct __GLsync* GLsync;
			typedef void (APIENTRY* GLDEBUGPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam);
			typedef void (APIENTRY* GLDEBUGPROCARB)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam);
			typedef void (APIENTRY* GLDEBUGPROCKHR)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam);
			typedef void (APIENTRY* GLDEBUGPROCAMD)(GLuint id, GLenum category, GLenum severity, GLsizei length, const GLchar* message, void* userParam);

			//
			// Attribindex
			//
			namespace Attribindex
			{
				void VertexAttribBinding(GLuint attribindex, GLuint bindingindex);
				void VertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
				void VertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
				void VertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
			}	 // Attribindex

			//
			// Bindingindex
			//
			namespace Bindingindex
			{
				void BindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
				void VertexBindingDivisor(GLuint bindingindex, GLuint divisor);
			}	 // Bindingindex

			//
			// Buf
			//
			namespace Buf
			{
				void BlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
				void BlendEquationi(GLuint buf, GLenum mode);
				void BlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
				void BlendFunci(GLuint buf, GLenum src, GLenum dst);
				void DrawBuffer(GLenum buf);
			}	 // Buf

			//
			// Buffer
			//
			namespace Buffer
			{
				GLboolean IsBuffer(GLuint buffer);
				GLboolean UnmapNamedBuffer(GLuint buffer);
				void ClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
				void ClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat* value);
				void ClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint* value);
				void ClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint* value);
				void ClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void* data);
				void ClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void* data);
				void FlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length);
				void GetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64* params);
				void GetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint* params);
				void GetNamedBufferPointerv(GLuint buffer, GLenum pname, void** params);
				void GetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void* data);
				void InvalidateBufferData(GLuint buffer);
				void InvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length);
				void NamedBufferData(GLuint buffer, GLsizeiptr size, const void* data, GLenum usage);
				void NamedBufferStorage(GLuint buffer, GLsizeiptr size, const void* data, GLbitfield flags);
				void NamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void* data);
			}	 // Buffer

			//
			// Coord
			//
			namespace Coord
			{
				void FogCoordd(GLdouble coord);
				void FogCoordf(GLfloat coord);
				void GetTexGendv(GLenum coord, GLenum pname, GLdouble* params);
				void GetTexGenfv(GLenum coord, GLenum pname, GLfloat* params);
				void GetTexGeniv(GLenum coord, GLenum pname, GLint* params);
				void TexGend(GLenum coord, GLenum pname, GLdouble param);
				void TexGendv(GLenum coord, GLenum pname, const GLdouble* params);
				void TexGenf(GLenum coord, GLenum pname, GLfloat param);
				void TexGenfv(GLenum coord, GLenum pname, const GLfloat* params);
				void TexGeni(GLenum coord, GLenum pname, GLint param);
				void TexGeniv(GLenum coord, GLenum pname, const GLint* params);
			}	 // Coord

			//
			// Face
			//
			namespace Face
			{
				void ColorMaterial(GLenum face, GLenum mode);
				void GetMaterialfv(GLenum face, GLenum pname, GLfloat* params);
				void GetMaterialiv(GLenum face, GLenum pname, GLint* params);
				void Materialf(GLenum face, GLenum pname, GLfloat param);
				void Materialfv(GLenum face, GLenum pname, const GLfloat* params);
				void Materiali(GLenum face, GLenum pname, GLint param);
				void Materialiv(GLenum face, GLenum pname, const GLint* params);
				void PolygonMode(GLenum face, GLenum mode);
				void StencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);
				void StencilMaskSeparate(GLenum face, GLuint mask);
				void StencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
			}	 // Face

			//
			// Framebuffer
			//
			namespace Framebuffer
			{
				GLboolean IsFramebuffer(GLuint framebuffer);
				GLenum CheckNamedFramebufferStatus(GLuint framebuffer, GLenum target);
				void ClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
				void ClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat* value);
				void ClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint* value);
				void ClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint* value);
				void GetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint* params);
				void GetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint* param);
				void InvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum* attachments);
				void InvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum* attachments, GLint x, GLint y, GLsizei width, GLsizei height);
				void NamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf);
				void NamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum* bufs);
				void NamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param);
				void NamedFramebufferReadBuffer(GLuint framebuffer, GLenum src);
				void NamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
				void NamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
				void NamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
			}	 // Framebuffer

			//
			// Id
			//
			namespace Id
			{
				GLboolean IsQuery(GLuint id);
				GLboolean IsTransformFeedback(GLuint id);
				void BeginConditionalRender(GLuint id, GLenum mode);
				void GetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
				void GetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
				void GetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
				void GetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
				void GetQueryObjecti64v(GLuint id, GLenum pname, GLint64* params);
				void GetQueryObjectiv(GLuint id, GLenum pname, GLint* params);
				void GetQueryObjectui64v(GLuint id, GLenum pname, GLuint64* params);
				void GetQueryObjectuiv(GLuint id, GLenum pname, GLuint* params);
				void QueryCounter(GLuint id, GLenum target);
			}	 // Id

			//
			// Identifier
			//
			namespace Identifier
			{
				void GetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei* length, GLchar* label);
				void ObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar* label);
			}	 // Identifier

			//
			// Index
			//
			namespace Index
			{
				void ColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
				void DepthRangeIndexed(GLuint index, GLdouble n, GLdouble f);
				void DisableVertexAttribArray(GLuint index);
				void EnableVertexAttribArray(GLuint index);
				void GetVertexAttribIiv(GLuint index, GLenum pname, GLint* params);
				void GetVertexAttribIuiv(GLuint index, GLenum pname, GLuint* params);
				void GetVertexAttribLdv(GLuint index, GLenum pname, GLdouble* params);
				void GetVertexAttribPointerv(GLuint index, GLenum pname, void** pointer);
				void GetVertexAttribdv(GLuint index, GLenum pname, GLdouble* params);
				void GetVertexAttribfv(GLuint index, GLenum pname, GLfloat* params);
				void GetVertexAttribiv(GLuint index, GLenum pname, GLint* params);
				void PrimitiveRestartIndex(GLuint index);
				void ScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
				void ScissorIndexedv(GLuint index, const GLint* v);
				void VertexAttrib1d(GLuint index, GLdouble x);
				void VertexAttrib1dv(GLuint index, const GLdouble* v);
				void VertexAttrib1f(GLuint index, GLfloat x);
				void VertexAttrib1fv(GLuint index, const GLfloat* v);
				void VertexAttrib1s(GLuint index, GLshort x);
				void VertexAttrib1sv(GLuint index, const GLshort* v);
				void VertexAttrib2d(GLuint index, GLdouble x, GLdouble y);
				void VertexAttrib2dv(GLuint index, const GLdouble* v);
				void VertexAttrib2f(GLuint index, GLfloat x, GLfloat y);
				void VertexAttrib2fv(GLuint index, const GLfloat* v);
				void VertexAttrib2s(GLuint index, GLshort x, GLshort y);
				void VertexAttrib2sv(GLuint index, const GLshort* v);
				void VertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z);
				void VertexAttrib3dv(GLuint index, const GLdouble* v);
				void VertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z);
				void VertexAttrib3fv(GLuint index, const GLfloat* v);
				void VertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z);
				void VertexAttrib3sv(GLuint index, const GLshort* v);
				void VertexAttrib4Nbv(GLuint index, const GLbyte* v);
				void VertexAttrib4Niv(GLuint index, const GLint* v);
				void VertexAttrib4Nsv(GLuint index, const GLshort* v);
				void VertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
				void VertexAttrib4Nubv(GLuint index, const GLubyte* v);
				void VertexAttrib4Nuiv(GLuint index, const GLuint* v);
				void VertexAttrib4Nusv(GLuint index, const GLushort* v);
				void VertexAttrib4bv(GLuint index, const GLbyte* v);
				void VertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
				void VertexAttrib4dv(GLuint index, const GLdouble* v);
				void VertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
				void VertexAttrib4fv(GLuint index, const GLfloat* v);
				void VertexAttrib4iv(GLuint index, const GLint* v);
				void VertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
				void VertexAttrib4sv(GLuint index, const GLshort* v);
				void VertexAttrib4ubv(GLuint index, const GLubyte* v);
				void VertexAttrib4uiv(GLuint index, const GLuint* v);
				void VertexAttrib4usv(GLuint index, const GLushort* v);
				void VertexAttribDivisor(GLuint index, GLuint divisor);
				void VertexAttribI1i(GLuint index, GLint x);
				void VertexAttribI1iv(GLuint index, const GLint* v);
				void VertexAttribI1ui(GLuint index, GLuint x);
				void VertexAttribI1uiv(GLuint index, const GLuint* v);
				void VertexAttribI2i(GLuint index, GLint x, GLint y);
				void VertexAttribI2iv(GLuint index, const GLint* v);
				void VertexAttribI2ui(GLuint index, GLuint x, GLuint y);
				void VertexAttribI2uiv(GLuint index, const GLuint* v);
				void VertexAttribI3i(GLuint index, GLint x, GLint y, GLint z);
				void VertexAttribI3iv(GLuint index, const GLint* v);
				void VertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z);
				void VertexAttribI3uiv(GLuint index, const GLuint* v);
				void VertexAttribI4bv(GLuint index, const GLbyte* v);
				void VertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w);
				void VertexAttribI4iv(GLuint index, const GLint* v);
				void VertexAttribI4sv(GLuint index, const GLshort* v);
				void VertexAttribI4ubv(GLuint index, const GLubyte* v);
				void VertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
				void VertexAttribI4uiv(GLuint index, const GLuint* v);
				void VertexAttribI4usv(GLuint index, const GLushort* v);
				void VertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);
				void VertexAttribL1d(GLuint index, GLdouble x);
				void VertexAttribL1dv(GLuint index, const GLdouble* v);
				void VertexAttribL2d(GLuint index, GLdouble x, GLdouble y);
				void VertexAttribL2dv(GLuint index, const GLdouble* v);
				void VertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z);
				void VertexAttribL3dv(GLuint index, const GLdouble* v);
				void VertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
				void VertexAttribL4dv(GLuint index, const GLdouble* v);
				void VertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);
				void VertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
				void VertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
				void VertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
				void VertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
				void VertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
				void VertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
				void VertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
				void VertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
				void VertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer);
				void ViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
				void ViewportIndexedfv(GLuint index, const GLfloat* v);
			}	 // Index

			//
			// Light
			//
			namespace Light
			{
				void GetLightfv(GLenum light, GLenum pname, GLfloat* params);
				void GetLightiv(GLenum light, GLenum pname, GLint* params);
				void Lightf(GLenum light, GLenum pname, GLfloat param);
				void Lightfv(GLenum light, GLenum pname, const GLfloat* params);
				void Lighti(GLenum light, GLenum pname, GLint param);
				void Lightiv(GLenum light, GLenum pname, const GLint* params);
			}	 // Light

			//
			// Location
			//
			namespace Location
			{
				void Uniform1d(GLint location, GLdouble x);
				void Uniform1dv(GLint location, GLsizei count, const GLdouble* value);
				void Uniform1f(GLint location, GLfloat v0);
				void Uniform1fv(GLint location, GLsizei count, const GLfloat* value);
				void Uniform1i(GLint location, GLint v0);
				void Uniform1iv(GLint location, GLsizei count, const GLint* value);
				void Uniform1ui(GLint location, GLuint v0);
				void Uniform1uiv(GLint location, GLsizei count, const GLuint* value);
				void Uniform2d(GLint location, GLdouble x, GLdouble y);
				void Uniform2dv(GLint location, GLsizei count, const GLdouble* value);
				void Uniform2f(GLint location, GLfloat v0, GLfloat v1);
				void Uniform2fv(GLint location, GLsizei count, const GLfloat* value);
				void Uniform2i(GLint location, GLint v0, GLint v1);
				void Uniform2iv(GLint location, GLsizei count, const GLint* value);
				void Uniform2ui(GLint location, GLuint v0, GLuint v1);
				void Uniform2uiv(GLint location, GLsizei count, const GLuint* value);
				void Uniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z);
				void Uniform3dv(GLint location, GLsizei count, const GLdouble* value);
				void Uniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
				void Uniform3fv(GLint location, GLsizei count, const GLfloat* value);
				void Uniform3i(GLint location, GLint v0, GLint v1, GLint v2);
				void Uniform3iv(GLint location, GLsizei count, const GLint* value);
				void Uniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2);
				void Uniform3uiv(GLint location, GLsizei count, const GLuint* value);
				void Uniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
				void Uniform4dv(GLint location, GLsizei count, const GLdouble* value);
				void Uniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
				void Uniform4fv(GLint location, GLsizei count, const GLfloat* value);
				void Uniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
				void Uniform4iv(GLint location, GLsizei count, const GLint* value);
				void Uniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
				void Uniform4uiv(GLint location, GLsizei count, const GLuint* value);
				void UniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void UniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void UniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void UniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void UniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void UniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void UniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void UniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void UniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void UniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void UniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void UniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void UniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void UniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void UniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void UniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void UniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void UniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
			}	 // Location

			//
			// Map
			//
			namespace Map
			{
				void GetPixelMapfv(GLenum map, GLfloat* values);
				void GetPixelMapuiv(GLenum map, GLuint* values);
				void GetPixelMapusv(GLenum map, GLushort* values);
				void GetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat* values);
				void GetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint* values);
				void GetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort* values);
				void PixelMapfv(GLenum map, GLsizei mapsize, const GLfloat* values);
				void PixelMapuiv(GLenum map, GLsizei mapsize, const GLuint* values);
				void PixelMapusv(GLenum map, GLsizei mapsize, const GLushort* values);
			}	 // Map

			//
			// Mask
			//
			namespace Mask
			{
				void Clear(GLbitfield mask);
				void IndexMask(GLuint mask);
				void PushAttrib(GLbitfield mask);
				void PushClientAttrib(GLbitfield mask);
				void StencilMask(GLuint mask);
			}	 // Mask

			//
			// Mode
			//
			namespace Mode
			{
				GLint RenderMode(GLenum mode);
				void Begin(GLenum mode);
				void BlendEquation(GLenum mode);
				void CullFace(GLenum mode);
				void DrawArrays(GLenum mode, GLint first, GLsizei count);
				void DrawArraysIndirect(GLenum mode, const void* indirect);
				void DrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
				void DrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
				void DrawElements(GLenum mode, GLsizei count, GLenum type, const void* indices);
				void DrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void* indices, GLint basevertex);
				void DrawElementsIndirect(GLenum mode, GLenum type, const void* indirect);
				void DrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount);
				void DrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount, GLuint baseinstance);
				void DrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount, GLint basevertex);
				void DrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
				void DrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices);
				void DrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices, GLint basevertex);
				void DrawTransformFeedback(GLenum mode, GLuint id);
				void DrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount);
				void DrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream);
				void DrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
				void EvalMesh1(GLenum mode, GLint i1, GLint i2);
				void EvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
				void FrontFace(GLenum mode);
				void MatrixMode(GLenum mode);
				void MultiDrawArrays(GLenum mode, const GLint* first, const GLsizei* count, GLsizei drawcount);
				void MultiDrawArraysIndirect(GLenum mode, const void* indirect, GLsizei drawcount, GLsizei stride);
				void MultiDrawArraysIndirectCount(GLenum mode, const void* indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
				void MultiDrawElements(GLenum mode, const GLsizei* count, GLenum type, const void* const* indices, GLsizei drawcount);
				void MultiDrawElementsBaseVertex(GLenum mode, const GLsizei* count, GLenum type, const void* const* indices, GLsizei drawcount, const GLint* basevertex);
				void MultiDrawElementsIndirect(GLenum mode, GLenum type, const void* indirect, GLsizei drawcount, GLsizei stride);
				void MultiDrawElementsIndirectCount(GLenum mode, GLenum type, const void* indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
				void ProvokingVertex(GLenum mode);
				void ShadeModel(GLenum mode);
			}	 // Mode

			//
			// Name
			//
			namespace Name
			{
				void LoadName(GLuint name);
				void PushName(GLuint name);
			}	 // Name

			//
			// Pipeline
			//
			namespace Pipeline
			{
				GLboolean IsProgramPipeline(GLuint pipeline);
				void ActiveShaderProgram(GLuint pipeline, GLuint program);
				void BindProgramPipeline(GLuint pipeline);
				void GetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
				void GetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint* params);
				void UseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program);
				void ValidateProgramPipeline(GLuint pipeline);
			}	 // Pipeline

			//
			// Plane
			//
			namespace Plane
			{
				void ClipPlane(GLenum plane, const GLdouble* equation);
				void GetClipPlane(GLenum plane, GLdouble* equation);
			}	 // Plane

			//
			// Pname
			//
			namespace Pname
			{
				void Fogf(GLenum pname, GLfloat param);
				void Fogfv(GLenum pname, const GLfloat* params);
				void Fogi(GLenum pname, GLint param);
				void Fogiv(GLenum pname, const GLint* params);
				void GetBooleanv(GLenum pname, GLboolean* data);
				void GetDoublev(GLenum pname, GLdouble* data);
				void GetFloatv(GLenum pname, GLfloat* data);
				void GetInteger64v(GLenum pname, GLint64* data);
				void GetIntegerv(GLenum pname, GLint* data);
				void GetMultisamplefv(GLenum pname, GLuint index, GLfloat* val);
				void GetPointerv(GLenum pname, void** params);
				void LightModelf(GLenum pname, GLfloat param);
				void LightModelfv(GLenum pname, const GLfloat* params);
				void LightModeli(GLenum pname, GLint param);
				void LightModeliv(GLenum pname, const GLint* params);
				void PatchParameterfv(GLenum pname, const GLfloat* values);
				void PatchParameteri(GLenum pname, GLint value);
				void PixelStoref(GLenum pname, GLfloat param);
				void PixelStorei(GLenum pname, GLint param);
				void PixelTransferf(GLenum pname, GLfloat param);
				void PixelTransferi(GLenum pname, GLint param);
				void PointParameterf(GLenum pname, GLfloat param);
				void PointParameterfv(GLenum pname, const GLfloat* params);
				void PointParameteri(GLenum pname, GLint param);
				void PointParameteriv(GLenum pname, const GLint* params);
			}	 // Pname

			//
			// Program
			//
			namespace Program
			{
				GLboolean IsProgram(GLuint program);
				GLint GetAttribLocation(GLuint program, const GLchar* name);
				GLint GetFragDataIndex(GLuint program, const GLchar* name);
				GLint GetFragDataLocation(GLuint program, const GLchar* name);
				GLint GetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar* name);
				GLint GetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar* name);
				GLint GetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar* name);
				GLint GetUniformLocation(GLuint program, const GLchar* name);
				GLuint GetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar* name);
				GLuint GetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar* name);
				GLuint GetUniformBlockIndex(GLuint program, const GLchar* uniformBlockName);
				void AttachShader(GLuint program, GLuint shader);
				void BindAttribLocation(GLuint program, GLuint index, const GLchar* name);
				void BindFragDataLocation(GLuint program, GLuint color, const GLchar* name);
				void BindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar* name);
				void DeleteProgram(GLuint program);
				void DetachShader(GLuint program, GLuint shader);
				void GetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint* params);
				void GetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
				void GetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei* length, GLchar* name);
				void GetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei* length, GLchar* name);
				void GetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint* values);
				void GetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
				void GetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName);
				void GetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params);
				void GetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformName);
				void GetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params);
				void GetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shaders);
				void GetProgramBinary(GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary);
				void GetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
				void GetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint* params);
				void GetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei* length, GLchar* name);
				void GetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum* props, GLsizei bufSize, GLsizei* length, GLint* params);
				void GetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint* values);
				void GetProgramiv(GLuint program, GLenum pname, GLint* params);
				void GetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name);
				void GetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar* const* uniformNames, GLuint* uniformIndices);
				void GetUniformdv(GLuint program, GLint location, GLdouble* params);
				void GetUniformfv(GLuint program, GLint location, GLfloat* params);
				void GetUniformiv(GLuint program, GLint location, GLint* params);
				void GetUniformuiv(GLuint program, GLint location, GLuint* params);
				void GetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble* params);
				void GetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat* params);
				void GetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint* params);
				void GetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint* params);
				void LinkProgram(GLuint program);
				void ProgramBinary(GLuint program, GLenum binaryFormat, const void* binary, GLsizei length);
				void ProgramParameteri(GLuint program, GLenum pname, GLint value);
				void ProgramUniform1d(GLuint program, GLint location, GLdouble v0);
				void ProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble* value);
				void ProgramUniform1f(GLuint program, GLint location, GLfloat v0);
				void ProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat* value);
				void ProgramUniform1i(GLuint program, GLint location, GLint v0);
				void ProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint* value);
				void ProgramUniform1ui(GLuint program, GLint location, GLuint v0);
				void ProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint* value);
				void ProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1);
				void ProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble* value);
				void ProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1);
				void ProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat* value);
				void ProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1);
				void ProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint* value);
				void ProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1);
				void ProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint* value);
				void ProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
				void ProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble* value);
				void ProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
				void ProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat* value);
				void ProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
				void ProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint* value);
				void ProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
				void ProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint* value);
				void ProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
				void ProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble* value);
				void ProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
				void ProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat* value);
				void ProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
				void ProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint* value);
				void ProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
				void ProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint* value);
				void ProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void ProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void ProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void ProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void ProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void ProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void ProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void ProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void ProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void ProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void ProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void ProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void ProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void ProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void ProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void ProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void ProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
				void ProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
				void ShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
				void TransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar* const* varyings, GLenum bufferMode);
				void UniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
				void UseProgram(GLuint program);
				void ValidateProgram(GLuint program);
			}	 // Program

			//
			// Readframebuffer
			//
			namespace Readframebuffer
			{
				void BlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
			}	 // Readframebuffer

			//
			// Renderbuffer
			//
			namespace Renderbuffer
			{
				GLboolean IsRenderbuffer(GLuint renderbuffer);
				void GetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint* params);
				void NamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
				void NamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
			}	 // Renderbuffer

			//
			// Sampler
			//
			namespace Sampler
			{
				GLboolean IsSampler(GLuint sampler);
				void GetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint* params);
				void GetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint* params);
				void GetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat* params);
				void GetSamplerParameteriv(GLuint sampler, GLenum pname, GLint* params);
				void SamplerParameterIiv(GLuint sampler, GLenum pname, const GLint* param);
				void SamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint* param);
				void SamplerParameterf(GLuint sampler, GLenum pname, GLfloat param);
				void SamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat* param);
				void SamplerParameteri(GLuint sampler, GLenum pname, GLint param);
				void SamplerParameteriv(GLuint sampler, GLenum pname, const GLint* param);
			}	 // Sampler

			//
			// Shader
			//
			namespace Shader
			{
				GLboolean IsShader(GLuint shader);
				void CompileShader(GLuint shader);
				void DeleteShader(GLuint shader);
				void GetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
				void GetShaderSource(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source);
				void GetShaderiv(GLuint shader, GLenum pname, GLint* params);
				void ShaderSource(GLuint shader, GLsizei count, const GLchar* const* string, const GLint* length);
				void SpecializeShader(GLuint shader, const GLchar* pEntryPoint, GLuint numSpecializationConstants, const GLuint* pConstantIndex, const GLuint* pConstantValue);
			}	 // Shader

			//
			// Shadertype
			//
			namespace Shadertype
			{
				void GetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
				void GetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint* params);
				void UniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint* indices);
			}	 // Shadertype

			//
			// Target
			//
			namespace Target
			{
				GLboolean IsEnabledi(GLenum target, GLuint index);
				GLboolean UnmapBuffer(GLenum target);
				GLenum CheckFramebufferStatus(GLenum target);
				void BeginQuery(GLenum target, GLuint id);
				void BeginQueryIndexed(GLenum target, GLuint index, GLuint id);
				void BindBuffer(GLenum target, GLuint buffer);
				void BindBufferBase(GLenum target, GLuint index, GLuint buffer);
				void BindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
				void BindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint* buffers);
				void BindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint* buffers, const GLintptr* offsets, const GLsizeiptr* sizes);
				void BindFramebuffer(GLenum target, GLuint framebuffer);
				void BindRenderbuffer(GLenum target, GLuint renderbuffer);
				void BindTexture(GLenum target, GLuint texture);
				void BindTransformFeedback(GLenum target, GLuint id);
				void BufferData(GLenum target, GLsizeiptr size, const void* data, GLenum usage);
				void BufferStorage(GLenum target, GLsizeiptr size, const void* data, GLbitfield flags);
				void BufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void* data);
				void ClampColor(GLenum target, GLenum clamp);
				void ClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void* data);
				void ClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void* data);
				void CompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void* data);
				void CompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data);
				void CompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void* data);
				void CompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void* data);
				void CompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data);
				void CompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data);
				void CopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
				void CopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
				void CopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
				void CopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
				void CopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
				void CreateQueries(GLenum target, GLsizei n, GLuint* ids);
				void CreateTextures(GLenum target, GLsizei n, GLuint* textures);
				void Disablei(GLenum target, GLuint index);
				void Enablei(GLenum target, GLuint index);
				void EndQuery(GLenum target);
				void EndQueryIndexed(GLenum target, GLuint index);
				void FlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length);
				void FramebufferParameteri(GLenum target, GLenum pname, GLint param);
				void FramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
				void FramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level);
				void FramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
				void FramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
				void FramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
				void FramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
				void GenerateMipmap(GLenum target);
				void GetBooleani_v(GLenum target, GLuint index, GLboolean* data);
				void GetBufferParameteri64v(GLenum target, GLenum pname, GLint64* params);
				void GetBufferParameteriv(GLenum target, GLenum pname, GLint* params);
				void GetBufferPointerv(GLenum target, GLenum pname, void** params);
				void GetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void* data);
				void GetCompressedTexImage(GLenum target, GLint level, void* img);
				void GetDoublei_v(GLenum target, GLuint index, GLdouble* data);
				void GetFloati_v(GLenum target, GLuint index, GLfloat* data);
				void GetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint* params);
				void GetFramebufferParameteriv(GLenum target, GLenum pname, GLint* params);
				void GetInteger64i_v(GLenum target, GLuint index, GLint64* data);
				void GetIntegeri_v(GLenum target, GLuint index, GLint* data);
				void GetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64* params);
				void GetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint* params);
				void GetMapdv(GLenum target, GLenum query, GLdouble* v);
				void GetMapfv(GLenum target, GLenum query, GLfloat* v);
				void GetMapiv(GLenum target, GLenum query, GLint* v);
				void GetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint* params);
				void GetQueryiv(GLenum target, GLenum pname, GLint* params);
				void GetRenderbufferParameteriv(GLenum target, GLenum pname, GLint* params);
				void GetTexEnvfv(GLenum target, GLenum pname, GLfloat* params);
				void GetTexEnviv(GLenum target, GLenum pname, GLint* params);
				void GetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void* pixels);
				void GetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat* params);
				void GetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint* params);
				void GetTexParameterIiv(GLenum target, GLenum pname, GLint* params);
				void GetTexParameterIuiv(GLenum target, GLenum pname, GLuint* params);
				void GetTexParameterfv(GLenum target, GLenum pname, GLfloat* params);
				void GetTexParameteriv(GLenum target, GLenum pname, GLint* params);
				void GetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* table);
				void GetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void* pixels);
				void GetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* image);
				void GetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values);
				void GetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble* v);
				void GetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat* v);
				void GetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint* v);
				void GetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values);
				void GetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void* row, GLsizei columnBufSize, void* column, void* span);
				void GetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void* pixels);
				void Hint(GLenum target, GLenum mode);
				void InvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum* attachments);
				void InvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum* attachments, GLint x, GLint y, GLsizei width, GLsizei height);
				void Map1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points);
				void Map1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points);
				void Map2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points);
				void Map2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points);
				void MultiTexCoord1d(GLenum target, GLdouble s);
				void MultiTexCoord1dv(GLenum target, const GLdouble* v);
				void MultiTexCoord1f(GLenum target, GLfloat s);
				void MultiTexCoord1fv(GLenum target, const GLfloat* v);
				void MultiTexCoord1i(GLenum target, GLint s);
				void MultiTexCoord1iv(GLenum target, const GLint* v);
				void MultiTexCoord1s(GLenum target, GLshort s);
				void MultiTexCoord1sv(GLenum target, const GLshort* v);
				void MultiTexCoord2d(GLenum target, GLdouble s, GLdouble t);
				void MultiTexCoord2dv(GLenum target, const GLdouble* v);
				void MultiTexCoord2f(GLenum target, GLfloat s, GLfloat t);
				void MultiTexCoord2fv(GLenum target, const GLfloat* v);
				void MultiTexCoord2i(GLenum target, GLint s, GLint t);
				void MultiTexCoord2iv(GLenum target, const GLint* v);
				void MultiTexCoord2s(GLenum target, GLshort s, GLshort t);
				void MultiTexCoord2sv(GLenum target, const GLshort* v);
				void MultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r);
				void MultiTexCoord3dv(GLenum target, const GLdouble* v);
				void MultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r);
				void MultiTexCoord3fv(GLenum target, const GLfloat* v);
				void MultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r);
				void MultiTexCoord3iv(GLenum target, const GLint* v);
				void MultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r);
				void MultiTexCoord3sv(GLenum target, const GLshort* v);
				void MultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
				void MultiTexCoord4dv(GLenum target, const GLdouble* v);
				void MultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
				void MultiTexCoord4fv(GLenum target, const GLfloat* v);
				void MultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q);
				void MultiTexCoord4iv(GLenum target, const GLint* v);
				void MultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
				void MultiTexCoord4sv(GLenum target, const GLshort* v);
				void RenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
				void RenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
				void TexBuffer(GLenum target, GLenum internalformat, GLuint buffer);
				void TexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
				void TexEnvf(GLenum target, GLenum pname, GLfloat param);
				void TexEnvfv(GLenum target, GLenum pname, const GLfloat* params);
				void TexEnvi(GLenum target, GLenum pname, GLint param);
				void TexEnviv(GLenum target, GLenum pname, const GLint* params);
				void TexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void* pixels);
				void TexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels);
				void TexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
				void TexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void* pixels);
				void TexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
				void TexParameterIiv(GLenum target, GLenum pname, const GLint* params);
				void TexParameterIuiv(GLenum target, GLenum pname, const GLuint* params);
				void TexParameterf(GLenum target, GLenum pname, GLfloat param);
				void TexParameterfv(GLenum target, GLenum pname, const GLfloat* params);
				void TexParameteri(GLenum target, GLenum pname, GLint param);
				void TexParameteriv(GLenum target, GLenum pname, const GLint* params);
				void TexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
				void TexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
				void TexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
				void TexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
				void TexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
				void TexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void* pixels);
				void TexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels);
				void TexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels);
			}	 // Target

			//
			// Texture
			//
			namespace Texture
			{
				GLboolean IsTexture(GLuint texture);
				void ActiveTexture(GLenum texture);
				void ClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void* data);
				void ClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* data);
				void ClientActiveTexture(GLenum texture);
				void CompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void* data);
				void CompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data);
				void CompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data);
				void CopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
				void CopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
				void CopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
				void GenerateTextureMipmap(GLuint texture);
				void GetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void* pixels);
				void GetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void* pixels);
				void GetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void* pixels);
				void GetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat* params);
				void GetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint* params);
				void GetTextureParameterIiv(GLuint texture, GLenum pname, GLint* params);
				void GetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint* params);
				void GetTextureParameterfv(GLuint texture, GLenum pname, GLfloat* params);
				void GetTextureParameteriv(GLuint texture, GLenum pname, GLint* params);
				void GetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void* pixels);
				void InvalidateTexImage(GLuint texture, GLint level);
				void InvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
				void MultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords);
				void MultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint* coords);
				void MultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords);
				void MultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint* coords);
				void MultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords);
				void MultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint* coords);
				void MultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords);
				void MultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint* coords);
				void TextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer);
				void TextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
				void TextureParameterIiv(GLuint texture, GLenum pname, const GLint* params);
				void TextureParameterIuiv(GLuint texture, GLenum pname, const GLuint* params);
				void TextureParameterf(GLuint texture, GLenum pname, GLfloat param);
				void TextureParameterfv(GLuint texture, GLenum pname, const GLfloat* param);
				void TextureParameteri(GLuint texture, GLenum pname, GLint param);
				void TextureParameteriv(GLuint texture, GLenum pname, const GLint* param);
				void TextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
				void TextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
				void TextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
				void TextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
				void TextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
				void TextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void* pixels);
				void TextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels);
				void TextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels);
				void TextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
			}	 // Texture

			//
			// Vaobj
			//
			namespace Vaobj
			{
				void DisableVertexArrayAttrib(GLuint vaobj, GLuint index);
				void EnableVertexArrayAttrib(GLuint vaobj, GLuint index);
				void GetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64* param);
				void GetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint* param);
				void GetVertexArrayiv(GLuint vaobj, GLenum pname, GLint* param);
				void VertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
				void VertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
				void VertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
				void VertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
				void VertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor);
				void VertexArrayElementBuffer(GLuint vaobj, GLuint buffer);
				void VertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
				void VertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint* buffers, const GLintptr* offsets, const GLsizei* strides);
			}	 // Vaobj

			//
			// Xfb
			//
			namespace Xfb
			{
				void GetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64* param);
				void GetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint* param);
				void GetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint* param);
				void TransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer);
				void TransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
			}	 // Xfb

			//
			// Other
			//
			namespace Other
			{
				GLboolean AreTexturesResident(GLsizei n, const GLuint* textures, GLboolean* residences);
				GLboolean IsEnabled(GLenum cap);
				GLboolean IsList(GLuint list);
				GLboolean IsSync(GLsync sync);
				GLboolean IsVertexArray(GLuint array);
				GLenum ClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout);
				GLenum GetError(void);
				GLenum GetGraphicsResetStatus(void);
				GLsync FenceSync(GLenum condition, GLbitfield flags);
				GLuint CreateProgram(void);
				GLuint CreateShader(GLenum type);
				GLuint CreateShaderProgramv(GLenum type, GLsizei count, const GLchar* const* strings);
				GLuint GenLists(GLsizei range);
				GLuint GetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum* sources, GLenum* types, GLuint* ids, GLenum* severities, GLsizei* lengths, GLchar* messageLog);
				void Accum(GLenum op, GLfloat value);
				void AlphaFunc(GLenum func, GLfloat ref);
				void ArrayElement(GLint i);
				void BeginTransformFeedback(GLenum primitiveMode);
				void BindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
				void BindImageTextures(GLuint first, GLsizei count, const GLuint* textures);
				void BindSampler(GLuint unit, GLuint sampler);
				void BindSamplers(GLuint first, GLsizei count, const GLuint* samplers);
				void BindTextureUnit(GLuint unit, GLuint texture);
				void BindTextures(GLuint first, GLsizei count, const GLuint* textures);
				void BindVertexArray(GLuint array);
				void BindVertexBuffers(GLuint first, GLsizei count, const GLuint* buffers, const GLintptr* offsets, const GLsizei* strides);
				void Bitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte* bitmap);
				void BlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
				void BlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
				void BlendFunc(GLenum sfactor, GLenum dfactor);
				void BlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
				void BlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
				void CallList(GLuint list);
				void CallLists(GLsizei n, GLenum type, const void* lists);
				void ClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
				void ClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
				void ClearDepth(GLdouble depth);
				void ClearDepthf(GLfloat d);
				void ClearIndex(GLfloat c);
				void ClearStencil(GLint s);
				void ClipControl(GLenum origin, GLenum depth);
				void Color3b(GLbyte red, GLbyte green, GLbyte blue);
				void Color3bv(const GLbyte* v);
				void Color3d(GLdouble red, GLdouble green, GLdouble blue);
				void Color3dv(const GLdouble* v);
				void Color3f(GLfloat red, GLfloat green, GLfloat blue);
				void Color3fv(const GLfloat* v);
				void Color3i(GLint red, GLint green, GLint blue);
				void Color3iv(const GLint* v);
				void Color3s(GLshort red, GLshort green, GLshort blue);
				void Color3sv(const GLshort* v);
				void Color3ub(GLubyte red, GLubyte green, GLubyte blue);
				void Color3ubv(const GLubyte* v);
				void Color3ui(GLuint red, GLuint green, GLuint blue);
				void Color3uiv(const GLuint* v);
				void Color3us(GLushort red, GLushort green, GLushort blue);
				void Color3usv(const GLushort* v);
				void Color4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
				void Color4bv(const GLbyte* v);
				void Color4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
				void Color4dv(const GLdouble* v);
				void Color4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
				void Color4fv(const GLfloat* v);
				void Color4i(GLint red, GLint green, GLint blue, GLint alpha);
				void Color4iv(const GLint* v);
				void Color4s(GLshort red, GLshort green, GLshort blue, GLshort alpha);
				void Color4sv(const GLshort* v);
				void Color4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
				void Color4ubv(const GLubyte* v);
				void Color4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha);
				void Color4uiv(const GLuint* v);
				void Color4us(GLushort red, GLushort green, GLushort blue, GLushort alpha);
				void Color4usv(const GLushort* v);
				void ColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
				void ColorP3ui(GLenum type, GLuint color);
				void ColorP3uiv(GLenum type, const GLuint* color);
				void ColorP4ui(GLenum type, GLuint color);
				void ColorP4uiv(GLenum type, const GLuint* color);
				void ColorPointer(GLint size, GLenum type, GLsizei stride, const void* pointer);
				void CopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
				void CopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
				void CopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
				void CopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
				void CreateBuffers(GLsizei n, GLuint* buffers);
				void CreateFramebuffers(GLsizei n, GLuint* framebuffers);
				void CreateProgramPipelines(GLsizei n, GLuint* pipelines);
				void CreateRenderbuffers(GLsizei n, GLuint* renderbuffers);
				void CreateSamplers(GLsizei n, GLuint* samplers);
				void CreateTransformFeedbacks(GLsizei n, GLuint* ids);
				void CreateVertexArrays(GLsizei n, GLuint* arrays);
				void DebugMessageCallback(GLDEBUGPROC callback, const void* userParam);
				void DebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled);
				void DebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* buf);
				void DeleteBuffers(GLsizei n, const GLuint* buffers);
				void DeleteFramebuffers(GLsizei n, const GLuint* framebuffers);
				void DeleteLists(GLuint list, GLsizei range);
				void DeleteProgramPipelines(GLsizei n, const GLuint* pipelines);
				void DeleteQueries(GLsizei n, const GLuint* ids);
				void DeleteRenderbuffers(GLsizei n, const GLuint* renderbuffers);
				void DeleteSamplers(GLsizei count, const GLuint* samplers);
				void DeleteSync(GLsync sync);
				void DeleteTextures(GLsizei n, const GLuint* textures);
				void DeleteTransformFeedbacks(GLsizei n, const GLuint* ids);
				void DeleteVertexArrays(GLsizei n, const GLuint* arrays);
				void DepthFunc(GLenum func);
				void DepthMask(GLboolean flag);
				void DepthRange(GLdouble n, GLdouble f);
				void DepthRangeArrayv(GLuint first, GLsizei count, const GLdouble* v);
				void DepthRangef(GLfloat n, GLfloat f);
				void Disable(GLenum cap);
				void DisableClientState(GLenum array);
				void DispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
				void DispatchComputeIndirect(GLintptr indirect);
				void DrawBuffers(GLsizei n, const GLenum* bufs);
				void DrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels);
				void EdgeFlag(GLboolean flag);
				void EdgeFlagPointer(GLsizei stride, const void* pointer);
				void EdgeFlagv(const GLboolean* flag);
				void Enable(GLenum cap);
				void EnableClientState(GLenum array);
				void End(void);
				void EndConditionalRender(void);
				void EndList(void);
				void EndTransformFeedback(void);
				void EvalCoord1d(GLdouble u);
				void EvalCoord1dv(const GLdouble* u);
				void EvalCoord1f(GLfloat u);
				void EvalCoord1fv(const GLfloat* u);
				void EvalCoord2d(GLdouble u, GLdouble v);
				void EvalCoord2dv(const GLdouble* u);
				void EvalCoord2f(GLfloat u, GLfloat v);
				void EvalCoord2fv(const GLfloat* u);
				void EvalPoint1(GLint i);
				void EvalPoint2(GLint i, GLint j);
				void FeedbackBuffer(GLsizei size, GLenum type, GLfloat* buffer);
				void Finish(void);
				void Flush(void);
				void FogCoordPointer(GLenum type, GLsizei stride, const void* pointer);
				void FogCoorddv(const GLdouble* coord);
				void FogCoordfv(const GLfloat* coord);
				void Frustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
				void GenBuffers(GLsizei n, GLuint* buffers);
				void GenFramebuffers(GLsizei n, GLuint* framebuffers);
				void GenProgramPipelines(GLsizei n, GLuint* pipelines);
				void GenQueries(GLsizei n, GLuint* ids);
				void GenRenderbuffers(GLsizei n, GLuint* renderbuffers);
				void GenSamplers(GLsizei count, GLuint* samplers);
				void GenTextures(GLsizei n, GLuint* textures);
				void GenTransformFeedbacks(GLsizei n, GLuint* ids);
				void GenVertexArrays(GLsizei n, GLuint* arrays);
				void GetObjectPtrLabel(const void* ptr, GLsizei bufSize, GLsizei* length, GLchar* label);
				void GetPolygonStipple(GLubyte* mask);
				void GetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values);
				void GetnPolygonStipple(GLsizei bufSize, GLubyte* pattern);
				void IndexPointer(GLenum type, GLsizei stride, const void* pointer);
				void Indexd(GLdouble c);
				void Indexdv(const GLdouble* c);
				void Indexf(GLfloat c);
				void Indexfv(const GLfloat* c);
				void Indexi(GLint c);
				void Indexiv(const GLint* c);
				void Indexs(GLshort c);
				void Indexsv(const GLshort* c);
				void Indexub(GLubyte c);
				void Indexubv(const GLubyte* c);
				void InitNames(void);
				void InterleavedArrays(GLenum format, GLsizei stride, const void* pointer);
				void LineStipple(GLint factor, GLushort pattern);
				void LineWidth(GLfloat width);
				void ListBase(GLuint base);
				void LoadIdentity(void);
				void LoadMatrixd(const GLdouble* m);
				void LoadMatrixf(const GLfloat* m);
				void LoadTransposeMatrixd(const GLdouble* m);
				void LoadTransposeMatrixf(const GLfloat* m);
				void LogicOp(GLenum opcode);
				void MapGrid1d(GLint un, GLdouble u1, GLdouble u2);
				void MapGrid1f(GLint un, GLfloat u1, GLfloat u2);
				void MapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
				void MapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
				void MemoryBarrier(GLbitfield barriers);
				void MemoryBarrierByRegion(GLbitfield barriers);
				void MinSampleShading(GLfloat value);
				void MultMatrixd(const GLdouble* m);
				void MultMatrixf(const GLfloat* m);
				void MultTransposeMatrixd(const GLdouble* m);
				void MultTransposeMatrixf(const GLfloat* m);
				void NewList(GLuint list, GLenum mode);
				void Normal3b(GLbyte nx, GLbyte ny, GLbyte nz);
				void Normal3bv(const GLbyte* v);
				void Normal3d(GLdouble nx, GLdouble ny, GLdouble nz);
				void Normal3dv(const GLdouble* v);
				void Normal3f(GLfloat nx, GLfloat ny, GLfloat nz);
				void Normal3fv(const GLfloat* v);
				void Normal3i(GLint nx, GLint ny, GLint nz);
				void Normal3iv(const GLint* v);
				void Normal3s(GLshort nx, GLshort ny, GLshort nz);
				void Normal3sv(const GLshort* v);
				void NormalP3ui(GLenum type, GLuint coords);
				void NormalP3uiv(GLenum type, const GLuint* coords);
				void NormalPointer(GLenum type, GLsizei stride, const void* pointer);
				void ObjectPtrLabel(const void* ptr, GLsizei length, const GLchar* label);
				void Ortho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
				void PassThrough(GLfloat token);
				void PauseTransformFeedback(void);
				void PixelZoom(GLfloat xfactor, GLfloat yfactor);
				void PointSize(GLfloat size);
				void PolygonOffset(GLfloat factor, GLfloat units);
				void PolygonOffsetClamp(GLfloat factor, GLfloat units, GLfloat clamp);
				void PolygonStipple(const GLubyte* mask);
				void PopAttrib(void);
				void PopClientAttrib(void);
				void PopDebugGroup(void);
				void PopMatrix(void);
				void PopName(void);
				void PrioritizeTextures(GLsizei n, const GLuint* textures, const GLfloat* priorities);
				void PushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar* message);
				void PushMatrix(void);
				void RasterPos2d(GLdouble x, GLdouble y);
				void RasterPos2dv(const GLdouble* v);
				void RasterPos2f(GLfloat x, GLfloat y);
				void RasterPos2fv(const GLfloat* v);
				void RasterPos2i(GLint x, GLint y);
				void RasterPos2iv(const GLint* v);
				void RasterPos2s(GLshort x, GLshort y);
				void RasterPos2sv(const GLshort* v);
				void RasterPos3d(GLdouble x, GLdouble y, GLdouble z);
				void RasterPos3dv(const GLdouble* v);
				void RasterPos3f(GLfloat x, GLfloat y, GLfloat z);
				void RasterPos3fv(const GLfloat* v);
				void RasterPos3i(GLint x, GLint y, GLint z);
				void RasterPos3iv(const GLint* v);
				void RasterPos3s(GLshort x, GLshort y, GLshort z);
				void RasterPos3sv(const GLshort* v);
				void RasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
				void RasterPos4dv(const GLdouble* v);
				void RasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
				void RasterPos4fv(const GLfloat* v);
				void RasterPos4i(GLint x, GLint y, GLint z, GLint w);
				void RasterPos4iv(const GLint* v);
				void RasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w);
				void RasterPos4sv(const GLshort* v);
				void ReadBuffer(GLenum src);
				void ReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels);
				void ReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void* data);
				void Rectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
				void Rectdv(const GLdouble* v1, const GLdouble* v2);
				void Rectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
				void Rectfv(const GLfloat* v1, const GLfloat* v2);
				void Recti(GLint x1, GLint y1, GLint x2, GLint y2);
				void Rectiv(const GLint* v1, const GLint* v2);
				void Rects(GLshort x1, GLshort y1, GLshort x2, GLshort y2);
				void Rectsv(const GLshort* v1, const GLshort* v2);
				void ReleaseShaderCompiler(void);
				void ResumeTransformFeedback(void);
				void Rotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
				void Rotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
				void SampleCoverage(GLfloat value, GLboolean invert);
				void SampleMaski(GLuint maskNumber, GLbitfield mask);
				void Scaled(GLdouble x, GLdouble y, GLdouble z);
				void Scalef(GLfloat x, GLfloat y, GLfloat z);
				void Scissor(GLint x, GLint y, GLsizei width, GLsizei height);
				void ScissorArrayv(GLuint first, GLsizei count, const GLint* v);
				void SecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue);
				void SecondaryColor3bv(const GLbyte* v);
				void SecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue);
				void SecondaryColor3dv(const GLdouble* v);
				void SecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue);
				void SecondaryColor3fv(const GLfloat* v);
				void SecondaryColor3i(GLint red, GLint green, GLint blue);
				void SecondaryColor3iv(const GLint* v);
				void SecondaryColor3s(GLshort red, GLshort green, GLshort blue);
				void SecondaryColor3sv(const GLshort* v);
				void SecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue);
				void SecondaryColor3ubv(const GLubyte* v);
				void SecondaryColor3ui(GLuint red, GLuint green, GLuint blue);
				void SecondaryColor3uiv(const GLuint* v);
				void SecondaryColor3us(GLushort red, GLushort green, GLushort blue);
				void SecondaryColor3usv(const GLushort* v);
				void SecondaryColorP3ui(GLenum type, GLuint color);
				void SecondaryColorP3uiv(GLenum type, const GLuint* color);
				void SecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void* pointer);
				void SelectBuffer(GLsizei size, GLuint* buffer);
				void ShaderBinary(GLsizei count, const GLuint* shaders, GLenum binaryformat, const void* binary, GLsizei length);
				void StencilFunc(GLenum func, GLint ref, GLuint mask);
				void StencilOp(GLenum fail, GLenum zfail, GLenum zpass);
				void TexCoord1d(GLdouble s);
				void TexCoord1dv(const GLdouble* v);
				void TexCoord1f(GLfloat s);
				void TexCoord1fv(const GLfloat* v);
				void TexCoord1i(GLint s);
				void TexCoord1iv(const GLint* v);
				void TexCoord1s(GLshort s);
				void TexCoord1sv(const GLshort* v);
				void TexCoord2d(GLdouble s, GLdouble t);
				void TexCoord2dv(const GLdouble* v);
				void TexCoord2f(GLfloat s, GLfloat t);
				void TexCoord2fv(const GLfloat* v);
				void TexCoord2i(GLint s, GLint t);
				void TexCoord2iv(const GLint* v);
				void TexCoord2s(GLshort s, GLshort t);
				void TexCoord2sv(const GLshort* v);
				void TexCoord3d(GLdouble s, GLdouble t, GLdouble r);
				void TexCoord3dv(const GLdouble* v);
				void TexCoord3f(GLfloat s, GLfloat t, GLfloat r);
				void TexCoord3fv(const GLfloat* v);
				void TexCoord3i(GLint s, GLint t, GLint r);
				void TexCoord3iv(const GLint* v);
				void TexCoord3s(GLshort s, GLshort t, GLshort r);
				void TexCoord3sv(const GLshort* v);
				void TexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
				void TexCoord4dv(const GLdouble* v);
				void TexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q);
				void TexCoord4fv(const GLfloat* v);
				void TexCoord4i(GLint s, GLint t, GLint r, GLint q);
				void TexCoord4iv(const GLint* v);
				void TexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q);
				void TexCoord4sv(const GLshort* v);
				void TexCoordP1ui(GLenum type, GLuint coords);
				void TexCoordP1uiv(GLenum type, const GLuint* coords);
				void TexCoordP2ui(GLenum type, GLuint coords);
				void TexCoordP2uiv(GLenum type, const GLuint* coords);
				void TexCoordP3ui(GLenum type, GLuint coords);
				void TexCoordP3uiv(GLenum type, const GLuint* coords);
				void TexCoordP4ui(GLenum type, GLuint coords);
				void TexCoordP4uiv(GLenum type, const GLuint* coords);
				void TexCoordPointer(GLint size, GLenum type, GLsizei stride, const void* pointer);
				void TextureBarrier(void);
				void Translated(GLdouble x, GLdouble y, GLdouble z);
				void Translatef(GLfloat x, GLfloat y, GLfloat z);
				void Vertex2d(GLdouble x, GLdouble y);
				void Vertex2dv(const GLdouble* v);
				void Vertex2f(GLfloat x, GLfloat y);
				void Vertex2fv(const GLfloat* v);
				void Vertex2i(GLint x, GLint y);
				void Vertex2iv(const GLint* v);
				void Vertex2s(GLshort x, GLshort y);
				void Vertex2sv(const GLshort* v);
				void Vertex3d(GLdouble x, GLdouble y, GLdouble z);
				void Vertex3dv(const GLdouble* v);
				void Vertex3f(GLfloat x, GLfloat y, GLfloat z);
				void Vertex3fv(const GLfloat* v);
				void Vertex3i(GLint x, GLint y, GLint z);
				void Vertex3iv(const GLint* v);
				void Vertex3s(GLshort x, GLshort y, GLshort z);
				void Vertex3sv(const GLshort* v);
				void Vertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
				void Vertex4dv(const GLdouble* v);
				void Vertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
				void Vertex4fv(const GLfloat* v);
				void Vertex4i(GLint x, GLint y, GLint z, GLint w);
				void Vertex4iv(const GLint* v);
				void Vertex4s(GLshort x, GLshort y, GLshort z, GLshort w);
				void Vertex4sv(const GLshort* v);
				void VertexP2ui(GLenum type, GLuint value);
				void VertexP2uiv(GLenum type, const GLuint* value);
				void VertexP3ui(GLenum type, GLuint value);
				void VertexP3uiv(GLenum type, const GLuint* value);
				void VertexP4ui(GLenum type, GLuint value);
				void VertexP4uiv(GLenum type, const GLuint* value);
				void VertexPointer(GLint size, GLenum type, GLsizei stride, const void* pointer);
				void Viewport(GLint x, GLint y, GLsizei width, GLsizei height);
				void ViewportArrayv(GLuint first, GLsizei count, const GLfloat* v);
				void WaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout);
				void WindowPos2d(GLdouble x, GLdouble y);
				void WindowPos2dv(const GLdouble* v);
				void WindowPos2f(GLfloat x, GLfloat y);
				void WindowPos2fv(const GLfloat* v);
				void WindowPos2i(GLint x, GLint y);
				void WindowPos2iv(const GLint* v);
				void WindowPos2s(GLshort x, GLshort y);
				void WindowPos2sv(const GLshort* v);
				void WindowPos3d(GLdouble x, GLdouble y, GLdouble z);
				void WindowPos3dv(const GLdouble* v);
				void WindowPos3f(GLfloat x, GLfloat y, GLfloat z);
				void WindowPos3fv(const GLfloat* v);
				void WindowPos3i(GLint x, GLint y, GLint z);
				void WindowPos3iv(const GLint* v);
				void WindowPos3s(GLshort x, GLshort y, GLshort z);
				void WindowPos3sv(const GLshort* v);
			}	 // Other

		}
	}
}