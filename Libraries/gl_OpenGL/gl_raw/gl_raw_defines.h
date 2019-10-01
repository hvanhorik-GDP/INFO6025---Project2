#pragma once

namespace gl
{
	namespace raw
	{
		namespace defines
		{
			//
			// Atomic
			//
			enum eAtomic
			{
				ActiveAtomicCounterBuffers = 0x92D9,				// GL_ACTIVE_ATOMIC_COUNTER_BUFFERS
				AtomicCounterBarrierBit = 0x00001000,				// GL_ATOMIC_COUNTER_BARRIER_BIT
				AtomicCounterBuffer = 0x92C0,				// GL_ATOMIC_COUNTER_BUFFER
				AtomicCounterBufferActiveAtomicCounterIndices = 0x92C6,				// GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES
				AtomicCounterBufferActiveAtomicCounters = 0x92C5,				// GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS
				AtomicCounterBufferBinding = 0x92C1,				// GL_ATOMIC_COUNTER_BUFFER_BINDING
				AtomicCounterBufferDataSize = 0x92C4,				// GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE
				AtomicCounterBufferIndex = 0x9301,				// GL_ATOMIC_COUNTER_BUFFER_INDEX
				AtomicCounterBufferReferencedByComputeShader = 0x90ED,				// GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER
				AtomicCounterBufferReferencedByFragmentShader = 0x92CB,				// GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER
				AtomicCounterBufferReferencedByGeometryShader = 0x92CA,				// GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER
				AtomicCounterBufferReferencedByTessControlShader = 0x92C8,				// GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER
				AtomicCounterBufferReferencedByTessEvaluationShader = 0x92C9,				// GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER
				AtomicCounterBufferReferencedByVertexShader = 0x92C7,				// GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER
				AtomicCounterBufferSize = 0x92C3,				// GL_ATOMIC_COUNTER_BUFFER_SIZE
				AtomicCounterBufferStart = 0x92C2,				// GL_ATOMIC_COUNTER_BUFFER_START
				UnsignedIntAtomicCounter = 0x92DB,				// GL_UNSIGNED_INT_ATOMIC_COUNTER
			} eAtomic;	// eAtomic

			//
			// Buffer
			//
			enum eBuffer
			{
				AccumBufferBit = 0x00000200,				// GL_ACCUM_BUFFER_BIT
				ArrayBuffer = 0x8892,				// GL_ARRAY_BUFFER
				ArrayBufferBinding = 0x8894,				// GL_ARRAY_BUFFER_BINDING
				Buffer = 0x82E0,				// GL_BUFFER
				BufferAccess = 0x88BB,				// GL_BUFFER_ACCESS
				BufferAccessFlags = 0x911F,				// GL_BUFFER_ACCESS_FLAGS
				BufferBinding = 0x9302,				// GL_BUFFER_BINDING
				BufferDataSize = 0x9303,				// GL_BUFFER_DATA_SIZE
				BufferImmutableStorage = 0x821F,				// GL_BUFFER_IMMUTABLE_STORAGE
				BufferMapLength = 0x9120,				// GL_BUFFER_MAP_LENGTH
				BufferMapOffset = 0x9121,				// GL_BUFFER_MAP_OFFSET
				BufferMapPointer = 0x88BD,				// GL_BUFFER_MAP_POINTER
				BufferMapped = 0x88BC,				// GL_BUFFER_MAPPED
				BufferSize = 0x8764,				// GL_BUFFER_SIZE
				BufferStorageFlags = 0x8220,				// GL_BUFFER_STORAGE_FLAGS
				BufferUpdateBarrierBit = 0x00000200,				// GL_BUFFER_UPDATE_BARRIER_BIT
				BufferUsage = 0x8765,				// GL_BUFFER_USAGE
				BufferVariable = 0x92E5,				// GL_BUFFER_VARIABLE
				ClearBuffer = 0x82B4,				// GL_CLEAR_BUFFER
				ClientMappedBufferBarrierBit = 0x00004000,				// GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT
				CopyReadBuffer = 0x8F36,				// GL_COPY_READ_BUFFER
				CopyReadBufferBinding = 0x8F36,				// GL_COPY_READ_BUFFER_BINDING
				CopyWriteBuffer = 0x8F37,				// GL_COPY_WRITE_BUFFER
				CopyWriteBufferBinding = 0x8F37,				// GL_COPY_WRITE_BUFFER_BINDING
				DispatchIndirectBuffer = 0x90EE,				// GL_DISPATCH_INDIRECT_BUFFER
				DispatchIndirectBufferBinding = 0x90EF,				// GL_DISPATCH_INDIRECT_BUFFER_BINDING
				EdgeFlagArrayBufferBinding = 0x889B,				// GL_EDGE_FLAG_ARRAY_BUFFER_BINDING
				ElementArrayBuffer = 0x8893,				// GL_ELEMENT_ARRAY_BUFFER
				ElementArrayBufferBinding = 0x8895,				// GL_ELEMENT_ARRAY_BUFFER_BINDING
				FeedbackBufferPointer = 0x0DF0,				// GL_FEEDBACK_BUFFER_POINTER
				FeedbackBufferSize = 0x0DF1,				// GL_FEEDBACK_BUFFER_SIZE
				FeedbackBufferType = 0x0DF2,				// GL_FEEDBACK_BUFFER_TYPE
				ImageBuffer = 0x9051,				// GL_IMAGE_BUFFER
				IndexArrayBufferBinding = 0x8899,				// GL_INDEX_ARRAY_BUFFER_BINDING
				IntImageBuffer = 0x905C,				// GL_INT_IMAGE_BUFFER
				MapInvalidateBufferBit = 0x0008,				// GL_MAP_INVALIDATE_BUFFER_BIT
				MinMapBufferAlignment = 0x90BC,				// GL_MIN_MAP_BUFFER_ALIGNMENT
				NormalArrayBufferBinding = 0x8897,				// GL_NORMAL_ARRAY_BUFFER_BINDING
				ParameterBuffer = 0x80EE,				// GL_PARAMETER_BUFFER
				ParameterBufferBinding = 0x80EF,				// GL_PARAMETER_BUFFER_BINDING
				ReadBuffer = 0x0C02,				// GL_READ_BUFFER
				SelectionBufferPointer = 0x0DF3,				// GL_SELECTION_BUFFER_POINTER
				SelectionBufferSize = 0x0DF4,				// GL_SELECTION_BUFFER_SIZE
				UnsignedIntImageBuffer = 0x9067,				// GL_UNSIGNED_INT_IMAGE_BUFFER
				WeightArrayBufferBinding = 0x889E,				// GL_WEIGHT_ARRAY_BUFFER_BINDING
			} eBuffer;	// eBuffer

			//
			// Clip
			//
			enum eClip
			{
				ClipDepthMode = 0x935D,				// GL_CLIP_DEPTH_MODE
				ClipDistance0 = 0x3000,				// GL_CLIP_DISTANCE0
				ClipDistance1 = 0x3001,				// GL_CLIP_DISTANCE1
				ClipDistance2 = 0x3002,				// GL_CLIP_DISTANCE2
				ClipDistance3 = 0x3003,				// GL_CLIP_DISTANCE3
				ClipDistance4 = 0x3004,				// GL_CLIP_DISTANCE4
				ClipDistance5 = 0x3005,				// GL_CLIP_DISTANCE5
				ClipDistance6 = 0x3006,				// GL_CLIP_DISTANCE6
				ClipDistance7 = 0x3007,				// GL_CLIP_DISTANCE7
				ClipOrigin = 0x935C,				// GL_CLIP_ORIGIN
				ClipPlane0 = 0x3000,				// GL_CLIP_PLANE0
				ClipPlane1 = 0x3001,				// GL_CLIP_PLANE1
				ClipPlane2 = 0x3002,				// GL_CLIP_PLANE2
				ClipPlane3 = 0x3003,				// GL_CLIP_PLANE3
				ClipPlane4 = 0x3004,				// GL_CLIP_PLANE4
				ClipPlane5 = 0x3005,				// GL_CLIP_PLANE5
			} eClip;	// eClip

			//
			// Color
			//
			enum eColor
			{
				BlendColor = 0x8005,				// GL_BLEND_COLOR
				ClampFragmentColor = 0x891B,				// GL_CLAMP_FRAGMENT_COLOR
				ClampReadColor = 0x891C,				// GL_CLAMP_READ_COLOR
				Color = 0x1800,				// GL_COLOR
				ColorArray = 0x8076,				// GL_COLOR_ARRAY
				ColorArrayBufferBinding = 0x8898,				// GL_COLOR_ARRAY_BUFFER_BINDING
				ColorArrayPointer = 0x8090,				// GL_COLOR_ARRAY_POINTER
				ColorArraySize = 0x8081,				// GL_COLOR_ARRAY_SIZE
				ColorArrayStride = 0x8083,				// GL_COLOR_ARRAY_STRIDE
				ColorArrayType = 0x8082,				// GL_COLOR_ARRAY_TYPE
				ColorAttachment0 = 0x8CE0,				// GL_COLOR_ATTACHMENT0
				ColorAttachment1 = 0x8CE1,				// GL_COLOR_ATTACHMENT1
				ColorAttachment10 = 0x8CEA,				// GL_COLOR_ATTACHMENT10
				ColorAttachment11 = 0x8CEB,				// GL_COLOR_ATTACHMENT11
				ColorAttachment12 = 0x8CEC,				// GL_COLOR_ATTACHMENT12
				ColorAttachment13 = 0x8CED,				// GL_COLOR_ATTACHMENT13
				ColorAttachment14 = 0x8CEE,				// GL_COLOR_ATTACHMENT14
				ColorAttachment15 = 0x8CEF,				// GL_COLOR_ATTACHMENT15
				ColorAttachment16 = 0x8CF0,				// GL_COLOR_ATTACHMENT16
				ColorAttachment17 = 0x8CF1,				// GL_COLOR_ATTACHMENT17
				ColorAttachment18 = 0x8CF2,				// GL_COLOR_ATTACHMENT18
				ColorAttachment19 = 0x8CF3,				// GL_COLOR_ATTACHMENT19
				ColorAttachment2 = 0x8CE2,				// GL_COLOR_ATTACHMENT2
				ColorAttachment20 = 0x8CF4,				// GL_COLOR_ATTACHMENT20
				ColorAttachment21 = 0x8CF5,				// GL_COLOR_ATTACHMENT21
				ColorAttachment22 = 0x8CF6,				// GL_COLOR_ATTACHMENT22
				ColorAttachment23 = 0x8CF7,				// GL_COLOR_ATTACHMENT23
				ColorAttachment24 = 0x8CF8,				// GL_COLOR_ATTACHMENT24
				ColorAttachment25 = 0x8CF9,				// GL_COLOR_ATTACHMENT25
				ColorAttachment26 = 0x8CFA,				// GL_COLOR_ATTACHMENT26
				ColorAttachment27 = 0x8CFB,				// GL_COLOR_ATTACHMENT27
				ColorAttachment28 = 0x8CFC,				// GL_COLOR_ATTACHMENT28
				ColorAttachment29 = 0x8CFD,				// GL_COLOR_ATTACHMENT29
				ColorAttachment3 = 0x8CE3,				// GL_COLOR_ATTACHMENT3
				ColorAttachment30 = 0x8CFE,				// GL_COLOR_ATTACHMENT30
				ColorAttachment31 = 0x8CFF,				// GL_COLOR_ATTACHMENT31
				ColorAttachment4 = 0x8CE4,				// GL_COLOR_ATTACHMENT4
				ColorAttachment5 = 0x8CE5,				// GL_COLOR_ATTACHMENT5
				ColorAttachment6 = 0x8CE6,				// GL_COLOR_ATTACHMENT6
				ColorAttachment7 = 0x8CE7,				// GL_COLOR_ATTACHMENT7
				ColorAttachment8 = 0x8CE8,				// GL_COLOR_ATTACHMENT8
				ColorAttachment9 = 0x8CE9,				// GL_COLOR_ATTACHMENT9
				ColorBufferBit = 0x00004000,				// GL_COLOR_BUFFER_BIT
				ColorClearValue = 0x0C22,				// GL_COLOR_CLEAR_VALUE
				ColorComponents = 0x8283,				// GL_COLOR_COMPONENTS
				ColorEncoding = 0x8296,				// GL_COLOR_ENCODING
				ColorIndex = 0x1900,				// GL_COLOR_INDEX
				ColorIndexes = 0x1603,				// GL_COLOR_INDEXES
				ColorLogicOp = 0x0BF2,				// GL_COLOR_LOGIC_OP
				ColorMaterial = 0x0B57,				// GL_COLOR_MATERIAL
				ColorMaterialFace = 0x0B55,				// GL_COLOR_MATERIAL_FACE
				ColorMaterialParameter = 0x0B56,				// GL_COLOR_MATERIAL_PARAMETER
				ColorRenderable = 0x8286,				// GL_COLOR_RENDERABLE
				ColorSum = 0x8458,				// GL_COLOR_SUM
				ColorWritemask = 0x0C23,				// GL_COLOR_WRITEMASK
				ConstantColor = 0x8001,				// GL_CONSTANT_COLOR
				DstColor = 0x0306,				// GL_DST_COLOR
				ImplementationColorReadFormat = 0x8B9B,				// GL_IMPLEMENTATION_COLOR_READ_FORMAT
				ImplementationColorReadType = 0x8B9A,				// GL_IMPLEMENTATION_COLOR_READ_TYPE
				Map1Color_4 = 0x0D90,				// GL_MAP1_COLOR_4
				Map2Color_4 = 0x0DB0,				// GL_MAP2_COLOR_4
				MapColor = 0x0D10,				// GL_MAP_COLOR
				OneMinusConstantColor = 0x8002,				// GL_ONE_MINUS_CONSTANT_COLOR
				OneMinusDstColor = 0x0307,				// GL_ONE_MINUS_DST_COLOR
				OneMinusSrc1Color = 0x88FA,				// GL_ONE_MINUS_SRC1_COLOR
				OneMinusSrcColor = 0x0301,				// GL_ONE_MINUS_SRC_COLOR
				PrimaryColor = 0x8577,				// GL_PRIMARY_COLOR
				SecondaryColorArray = 0x845E,				// GL_SECONDARY_COLOR_ARRAY
				SecondaryColorArrayBufferBinding = 0x889C,				// GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING
				SecondaryColorArrayPointer = 0x845D,				// GL_SECONDARY_COLOR_ARRAY_POINTER
				SecondaryColorArraySize = 0x845A,				// GL_SECONDARY_COLOR_ARRAY_SIZE
				SecondaryColorArrayStride = 0x845C,				// GL_SECONDARY_COLOR_ARRAY_STRIDE
				SecondaryColorArrayType = 0x845B,				// GL_SECONDARY_COLOR_ARRAY_TYPE
				SeparateSpecularColor = 0x81FA,				// GL_SEPARATE_SPECULAR_COLOR
				SingleColor = 0x81F9,				// GL_SINGLE_COLOR
				Src1Color = 0x88F9,				// GL_SRC1_COLOR
				SrcColor = 0x0300,				// GL_SRC_COLOR
				TransposeColorMatrix = 0x84E6,				// GL_TRANSPOSE_COLOR_MATRIX
				_3DColor = 0x0602,				// GL_3D_COLOR
				_3DColorTexture = 0x0603,				// GL_3D_COLOR_TEXTURE
				_4DColorTexture = 0x0604,				// GL_4D_COLOR_TEXTURE
			} eColor;	// eColor

			//
			// Context
			//
			enum eContext
			{
				ContextCompatibilityProfileBit = 0x00000002,				// GL_CONTEXT_COMPATIBILITY_PROFILE_BIT
				ContextCoreProfileBit = 0x00000001,				// GL_CONTEXT_CORE_PROFILE_BIT
				ContextFlagDebugBit = 0x00000002,				// GL_CONTEXT_FLAG_DEBUG_BIT
				ContextFlagForwardCompatibleBit = 0x00000001,				// GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT
				ContextFlagNoErrorBit = 0x00000008,				// GL_CONTEXT_FLAG_NO_ERROR_BIT
				ContextFlagRobustAccessBit = 0x00000004,				// GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT
				ContextFlags = 0x821E,				// GL_CONTEXT_FLAGS
				ContextLost = 0x0507,				// GL_CONTEXT_LOST
				ContextProfileMask = 0x9126,				// GL_CONTEXT_PROFILE_MASK
				ContextReleaseBehavior = 0x82FB,				// GL_CONTEXT_RELEASE_BEHAVIOR
				ContextReleaseBehaviorFlush = 0x82FC,				// GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH
				GuiltyContextReset = 0x8253,				// GL_GUILTY_CONTEXT_RESET
				InnocentContextReset = 0x8254,				// GL_INNOCENT_CONTEXT_RESET
				LoseContextOnReset = 0x8252,				// GL_LOSE_CONTEXT_ON_RESET
				UnknownContextReset = 0x8255,				// GL_UNKNOWN_CONTEXT_RESET
			} eContext;	// eContext

			//
			// Current
			//
			enum eCurrent
			{
				CurrentBit = 0x00000001,				// GL_CURRENT_BIT
				CurrentColor = 0x0B00,				// GL_CURRENT_COLOR
				CurrentFogCoord = 0x8453,				// GL_CURRENT_FOG_COORD
				CurrentFogCoordinate = 0x8453,				// GL_CURRENT_FOG_COORDINATE
				CurrentIndex = 0x0B01,				// GL_CURRENT_INDEX
				CurrentNormal = 0x0B02,				// GL_CURRENT_NORMAL
				CurrentProgram = 0x8B8D,				// GL_CURRENT_PROGRAM
				CurrentQuery = 0x8865,				// GL_CURRENT_QUERY
				CurrentRasterColor = 0x0B04,				// GL_CURRENT_RASTER_COLOR
				CurrentRasterDistance = 0x0B09,				// GL_CURRENT_RASTER_DISTANCE
				CurrentRasterIndex = 0x0B05,				// GL_CURRENT_RASTER_INDEX
				CurrentRasterPosition = 0x0B07,				// GL_CURRENT_RASTER_POSITION
				CurrentRasterPositionValid = 0x0B08,				// GL_CURRENT_RASTER_POSITION_VALID
				CurrentRasterSecondaryColor = 0x845F,				// GL_CURRENT_RASTER_SECONDARY_COLOR
				CurrentRasterTextureCoords = 0x0B06,				// GL_CURRENT_RASTER_TEXTURE_COORDS
				CurrentSecondaryColor = 0x8459,				// GL_CURRENT_SECONDARY_COLOR
				CurrentTextureCoords = 0x0B03,				// GL_CURRENT_TEXTURE_COORDS
				CurrentVertexAttrib = 0x8626,				// GL_CURRENT_VERTEX_ATTRIB
			} eCurrent;	// eCurrent

			//
			// Depth
			//
			enum eDepth
			{
				AttribStackDepth = 0x0BB0,				// GL_ATTRIB_STACK_DEPTH
				ClientAttribStackDepth = 0x0BB1,				// GL_CLIENT_ATTRIB_STACK_DEPTH
				DebugGroupStackDepth = 0x826D,				// GL_DEBUG_GROUP_STACK_DEPTH
				Depth = 0x1801,				// GL_DEPTH
				DepthAttachment = 0x8D00,				// GL_DEPTH_ATTACHMENT
				DepthBias = 0x0D1F,				// GL_DEPTH_BIAS
				DepthBits = 0x0D56,				// GL_DEPTH_BITS
				DepthBufferBit = 0x00000100,				// GL_DEPTH_BUFFER_BIT
				DepthClamp = 0x864F,				// GL_DEPTH_CLAMP
				DepthClearValue = 0x0B73,				// GL_DEPTH_CLEAR_VALUE
				DepthComponent = 0x1902,				// GL_DEPTH_COMPONENT
				DepthComponent16 = 0x81A5,				// GL_DEPTH_COMPONENT16
				DepthComponent24 = 0x81A6,				// GL_DEPTH_COMPONENT24
				DepthComponent32 = 0x81A7,				// GL_DEPTH_COMPONENT32
				DepthComponent32f = 0x8CAC,				// GL_DEPTH_COMPONENT32F
				DepthComponents = 0x8284,				// GL_DEPTH_COMPONENTS
				DepthFunc = 0x0B74,				// GL_DEPTH_FUNC
				DepthRange = 0x0B70,				// GL_DEPTH_RANGE
				DepthRenderable = 0x8287,				// GL_DEPTH_RENDERABLE
				DepthScale = 0x0D1E,				// GL_DEPTH_SCALE
				DepthStencil = 0x84F9,				// GL_DEPTH_STENCIL
				DepthStencilAttachment = 0x821A,				// GL_DEPTH_STENCIL_ATTACHMENT
				DepthStencilTextureMode = 0x90EA,				// GL_DEPTH_STENCIL_TEXTURE_MODE
				DepthTest = 0x0B71,				// GL_DEPTH_TEST
				DepthTextureMode = 0x884B,				// GL_DEPTH_TEXTURE_MODE
				DepthWritemask = 0x0B72,				// GL_DEPTH_WRITEMASK
				FragmentDepth = 0x8452,				// GL_FRAGMENT_DEPTH
				ModelviewStackDepth = 0x0BA3,				// GL_MODELVIEW_STACK_DEPTH
				NameStackDepth = 0x0D70,				// GL_NAME_STACK_DEPTH
				ProjectionStackDepth = 0x0BA4,				// GL_PROJECTION_STACK_DEPTH
			} eDepth;	// eDepth

			//
			// Draw
			//
			enum eDraw
			{
				DrawBuffer = 0x0C01,				// GL_DRAW_BUFFER
				DrawBuffer0 = 0x8825,				// GL_DRAW_BUFFER0
				DrawBuffer1 = 0x8826,				// GL_DRAW_BUFFER1
				DrawBuffer10 = 0x882F,				// GL_DRAW_BUFFER10
				DrawBuffer11 = 0x8830,				// GL_DRAW_BUFFER11
				DrawBuffer12 = 0x8831,				// GL_DRAW_BUFFER12
				DrawBuffer13 = 0x8832,				// GL_DRAW_BUFFER13
				DrawBuffer14 = 0x8833,				// GL_DRAW_BUFFER14
				DrawBuffer15 = 0x8834,				// GL_DRAW_BUFFER15
				DrawBuffer2 = 0x8827,				// GL_DRAW_BUFFER2
				DrawBuffer3 = 0x8828,				// GL_DRAW_BUFFER3
				DrawBuffer4 = 0x8829,				// GL_DRAW_BUFFER4
				DrawBuffer5 = 0x882A,				// GL_DRAW_BUFFER5
				DrawBuffer6 = 0x882B,				// GL_DRAW_BUFFER6
				DrawBuffer7 = 0x882C,				// GL_DRAW_BUFFER7
				DrawBuffer8 = 0x882D,				// GL_DRAW_BUFFER8
				DrawBuffer9 = 0x882E,				// GL_DRAW_BUFFER9
				DrawFramebuffer = 0x8CA9,				// GL_DRAW_FRAMEBUFFER
				DrawFramebufferBinding = 0x8CA6,				// GL_DRAW_FRAMEBUFFER_BINDING
				DrawIndirectBuffer = 0x8F3F,				// GL_DRAW_INDIRECT_BUFFER
				DrawIndirectBufferBinding = 0x8F43,				// GL_DRAW_INDIRECT_BUFFER_BINDING
				DrawPixelToken = 0x0705,				// GL_DRAW_PIXEL_TOKEN
				DynamicDraw = 0x88E8,				// GL_DYNAMIC_DRAW
				StaticDraw = 0x88E4,				// GL_STATIC_DRAW
				StreamDraw = 0x88E0,				// GL_STREAM_DRAW
			} eDraw;	// eDraw

			//
			// Fog
			//
			enum eFog
			{
				Fog = 0x0B60,				// GL_FOG
				FogBit = 0x00000080,				// GL_FOG_BIT
				FogColor = 0x0B66,				// GL_FOG_COLOR
				FogCoord = 0x8451,				// GL_FOG_COORD
				FogCoordArray = 0x8457,				// GL_FOG_COORD_ARRAY
				FogCoordArrayBufferBinding = 0x889D,				// GL_FOG_COORD_ARRAY_BUFFER_BINDING
				FogCoordArrayPointer = 0x8456,				// GL_FOG_COORD_ARRAY_POINTER
				FogCoordArrayStride = 0x8455,				// GL_FOG_COORD_ARRAY_STRIDE
				FogCoordArrayType = 0x8454,				// GL_FOG_COORD_ARRAY_TYPE
				FogCoordSrc = 0x8450,				// GL_FOG_COORD_SRC
				FogCoordinate = 0x8451,				// GL_FOG_COORDINATE
				FogCoordinateArray = 0x8457,				// GL_FOG_COORDINATE_ARRAY
				FogCoordinateArrayBufferBinding = 0x889D,				// GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING
				FogCoordinateArrayPointer = 0x8456,				// GL_FOG_COORDINATE_ARRAY_POINTER
				FogCoordinateArrayStride = 0x8455,				// GL_FOG_COORDINATE_ARRAY_STRIDE
				FogCoordinateArrayType = 0x8454,				// GL_FOG_COORDINATE_ARRAY_TYPE
				FogCoordinateSource = 0x8450,				// GL_FOG_COORDINATE_SOURCE
				FogDensity = 0x0B62,				// GL_FOG_DENSITY
				FogEnd = 0x0B64,				// GL_FOG_END
				FogHint = 0x0C54,				// GL_FOG_HINT
				FogIndex = 0x0B61,				// GL_FOG_INDEX
				FogMode = 0x0B65,				// GL_FOG_MODE
				FogStart = 0x0B63,				// GL_FOG_START
			} eFog;	// eFog

			//
			// Framebuffer
			//
			enum eFramebuffer
			{
				Framebuffer = 0x8D40,				// GL_FRAMEBUFFER
				FramebufferAttachmentAlphaSize = 0x8215,				// GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE
				FramebufferAttachmentBlueSize = 0x8214,				// GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE
				FramebufferAttachmentColorEncoding = 0x8210,				// GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING
				FramebufferAttachmentComponentType = 0x8211,				// GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE
				FramebufferAttachmentDepthSize = 0x8216,				// GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE
				FramebufferAttachmentGreenSize = 0x8213,				// GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE
				FramebufferAttachmentLayered = 0x8DA7,				// GL_FRAMEBUFFER_ATTACHMENT_LAYERED
				FramebufferAttachmentObjectName = 0x8CD1,				// GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME
				FramebufferAttachmentObjectType = 0x8CD0,				// GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE
				FramebufferAttachmentRedSize = 0x8212,				// GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE
				FramebufferAttachmentStencilSize = 0x8217,				// GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE
				FramebufferAttachmentTextureCubeMapFace = 0x8CD3,				// GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE
				FramebufferAttachmentTextureLayer = 0x8CD4,				// GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER
				FramebufferAttachmentTextureLevel = 0x8CD2,				// GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL
				FramebufferBarrierBit = 0x00000400,				// GL_FRAMEBUFFER_BARRIER_BIT
				FramebufferBinding = 0x8CA6,				// GL_FRAMEBUFFER_BINDING
				FramebufferBlend = 0x828B,				// GL_FRAMEBUFFER_BLEND
				FramebufferComplete = 0x8CD5,				// GL_FRAMEBUFFER_COMPLETE
				FramebufferDefault = 0x8218,				// GL_FRAMEBUFFER_DEFAULT
				FramebufferDefaultFixedSampleLocations = 0x9314,				// GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS
				FramebufferDefaultHeight = 0x9311,				// GL_FRAMEBUFFER_DEFAULT_HEIGHT
				FramebufferDefaultLayers = 0x9312,				// GL_FRAMEBUFFER_DEFAULT_LAYERS
				FramebufferDefaultSamples = 0x9313,				// GL_FRAMEBUFFER_DEFAULT_SAMPLES
				FramebufferDefaultWidth = 0x9310,				// GL_FRAMEBUFFER_DEFAULT_WIDTH
				FramebufferIncompleteAttachment = 0x8CD6,				// GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT
				FramebufferIncompleteDrawBuffer = 0x8CDB,				// GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER
				FramebufferIncompleteLayerTargets = 0x8DA8,				// GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS
				FramebufferIncompleteMissingAttachment = 0x8CD7,				// GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT
				FramebufferIncompleteMultisample = 0x8D56,				// GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE
				FramebufferIncompleteReadBuffer = 0x8CDC,				// GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER
				FramebufferRenderable = 0x8289,				// GL_FRAMEBUFFER_RENDERABLE
				FramebufferRenderableLayered = 0x828A,				// GL_FRAMEBUFFER_RENDERABLE_LAYERED
				FramebufferSrgb = 0x8DB9,				// GL_FRAMEBUFFER_SRGB
				FramebufferUndefined = 0x8219,				// GL_FRAMEBUFFER_UNDEFINED
				FramebufferUnsupported = 0x8CDD,				// GL_FRAMEBUFFER_UNSUPPORTED
				ReadFramebuffer = 0x8CA8,				// GL_READ_FRAMEBUFFER
				ReadFramebufferBinding = 0x8CAA,				// GL_READ_FRAMEBUFFER_BINDING
			} eFramebuffer;	// eFramebuffer

			//
			// Internalformat
			//
			enum eInternalformat
			{
				InternalformatAlphaSize = 0x8274,				// GL_INTERNALFORMAT_ALPHA_SIZE
				InternalformatAlphaType = 0x827B,				// GL_INTERNALFORMAT_ALPHA_TYPE
				InternalformatBlueSize = 0x8273,				// GL_INTERNALFORMAT_BLUE_SIZE
				InternalformatBlueType = 0x827A,				// GL_INTERNALFORMAT_BLUE_TYPE
				InternalformatDepthSize = 0x8275,				// GL_INTERNALFORMAT_DEPTH_SIZE
				InternalformatDepthType = 0x827C,				// GL_INTERNALFORMAT_DEPTH_TYPE
				InternalformatGreenSize = 0x8272,				// GL_INTERNALFORMAT_GREEN_SIZE
				InternalformatGreenType = 0x8279,				// GL_INTERNALFORMAT_GREEN_TYPE
				InternalformatPreferred = 0x8270,				// GL_INTERNALFORMAT_PREFERRED
				InternalformatRedSize = 0x8271,				// GL_INTERNALFORMAT_RED_SIZE
				InternalformatRedType = 0x8278,				// GL_INTERNALFORMAT_RED_TYPE
				InternalformatSharedSize = 0x8277,				// GL_INTERNALFORMAT_SHARED_SIZE
				InternalformatStencilSize = 0x8276,				// GL_INTERNALFORMAT_STENCIL_SIZE
				InternalformatStencilType = 0x827D,				// GL_INTERNALFORMAT_STENCIL_TYPE
				InternalformatSupported = 0x826F,				// GL_INTERNALFORMAT_SUPPORTED
			} eInternalformat;	// eInternalformat

			//
			// Invalid
			//
			enum eInvalid
			{
				InvalidEnum = 0x0500,				// GL_INVALID_ENUM
				InvalidFramebufferOperation = 0x0506,				// GL_INVALID_FRAMEBUFFER_OPERATION
				InvalidIndex = 0xFFFFFFFF,				// GL_INVALID_INDEX
				InvalidOperation = 0x0502,				// GL_INVALID_OPERATION
				InvalidValue = 0x0501,				// GL_INVALID_VALUE
			} eInvalid;	// eInvalid

			//
			// Light
			//
			enum eLight
			{
				LightModelAmbient = 0x0B53,				// GL_LIGHT_MODEL_AMBIENT
				LightModelColorControl = 0x81F8,				// GL_LIGHT_MODEL_COLOR_CONTROL
				LightModelLocalViewer = 0x0B51,				// GL_LIGHT_MODEL_LOCAL_VIEWER
				LightModelTwoSide = 0x0B52,				// GL_LIGHT_MODEL_TWO_SIDE
			} eLight;	// eLight

			//
			// Line
			//
			enum eLine
			{
				AliasedLineWidthRange = 0x846E,				// GL_ALIASED_LINE_WIDTH_RANGE
				Line = 0x1B01,				// GL_LINE
				LineBit = 0x00000004,				// GL_LINE_BIT
				LineLoop = 0x0002,				// GL_LINE_LOOP
				LineResetToken = 0x0707,				// GL_LINE_RESET_TOKEN
				LineSmooth = 0x0B20,				// GL_LINE_SMOOTH
				LineSmoothHint = 0x0C52,				// GL_LINE_SMOOTH_HINT
				LineStipple = 0x0B24,				// GL_LINE_STIPPLE
				LineStipplePattern = 0x0B25,				// GL_LINE_STIPPLE_PATTERN
				LineStippleRepeat = 0x0B26,				// GL_LINE_STIPPLE_REPEAT
				LineStrip = 0x0003,				// GL_LINE_STRIP
				LineStripAdjacency = 0x000B,				// GL_LINE_STRIP_ADJACENCY
				LineToken = 0x0702,				// GL_LINE_TOKEN
				LineWidth = 0x0B21,				// GL_LINE_WIDTH
				LineWidthGranularity = 0x0B23,				// GL_LINE_WIDTH_GRANULARITY
				LineWidthRange = 0x0B22,				// GL_LINE_WIDTH_RANGE
				SmoothLineWidthGranularity = 0x0B23,				// GL_SMOOTH_LINE_WIDTH_GRANULARITY
				SmoothLineWidthRange = 0x0B22,				// GL_SMOOTH_LINE_WIDTH_RANGE
			} eLine;	// eLine

			//
			// Max
			//
			enum eMax
			{
				ActiveAttributeMaxLength = 0x8B8A,				// GL_ACTIVE_ATTRIBUTE_MAX_LENGTH
				ActiveSubroutineMaxLength = 0x8E48,				// GL_ACTIVE_SUBROUTINE_MAX_LENGTH
				Max = 0x8008,				// GL_MAX
				MaxArrayTextureLayers = 0x88FF,				// GL_MAX_ARRAY_TEXTURE_LAYERS
				MaxAtomicCounterBufferBindings = 0x92DC,				// GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS
				MaxAtomicCounterBufferSize = 0x92D8,				// GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE
				MaxAttribStackDepth = 0x0D35,				// GL_MAX_ATTRIB_STACK_DEPTH
				MaxClientAttribStackDepth = 0x0D3B,				// GL_MAX_CLIENT_ATTRIB_STACK_DEPTH
				MaxClipDistances = 0x0D32,				// GL_MAX_CLIP_DISTANCES
				MaxClipPlanes = 0x0D32,				// GL_MAX_CLIP_PLANES
				MaxColorAttachments = 0x8CDF,				// GL_MAX_COLOR_ATTACHMENTS
				MaxColorTextureSamples = 0x910E,				// GL_MAX_COLOR_TEXTURE_SAMPLES
				MaxCombinedAtomicCounterBuffers = 0x92D1,				// GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS
				MaxCombinedAtomicCounters = 0x92D7,				// GL_MAX_COMBINED_ATOMIC_COUNTERS
				MaxCombinedClipAndCullDistances = 0x82FA,				// GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES
				MaxCombinedComputeUniformComponents = 0x8266,				// GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS
				MaxCombinedDimensions = 0x8282,				// GL_MAX_COMBINED_DIMENSIONS
				MaxCombinedFragmentUniformComponents = 0x8A33,				// GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS
				MaxCombinedGeometryUniformComponents = 0x8A32,				// GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS
				MaxCombinedImageUniforms = 0x90CF,				// GL_MAX_COMBINED_IMAGE_UNIFORMS
				MaxCombinedImageUnitsAndFragmentOutputs = 0x8F39,				// GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS
				MaxCombinedShaderOutputResources = 0x8F39,				// GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES
				MaxCombinedShaderStorageBlocks = 0x90DC,				// GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS
				MaxCombinedTessControlUniformComponents = 0x8E1E,				// GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS
				MaxCombinedTessEvaluationUniformComponents = 0x8E1F,				// GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS
				MaxCombinedTextureImageUnits = 0x8B4D,				// GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS
				MaxCombinedUniformBlocks = 0x8A2E,				// GL_MAX_COMBINED_UNIFORM_BLOCKS
				MaxCombinedVertexUniformComponents = 0x8A31,				// GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS
				MaxComputeAtomicCounterBuffers = 0x8264,				// GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS
				MaxComputeAtomicCounters = 0x8265,				// GL_MAX_COMPUTE_ATOMIC_COUNTERS
				MaxComputeImageUniforms = 0x91BD,				// GL_MAX_COMPUTE_IMAGE_UNIFORMS
				MaxComputeShaderStorageBlocks = 0x90DB,				// GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS
				MaxComputeSharedMemorySize = 0x8262,				// GL_MAX_COMPUTE_SHARED_MEMORY_SIZE
				MaxComputeTextureImageUnits = 0x91BC,				// GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS
				MaxComputeUniformBlocks = 0x91BB,				// GL_MAX_COMPUTE_UNIFORM_BLOCKS
				MaxComputeUniformComponents = 0x8263,				// GL_MAX_COMPUTE_UNIFORM_COMPONENTS
				MaxComputeWorkGroupCount = 0x91BE,				// GL_MAX_COMPUTE_WORK_GROUP_COUNT
				MaxComputeWorkGroupInvocations = 0x90EB,				// GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS
				MaxComputeWorkGroupSize = 0x91BF,				// GL_MAX_COMPUTE_WORK_GROUP_SIZE
				MaxCubeMapTextureSize = 0x851C,				// GL_MAX_CUBE_MAP_TEXTURE_SIZE
				MaxCullDistances = 0x82F9,				// GL_MAX_CULL_DISTANCES
				MaxDebugGroupStackDepth = 0x826C,				// GL_MAX_DEBUG_GROUP_STACK_DEPTH
				MaxDebugLoggedMessages = 0x9144,				// GL_MAX_DEBUG_LOGGED_MESSAGES
				MaxDebugMessageLength = 0x9143,				// GL_MAX_DEBUG_MESSAGE_LENGTH
				MaxDepth = 0x8280,				// GL_MAX_DEPTH
				MaxDepthTextureSamples = 0x910F,				// GL_MAX_DEPTH_TEXTURE_SAMPLES
				MaxDrawBuffers = 0x8824,				// GL_MAX_DRAW_BUFFERS
				MaxDualSourceDrawBuffers = 0x88FC,				// GL_MAX_DUAL_SOURCE_DRAW_BUFFERS
				MaxElementIndex = 0x8D6B,				// GL_MAX_ELEMENT_INDEX
				MaxElementsIndices = 0x80E9,				// GL_MAX_ELEMENTS_INDICES
				MaxElementsVertices = 0x80E8,				// GL_MAX_ELEMENTS_VERTICES
				MaxEvalOrder = 0x0D30,				// GL_MAX_EVAL_ORDER
				MaxFragmentAtomicCounterBuffers = 0x92D0,				// GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS
				MaxFragmentAtomicCounters = 0x92D6,				// GL_MAX_FRAGMENT_ATOMIC_COUNTERS
				MaxFragmentImageUniforms = 0x90CE,				// GL_MAX_FRAGMENT_IMAGE_UNIFORMS
				MaxFragmentInputComponents = 0x9125,				// GL_MAX_FRAGMENT_INPUT_COMPONENTS
				MaxFragmentInterpolationOffset = 0x8E5C,				// GL_MAX_FRAGMENT_INTERPOLATION_OFFSET
				MaxFragmentShaderStorageBlocks = 0x90DA,				// GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS
				MaxFragmentUniformBlocks = 0x8A2D,				// GL_MAX_FRAGMENT_UNIFORM_BLOCKS
				MaxFragmentUniformComponents = 0x8B49,				// GL_MAX_FRAGMENT_UNIFORM_COMPONENTS
				MaxFragmentUniformVectors = 0x8DFD,				// GL_MAX_FRAGMENT_UNIFORM_VECTORS
				MaxFramebufferHeight = 0x9316,				// GL_MAX_FRAMEBUFFER_HEIGHT
				MaxFramebufferLayers = 0x9317,				// GL_MAX_FRAMEBUFFER_LAYERS
				MaxFramebufferSamples = 0x9318,				// GL_MAX_FRAMEBUFFER_SAMPLES
				MaxFramebufferWidth = 0x9315,				// GL_MAX_FRAMEBUFFER_WIDTH
				MaxGeometryAtomicCounterBuffers = 0x92CF,				// GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS
				MaxGeometryAtomicCounters = 0x92D5,				// GL_MAX_GEOMETRY_ATOMIC_COUNTERS
				MaxGeometryImageUniforms = 0x90CD,				// GL_MAX_GEOMETRY_IMAGE_UNIFORMS
				MaxGeometryInputComponents = 0x9123,				// GL_MAX_GEOMETRY_INPUT_COMPONENTS
				MaxGeometryOutputComponents = 0x9124,				// GL_MAX_GEOMETRY_OUTPUT_COMPONENTS
				MaxGeometryOutputVertices = 0x8DE0,				// GL_MAX_GEOMETRY_OUTPUT_VERTICES
				MaxGeometryShaderInvocations = 0x8E5A,				// GL_MAX_GEOMETRY_SHADER_INVOCATIONS
				MaxGeometryShaderStorageBlocks = 0x90D7,				// GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS
				MaxGeometryTextureImageUnits = 0x8C29,				// GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS
				MaxGeometryTotalOutputComponents = 0x8DE1,				// GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS
				MaxGeometryUniformBlocks = 0x8A2C,				// GL_MAX_GEOMETRY_UNIFORM_BLOCKS
				MaxGeometryUniformComponents = 0x8DDF,				// GL_MAX_GEOMETRY_UNIFORM_COMPONENTS
				MaxHeight = 0x827F,				// GL_MAX_HEIGHT
				MaxImageSamples = 0x906D,				// GL_MAX_IMAGE_SAMPLES
				MaxImageUnits = 0x8F38,				// GL_MAX_IMAGE_UNITS
				MaxIntegerSamples = 0x9110,				// GL_MAX_INTEGER_SAMPLES
				MaxLabelLength = 0x82E8,				// GL_MAX_LABEL_LENGTH
				MaxLayers = 0x8281,				// GL_MAX_LAYERS
				MaxLights = 0x0D31,				// GL_MAX_LIGHTS
				MaxListNesting = 0x0B31,				// GL_MAX_LIST_NESTING
				MaxModelviewStackDepth = 0x0D36,				// GL_MAX_MODELVIEW_STACK_DEPTH
				MaxNameLength = 0x92F6,				// GL_MAX_NAME_LENGTH
				MaxNameStackDepth = 0x0D37,				// GL_MAX_NAME_STACK_DEPTH
				MaxNumActiveVariables = 0x92F7,				// GL_MAX_NUM_ACTIVE_VARIABLES
				MaxNumCompatibleSubroutines = 0x92F8,				// GL_MAX_NUM_COMPATIBLE_SUBROUTINES
				MaxPatchVertices = 0x8E7D,				// GL_MAX_PATCH_VERTICES
				MaxPixelMapTable = 0x0D34,				// GL_MAX_PIXEL_MAP_TABLE
				MaxProgramTexelOffset = 0x8905,				// GL_MAX_PROGRAM_TEXEL_OFFSET
				MaxProgramTextureGatherOffset = 0x8E5F,				// GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET
				MaxProjectionStackDepth = 0x0D38,				// GL_MAX_PROJECTION_STACK_DEPTH
				MaxRectangleTextureSize = 0x84F8,				// GL_MAX_RECTANGLE_TEXTURE_SIZE
				MaxRenderbufferSize = 0x84E8,				// GL_MAX_RENDERBUFFER_SIZE
				MaxSampleMaskWords = 0x8E59,				// GL_MAX_SAMPLE_MASK_WORDS
				MaxSamples = 0x8D57,				// GL_MAX_SAMPLES
				MaxServerWaitTimeout = 0x9111,				// GL_MAX_SERVER_WAIT_TIMEOUT
				MaxShaderStorageBlockSize = 0x90DE,				// GL_MAX_SHADER_STORAGE_BLOCK_SIZE
				MaxShaderStorageBufferBindings = 0x90DD,				// GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS
				MaxSubroutineUniformLocations = 0x8DE8,				// GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS
				MaxSubroutines = 0x8DE7,				// GL_MAX_SUBROUTINES
				MaxTessControlAtomicCounterBuffers = 0x92CD,				// GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS
				MaxTessControlAtomicCounters = 0x92D3,				// GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS
				MaxTessControlImageUniforms = 0x90CB,				// GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS
				MaxTessControlInputComponents = 0x886C,				// GL_MAX_TESS_CONTROL_INPUT_COMPONENTS
				MaxTessControlOutputComponents = 0x8E83,				// GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS
				MaxTessControlShaderStorageBlocks = 0x90D8,				// GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS
				MaxTessControlTextureImageUnits = 0x8E81,				// GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS
				MaxTessControlTotalOutputComponents = 0x8E85,				// GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS
				MaxTessControlUniformBlocks = 0x8E89,				// GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS
				MaxTessControlUniformComponents = 0x8E7F,				// GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS
				MaxTessEvaluationAtomicCounterBuffers = 0x92CE,				// GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS
				MaxTessEvaluationAtomicCounters = 0x92D4,				// GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS
				MaxTessEvaluationImageUniforms = 0x90CC,				// GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS
				MaxTessEvaluationInputComponents = 0x886D,				// GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS
				MaxTessEvaluationOutputComponents = 0x8E86,				// GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS
				MaxTessEvaluationShaderStorageBlocks = 0x90D9,				// GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS
				MaxTessEvaluationTextureImageUnits = 0x8E82,				// GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS
				MaxTessEvaluationUniformBlocks = 0x8E8A,				// GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS
				MaxTessEvaluationUniformComponents = 0x8E80,				// GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS
				MaxTessGenLevel = 0x8E7E,				// GL_MAX_TESS_GEN_LEVEL
				MaxTessPatchComponents = 0x8E84,				// GL_MAX_TESS_PATCH_COMPONENTS
				MaxTextureBufferSize = 0x8C2B,				// GL_MAX_TEXTURE_BUFFER_SIZE
				MaxTextureCoords = 0x8871,				// GL_MAX_TEXTURE_COORDS
				MaxTextureImageUnits = 0x8872,				// GL_MAX_TEXTURE_IMAGE_UNITS
				MaxTextureLodBias = 0x84FD,				// GL_MAX_TEXTURE_LOD_BIAS
				MaxTextureMaxAnisotropy = 0x84FF,				// GL_MAX_TEXTURE_MAX_ANISOTROPY
				MaxTextureSize = 0x0D33,				// GL_MAX_TEXTURE_SIZE
				MaxTextureStackDepth = 0x0D39,				// GL_MAX_TEXTURE_STACK_DEPTH
				MaxTextureUnits = 0x84E2,				// GL_MAX_TEXTURE_UNITS
				MaxTransformFeedbackBuffers = 0x8E70,				// GL_MAX_TRANSFORM_FEEDBACK_BUFFERS
				MaxTransformFeedbackInterleavedComponents = 0x8C8A,				// GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS
				MaxTransformFeedbackSeparateAttribs = 0x8C8B,				// GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS
				MaxTransformFeedbackSeparateComponents = 0x8C80,				// GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS
				MaxUniformBlockSize = 0x8A30,				// GL_MAX_UNIFORM_BLOCK_SIZE
				MaxUniformBufferBindings = 0x8A2F,				// GL_MAX_UNIFORM_BUFFER_BINDINGS
				MaxUniformLocations = 0x826E,				// GL_MAX_UNIFORM_LOCATIONS
				MaxVaryingComponents = 0x8B4B,				// GL_MAX_VARYING_COMPONENTS
				MaxVaryingFloats = 0x8B4B,				// GL_MAX_VARYING_FLOATS
				MaxVaryingVectors = 0x8DFC,				// GL_MAX_VARYING_VECTORS
				MaxVertexAtomicCounterBuffers = 0x92CC,				// GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS
				MaxVertexAtomicCounters = 0x92D2,				// GL_MAX_VERTEX_ATOMIC_COUNTERS
				MaxVertexAttribBindings = 0x82DA,				// GL_MAX_VERTEX_ATTRIB_BINDINGS
				MaxVertexAttribRelativeOffset = 0x82D9,				// GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET
				MaxVertexAttribStride = 0x82E5,				// GL_MAX_VERTEX_ATTRIB_STRIDE
				MaxVertexAttribs = 0x8869,				// GL_MAX_VERTEX_ATTRIBS
				MaxVertexImageUniforms = 0x90CA,				// GL_MAX_VERTEX_IMAGE_UNIFORMS
				MaxVertexOutputComponents = 0x9122,				// GL_MAX_VERTEX_OUTPUT_COMPONENTS
				MaxVertexShaderStorageBlocks = 0x90D6,				// GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS
				MaxVertexStreams = 0x8E71,				// GL_MAX_VERTEX_STREAMS
				MaxVertexTextureImageUnits = 0x8B4C,				// GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS
				MaxVertexUniformBlocks = 0x8A2B,				// GL_MAX_VERTEX_UNIFORM_BLOCKS
				MaxVertexUniformComponents = 0x8B4A,				// GL_MAX_VERTEX_UNIFORM_COMPONENTS
				MaxVertexUniformVectors = 0x8DFB,				// GL_MAX_VERTEX_UNIFORM_VECTORS
				MaxViewportDims = 0x0D3A,				// GL_MAX_VIEWPORT_DIMS
				MaxViewports = 0x825B,				// GL_MAX_VIEWPORTS
				MaxWidth = 0x827E,				// GL_MAX_WIDTH
				Max_3DTextureSize = 0x8073,				// GL_MAX_3D_TEXTURE_SIZE
			} eMax;	// eMax

			//
			// Pack
			//
			enum ePack
			{
				PackAlignment = 0x0D05,				// GL_PACK_ALIGNMENT
				PackCompressedBlockDepth = 0x912D,				// GL_PACK_COMPRESSED_BLOCK_DEPTH
				PackCompressedBlockHeight = 0x912C,				// GL_PACK_COMPRESSED_BLOCK_HEIGHT
				PackCompressedBlockSize = 0x912E,				// GL_PACK_COMPRESSED_BLOCK_SIZE
				PackCompressedBlockWidth = 0x912B,				// GL_PACK_COMPRESSED_BLOCK_WIDTH
				PackImageHeight = 0x806C,				// GL_PACK_IMAGE_HEIGHT
				PackLsbFirst = 0x0D01,				// GL_PACK_LSB_FIRST
				PackRowLength = 0x0D02,				// GL_PACK_ROW_LENGTH
				PackSkipImages = 0x806B,				// GL_PACK_SKIP_IMAGES
				PackSkipPixels = 0x0D04,				// GL_PACK_SKIP_PIXELS
				PackSkipRows = 0x0D03,				// GL_PACK_SKIP_ROWS
				PackSwapBytes = 0x0D00,				// GL_PACK_SWAP_BYTES
			} ePack;	// ePack

			//
			// Pixel
			//
			enum ePixel
			{
				ClientPixelStoreBit = 0x00000001,				// GL_CLIENT_PIXEL_STORE_BIT
				CopyPixelToken = 0x0706,				// GL_COPY_PIXEL_TOKEN
				ImagePixelFormat = 0x82A9,				// GL_IMAGE_PIXEL_FORMAT
				ImagePixelType = 0x82AA,				// GL_IMAGE_PIXEL_TYPE
				PixelBufferBarrierBit = 0x00000080,				// GL_PIXEL_BUFFER_BARRIER_BIT
				PixelMapAToA = 0x0C79,				// GL_PIXEL_MAP_A_TO_A
				PixelMapAToASize = 0x0CB9,				// GL_PIXEL_MAP_A_TO_A_SIZE
				PixelMapBToB = 0x0C78,				// GL_PIXEL_MAP_B_TO_B
				PixelMapBToBSize = 0x0CB8,				// GL_PIXEL_MAP_B_TO_B_SIZE
				PixelMapGToG = 0x0C77,				// GL_PIXEL_MAP_G_TO_G
				PixelMapGToGSize = 0x0CB7,				// GL_PIXEL_MAP_G_TO_G_SIZE
				PixelMapIToA = 0x0C75,				// GL_PIXEL_MAP_I_TO_A
				PixelMapIToASize = 0x0CB5,				// GL_PIXEL_MAP_I_TO_A_SIZE
				PixelMapIToB = 0x0C74,				// GL_PIXEL_MAP_I_TO_B
				PixelMapIToBSize = 0x0CB4,				// GL_PIXEL_MAP_I_TO_B_SIZE
				PixelMapIToG = 0x0C73,				// GL_PIXEL_MAP_I_TO_G
				PixelMapIToGSize = 0x0CB3,				// GL_PIXEL_MAP_I_TO_G_SIZE
				PixelMapIToI = 0x0C70,				// GL_PIXEL_MAP_I_TO_I
				PixelMapIToISize = 0x0CB0,				// GL_PIXEL_MAP_I_TO_I_SIZE
				PixelMapIToR = 0x0C72,				// GL_PIXEL_MAP_I_TO_R
				PixelMapIToRSize = 0x0CB2,				// GL_PIXEL_MAP_I_TO_R_SIZE
				PixelMapRToR = 0x0C76,				// GL_PIXEL_MAP_R_TO_R
				PixelMapRToRSize = 0x0CB6,				// GL_PIXEL_MAP_R_TO_R_SIZE
				PixelMapSToS = 0x0C71,				// GL_PIXEL_MAP_S_TO_S
				PixelMapSToSSize = 0x0CB1,				// GL_PIXEL_MAP_S_TO_S_SIZE
				PixelModeBit = 0x00000020,				// GL_PIXEL_MODE_BIT
				PixelPackBuffer = 0x88EB,				// GL_PIXEL_PACK_BUFFER
				PixelPackBufferBinding = 0x88ED,				// GL_PIXEL_PACK_BUFFER_BINDING
				PixelUnpackBuffer = 0x88EC,				// GL_PIXEL_UNPACK_BUFFER
				PixelUnpackBufferBinding = 0x88EF,				// GL_PIXEL_UNPACK_BUFFER_BINDING
			} ePixel;	// ePixel

			//
			// Point
			//
			enum ePoint
			{
				AliasedPointSizeRange = 0x846D,				// GL_ALIASED_POINT_SIZE_RANGE
				Point = 0x1B00,				// GL_POINT
				PointBit = 0x00000002,				// GL_POINT_BIT
				PointDistanceAttenuation = 0x8129,				// GL_POINT_DISTANCE_ATTENUATION
				PointFadeThresholdSize = 0x8128,				// GL_POINT_FADE_THRESHOLD_SIZE
				PointSize = 0x0B11,				// GL_POINT_SIZE
				PointSizeGranularity = 0x0B13,				// GL_POINT_SIZE_GRANULARITY
				PointSizeMax = 0x8127,				// GL_POINT_SIZE_MAX
				PointSizeMin = 0x8126,				// GL_POINT_SIZE_MIN
				PointSizeRange = 0x0B12,				// GL_POINT_SIZE_RANGE
				PointSmooth = 0x0B10,				// GL_POINT_SMOOTH
				PointSmoothHint = 0x0C51,				// GL_POINT_SMOOTH_HINT
				PointSprite = 0x8861,				// GL_POINT_SPRITE
				PointSpriteCoordOrigin = 0x8CA0,				// GL_POINT_SPRITE_COORD_ORIGIN
				PointToken = 0x0701,				// GL_POINT_TOKEN
				SmoothPointSizeGranularity = 0x0B13,				// GL_SMOOTH_POINT_SIZE_GRANULARITY
				SmoothPointSizeRange = 0x0B12,				// GL_SMOOTH_POINT_SIZE_RANGE
			} ePoint;	// ePoint

			//
			// Polygon
			//
			enum ePolygon
			{
				Polygon = 0x0009,				// GL_POLYGON
				PolygonBit = 0x00000008,				// GL_POLYGON_BIT
				PolygonMode = 0x0B40,				// GL_POLYGON_MODE
				PolygonOffsetClamp = 0x8E1B,				// GL_POLYGON_OFFSET_CLAMP
				PolygonOffsetFactor = 0x8038,				// GL_POLYGON_OFFSET_FACTOR
				PolygonOffsetFill = 0x8037,				// GL_POLYGON_OFFSET_FILL
				PolygonOffsetLine = 0x2A02,				// GL_POLYGON_OFFSET_LINE
				PolygonOffsetPoint = 0x2A01,				// GL_POLYGON_OFFSET_POINT
				PolygonOffsetUnits = 0x2A00,				// GL_POLYGON_OFFSET_UNITS
				PolygonSmooth = 0x0B41,				// GL_POLYGON_SMOOTH
				PolygonSmoothHint = 0x0C53,				// GL_POLYGON_SMOOTH_HINT
				PolygonStipple = 0x0B42,				// GL_POLYGON_STIPPLE
				PolygonStippleBit = 0x00000010,				// GL_POLYGON_STIPPLE_BIT
				PolygonToken = 0x0703,				// GL_POLYGON_TOKEN
			} ePolygon;	// ePolygon

			//
			// Primitives
			//
			enum ePrimitives
			{
				ClippingInputPrimitives = 0x82F6,				// GL_CLIPPING_INPUT_PRIMITIVES
				ClippingOutputPrimitives = 0x82F7,				// GL_CLIPPING_OUTPUT_PRIMITIVES
				PrimitivesGenerated = 0x8C87,				// GL_PRIMITIVES_GENERATED
				PrimitivesSubmitted = 0x82EF,				// GL_PRIMITIVES_SUBMITTED
			} ePrimitives;	// ePrimitives

			//
			// Program
			//
			enum eProgram
			{
				ActiveProgram = 0x8259,				// GL_ACTIVE_PROGRAM
				MinProgramTexelOffset = 0x8904,				// GL_MIN_PROGRAM_TEXEL_OFFSET
				MinProgramTextureGatherOffset = 0x8E5E,				// GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET
				NumProgramBinaryFormats = 0x87FE,				// GL_NUM_PROGRAM_BINARY_FORMATS
				Program = 0x82E2,				// GL_PROGRAM
				ProgramBinaryFormats = 0x87FF,				// GL_PROGRAM_BINARY_FORMATS
				ProgramBinaryLength = 0x8741,				// GL_PROGRAM_BINARY_LENGTH
				ProgramBinaryRetrievableHint = 0x8257,				// GL_PROGRAM_BINARY_RETRIEVABLE_HINT
				ProgramInput = 0x92E3,				// GL_PROGRAM_INPUT
				ProgramOutput = 0x92E4,				// GL_PROGRAM_OUTPUT
				ProgramPipeline = 0x82E4,				// GL_PROGRAM_PIPELINE
				ProgramPipelineBinding = 0x825A,				// GL_PROGRAM_PIPELINE_BINDING
				ProgramPointSize = 0x8642,				// GL_PROGRAM_POINT_SIZE
				ProgramSeparable = 0x8258,				// GL_PROGRAM_SEPARABLE
			} eProgram;	// eProgram

			//
			// Query
			//
			enum eQuery
			{
				Query = 0x82E3,				// GL_QUERY
				QueryBuffer = 0x9192,				// GL_QUERY_BUFFER
				QueryBufferBarrierBit = 0x00008000,				// GL_QUERY_BUFFER_BARRIER_BIT
				QueryBufferBinding = 0x9193,				// GL_QUERY_BUFFER_BINDING
				QueryByRegionNoWait = 0x8E16,				// GL_QUERY_BY_REGION_NO_WAIT
				QueryByRegionNoWaitInverted = 0x8E1A,				// GL_QUERY_BY_REGION_NO_WAIT_INVERTED
				QueryByRegionWait = 0x8E15,				// GL_QUERY_BY_REGION_WAIT
				QueryByRegionWaitInverted = 0x8E19,				// GL_QUERY_BY_REGION_WAIT_INVERTED
				QueryCounterBits = 0x8864,				// GL_QUERY_COUNTER_BITS
				QueryNoWait = 0x8E14,				// GL_QUERY_NO_WAIT
				QueryNoWaitInverted = 0x8E18,				// GL_QUERY_NO_WAIT_INVERTED
				QueryResult = 0x8866,				// GL_QUERY_RESULT
				QueryResultAvailable = 0x8867,				// GL_QUERY_RESULT_AVAILABLE
				QueryResultNoWait = 0x9194,				// GL_QUERY_RESULT_NO_WAIT
				QueryTarget = 0x82EA,				// GL_QUERY_TARGET
				QueryWait = 0x8E13,				// GL_QUERY_WAIT
				QueryWaitInverted = 0x8E17,				// GL_QUERY_WAIT_INVERTED
			} eQuery;	// eQuery

			//
			// Renderbuffer
			//
			enum eRenderbuffer
			{
				Renderbuffer = 0x8D41,				// GL_RENDERBUFFER
				RenderbufferAlphaSize = 0x8D53,				// GL_RENDERBUFFER_ALPHA_SIZE
				RenderbufferBinding = 0x8CA7,				// GL_RENDERBUFFER_BINDING
				RenderbufferBlueSize = 0x8D52,				// GL_RENDERBUFFER_BLUE_SIZE
				RenderbufferDepthSize = 0x8D54,				// GL_RENDERBUFFER_DEPTH_SIZE
				RenderbufferGreenSize = 0x8D51,				// GL_RENDERBUFFER_GREEN_SIZE
				RenderbufferHeight = 0x8D43,				// GL_RENDERBUFFER_HEIGHT
				RenderbufferInternalFormat = 0x8D44,				// GL_RENDERBUFFER_INTERNAL_FORMAT
				RenderbufferRedSize = 0x8D50,				// GL_RENDERBUFFER_RED_SIZE
				RenderbufferSamples = 0x8CAB,				// GL_RENDERBUFFER_SAMPLES
				RenderbufferStencilSize = 0x8D55,				// GL_RENDERBUFFER_STENCIL_SIZE
				RenderbufferWidth = 0x8D42,				// GL_RENDERBUFFER_WIDTH
			} eRenderbuffer;	// eRenderbuffer

			//
			// Sample
			//
			enum eSample
			{
				MinSampleShadingValue = 0x8C37,				// GL_MIN_SAMPLE_SHADING_VALUE
				NumSampleCounts = 0x9380,				// GL_NUM_SAMPLE_COUNTS
				SampleAlphaToCoverage = 0x809E,				// GL_SAMPLE_ALPHA_TO_COVERAGE
				SampleAlphaToOne = 0x809F,				// GL_SAMPLE_ALPHA_TO_ONE
				SampleBuffers = 0x80A8,				// GL_SAMPLE_BUFFERS
				SampleCoverage = 0x80A0,				// GL_SAMPLE_COVERAGE
				SampleCoverageInvert = 0x80AB,				// GL_SAMPLE_COVERAGE_INVERT
				SampleCoverageValue = 0x80AA,				// GL_SAMPLE_COVERAGE_VALUE
				SampleMask = 0x8E51,				// GL_SAMPLE_MASK
				SampleMaskValue = 0x8E52,				// GL_SAMPLE_MASK_VALUE
				SamplePosition = 0x8E50,				// GL_SAMPLE_POSITION
				SampleShading = 0x8C36,				// GL_SAMPLE_SHADING
			} eSample;	// eSample

			//
			// Sampler
			//
			enum eSampler
			{
				IntSamplerBuffer = 0x8DD0,				// GL_INT_SAMPLER_BUFFER
				IntSamplerCube = 0x8DCC,				// GL_INT_SAMPLER_CUBE
				IntSamplerCubeMapArray = 0x900E,				// GL_INT_SAMPLER_CUBE_MAP_ARRAY
				IntSampler_1D = 0x8DC9,				// GL_INT_SAMPLER_1D
				IntSampler_1DArray = 0x8DCE,				// GL_INT_SAMPLER_1D_ARRAY
				IntSampler_2D = 0x8DCA,				// GL_INT_SAMPLER_2D
				IntSampler_2DArray = 0x8DCF,				// GL_INT_SAMPLER_2D_ARRAY
				IntSampler_2DMultisample = 0x9109,				// GL_INT_SAMPLER_2D_MULTISAMPLE
				IntSampler_2DMultisampleArray = 0x910C,				// GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY
				IntSampler_2DRect = 0x8DCD,				// GL_INT_SAMPLER_2D_RECT
				IntSampler_3D = 0x8DCB,				// GL_INT_SAMPLER_3D
				Sampler = 0x82E6,				// GL_SAMPLER
				SamplerBinding = 0x8919,				// GL_SAMPLER_BINDING
				SamplerBuffer = 0x8DC2,				// GL_SAMPLER_BUFFER
				SamplerCube = 0x8B60,				// GL_SAMPLER_CUBE
				SamplerCubeMapArray = 0x900C,				// GL_SAMPLER_CUBE_MAP_ARRAY
				SamplerCubeMapArrayShadow = 0x900D,				// GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW
				SamplerCubeShadow = 0x8DC5,				// GL_SAMPLER_CUBE_SHADOW
				Sampler_1D = 0x8B5D,				// GL_SAMPLER_1D
				Sampler_1DArray = 0x8DC0,				// GL_SAMPLER_1D_ARRAY
				Sampler_1DArrayShadow = 0x8DC3,				// GL_SAMPLER_1D_ARRAY_SHADOW
				Sampler_1DShadow = 0x8B61,				// GL_SAMPLER_1D_SHADOW
				Sampler_2D = 0x8B5E,				// GL_SAMPLER_2D
				Sampler_2DArray = 0x8DC1,				// GL_SAMPLER_2D_ARRAY
				Sampler_2DArrayShadow = 0x8DC4,				// GL_SAMPLER_2D_ARRAY_SHADOW
				Sampler_2DMultisample = 0x9108,				// GL_SAMPLER_2D_MULTISAMPLE
				Sampler_2DMultisampleArray = 0x910B,				// GL_SAMPLER_2D_MULTISAMPLE_ARRAY
				Sampler_2DRect = 0x8B63,				// GL_SAMPLER_2D_RECT
				Sampler_2DRectShadow = 0x8B64,				// GL_SAMPLER_2D_RECT_SHADOW
				Sampler_2DShadow = 0x8B62,				// GL_SAMPLER_2D_SHADOW
				Sampler_3D = 0x8B5F,				// GL_SAMPLER_3D
				UnsignedIntSamplerBuffer = 0x8DD8,				// GL_UNSIGNED_INT_SAMPLER_BUFFER
				UnsignedIntSamplerCube = 0x8DD4,				// GL_UNSIGNED_INT_SAMPLER_CUBE
				UnsignedIntSamplerCubeMapArray = 0x900F,				// GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY
				UnsignedIntSampler_1D = 0x8DD1,				// GL_UNSIGNED_INT_SAMPLER_1D
				UnsignedIntSampler_1DArray = 0x8DD6,				// GL_UNSIGNED_INT_SAMPLER_1D_ARRAY
				UnsignedIntSampler_2D = 0x8DD2,				// GL_UNSIGNED_INT_SAMPLER_2D
				UnsignedIntSampler_2DArray = 0x8DD7,				// GL_UNSIGNED_INT_SAMPLER_2D_ARRAY
				UnsignedIntSampler_2DMultisample = 0x910A,				// GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE
				UnsignedIntSampler_2DMultisampleArray = 0x910D,				// GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY
				UnsignedIntSampler_2DRect = 0x8DD5,				// GL_UNSIGNED_INT_SAMPLER_2D_RECT
				UnsignedIntSampler_3D = 0x8DD3,				// GL_UNSIGNED_INT_SAMPLER_3D
			} eSampler;	// eSampler

			//
			// Shade
			//
			enum eShade
			{
				ShadeModel = 0x0B54,				// GL_SHADE_MODEL
			} eShade;	// eShade

			//
			// Shader
			//
			enum eShader
			{
				AllShaderBits = 0xFFFFFFFF,				// GL_ALL_SHADER_BITS
				ComputeShader = 0x91B9,				// GL_COMPUTE_SHADER
				ComputeShaderBit = 0x00000020,				// GL_COMPUTE_SHADER_BIT
				ComputeShaderInvocations = 0x82F5,				// GL_COMPUTE_SHADER_INVOCATIONS
				DebugSourceShaderCompiler = 0x8248,				// GL_DEBUG_SOURCE_SHADER_COMPILER
				FragmentShader = 0x8B30,				// GL_FRAGMENT_SHADER
				FragmentShaderBit = 0x00000002,				// GL_FRAGMENT_SHADER_BIT
				FragmentShaderDerivativeHint = 0x8B8B,				// GL_FRAGMENT_SHADER_DERIVATIVE_HINT
				FragmentShaderInvocations = 0x82F4,				// GL_FRAGMENT_SHADER_INVOCATIONS
				GeometryShader = 0x8DD9,				// GL_GEOMETRY_SHADER
				GeometryShaderBit = 0x00000004,				// GL_GEOMETRY_SHADER_BIT
				GeometryShaderInvocations = 0x887F,				// GL_GEOMETRY_SHADER_INVOCATIONS
				GeometryShaderPrimitivesEmitted = 0x82F3,				// GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED
				NumShaderBinaryFormats = 0x8DF9,				// GL_NUM_SHADER_BINARY_FORMATS
				ReferencedByComputeShader = 0x930B,				// GL_REFERENCED_BY_COMPUTE_SHADER
				ReferencedByFragmentShader = 0x930A,				// GL_REFERENCED_BY_FRAGMENT_SHADER
				ReferencedByGeometryShader = 0x9309,				// GL_REFERENCED_BY_GEOMETRY_SHADER
				Shader = 0x82E1,				// GL_SHADER
				ShaderBinaryFormatSpirV = 0x9551,				// GL_SHADER_BINARY_FORMAT_SPIR_V
				ShaderBinaryFormats = 0x8DF8,				// GL_SHADER_BINARY_FORMATS
				ShaderCompiler = 0x8DFA,				// GL_SHADER_COMPILER
				ShaderImageAccessBarrierBit = 0x00000020,				// GL_SHADER_IMAGE_ACCESS_BARRIER_BIT
				ShaderImageAtomic = 0x82A6,				// GL_SHADER_IMAGE_ATOMIC
				ShaderImageLoad = 0x82A4,				// GL_SHADER_IMAGE_LOAD
				ShaderImageStore = 0x82A5,				// GL_SHADER_IMAGE_STORE
				ShaderSourceLength = 0x8B88,				// GL_SHADER_SOURCE_LENGTH
				ShaderStorageBarrierBit = 0x00002000,				// GL_SHADER_STORAGE_BARRIER_BIT
				ShaderStorageBlock = 0x92E6,				// GL_SHADER_STORAGE_BLOCK
				ShaderStorageBuffer = 0x90D2,				// GL_SHADER_STORAGE_BUFFER
				ShaderStorageBufferBinding = 0x90D3,				// GL_SHADER_STORAGE_BUFFER_BINDING
				ShaderStorageBufferOffsetAlignment = 0x90DF,				// GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT
				ShaderStorageBufferSize = 0x90D5,				// GL_SHADER_STORAGE_BUFFER_SIZE
				ShaderStorageBufferStart = 0x90D4,				// GL_SHADER_STORAGE_BUFFER_START
				ShaderType = 0x8B4F,				// GL_SHADER_TYPE
			} eShader;	// eShader

			//
			// Stencil
			//
			enum eStencil
			{
				MapStencil = 0x0D11,				// GL_MAP_STENCIL
				Stencil = 0x1802,				// GL_STENCIL
				StencilAttachment = 0x8D20,				// GL_STENCIL_ATTACHMENT
				StencilBackFail = 0x8801,				// GL_STENCIL_BACK_FAIL
				StencilBackFunc = 0x8800,				// GL_STENCIL_BACK_FUNC
				StencilBackPassDepthFail = 0x8802,				// GL_STENCIL_BACK_PASS_DEPTH_FAIL
				StencilBackPassDepthPass = 0x8803,				// GL_STENCIL_BACK_PASS_DEPTH_PASS
				StencilBackRef = 0x8CA3,				// GL_STENCIL_BACK_REF
				StencilBackValueMask = 0x8CA4,				// GL_STENCIL_BACK_VALUE_MASK
				StencilBackWritemask = 0x8CA5,				// GL_STENCIL_BACK_WRITEMASK
				StencilBits = 0x0D57,				// GL_STENCIL_BITS
				StencilBufferBit = 0x00000400,				// GL_STENCIL_BUFFER_BIT
				StencilClearValue = 0x0B91,				// GL_STENCIL_CLEAR_VALUE
				StencilComponents = 0x8285,				// GL_STENCIL_COMPONENTS
				StencilFail = 0x0B94,				// GL_STENCIL_FAIL
				StencilFunc = 0x0B92,				// GL_STENCIL_FUNC
				StencilIndex = 0x1901,				// GL_STENCIL_INDEX
				StencilIndex1 = 0x8D46,				// GL_STENCIL_INDEX1
				StencilIndex16 = 0x8D49,				// GL_STENCIL_INDEX16
				StencilIndex4 = 0x8D47,				// GL_STENCIL_INDEX4
				StencilIndex8 = 0x8D48,				// GL_STENCIL_INDEX8
				StencilPassDepthFail = 0x0B95,				// GL_STENCIL_PASS_DEPTH_FAIL
				StencilPassDepthPass = 0x0B96,				// GL_STENCIL_PASS_DEPTH_PASS
				StencilRef = 0x0B97,				// GL_STENCIL_REF
				StencilRenderable = 0x8288,				// GL_STENCIL_RENDERABLE
				StencilTest = 0x0B90,				// GL_STENCIL_TEST
				StencilValueMask = 0x0B93,				// GL_STENCIL_VALUE_MASK
				StencilWritemask = 0x0B98,				// GL_STENCIL_WRITEMASK
			} eStencil;	// eStencil

			//
			// Tess
			//
			enum eTess
			{
				ReferencedByTessControlShader = 0x9307,				// GL_REFERENCED_BY_TESS_CONTROL_SHADER
				ReferencedByTessEvaluationShader = 0x9308,				// GL_REFERENCED_BY_TESS_EVALUATION_SHADER
				TessControlOutputVertices = 0x8E75,				// GL_TESS_CONTROL_OUTPUT_VERTICES
				TessControlShader = 0x8E88,				// GL_TESS_CONTROL_SHADER
				TessControlShaderBit = 0x00000008,				// GL_TESS_CONTROL_SHADER_BIT
				TessControlShaderPatches = 0x82F1,				// GL_TESS_CONTROL_SHADER_PATCHES
				TessControlSubroutine = 0x92E9,				// GL_TESS_CONTROL_SUBROUTINE
				TessControlSubroutineUniform = 0x92EF,				// GL_TESS_CONTROL_SUBROUTINE_UNIFORM
				TessControlTexture = 0x829C,				// GL_TESS_CONTROL_TEXTURE
				TessEvaluationShader = 0x8E87,				// GL_TESS_EVALUATION_SHADER
				TessEvaluationShaderBit = 0x00000010,				// GL_TESS_EVALUATION_SHADER_BIT
				TessEvaluationShaderInvocations = 0x82F2,				// GL_TESS_EVALUATION_SHADER_INVOCATIONS
				TessEvaluationSubroutine = 0x92EA,				// GL_TESS_EVALUATION_SUBROUTINE
				TessEvaluationSubroutineUniform = 0x92F0,				// GL_TESS_EVALUATION_SUBROUTINE_UNIFORM
				TessEvaluationTexture = 0x829D,				// GL_TESS_EVALUATION_TEXTURE
				TessGenMode = 0x8E76,				// GL_TESS_GEN_MODE
				TessGenPointMode = 0x8E79,				// GL_TESS_GEN_POINT_MODE
				TessGenSpacing = 0x8E77,				// GL_TESS_GEN_SPACING
				TessGenVertexOrder = 0x8E78,				// GL_TESS_GEN_VERTEX_ORDER
			} eTess;	// eTess

			//
			// Texture
			//
			enum eTexture
			{
				ActiveTexture = 0x84E0,				// GL_ACTIVE_TEXTURE
				ClearTexture = 0x9365,				// GL_CLEAR_TEXTURE
				ClientActiveTexture = 0x84E1,				// GL_CLIENT_ACTIVE_TEXTURE
				CompareRToTexture = 0x884E,				// GL_COMPARE_R_TO_TEXTURE
				CompareRefToTexture = 0x884E,				// GL_COMPARE_REF_TO_TEXTURE
				CompressedTextureFormats = 0x86A3,				// GL_COMPRESSED_TEXTURE_FORMATS
				ComputeTexture = 0x82A0,				// GL_COMPUTE_TEXTURE
				FragmentTexture = 0x829F,				// GL_FRAGMENT_TEXTURE
				GeometryTexture = 0x829E,				// GL_GEOMETRY_TEXTURE
				GetTextureImageFormat = 0x8291,				// GL_GET_TEXTURE_IMAGE_FORMAT
				GetTextureImageType = 0x8292,				// GL_GET_TEXTURE_IMAGE_TYPE
				Map1TextureCoord_1 = 0x0D93,				// GL_MAP1_TEXTURE_COORD_1
				Map1TextureCoord_2 = 0x0D94,				// GL_MAP1_TEXTURE_COORD_2
				Map1TextureCoord_3 = 0x0D95,				// GL_MAP1_TEXTURE_COORD_3
				Map1TextureCoord_4 = 0x0D96,				// GL_MAP1_TEXTURE_COORD_4
				Map2TextureCoord_1 = 0x0DB3,				// GL_MAP2_TEXTURE_COORD_1
				Map2TextureCoord_2 = 0x0DB4,				// GL_MAP2_TEXTURE_COORD_2
				Map2TextureCoord_3 = 0x0DB5,				// GL_MAP2_TEXTURE_COORD_3
				Map2TextureCoord_4 = 0x0DB6,				// GL_MAP2_TEXTURE_COORD_4
				NumCompressedTextureFormats = 0x86A2,				// GL_NUM_COMPRESSED_TEXTURE_FORMATS
				ProxyTextureCubeMap = 0x851B,				// GL_PROXY_TEXTURE_CUBE_MAP
				ProxyTextureCubeMapArray = 0x900B,				// GL_PROXY_TEXTURE_CUBE_MAP_ARRAY
				ProxyTextureRectangle = 0x84F7,				// GL_PROXY_TEXTURE_RECTANGLE
				ProxyTexture_1D = 0x8063,				// GL_PROXY_TEXTURE_1D
				ProxyTexture_1DArray = 0x8C19,				// GL_PROXY_TEXTURE_1D_ARRAY
				ProxyTexture_2D = 0x8064,				// GL_PROXY_TEXTURE_2D
				ProxyTexture_2DArray = 0x8C1B,				// GL_PROXY_TEXTURE_2D_ARRAY
				ProxyTexture_2DMultisample = 0x9101,				// GL_PROXY_TEXTURE_2D_MULTISAMPLE
				ProxyTexture_2DMultisampleArray = 0x9103,				// GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY
				ProxyTexture_3D = 0x8070,				// GL_PROXY_TEXTURE_3D
				SimultaneousTextureAndDepthTest = 0x82AC,				// GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST
				SimultaneousTextureAndDepthWrite = 0x82AE,				// GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE
				SimultaneousTextureAndStencilTest = 0x82AD,				// GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST
				SimultaneousTextureAndStencilWrite = 0x82AF,				// GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE
				Texture = 0x1702,				// GL_TEXTURE
				TextureAlphaSize = 0x805F,				// GL_TEXTURE_ALPHA_SIZE
				TextureAlphaType = 0x8C13,				// GL_TEXTURE_ALPHA_TYPE
				TextureBaseLevel = 0x813C,				// GL_TEXTURE_BASE_LEVEL
				TextureBindingBuffer = 0x8C2C,				// GL_TEXTURE_BINDING_BUFFER
				TextureBindingCubeMap = 0x8514,				// GL_TEXTURE_BINDING_CUBE_MAP
				TextureBindingCubeMapArray = 0x900A,				// GL_TEXTURE_BINDING_CUBE_MAP_ARRAY
				TextureBindingRectangle = 0x84F6,				// GL_TEXTURE_BINDING_RECTANGLE
				TextureBinding_1D = 0x8068,				// GL_TEXTURE_BINDING_1D
				TextureBinding_1DArray = 0x8C1C,				// GL_TEXTURE_BINDING_1D_ARRAY
				TextureBinding_2D = 0x8069,				// GL_TEXTURE_BINDING_2D
				TextureBinding_2DArray = 0x8C1D,				// GL_TEXTURE_BINDING_2D_ARRAY
				TextureBinding_2DMultisample = 0x9104,				// GL_TEXTURE_BINDING_2D_MULTISAMPLE
				TextureBinding_2DMultisampleArray = 0x9105,				// GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY
				TextureBinding_3D = 0x806A,				// GL_TEXTURE_BINDING_3D
				TextureBit = 0x00040000,				// GL_TEXTURE_BIT
				TextureBlueSize = 0x805E,				// GL_TEXTURE_BLUE_SIZE
				TextureBlueType = 0x8C12,				// GL_TEXTURE_BLUE_TYPE
				TextureBorder = 0x1005,				// GL_TEXTURE_BORDER
				TextureBorderColor = 0x1004,				// GL_TEXTURE_BORDER_COLOR
				TextureBuffer = 0x8C2A,				// GL_TEXTURE_BUFFER
				TextureBufferBinding = 0x8C2A,				// GL_TEXTURE_BUFFER_BINDING
				TextureBufferDataStoreBinding = 0x8C2D,				// GL_TEXTURE_BUFFER_DATA_STORE_BINDING
				TextureBufferOffset = 0x919D,				// GL_TEXTURE_BUFFER_OFFSET
				TextureBufferOffsetAlignment = 0x919F,				// GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT
				TextureBufferSize = 0x919E,				// GL_TEXTURE_BUFFER_SIZE
				TextureCompareFunc = 0x884D,				// GL_TEXTURE_COMPARE_FUNC
				TextureCompareMode = 0x884C,				// GL_TEXTURE_COMPARE_MODE
				TextureComponents = 0x1003,				// GL_TEXTURE_COMPONENTS
				TextureCompressed = 0x86A1,				// GL_TEXTURE_COMPRESSED
				TextureCompressedBlockHeight = 0x82B2,				// GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT
				TextureCompressedBlockSize = 0x82B3,				// GL_TEXTURE_COMPRESSED_BLOCK_SIZE
				TextureCompressedBlockWidth = 0x82B1,				// GL_TEXTURE_COMPRESSED_BLOCK_WIDTH
				TextureCompressedImageSize = 0x86A0,				// GL_TEXTURE_COMPRESSED_IMAGE_SIZE
				TextureCompressionHint = 0x84EF,				// GL_TEXTURE_COMPRESSION_HINT
				TextureCoordArray = 0x8078,				// GL_TEXTURE_COORD_ARRAY
				TextureCoordArrayBufferBinding = 0x889A,				// GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING
				TextureCoordArrayPointer = 0x8092,				// GL_TEXTURE_COORD_ARRAY_POINTER
				TextureCoordArraySize = 0x8088,				// GL_TEXTURE_COORD_ARRAY_SIZE
				TextureCoordArrayStride = 0x808A,				// GL_TEXTURE_COORD_ARRAY_STRIDE
				TextureCoordArrayType = 0x8089,				// GL_TEXTURE_COORD_ARRAY_TYPE
				TextureCubeMap = 0x8513,				// GL_TEXTURE_CUBE_MAP
				TextureCubeMapArray = 0x9009,				// GL_TEXTURE_CUBE_MAP_ARRAY
				TextureCubeMapNegativeX = 0x8516,				// GL_TEXTURE_CUBE_MAP_NEGATIVE_X
				TextureCubeMapNegativeY = 0x8518,				// GL_TEXTURE_CUBE_MAP_NEGATIVE_Y
				TextureCubeMapNegativeZ = 0x851A,				// GL_TEXTURE_CUBE_MAP_NEGATIVE_Z
				TextureCubeMapPositiveX = 0x8515,				// GL_TEXTURE_CUBE_MAP_POSITIVE_X
				TextureCubeMapPositiveY = 0x8517,				// GL_TEXTURE_CUBE_MAP_POSITIVE_Y
				TextureCubeMapPositiveZ = 0x8519,				// GL_TEXTURE_CUBE_MAP_POSITIVE_Z
				TextureCubeMapSeamless = 0x884F,				// GL_TEXTURE_CUBE_MAP_SEAMLESS
				TextureDepth = 0x8071,				// GL_TEXTURE_DEPTH
				TextureDepthSize = 0x884A,				// GL_TEXTURE_DEPTH_SIZE
				TextureDepthType = 0x8C16,				// GL_TEXTURE_DEPTH_TYPE
				TextureEnv = 0x2300,				// GL_TEXTURE_ENV
				TextureEnvColor = 0x2201,				// GL_TEXTURE_ENV_COLOR
				TextureEnvMode = 0x2200,				// GL_TEXTURE_ENV_MODE
				TextureFetchBarrierBit = 0x00000008,				// GL_TEXTURE_FETCH_BARRIER_BIT
				TextureFilterControl = 0x8500,				// GL_TEXTURE_FILTER_CONTROL
				TextureFixedSampleLocations = 0x9107,				// GL_TEXTURE_FIXED_SAMPLE_LOCATIONS
				TextureGather = 0x82A2,				// GL_TEXTURE_GATHER
				TextureGatherShadow = 0x82A3,				// GL_TEXTURE_GATHER_SHADOW
				TextureGenMode = 0x2500,				// GL_TEXTURE_GEN_MODE
				TextureGenQ = 0x0C63,				// GL_TEXTURE_GEN_Q
				TextureGenR = 0x0C62,				// GL_TEXTURE_GEN_R
				TextureGenS = 0x0C60,				// GL_TEXTURE_GEN_S
				TextureGenT = 0x0C61,				// GL_TEXTURE_GEN_T
				TextureGreenSize = 0x805D,				// GL_TEXTURE_GREEN_SIZE
				TextureGreenType = 0x8C11,				// GL_TEXTURE_GREEN_TYPE
				TextureHeight = 0x1001,				// GL_TEXTURE_HEIGHT
				TextureImageFormat = 0x828F,				// GL_TEXTURE_IMAGE_FORMAT
				TextureImageType = 0x8290,				// GL_TEXTURE_IMAGE_TYPE
				TextureImmutableFormat = 0x912F,				// GL_TEXTURE_IMMUTABLE_FORMAT
				TextureImmutableLevels = 0x82DF,				// GL_TEXTURE_IMMUTABLE_LEVELS
				TextureIntensitySize = 0x8061,				// GL_TEXTURE_INTENSITY_SIZE
				TextureIntensityType = 0x8C15,				// GL_TEXTURE_INTENSITY_TYPE
				TextureInternalFormat = 0x1003,				// GL_TEXTURE_INTERNAL_FORMAT
				TextureLodBias = 0x8501,				// GL_TEXTURE_LOD_BIAS
				TextureLuminanceSize = 0x8060,				// GL_TEXTURE_LUMINANCE_SIZE
				TextureLuminanceType = 0x8C14,				// GL_TEXTURE_LUMINANCE_TYPE
				TextureMagFilter = 0x2800,				// GL_TEXTURE_MAG_FILTER
				TextureMatrix = 0x0BA8,				// GL_TEXTURE_MATRIX
				TextureMaxAnisotropy = 0x84FE,				// GL_TEXTURE_MAX_ANISOTROPY
				TextureMaxLevel = 0x813D,				// GL_TEXTURE_MAX_LEVEL
				TextureMaxLod = 0x813B,				// GL_TEXTURE_MAX_LOD
				TextureMinFilter = 0x2801,				// GL_TEXTURE_MIN_FILTER
				TextureMinLod = 0x813A,				// GL_TEXTURE_MIN_LOD
				TexturePriority = 0x8066,				// GL_TEXTURE_PRIORITY
				TextureRectangle = 0x84F5,				// GL_TEXTURE_RECTANGLE
				TextureRedSize = 0x805C,				// GL_TEXTURE_RED_SIZE
				TextureRedType = 0x8C10,				// GL_TEXTURE_RED_TYPE
				TextureResident = 0x8067,				// GL_TEXTURE_RESIDENT
				TextureSamples = 0x9106,				// GL_TEXTURE_SAMPLES
				TextureShadow = 0x82A1,				// GL_TEXTURE_SHADOW
				TextureSharedSize = 0x8C3F,				// GL_TEXTURE_SHARED_SIZE
				TextureStackDepth = 0x0BA5,				// GL_TEXTURE_STACK_DEPTH
				TextureStencilSize = 0x88F1,				// GL_TEXTURE_STENCIL_SIZE
				TextureSwizzleA = 0x8E45,				// GL_TEXTURE_SWIZZLE_A
				TextureSwizzleB = 0x8E44,				// GL_TEXTURE_SWIZZLE_B
				TextureSwizzleG = 0x8E43,				// GL_TEXTURE_SWIZZLE_G
				TextureSwizzleR = 0x8E42,				// GL_TEXTURE_SWIZZLE_R
				TextureSwizzleRgba = 0x8E46,				// GL_TEXTURE_SWIZZLE_RGBA
				TextureTarget = 0x1006,				// GL_TEXTURE_TARGET
				TextureUpdateBarrierBit = 0x00000100,				// GL_TEXTURE_UPDATE_BARRIER_BIT
				TextureView = 0x82B5,				// GL_TEXTURE_VIEW
				TextureViewMinLayer = 0x82DD,				// GL_TEXTURE_VIEW_MIN_LAYER
				TextureViewMinLevel = 0x82DB,				// GL_TEXTURE_VIEW_MIN_LEVEL
				TextureViewNumLayers = 0x82DE,				// GL_TEXTURE_VIEW_NUM_LAYERS
				TextureViewNumLevels = 0x82DC,				// GL_TEXTURE_VIEW_NUM_LEVELS
				TextureWidth = 0x1000,				// GL_TEXTURE_WIDTH
				TextureWrapR = 0x8072,				// GL_TEXTURE_WRAP_R
				TextureWrapS = 0x2802,				// GL_TEXTURE_WRAP_S
				TextureWrapT = 0x2803,				// GL_TEXTURE_WRAP_T
				Texture_1D = 0x0DE0,				// GL_TEXTURE_1D
				Texture_1DArray = 0x8C18,				// GL_TEXTURE_1D_ARRAY
				Texture_2D = 0x0DE1,				// GL_TEXTURE_2D
				Texture_2DArray = 0x8C1A,				// GL_TEXTURE_2D_ARRAY
				Texture_2DMultisample = 0x9100,				// GL_TEXTURE_2D_MULTISAMPLE
				Texture_2DMultisampleArray = 0x9102,				// GL_TEXTURE_2D_MULTISAMPLE_ARRAY
				Texture_3D = 0x806F,				// GL_TEXTURE_3D
				TransposeTextureMatrix = 0x84E5,				// GL_TRANSPOSE_TEXTURE_MATRIX
			} eTexture;	// eTexture

			//
			// Transform
			//
			enum eTransform
			{
				TransformBit = 0x00001000,				// GL_TRANSFORM_BIT
				TransformFeedback = 0x8E22,				// GL_TRANSFORM_FEEDBACK
				TransformFeedbackActive = 0x8E24,				// GL_TRANSFORM_FEEDBACK_ACTIVE
				TransformFeedbackBarrierBit = 0x00000800,				// GL_TRANSFORM_FEEDBACK_BARRIER_BIT
				TransformFeedbackBinding = 0x8E25,				// GL_TRANSFORM_FEEDBACK_BINDING
				TransformFeedbackBuffer = 0x8C8E,				// GL_TRANSFORM_FEEDBACK_BUFFER
				TransformFeedbackBufferActive = 0x8E24,				// GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE
				TransformFeedbackBufferBinding = 0x8C8F,				// GL_TRANSFORM_FEEDBACK_BUFFER_BINDING
				TransformFeedbackBufferIndex = 0x934B,				// GL_TRANSFORM_FEEDBACK_BUFFER_INDEX
				TransformFeedbackBufferMode = 0x8C7F,				// GL_TRANSFORM_FEEDBACK_BUFFER_MODE
				TransformFeedbackBufferPaused = 0x8E23,				// GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED
				TransformFeedbackBufferSize = 0x8C85,				// GL_TRANSFORM_FEEDBACK_BUFFER_SIZE
				TransformFeedbackBufferStart = 0x8C84,				// GL_TRANSFORM_FEEDBACK_BUFFER_START
				TransformFeedbackBufferStride = 0x934C,				// GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE
				TransformFeedbackOverflow = 0x82EC,				// GL_TRANSFORM_FEEDBACK_OVERFLOW
				TransformFeedbackPaused = 0x8E23,				// GL_TRANSFORM_FEEDBACK_PAUSED
				TransformFeedbackPrimitivesWritten = 0x8C88,				// GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN
				TransformFeedbackStreamOverflow = 0x82ED,				// GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW
				TransformFeedbackVarying = 0x92F4,				// GL_TRANSFORM_FEEDBACK_VARYING
				TransformFeedbackVaryingMaxLength = 0x8C76,				// GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH
				TransformFeedbackVaryings = 0x8C83,				// GL_TRANSFORM_FEEDBACK_VARYINGS
			} eTransform;	// eTransform

			//
			// Triangles
			//
			enum eTriangles
			{
				Triangles = 0x0004,				// GL_TRIANGLES
				TrianglesAdjacency = 0x000C,				// GL_TRIANGLES_ADJACENCY
			} eTriangles;	// eTriangles

			//
			// Uniform
			//
			enum eUniform
			{
				ActiveSubroutineUniformLocations = 0x8E47,				// GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS
				ActiveSubroutineUniformMaxLength = 0x8E49,				// GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH
				ActiveUniformBlockMaxNameLength = 0x8A35,				// GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH
				ActiveUniformBlocks = 0x8A36,				// GL_ACTIVE_UNIFORM_BLOCKS
				ActiveUniformMaxLength = 0x8B87,				// GL_ACTIVE_UNIFORM_MAX_LENGTH
				ComputeSubroutineUniform = 0x92F3,				// GL_COMPUTE_SUBROUTINE_UNIFORM
				FragmentSubroutineUniform = 0x92F2,				// GL_FRAGMENT_SUBROUTINE_UNIFORM
				GeometrySubroutineUniform = 0x92F1,				// GL_GEOMETRY_SUBROUTINE_UNIFORM
				Uniform = 0x92E1,				// GL_UNIFORM
				UniformArrayStride = 0x8A3C,				// GL_UNIFORM_ARRAY_STRIDE
				UniformAtomicCounterBufferIndex = 0x92DA,				// GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX
				UniformBarrierBit = 0x00000004,				// GL_UNIFORM_BARRIER_BIT
				UniformBlock = 0x92E2,				// GL_UNIFORM_BLOCK
				UniformBlockActiveUniformIndices = 0x8A43,				// GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES
				UniformBlockActiveUniforms = 0x8A42,				// GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS
				UniformBlockBinding = 0x8A3F,				// GL_UNIFORM_BLOCK_BINDING
				UniformBlockDataSize = 0x8A40,				// GL_UNIFORM_BLOCK_DATA_SIZE
				UniformBlockIndex = 0x8A3A,				// GL_UNIFORM_BLOCK_INDEX
				UniformBlockNameLength = 0x8A41,				// GL_UNIFORM_BLOCK_NAME_LENGTH
				UniformBlockReferencedByComputeShader = 0x90EC,				// GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER
				UniformBlockReferencedByFragmentShader = 0x8A46,				// GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER
				UniformBlockReferencedByGeometryShader = 0x8A45,				// GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER
				UniformBlockReferencedByTessControlShader = 0x84F0,				// GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER
				UniformBlockReferencedByTessEvaluationShader = 0x84F1,				// GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER
				UniformBlockReferencedByVertexShader = 0x8A44,				// GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER
				UniformBuffer = 0x8A11,				// GL_UNIFORM_BUFFER
				UniformBufferBinding = 0x8A28,				// GL_UNIFORM_BUFFER_BINDING
				UniformBufferOffsetAlignment = 0x8A34,				// GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT
				UniformBufferSize = 0x8A2A,				// GL_UNIFORM_BUFFER_SIZE
				UniformBufferStart = 0x8A29,				// GL_UNIFORM_BUFFER_START
				UniformIsRowMajor = 0x8A3E,				// GL_UNIFORM_IS_ROW_MAJOR
				UniformMatrixStride = 0x8A3D,				// GL_UNIFORM_MATRIX_STRIDE
				UniformNameLength = 0x8A39,				// GL_UNIFORM_NAME_LENGTH
				UniformOffset = 0x8A3B,				// GL_UNIFORM_OFFSET
				UniformSize = 0x8A38,				// GL_UNIFORM_SIZE
				UniformType = 0x8A37,				// GL_UNIFORM_TYPE
			} eUniform;	// eUniform

			//
			// Unpack
			//
			enum eUnpack
			{
				UnpackAlignment = 0x0CF5,				// GL_UNPACK_ALIGNMENT
				UnpackCompressedBlockDepth = 0x9129,				// GL_UNPACK_COMPRESSED_BLOCK_DEPTH
				UnpackCompressedBlockHeight = 0x9128,				// GL_UNPACK_COMPRESSED_BLOCK_HEIGHT
				UnpackCompressedBlockSize = 0x912A,				// GL_UNPACK_COMPRESSED_BLOCK_SIZE
				UnpackCompressedBlockWidth = 0x9127,				// GL_UNPACK_COMPRESSED_BLOCK_WIDTH
				UnpackImageHeight = 0x806E,				// GL_UNPACK_IMAGE_HEIGHT
				UnpackLsbFirst = 0x0CF1,				// GL_UNPACK_LSB_FIRST
				UnpackRowLength = 0x0CF2,				// GL_UNPACK_ROW_LENGTH
				UnpackSkipImages = 0x806D,				// GL_UNPACK_SKIP_IMAGES
				UnpackSkipPixels = 0x0CF4,				// GL_UNPACK_SKIP_PIXELS
				UnpackSkipRows = 0x0CF3,				// GL_UNPACK_SKIP_ROWS
				UnpackSwapBytes = 0x0CF0,				// GL_UNPACK_SWAP_BYTES
			} eUnpack;	// eUnpack

			//
			// Version
			//
			enum eVersion
			{
				MajorVersion = 0x821B,				// GL_MAJOR_VERSION
				MinorVersion = 0x821C,				// GL_MINOR_VERSION
				ShadingLanguageVersion = 0x8B8C,				// GL_SHADING_LANGUAGE_VERSION
				Version = 0x1F02,				// GL_VERSION
				Version_1_0 = 1,				// GL_VERSION_1_0
				Version_1_1 = 1,				// GL_VERSION_1_1
				Version_1_2 = 1,				// GL_VERSION_1_2
				Version_1_3 = 1,				// GL_VERSION_1_3
				Version_1_4 = 1,				// GL_VERSION_1_4
				Version_1_5 = 1,				// GL_VERSION_1_5
				Version_2_0 = 1,				// GL_VERSION_2_0
				Version_2_1 = 1,				// GL_VERSION_2_1
				Version_3_0 = 1,				// GL_VERSION_3_0
				Version_3_1 = 1,				// GL_VERSION_3_1
				Version_3_2 = 1,				// GL_VERSION_3_2
				Version_3_3 = 1,				// GL_VERSION_3_3
				Version_4_0 = 1,				// GL_VERSION_4_0
				Version_4_1 = 1,				// GL_VERSION_4_1
				Version_4_2 = 1,				// GL_VERSION_4_2
				Version_4_3 = 1,				// GL_VERSION_4_3
				Version_4_4 = 1,				// GL_VERSION_4_4
				Version_4_5 = 1,				// GL_VERSION_4_5
				Version_4_6 = 1,				// GL_VERSION_4_6
			} eVersion;	// eVersion

			//
			// Vertex
			//
			enum eVertex
			{
				ClampVertexColor = 0x891A,				// GL_CLAMP_VERTEX_COLOR
				ClientVertexArrayBit = 0x00000002,				// GL_CLIENT_VERTEX_ARRAY_BIT
				FirstVertexConvention = 0x8E4D,				// GL_FIRST_VERTEX_CONVENTION
				LastVertexConvention = 0x8E4E,				// GL_LAST_VERTEX_CONVENTION
				LayerProvokingVertex = 0x825E,				// GL_LAYER_PROVOKING_VERTEX
				Map1Vertex_3 = 0x0D97,				// GL_MAP1_VERTEX_3
				Map1Vertex_4 = 0x0D98,				// GL_MAP1_VERTEX_4
				Map2Vertex_3 = 0x0DB7,				// GL_MAP2_VERTEX_3
				Map2Vertex_4 = 0x0DB8,				// GL_MAP2_VERTEX_4
				ProvokingVertex = 0x8E4F,				// GL_PROVOKING_VERTEX
				QuadsFollowProvokingVertexConvention = 0x8E4C,				// GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION
				ReferencedByVertexShader = 0x9306,				// GL_REFERENCED_BY_VERTEX_SHADER
				UndefinedVertex = 0x8260,				// GL_UNDEFINED_VERTEX
				VertexArray = 0x8074,				// GL_VERTEX_ARRAY
				VertexArrayBinding = 0x85B5,				// GL_VERTEX_ARRAY_BINDING
				VertexArrayBufferBinding = 0x8896,				// GL_VERTEX_ARRAY_BUFFER_BINDING
				VertexArrayPointer = 0x808E,				// GL_VERTEX_ARRAY_POINTER
				VertexArraySize = 0x807A,				// GL_VERTEX_ARRAY_SIZE
				VertexArrayStride = 0x807C,				// GL_VERTEX_ARRAY_STRIDE
				VertexArrayType = 0x807B,				// GL_VERTEX_ARRAY_TYPE
				VertexAttribArrayBarrierBit = 0x00000001,				// GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT
				VertexAttribArrayBufferBinding = 0x889F,				// GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING
				VertexAttribArrayDivisor = 0x88FE,				// GL_VERTEX_ATTRIB_ARRAY_DIVISOR
				VertexAttribArrayEnabled = 0x8622,				// GL_VERTEX_ATTRIB_ARRAY_ENABLED
				VertexAttribArrayInteger = 0x88FD,				// GL_VERTEX_ATTRIB_ARRAY_INTEGER
				VertexAttribArrayLong = 0x874E,				// GL_VERTEX_ATTRIB_ARRAY_LONG
				VertexAttribArrayNormalized = 0x886A,				// GL_VERTEX_ATTRIB_ARRAY_NORMALIZED
				VertexAttribArrayPointer = 0x8645,				// GL_VERTEX_ATTRIB_ARRAY_POINTER
				VertexAttribArraySize = 0x8623,				// GL_VERTEX_ATTRIB_ARRAY_SIZE
				VertexAttribArrayStride = 0x8624,				// GL_VERTEX_ATTRIB_ARRAY_STRIDE
				VertexAttribArrayType = 0x8625,				// GL_VERTEX_ATTRIB_ARRAY_TYPE
				VertexAttribBinding = 0x82D4,				// GL_VERTEX_ATTRIB_BINDING
				VertexAttribRelativeOffset = 0x82D5,				// GL_VERTEX_ATTRIB_RELATIVE_OFFSET
				VertexBindingBuffer = 0x8F4F,				// GL_VERTEX_BINDING_BUFFER
				VertexBindingDivisor = 0x82D6,				// GL_VERTEX_BINDING_DIVISOR
				VertexBindingOffset = 0x82D7,				// GL_VERTEX_BINDING_OFFSET
				VertexBindingStride = 0x82D8,				// GL_VERTEX_BINDING_STRIDE
				VertexProgramPointSize = 0x8642,				// GL_VERTEX_PROGRAM_POINT_SIZE
				VertexProgramTwoSide = 0x8643,				// GL_VERTEX_PROGRAM_TWO_SIDE
				VertexShader = 0x8B31,				// GL_VERTEX_SHADER
				VertexShaderBit = 0x00000001,				// GL_VERTEX_SHADER_BIT
				VertexShaderInvocations = 0x82F0,				// GL_VERTEX_SHADER_INVOCATIONS
				VertexSubroutine = 0x92E8,				// GL_VERTEX_SUBROUTINE
				VertexSubroutineUniform = 0x92EE,				// GL_VERTEX_SUBROUTINE_UNIFORM
				VertexTexture = 0x829B,				// GL_VERTEX_TEXTURE
				ViewportIndexProvokingVertex = 0x825F,				// GL_VIEWPORT_INDEX_PROVOKING_VERTEX
			} eVertex;	// eVertex

			//
			// View
			//
			enum eView
			{
				ViewClassBptcFloat = 0x82D3,				// GL_VIEW_CLASS_BPTC_FLOAT
				ViewClassBptcUnorm = 0x82D2,				// GL_VIEW_CLASS_BPTC_UNORM
				ViewClassRgtc1Red = 0x82D0,				// GL_VIEW_CLASS_RGTC1_RED
				ViewClassRgtc2Rg = 0x82D1,				// GL_VIEW_CLASS_RGTC2_RG
				ViewClassS3tcDxt1Rgb = 0x82CC,				// GL_VIEW_CLASS_S3TC_DXT1_RGB
				ViewClassS3tcDxt1Rgba = 0x82CD,				// GL_VIEW_CLASS_S3TC_DXT1_RGBA
				ViewClassS3tcDxt3Rgba = 0x82CE,				// GL_VIEW_CLASS_S3TC_DXT3_RGBA
				ViewClassS3tcDxt5Rgba = 0x82CF,				// GL_VIEW_CLASS_S3TC_DXT5_RGBA
				ViewClass_128Bits = 0x82C4,				// GL_VIEW_CLASS_128_BITS
				ViewClass_16Bits = 0x82CA,				// GL_VIEW_CLASS_16_BITS
				ViewClass_24Bits = 0x82C9,				// GL_VIEW_CLASS_24_BITS
				ViewClass_32Bits = 0x82C8,				// GL_VIEW_CLASS_32_BITS
				ViewClass_48Bits = 0x82C7,				// GL_VIEW_CLASS_48_BITS
				ViewClass_64Bits = 0x82C6,				// GL_VIEW_CLASS_64_BITS
				ViewClass_8Bits = 0x82CB,				// GL_VIEW_CLASS_8_BITS
				ViewClass_96Bits = 0x82C5,				// GL_VIEW_CLASS_96_BITS
				ViewCompatibilityClass = 0x82B6,				// GL_VIEW_COMPATIBILITY_CLASS
			} eView;	// eView

			//
			// Zoom
			//
			enum eZoom
			{
				ZoomX = 0x0D16,				// GL_ZOOM_X
				ZoomY = 0x0D17,				// GL_ZOOM_Y
			} eZoom;	// eZoom

			//
			// eOther GL defines
			//
			enum eOther
			{
				Accum = 0x0100,				// GL_ACCUM
				AccumAlphaBits = 0x0D5B,				// GL_ACCUM_ALPHA_BITS
				AccumBlueBits = 0x0D5A,				// GL_ACCUM_BLUE_BITS
				AccumClearValue = 0x0B80,				// GL_ACCUM_CLEAR_VALUE
				AccumGreenBits = 0x0D59,				// GL_ACCUM_GREEN_BITS
				AccumRedBits = 0x0D58,				// GL_ACCUM_RED_BITS
				ActiveAttributes = 0x8B89,				// GL_ACTIVE_ATTRIBUTES
				ActiveResources = 0x92F5,				// GL_ACTIVE_RESOURCES
				ActiveSubroutineUniforms = 0x8DE6,				// GL_ACTIVE_SUBROUTINE_UNIFORMS
				ActiveSubroutines = 0x8DE5,				// GL_ACTIVE_SUBROUTINES
				ActiveUniforms = 0x8B86,				// GL_ACTIVE_UNIFORMS
				ActiveVariables = 0x9305,				// GL_ACTIVE_VARIABLES
				Add = 0x0104,				// GL_ADD
				AddSigned = 0x8574,				// GL_ADD_SIGNED
				AllAttribBits = 0xFFFFFFFF,				// GL_ALL_ATTRIB_BITS
				AllBarrierBits = 0xFFFFFFFF,				// GL_ALL_BARRIER_BITS
				Alpha = 0x1906,				// GL_ALPHA
				Alpha12 = 0x803D,				// GL_ALPHA12
				Alpha16 = 0x803E,				// GL_ALPHA16
				Alpha4 = 0x803B,				// GL_ALPHA4
				Alpha8 = 0x803C,				// GL_ALPHA8
				AlphaBias = 0x0D1D,				// GL_ALPHA_BIAS
				AlphaBits = 0x0D55,				// GL_ALPHA_BITS
				AlphaInteger = 0x8D97,				// GL_ALPHA_INTEGER
				AlphaScale = 0x0D1C,				// GL_ALPHA_SCALE
				AlphaTest = 0x0BC0,				// GL_ALPHA_TEST
				AlphaTestFunc = 0x0BC1,				// GL_ALPHA_TEST_FUNC
				AlphaTestRef = 0x0BC2,				// GL_ALPHA_TEST_REF
				AlreadySignaled = 0x911A,				// GL_ALREADY_SIGNALED
				Always = 0x0207,				// GL_ALWAYS
				Ambient = 0x1200,				// GL_AMBIENT
				AmbientAndDiffuse = 0x1602,				// GL_AMBIENT_AND_DIFFUSE
				And = 0x1501,				// GL_AND
				AndInverted = 0x1504,				// GL_AND_INVERTED
				AndReverse = 0x1502,				// GL_AND_REVERSE
				AnySamplesPassed = 0x8C2F,				// GL_ANY_SAMPLES_PASSED
				AnySamplesPassedConservative = 0x8D6A,				// GL_ANY_SAMPLES_PASSED_CONSERVATIVE
				ArraySize = 0x92FB,				// GL_ARRAY_SIZE
				ArrayStride = 0x92FE,				// GL_ARRAY_STRIDE
				AttachedShaders = 0x8B85,				// GL_ATTACHED_SHADERS
				AutoGenerateMipmap = 0x8295,				// GL_AUTO_GENERATE_MIPMAP
				AutoNormal = 0x0D80,				// GL_AUTO_NORMAL
				Aux0 = 0x0409,				// GL_AUX0
				Aux1 = 0x040A,				// GL_AUX1
				Aux2 = 0x040B,				// GL_AUX2
				Aux3 = 0x040C,				// GL_AUX3
				AuxBuffers = 0x0C00,				// GL_AUX_BUFFERS
				Back = 0x0405,				// GL_BACK
				BackLeft = 0x0402,				// GL_BACK_LEFT
				BackRight = 0x0403,				// GL_BACK_RIGHT
				Bgr = 0x80E0,				// GL_BGR
				BgrInteger = 0x8D9A,				// GL_BGR_INTEGER
				Bgra = 0x80E1,				// GL_BGRA
				BgraInteger = 0x8D9B,				// GL_BGRA_INTEGER
				Bitmap = 0x1A00,				// GL_BITMAP
				BitmapToken = 0x0704,				// GL_BITMAP_TOKEN
				Blend = 0x0BE2,				// GL_BLEND
				BlendDst = 0x0BE0,				// GL_BLEND_DST
				BlendDstAlpha = 0x80CA,				// GL_BLEND_DST_ALPHA
				BlendDstRgb = 0x80C8,				// GL_BLEND_DST_RGB
				BlendEquation = 0x8009,				// GL_BLEND_EQUATION
				BlendEquationAlpha = 0x883D,				// GL_BLEND_EQUATION_ALPHA
				BlendEquationRgb = 0x8009,				// GL_BLEND_EQUATION_RGB
				BlendSrc = 0x0BE1,				// GL_BLEND_SRC
				BlendSrcAlpha = 0x80CB,				// GL_BLEND_SRC_ALPHA
				BlendSrcRgb = 0x80C9,				// GL_BLEND_SRC_RGB
				BlockIndex = 0x92FD,				// GL_BLOCK_INDEX
				Blue = 0x1905,				// GL_BLUE
				BlueBias = 0x0D1B,				// GL_BLUE_BIAS
				BlueBits = 0x0D54,				// GL_BLUE_BITS
				BlueInteger = 0x8D96,				// GL_BLUE_INTEGER
				BlueScale = 0x0D1A,				// GL_BLUE_SCALE
				Bool = 0x8B56,				// GL_BOOL
				BoolVec2 = 0x8B57,				// GL_BOOL_VEC2
				BoolVec3 = 0x8B58,				// GL_BOOL_VEC3
				BoolVec4 = 0x8B59,				// GL_BOOL_VEC4
				Byte = 0x1400,				// GL_BYTE
				C3fV3f = 0x2A24,				// GL_C3F_V3F
				C4fN3fV3f = 0x2A26,				// GL_C4F_N3F_V3F
				C4ubV2f = 0x2A22,				// GL_C4UB_V2F
				C4ubV3f = 0x2A23,				// GL_C4UB_V3F
				CaveatSupport = 0x82B8,				// GL_CAVEAT_SUPPORT
				Ccw = 0x0901,				// GL_CCW
				Clamp = 0x2900,				// GL_CLAMP
				ClampToBorder = 0x812D,				// GL_CLAMP_TO_BORDER
				ClampToEdge = 0x812F,				// GL_CLAMP_TO_EDGE
				Clear = 0x1500,				// GL_CLEAR
				ClientAllAttribBits = 0xFFFFFFFF,				// GL_CLIENT_ALL_ATTRIB_BITS
				ClientStorageBit = 0x0200,				// GL_CLIENT_STORAGE_BIT
				Coeff = 0x0A00,				// GL_COEFF
				Combine = 0x8570,				// GL_COMBINE
				CombineAlpha = 0x8572,				// GL_COMBINE_ALPHA
				CombineRgb = 0x8571,				// GL_COMBINE_RGB
				CommandBarrierBit = 0x00000040,				// GL_COMMAND_BARRIER_BIT
				CompatibleSubroutines = 0x8E4B,				// GL_COMPATIBLE_SUBROUTINES
				Compile = 0x1300,				// GL_COMPILE
				CompileAndExecute = 0x1301,				// GL_COMPILE_AND_EXECUTE
				CompileStatus = 0x8B81,				// GL_COMPILE_STATUS
				CompressedAlpha = 0x84E9,				// GL_COMPRESSED_ALPHA
				CompressedIntensity = 0x84EC,				// GL_COMPRESSED_INTENSITY
				CompressedLuminance = 0x84EA,				// GL_COMPRESSED_LUMINANCE
				CompressedLuminanceAlpha = 0x84EB,				// GL_COMPRESSED_LUMINANCE_ALPHA
				CompressedR11Eac = 0x9270,				// GL_COMPRESSED_R11_EAC
				CompressedRed = 0x8225,				// GL_COMPRESSED_RED
				CompressedRedRgtc1 = 0x8DBB,				// GL_COMPRESSED_RED_RGTC1
				CompressedRg = 0x8226,				// GL_COMPRESSED_RG
				CompressedRg11Eac = 0x9272,				// GL_COMPRESSED_RG11_EAC
				CompressedRgRgtc2 = 0x8DBD,				// GL_COMPRESSED_RG_RGTC2
				CompressedRgb = 0x84ED,				// GL_COMPRESSED_RGB
				CompressedRgb8Etc2 = 0x9274,				// GL_COMPRESSED_RGB8_ETC2
				CompressedRgb8PunchthroughAlpha1Etc2 = 0x9276,				// GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2
				CompressedRgbBptcSignedFloat = 0x8E8E,				// GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT
				CompressedRgbBptcUnsignedFloat = 0x8E8F,				// GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT
				CompressedRgba = 0x84EE,				// GL_COMPRESSED_RGBA
				CompressedRgba8Etc2Eac = 0x9278,				// GL_COMPRESSED_RGBA8_ETC2_EAC
				CompressedRgbaBptcUnorm = 0x8E8C,				// GL_COMPRESSED_RGBA_BPTC_UNORM
				CompressedSignedR11Eac = 0x9271,				// GL_COMPRESSED_SIGNED_R11_EAC
				CompressedSignedRedRgtc1 = 0x8DBC,				// GL_COMPRESSED_SIGNED_RED_RGTC1
				CompressedSignedRg11Eac = 0x9273,				// GL_COMPRESSED_SIGNED_RG11_EAC
				CompressedSignedRgRgtc2 = 0x8DBE,				// GL_COMPRESSED_SIGNED_RG_RGTC2
				CompressedSluminance = 0x8C4A,				// GL_COMPRESSED_SLUMINANCE
				CompressedSluminanceAlpha = 0x8C4B,				// GL_COMPRESSED_SLUMINANCE_ALPHA
				CompressedSrgb = 0x8C48,				// GL_COMPRESSED_SRGB
				CompressedSrgb8Alpha8Etc2Eac = 0x9279,				// GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC
				CompressedSrgb8Etc2 = 0x9275,				// GL_COMPRESSED_SRGB8_ETC2
				CompressedSrgb8PunchthroughAlpha1Etc2 = 0x9277,				// GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2
				CompressedSrgbAlpha = 0x8C49,				// GL_COMPRESSED_SRGB_ALPHA
				CompressedSrgbAlphaBptcUnorm = 0x8E8D,				// GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM
				ComputeSubroutine = 0x92ED,				// GL_COMPUTE_SUBROUTINE
				ComputeWorkGroupSize = 0x8267,				// GL_COMPUTE_WORK_GROUP_SIZE
				ConditionSatisfied = 0x911C,				// GL_CONDITION_SATISFIED
				Constant = 0x8576,				// GL_CONSTANT
				ConstantAlpha = 0x8003,				// GL_CONSTANT_ALPHA
				ConstantAttenuation = 0x1207,				// GL_CONSTANT_ATTENUATION
				CoordReplace = 0x8862,				// GL_COORD_REPLACE
				Copy = 0x1503,				// GL_COPY
				CopyInverted = 0x150C,				// GL_COPY_INVERTED
				CullFace = 0x0B44,				// GL_CULL_FACE
				CullFaceMode = 0x0B45,				// GL_CULL_FACE_MODE
				Cw = 0x0900,				// GL_CW
				DebugCallbackFunction = 0x8244,				// GL_DEBUG_CALLBACK_FUNCTION
				DebugCallbackUserParam = 0x8245,				// GL_DEBUG_CALLBACK_USER_PARAM
				DebugLoggedMessages = 0x9145,				// GL_DEBUG_LOGGED_MESSAGES
				DebugNextLoggedMessageLength = 0x8243,				// GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH
				DebugOutput = 0x92E0,				// GL_DEBUG_OUTPUT
				DebugOutputSynchronous = 0x8242,				// GL_DEBUG_OUTPUT_SYNCHRONOUS
				DebugSeverityHigh = 0x9146,				// GL_DEBUG_SEVERITY_HIGH
				DebugSeverityLow = 0x9148,				// GL_DEBUG_SEVERITY_LOW
				DebugSeverityMedium = 0x9147,				// GL_DEBUG_SEVERITY_MEDIUM
				DebugSeverityNotification = 0x826B,				// GL_DEBUG_SEVERITY_NOTIFICATION
				DebugSourceApi = 0x8246,				// GL_DEBUG_SOURCE_API
				DebugSourceApplication = 0x824A,				// GL_DEBUG_SOURCE_APPLICATION
				DebugSourceOther = 0x824B,				// GL_DEBUG_SOURCE_OTHER
				DebugSourceThirdParty = 0x8249,				// GL_DEBUG_SOURCE_THIRD_PARTY
				DebugSourceWindowSystem = 0x8247,				// GL_DEBUG_SOURCE_WINDOW_SYSTEM
				DebugTypeDeprecatedBehavior = 0x824D,				// GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR
				DebugTypeError = 0x824C,				// GL_DEBUG_TYPE_ERROR
				DebugTypeMarker = 0x8268,				// GL_DEBUG_TYPE_MARKER
				DebugTypeOther = 0x8251,				// GL_DEBUG_TYPE_OTHER
				DebugTypePerformance = 0x8250,				// GL_DEBUG_TYPE_PERFORMANCE
				DebugTypePopGroup = 0x826A,				// GL_DEBUG_TYPE_POP_GROUP
				DebugTypePortability = 0x824F,				// GL_DEBUG_TYPE_PORTABILITY
				DebugTypePushGroup = 0x8269,				// GL_DEBUG_TYPE_PUSH_GROUP
				DebugTypeUndefinedBehavior = 0x824E,				// GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR
				Decal = 0x2101,				// GL_DECAL
				Decr = 0x1E03,				// GL_DECR
				DecrWrap = 0x8508,				// GL_DECR_WRAP
				DeleteStatus = 0x8B80,				// GL_DELETE_STATUS
				Depth24Stencil8 = 0x88F0,				// GL_DEPTH24_STENCIL8
				Depth32fStencil8 = 0x8CAD,				// GL_DEPTH32F_STENCIL8
				Diffuse = 0x1201,				// GL_DIFFUSE
				DisplayList = 0x82E7,				// GL_DISPLAY_LIST
				Dither = 0x0BD0,				// GL_DITHER
				Domain = 0x0A02,				// GL_DOMAIN
				DontCare = 0x1100,				// GL_DONT_CARE
				Dot3Rgb = 0x86AE,				// GL_DOT3_RGB
				Dot3Rgba = 0x86AF,				// GL_DOT3_RGBA
				Double = 0x140A,				// GL_DOUBLE
				DoubleMat2 = 0x8F46,				// GL_DOUBLE_MAT2
				DoubleMat2x3 = 0x8F49,				// GL_DOUBLE_MAT2x3
				DoubleMat2x4 = 0x8F4A,				// GL_DOUBLE_MAT2x4
				DoubleMat3 = 0x8F47,				// GL_DOUBLE_MAT3
				DoubleMat3x2 = 0x8F4B,				// GL_DOUBLE_MAT3x2
				DoubleMat3x4 = 0x8F4C,				// GL_DOUBLE_MAT3x4
				DoubleMat4 = 0x8F48,				// GL_DOUBLE_MAT4
				DoubleMat4x2 = 0x8F4D,				// GL_DOUBLE_MAT4x2
				DoubleMat4x3 = 0x8F4E,				// GL_DOUBLE_MAT4x3
				DoubleVec2 = 0x8FFC,				// GL_DOUBLE_VEC2
				DoubleVec3 = 0x8FFD,				// GL_DOUBLE_VEC3
				DoubleVec4 = 0x8FFE,				// GL_DOUBLE_VEC4
				Doublebuffer = 0x0C32,				// GL_DOUBLEBUFFER
				DstAlpha = 0x0304,				// GL_DST_ALPHA
				DynamicCopy = 0x88EA,				// GL_DYNAMIC_COPY
				DynamicRead = 0x88E9,				// GL_DYNAMIC_READ
				DynamicStorageBit = 0x0100,				// GL_DYNAMIC_STORAGE_BIT
				EdgeFlag = 0x0B43,				// GL_EDGE_FLAG
				EdgeFlagArray = 0x8079,				// GL_EDGE_FLAG_ARRAY
				EdgeFlagArrayPointer = 0x8093,				// GL_EDGE_FLAG_ARRAY_POINTER
				EdgeFlagArrayStride = 0x808C,				// GL_EDGE_FLAG_ARRAY_STRIDE
				ElementArrayBarrierBit = 0x00000002,				// GL_ELEMENT_ARRAY_BARRIER_BIT
				Emission = 0x1600,				// GL_EMISSION
				EnableBit = 0x00002000,				// GL_ENABLE_BIT
				Equal = 0x0202,				// GL_EQUAL
				Equiv = 0x1509,				// GL_EQUIV
				EvalBit = 0x00010000,				// GL_EVAL_BIT
				Exp = 0x0800,				// GL_EXP
				Exp2 = 0x0801,				// GL_EXP2
				Extensions = 0x1F03,				// GL_EXTENSIONS
				EyeLinear = 0x2400,				// GL_EYE_LINEAR
				EyePlane = 0x2502,				// GL_EYE_PLANE
				False = 0,				// GL_FALSE
				Fastest = 0x1101,				// GL_FASTEST
				Feedback = 0x1C01,				// GL_FEEDBACK
				Fill = 0x1B02,				// GL_FILL
				Filter = 0x829A,				// GL_FILTER
				Fixed = 0x140C,				// GL_FIXED
				FixedOnly = 0x891D,				// GL_FIXED_ONLY
				Flat = 0x1D00,				// GL_FLAT
				Float = 0x1406,				// GL_FLOAT
				FloatMat2 = 0x8B5A,				// GL_FLOAT_MAT2
				FloatMat2x3 = 0x8B65,				// GL_FLOAT_MAT2x3
				FloatMat2x4 = 0x8B66,				// GL_FLOAT_MAT2x4
				FloatMat3 = 0x8B5B,				// GL_FLOAT_MAT3
				FloatMat3x2 = 0x8B67,				// GL_FLOAT_MAT3x2
				FloatMat3x4 = 0x8B68,				// GL_FLOAT_MAT3x4
				FloatMat4 = 0x8B5C,				// GL_FLOAT_MAT4
				FloatMat4x2 = 0x8B69,				// GL_FLOAT_MAT4x2
				FloatMat4x3 = 0x8B6A,				// GL_FLOAT_MAT4x3
				FloatVec2 = 0x8B50,				// GL_FLOAT_VEC2
				FloatVec3 = 0x8B51,				// GL_FLOAT_VEC3
				FloatVec4 = 0x8B52,				// GL_FLOAT_VEC4
				Float_32UnsignedInt_24_8Rev = 0x8DAD,				// GL_FLOAT_32_UNSIGNED_INT_24_8_REV
				FractionalEven = 0x8E7C,				// GL_FRACTIONAL_EVEN
				FractionalOdd = 0x8E7B,				// GL_FRACTIONAL_ODD
				FragmentInterpolationOffsetBits = 0x8E5D,				// GL_FRAGMENT_INTERPOLATION_OFFSET_BITS
				FragmentSubroutine = 0x92EC,				// GL_FRAGMENT_SUBROUTINE
				Front = 0x0404,				// GL_FRONT
				FrontAndBack = 0x0408,				// GL_FRONT_AND_BACK
				FrontFace = 0x0B46,				// GL_FRONT_FACE
				FrontLeft = 0x0400,				// GL_FRONT_LEFT
				FrontRight = 0x0401,				// GL_FRONT_RIGHT
				FullSupport = 0x82B7,				// GL_FULL_SUPPORT
				FuncAdd = 0x8006,				// GL_FUNC_ADD
				FuncReverseSubtract = 0x800B,				// GL_FUNC_REVERSE_SUBTRACT
				FuncSubtract = 0x800A,				// GL_FUNC_SUBTRACT
				GenerateMipmap = 0x8191,				// GL_GENERATE_MIPMAP
				GenerateMipmapHint = 0x8192,				// GL_GENERATE_MIPMAP_HINT
				GeometryInputType = 0x8917,				// GL_GEOMETRY_INPUT_TYPE
				GeometryOutputType = 0x8918,				// GL_GEOMETRY_OUTPUT_TYPE
				GeometrySubroutine = 0x92EB,				// GL_GEOMETRY_SUBROUTINE
				GeometryVerticesOut = 0x8916,				// GL_GEOMETRY_VERTICES_OUT
				Gequal = 0x0206,				// GL_GEQUAL
				Greater = 0x0204,				// GL_GREATER
				Green = 0x1904,				// GL_GREEN
				GreenBias = 0x0D19,				// GL_GREEN_BIAS
				GreenBits = 0x0D53,				// GL_GREEN_BITS
				GreenInteger = 0x8D95,				// GL_GREEN_INTEGER
				GreenScale = 0x0D18,				// GL_GREEN_SCALE
				HalfFloat = 0x140B,				// GL_HALF_FLOAT
				HighFloat = 0x8DF2,				// GL_HIGH_FLOAT
				HighInt = 0x8DF5,				// GL_HIGH_INT
				HintBit = 0x00008000,				// GL_HINT_BIT
				ImageBindingAccess = 0x8F3E,				// GL_IMAGE_BINDING_ACCESS
				ImageBindingFormat = 0x906E,				// GL_IMAGE_BINDING_FORMAT
				ImageBindingLayer = 0x8F3D,				// GL_IMAGE_BINDING_LAYER
				ImageBindingLayered = 0x8F3C,				// GL_IMAGE_BINDING_LAYERED
				ImageBindingLevel = 0x8F3B,				// GL_IMAGE_BINDING_LEVEL
				ImageBindingName = 0x8F3A,				// GL_IMAGE_BINDING_NAME
				ImageClass_10_10_10_2 = 0x82C3,				// GL_IMAGE_CLASS_10_10_10_2
				ImageClass_11_11_10 = 0x82C2,				// GL_IMAGE_CLASS_11_11_10
				ImageClass_1X_16 = 0x82BE,				// GL_IMAGE_CLASS_1_X_16
				ImageClass_1X_32 = 0x82BB,				// GL_IMAGE_CLASS_1_X_32
				ImageClass_1X_8 = 0x82C1,				// GL_IMAGE_CLASS_1_X_8
				ImageClass_2X_16 = 0x82BD,				// GL_IMAGE_CLASS_2_X_16
				ImageClass_2X_32 = 0x82BA,				// GL_IMAGE_CLASS_2_X_32
				ImageClass_2X_8 = 0x82C0,				// GL_IMAGE_CLASS_2_X_8
				ImageClass_4X_16 = 0x82BC,				// GL_IMAGE_CLASS_4_X_16
				ImageClass_4X_32 = 0x82B9,				// GL_IMAGE_CLASS_4_X_32
				ImageClass_4X_8 = 0x82BF,				// GL_IMAGE_CLASS_4_X_8
				ImageCompatibilityClass = 0x82A8,				// GL_IMAGE_COMPATIBILITY_CLASS
				ImageCube = 0x9050,				// GL_IMAGE_CUBE
				ImageCubeMapArray = 0x9054,				// GL_IMAGE_CUBE_MAP_ARRAY
				ImageFormatCompatibilityByClass = 0x90C9,				// GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS
				ImageFormatCompatibilityBySize = 0x90C8,				// GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE
				ImageFormatCompatibilityType = 0x90C7,				// GL_IMAGE_FORMAT_COMPATIBILITY_TYPE
				ImageTexelSize = 0x82A7,				// GL_IMAGE_TEXEL_SIZE
				Image_1D = 0x904C,				// GL_IMAGE_1D
				Image_1DArray = 0x9052,				// GL_IMAGE_1D_ARRAY
				Image_2D = 0x904D,				// GL_IMAGE_2D
				Image_2DArray = 0x9053,				// GL_IMAGE_2D_ARRAY
				Image_2DMultisample = 0x9055,				// GL_IMAGE_2D_MULTISAMPLE
				Image_2DMultisampleArray = 0x9056,				// GL_IMAGE_2D_MULTISAMPLE_ARRAY
				Image_2DRect = 0x904F,				// GL_IMAGE_2D_RECT
				Image_3D = 0x904E,				// GL_IMAGE_3D
				Incr = 0x1E02,				// GL_INCR
				IncrWrap = 0x8507,				// GL_INCR_WRAP
				Index = 0x8222,				// GL_INDEX
				IndexArray = 0x8077,				// GL_INDEX_ARRAY
				IndexArrayPointer = 0x8091,				// GL_INDEX_ARRAY_POINTER
				IndexArrayStride = 0x8086,				// GL_INDEX_ARRAY_STRIDE
				IndexArrayType = 0x8085,				// GL_INDEX_ARRAY_TYPE
				IndexBits = 0x0D51,				// GL_INDEX_BITS
				IndexClearValue = 0x0C20,				// GL_INDEX_CLEAR_VALUE
				IndexLogicOp = 0x0BF1,				// GL_INDEX_LOGIC_OP
				IndexMode = 0x0C30,				// GL_INDEX_MODE
				IndexOffset = 0x0D13,				// GL_INDEX_OFFSET
				IndexShift = 0x0D12,				// GL_INDEX_SHIFT
				IndexWritemask = 0x0C21,				// GL_INDEX_WRITEMASK
				InfoLogLength = 0x8B84,				// GL_INFO_LOG_LENGTH
				Int = 0x1404,				// GL_INT
				IntImageCube = 0x905B,				// GL_INT_IMAGE_CUBE
				IntImageCubeMapArray = 0x905F,				// GL_INT_IMAGE_CUBE_MAP_ARRAY
				IntImage_1D = 0x9057,				// GL_INT_IMAGE_1D
				IntImage_1DArray = 0x905D,				// GL_INT_IMAGE_1D_ARRAY
				IntImage_2D = 0x9058,				// GL_INT_IMAGE_2D
				IntImage_2DArray = 0x905E,				// GL_INT_IMAGE_2D_ARRAY
				IntImage_2DMultisample = 0x9060,				// GL_INT_IMAGE_2D_MULTISAMPLE
				IntImage_2DMultisampleArray = 0x9061,				// GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY
				IntImage_2DRect = 0x905A,				// GL_INT_IMAGE_2D_RECT
				IntImage_3D = 0x9059,				// GL_INT_IMAGE_3D
				IntVec2 = 0x8B53,				// GL_INT_VEC2
				IntVec3 = 0x8B54,				// GL_INT_VEC3
				IntVec4 = 0x8B55,				// GL_INT_VEC4
				Int_2_10_10_10Rev = 0x8D9F,				// GL_INT_2_10_10_10_REV
				Intensity = 0x8049,				// GL_INTENSITY
				Intensity12 = 0x804C,				// GL_INTENSITY12
				Intensity16 = 0x804D,				// GL_INTENSITY16
				Intensity4 = 0x804A,				// GL_INTENSITY4
				Intensity8 = 0x804B,				// GL_INTENSITY8
				InterleavedAttribs = 0x8C8C,				// GL_INTERLEAVED_ATTRIBS
				Interpolate = 0x8575,				// GL_INTERPOLATE
				Invert = 0x150A,				// GL_INVERT
				IsPerPatch = 0x92E7,				// GL_IS_PER_PATCH
				IsRowMajor = 0x9300,				// GL_IS_ROW_MAJOR
				Isolines = 0x8E7A,				// GL_ISOLINES
				Keep = 0x1E00,				// GL_KEEP
				Left = 0x0406,				// GL_LEFT
				Lequal = 0x0203,				// GL_LEQUAL
				Less = 0x0201,				// GL_LESS
				Light0 = 0x4000,				// GL_LIGHT0
				Light1 = 0x4001,				// GL_LIGHT1
				Light2 = 0x4002,				// GL_LIGHT2
				Light3 = 0x4003,				// GL_LIGHT3
				Light4 = 0x4004,				// GL_LIGHT4
				Light5 = 0x4005,				// GL_LIGHT5
				Light6 = 0x4006,				// GL_LIGHT6
				Light7 = 0x4007,				// GL_LIGHT7
				Lighting = 0x0B50,				// GL_LIGHTING
				LightingBit = 0x00000040,				// GL_LIGHTING_BIT
				Linear = 0x2601,				// GL_LINEAR
				LinearAttenuation = 0x1208,				// GL_LINEAR_ATTENUATION
				LinearMipmapLinear = 0x2703,				// GL_LINEAR_MIPMAP_LINEAR
				LinearMipmapNearest = 0x2701,				// GL_LINEAR_MIPMAP_NEAREST
				Lines = 0x0001,				// GL_LINES
				LinesAdjacency = 0x000A,				// GL_LINES_ADJACENCY
				LinkStatus = 0x8B82,				// GL_LINK_STATUS
				ListBase = 0x0B32,				// GL_LIST_BASE
				ListBit = 0x00020000,				// GL_LIST_BIT
				ListIndex = 0x0B33,				// GL_LIST_INDEX
				ListMode = 0x0B30,				// GL_LIST_MODE
				Load = 0x0101,				// GL_LOAD
				Location = 0x930E,				// GL_LOCATION
				LocationComponent = 0x934A,				// GL_LOCATION_COMPONENT
				LocationIndex = 0x930F,				// GL_LOCATION_INDEX
				LogicOp = 0x0BF1,				// GL_LOGIC_OP
				LogicOpMode = 0x0BF0,				// GL_LOGIC_OP_MODE
				LowFloat = 0x8DF0,				// GL_LOW_FLOAT
				LowInt = 0x8DF3,				// GL_LOW_INT
				LowerLeft = 0x8CA1,				// GL_LOWER_LEFT
				Luminance = 0x1909,				// GL_LUMINANCE
				Luminance12 = 0x8041,				// GL_LUMINANCE12
				Luminance12Alpha12 = 0x8047,				// GL_LUMINANCE12_ALPHA12
				Luminance12Alpha4 = 0x8046,				// GL_LUMINANCE12_ALPHA4
				Luminance16 = 0x8042,				// GL_LUMINANCE16
				Luminance16Alpha16 = 0x8048,				// GL_LUMINANCE16_ALPHA16
				Luminance4 = 0x803F,				// GL_LUMINANCE4
				Luminance4Alpha4 = 0x8043,				// GL_LUMINANCE4_ALPHA4
				Luminance6Alpha2 = 0x8044,				// GL_LUMINANCE6_ALPHA2
				Luminance8 = 0x8040,				// GL_LUMINANCE8
				Luminance8Alpha8 = 0x8045,				// GL_LUMINANCE8_ALPHA8
				LuminanceAlpha = 0x190A,				// GL_LUMINANCE_ALPHA
				ManualGenerateMipmap = 0x8294,				// GL_MANUAL_GENERATE_MIPMAP
				Map1GridDomain = 0x0DD0,				// GL_MAP1_GRID_DOMAIN
				Map1GridSegments = 0x0DD1,				// GL_MAP1_GRID_SEGMENTS
				Map1Index = 0x0D91,				// GL_MAP1_INDEX
				Map1Normal = 0x0D92,				// GL_MAP1_NORMAL
				Map2GridDomain = 0x0DD2,				// GL_MAP2_GRID_DOMAIN
				Map2GridSegments = 0x0DD3,				// GL_MAP2_GRID_SEGMENTS
				Map2Index = 0x0DB1,				// GL_MAP2_INDEX
				Map2Normal = 0x0DB2,				// GL_MAP2_NORMAL
				MapCoherentBit = 0x0080,				// GL_MAP_COHERENT_BIT
				MapFlushExplicitBit = 0x0010,				// GL_MAP_FLUSH_EXPLICIT_BIT
				MapInvalidateRangeBit = 0x0004,				// GL_MAP_INVALIDATE_RANGE_BIT
				MapPersistentBit = 0x0040,				// GL_MAP_PERSISTENT_BIT
				MapReadBit = 0x0001,				// GL_MAP_READ_BIT
				MapUnsynchronizedBit = 0x0020,				// GL_MAP_UNSYNCHRONIZED_BIT
				MapWriteBit = 0x0002,				// GL_MAP_WRITE_BIT
				MatrixMode = 0x0BA0,				// GL_MATRIX_MODE
				MatrixStride = 0x92FF,				// GL_MATRIX_STRIDE
				MediumFloat = 0x8DF1,				// GL_MEDIUM_FLOAT
				MediumInt = 0x8DF4,				// GL_MEDIUM_INT
				Min = 0x8007,				// GL_MIN
				MinFragmentInterpolationOffset = 0x8E5B,				// GL_MIN_FRAGMENT_INTERPOLATION_OFFSET
				Mipmap = 0x8293,				// GL_MIPMAP
				MirrorClampToEdge = 0x8743,				// GL_MIRROR_CLAMP_TO_EDGE
				MirroredRepeat = 0x8370,				// GL_MIRRORED_REPEAT
				Modelview = 0x1700,				// GL_MODELVIEW
				ModelviewMatrix = 0x0BA6,				// GL_MODELVIEW_MATRIX
				Modulate = 0x2100,				// GL_MODULATE
				Mult = 0x0103,				// GL_MULT
				Multisample = 0x809D,				// GL_MULTISAMPLE
				MultisampleBit = 0x20000000,				// GL_MULTISAMPLE_BIT
				N3fV3f = 0x2A25,				// GL_N3F_V3F
				NameLength = 0x92F9,				// GL_NAME_LENGTH
				Nand = 0x150E,				// GL_NAND
				Nearest = 0x2600,				// GL_NEAREST
				NearestMipmapLinear = 0x2702,				// GL_NEAREST_MIPMAP_LINEAR
				NearestMipmapNearest = 0x2700,				// GL_NEAREST_MIPMAP_NEAREST
				NegativeOneToOne = 0x935E,				// GL_NEGATIVE_ONE_TO_ONE
				Never = 0x0200,				// GL_NEVER
				Nicest = 0x1102,				// GL_NICEST
				NoError = 0,				// GL_NO_ERROR
				NoResetNotification = 0x8261,				// GL_NO_RESET_NOTIFICATION
				None = 0,				// GL_NONE
				Noop = 0x1505,				// GL_NOOP
				Nor = 0x1508,				// GL_NOR
				NormalArray = 0x8075,				// GL_NORMAL_ARRAY
				NormalArrayPointer = 0x808F,				// GL_NORMAL_ARRAY_POINTER
				NormalArrayStride = 0x807F,				// GL_NORMAL_ARRAY_STRIDE
				NormalArrayType = 0x807E,				// GL_NORMAL_ARRAY_TYPE
				NormalMap = 0x8511,				// GL_NORMAL_MAP
				Normalize = 0x0BA1,				// GL_NORMALIZE
				Notequal = 0x0205,				// GL_NOTEQUAL
				NumActiveVariables = 0x9304,				// GL_NUM_ACTIVE_VARIABLES
				NumCompatibleSubroutines = 0x8E4A,				// GL_NUM_COMPATIBLE_SUBROUTINES
				NumExtensions = 0x821D,				// GL_NUM_EXTENSIONS
				NumShadingLanguageVersions = 0x82E9,				// GL_NUM_SHADING_LANGUAGE_VERSIONS
				NumSpirVExtensions = 0x9554,				// GL_NUM_SPIR_V_EXTENSIONS
				ObjectLinear = 0x2401,				// GL_OBJECT_LINEAR
				ObjectPlane = 0x2501,				// GL_OBJECT_PLANE
				ObjectType = 0x9112,				// GL_OBJECT_TYPE
				Offset = 0x92FC,				// GL_OFFSET
				One = 1,				// GL_ONE
				OneMinusConstantAlpha = 0x8004,				// GL_ONE_MINUS_CONSTANT_ALPHA
				OneMinusDstAlpha = 0x0305,				// GL_ONE_MINUS_DST_ALPHA
				OneMinusSrc1Alpha = 0x88FB,				// GL_ONE_MINUS_SRC1_ALPHA
				OneMinusSrcAlpha = 0x0303,				// GL_ONE_MINUS_SRC_ALPHA
				Operand0Alpha = 0x8598,				// GL_OPERAND0_ALPHA
				Operand0Rgb = 0x8590,				// GL_OPERAND0_RGB
				Operand1Alpha = 0x8599,				// GL_OPERAND1_ALPHA
				Operand1Rgb = 0x8591,				// GL_OPERAND1_RGB
				Operand2Alpha = 0x859A,				// GL_OPERAND2_ALPHA
				Operand2Rgb = 0x8592,				// GL_OPERAND2_RGB
				Or = 0x1507,				// GL_OR
				OrInverted = 0x150D,				// GL_OR_INVERTED
				OrReverse = 0x150B,				// GL_OR_REVERSE
				Order = 0x0A01,				// GL_ORDER
				OutOfMemory = 0x0505,				// GL_OUT_OF_MEMORY
				PassThroughToken = 0x0700,				// GL_PASS_THROUGH_TOKEN
				PatchDefaultInnerLevel = 0x8E73,				// GL_PATCH_DEFAULT_INNER_LEVEL
				PatchDefaultOuterLevel = 0x8E74,				// GL_PATCH_DEFAULT_OUTER_LEVEL
				PatchVertices = 0x8E72,				// GL_PATCH_VERTICES
				Patches = 0x000E,				// GL_PATCHES
				PerspectiveCorrectionHint = 0x0C50,				// GL_PERSPECTIVE_CORRECTION_HINT
				Points = 0x0000,				// GL_POINTS
				Position = 0x1203,				// GL_POSITION
				Previous = 0x8578,				// GL_PREVIOUS
				PrimitiveRestart = 0x8F9D,				// GL_PRIMITIVE_RESTART
				PrimitiveRestartFixedIndex = 0x8D69,				// GL_PRIMITIVE_RESTART_FIXED_INDEX
				PrimitiveRestartForPatchesSupported = 0x8221,				// GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED
				PrimitiveRestartIndex = 0x8F9E,				// GL_PRIMITIVE_RESTART_INDEX
				Projection = 0x1701,				// GL_PROJECTION
				ProjectionMatrix = 0x0BA7,				// GL_PROJECTION_MATRIX
				Q = 0x2003,				// GL_Q
				QuadStrip = 0x0008,				// GL_QUAD_STRIP
				QuadraticAttenuation = 0x1209,				// GL_QUADRATIC_ATTENUATION
				Quads = 0x0007,				// GL_QUADS
				R = 0x2002,				// GL_R
				R11fG11fB10f = 0x8C3A,				// GL_R11F_G11F_B10F
				R16 = 0x822A,				// GL_R16
				R16Snorm = 0x8F98,				// GL_R16_SNORM
				R16f = 0x822D,				// GL_R16F
				R16i = 0x8233,				// GL_R16I
				R16ui = 0x8234,				// GL_R16UI
				R32f = 0x822E,				// GL_R32F
				R32i = 0x8235,				// GL_R32I
				R32ui = 0x8236,				// GL_R32UI
				R3G3B2 = 0x2A10,				// GL_R3_G3_B2
				R8 = 0x8229,				// GL_R8
				R8Snorm = 0x8F94,				// GL_R8_SNORM
				R8i = 0x8231,				// GL_R8I
				R8ui = 0x8232,				// GL_R8UI
				RasterizerDiscard = 0x8C89,				// GL_RASTERIZER_DISCARD
				ReadOnly = 0x88B8,				// GL_READ_ONLY
				ReadPixels = 0x828C,				// GL_READ_PIXELS
				ReadPixelsFormat = 0x828D,				// GL_READ_PIXELS_FORMAT
				ReadPixelsType = 0x828E,				// GL_READ_PIXELS_TYPE
				ReadWrite = 0x88BA,				// GL_READ_WRITE
				Red = 0x1903,				// GL_RED
				RedBias = 0x0D15,				// GL_RED_BIAS
				RedBits = 0x0D52,				// GL_RED_BITS
				RedInteger = 0x8D94,				// GL_RED_INTEGER
				RedScale = 0x0D14,				// GL_RED_SCALE
				ReflectionMap = 0x8512,				// GL_REFLECTION_MAP
				Render = 0x1C00,				// GL_RENDER
				RenderMode = 0x0C40,				// GL_RENDER_MODE
				Renderer = 0x1F01,				// GL_RENDERER
				Repeat = 0x2901,				// GL_REPEAT
				Replace = 0x1E01,				// GL_REPLACE
				RescaleNormal = 0x803A,				// GL_RESCALE_NORMAL
				ResetNotificationStrategy = 0x8256,				// GL_RESET_NOTIFICATION_STRATEGY
				Return = 0x0102,				// GL_RETURN
				Rg = 0x8227,				// GL_RG
				Rg16 = 0x822C,				// GL_RG16
				Rg16Snorm = 0x8F99,				// GL_RG16_SNORM
				Rg16f = 0x822F,				// GL_RG16F
				Rg16i = 0x8239,				// GL_RG16I
				Rg16ui = 0x823A,				// GL_RG16UI
				Rg32f = 0x8230,				// GL_RG32F
				Rg32i = 0x823B,				// GL_RG32I
				Rg32ui = 0x823C,				// GL_RG32UI
				Rg8 = 0x822B,				// GL_RG8
				Rg8Snorm = 0x8F95,				// GL_RG8_SNORM
				Rg8i = 0x8237,				// GL_RG8I
				Rg8ui = 0x8238,				// GL_RG8UI
				RgInteger = 0x8228,				// GL_RG_INTEGER
				Rgb = 0x1907,				// GL_RGB
				Rgb10 = 0x8052,				// GL_RGB10
				Rgb10A2 = 0x8059,				// GL_RGB10_A2
				Rgb10A2ui = 0x906F,				// GL_RGB10_A2UI
				Rgb12 = 0x8053,				// GL_RGB12
				Rgb16 = 0x8054,				// GL_RGB16
				Rgb16Snorm = 0x8F9A,				// GL_RGB16_SNORM
				Rgb16f = 0x881B,				// GL_RGB16F
				Rgb16i = 0x8D89,				// GL_RGB16I
				Rgb16ui = 0x8D77,				// GL_RGB16UI
				Rgb32f = 0x8815,				// GL_RGB32F
				Rgb32i = 0x8D83,				// GL_RGB32I
				Rgb32ui = 0x8D71,				// GL_RGB32UI
				Rgb4 = 0x804F,				// GL_RGB4
				Rgb5 = 0x8050,				// GL_RGB5
				Rgb565 = 0x8D62,				// GL_RGB565
				Rgb5A1 = 0x8057,				// GL_RGB5_A1
				Rgb8 = 0x8051,				// GL_RGB8
				Rgb8Snorm = 0x8F96,				// GL_RGB8_SNORM
				Rgb8i = 0x8D8F,				// GL_RGB8I
				Rgb8ui = 0x8D7D,				// GL_RGB8UI
				Rgb9E5 = 0x8C3D,				// GL_RGB9_E5
				RgbInteger = 0x8D98,				// GL_RGB_INTEGER
				RgbScale = 0x8573,				// GL_RGB_SCALE
				Rgba = 0x1908,				// GL_RGBA
				Rgba12 = 0x805A,				// GL_RGBA12
				Rgba16 = 0x805B,				// GL_RGBA16
				Rgba16Snorm = 0x8F9B,				// GL_RGBA16_SNORM
				Rgba16f = 0x881A,				// GL_RGBA16F
				Rgba16i = 0x8D88,				// GL_RGBA16I
				Rgba16ui = 0x8D76,				// GL_RGBA16UI
				Rgba2 = 0x8055,				// GL_RGBA2
				Rgba32f = 0x8814,				// GL_RGBA32F
				Rgba32i = 0x8D82,				// GL_RGBA32I
				Rgba32ui = 0x8D70,				// GL_RGBA32UI
				Rgba4 = 0x8056,				// GL_RGBA4
				Rgba8 = 0x8058,				// GL_RGBA8
				Rgba8Snorm = 0x8F97,				// GL_RGBA8_SNORM
				Rgba8i = 0x8D8E,				// GL_RGBA8I
				Rgba8ui = 0x8D7C,				// GL_RGBA8UI
				RgbaInteger = 0x8D99,				// GL_RGBA_INTEGER
				RgbaMode = 0x0C31,				// GL_RGBA_MODE
				Right = 0x0407,				// GL_RIGHT
				S = 0x2000,				// GL_S
				Samples = 0x80A9,				// GL_SAMPLES
				SamplesPassed = 0x8914,				// GL_SAMPLES_PASSED
				ScissorBit = 0x00080000,				// GL_SCISSOR_BIT
				ScissorBox = 0x0C10,				// GL_SCISSOR_BOX
				ScissorTest = 0x0C11,				// GL_SCISSOR_TEST
				Select = 0x1C02,				// GL_SELECT
				SeparateAttribs = 0x8C8D,				// GL_SEPARATE_ATTRIBS
				Set = 0x150F,				// GL_SET
				Shininess = 0x1601,				// GL_SHININESS
				Short = 0x1402,				// GL_SHORT
				Signaled = 0x9119,				// GL_SIGNALED
				SignedNormalized = 0x8F9C,				// GL_SIGNED_NORMALIZED
				Sluminance = 0x8C46,				// GL_SLUMINANCE
				Sluminance8 = 0x8C47,				// GL_SLUMINANCE8
				Sluminance8Alpha8 = 0x8C45,				// GL_SLUMINANCE8_ALPHA8
				SluminanceAlpha = 0x8C44,				// GL_SLUMINANCE_ALPHA
				Smooth = 0x1D01,				// GL_SMOOTH
				Source0Alpha = 0x8588,				// GL_SOURCE0_ALPHA
				Source0Rgb = 0x8580,				// GL_SOURCE0_RGB
				Source1Alpha = 0x8589,				// GL_SOURCE1_ALPHA
				Source1Rgb = 0x8581,				// GL_SOURCE1_RGB
				Source2Alpha = 0x858A,				// GL_SOURCE2_ALPHA
				Source2Rgb = 0x8582,				// GL_SOURCE2_RGB
				Specular = 0x1202,				// GL_SPECULAR
				SphereMap = 0x2402,				// GL_SPHERE_MAP
				SpirVBinary = 0x9552,				// GL_SPIR_V_BINARY
				SpirVExtensions = 0x9553,				// GL_SPIR_V_EXTENSIONS
				SpotCutoff = 0x1206,				// GL_SPOT_CUTOFF
				SpotDirection = 0x1204,				// GL_SPOT_DIRECTION
				SpotExponent = 0x1205,				// GL_SPOT_EXPONENT
				Src0Alpha = 0x8588,				// GL_SRC0_ALPHA
				Src0Rgb = 0x8580,				// GL_SRC0_RGB
				Src1Alpha = 0x8589,				// GL_SRC1_ALPHA
				Src1Rgb = 0x8581,				// GL_SRC1_RGB
				Src2Alpha = 0x858A,				// GL_SRC2_ALPHA
				Src2Rgb = 0x8582,				// GL_SRC2_RGB
				SrcAlpha = 0x0302,				// GL_SRC_ALPHA
				SrcAlphaSaturate = 0x0308,				// GL_SRC_ALPHA_SATURATE
				Srgb = 0x8C40,				// GL_SRGB
				Srgb8 = 0x8C41,				// GL_SRGB8
				Srgb8Alpha8 = 0x8C43,				// GL_SRGB8_ALPHA8
				SrgbAlpha = 0x8C42,				// GL_SRGB_ALPHA
				SrgbRead = 0x8297,				// GL_SRGB_READ
				SrgbWrite = 0x8298,				// GL_SRGB_WRITE
				StackOverflow = 0x0503,				// GL_STACK_OVERFLOW
				StackUnderflow = 0x0504,				// GL_STACK_UNDERFLOW
				StaticCopy = 0x88E6,				// GL_STATIC_COPY
				StaticRead = 0x88E5,				// GL_STATIC_READ
				Stereo = 0x0C33,				// GL_STEREO
				StreamCopy = 0x88E2,				// GL_STREAM_COPY
				StreamRead = 0x88E1,				// GL_STREAM_READ
				SubpixelBits = 0x0D50,				// GL_SUBPIXEL_BITS
				Subtract = 0x84E7,				// GL_SUBTRACT
				SyncCondition = 0x9113,				// GL_SYNC_CONDITION
				SyncFence = 0x9116,				// GL_SYNC_FENCE
				SyncFlags = 0x9115,				// GL_SYNC_FLAGS
				SyncFlushCommandsBit = 0x00000001,				// GL_SYNC_FLUSH_COMMANDS_BIT
				SyncGpuCommandsComplete = 0x9117,				// GL_SYNC_GPU_COMMANDS_COMPLETE
				SyncStatus = 0x9114,				// GL_SYNC_STATUS
				T = 0x2001,				// GL_T
				T2fC3fV3f = 0x2A2A,				// GL_T2F_C3F_V3F
				T2fC4fN3fV3f = 0x2A2C,				// GL_T2F_C4F_N3F_V3F
				T2fC4ubV3f = 0x2A29,				// GL_T2F_C4UB_V3F
				T2fN3fV3f = 0x2A2B,				// GL_T2F_N3F_V3F
				T2fV3f = 0x2A27,				// GL_T2F_V3F
				T4fC4fN3fV4f = 0x2A2D,				// GL_T4F_C4F_N3F_V4F
				T4fV4f = 0x2A28,				// GL_T4F_V4F
				Texture0 = 0x84C0,				// GL_TEXTURE0
				Texture1 = 0x84C1,				// GL_TEXTURE1
				Texture10 = 0x84CA,				// GL_TEXTURE10
				Texture11 = 0x84CB,				// GL_TEXTURE11
				Texture12 = 0x84CC,				// GL_TEXTURE12
				Texture13 = 0x84CD,				// GL_TEXTURE13
				Texture14 = 0x84CE,				// GL_TEXTURE14
				Texture15 = 0x84CF,				// GL_TEXTURE15
				Texture16 = 0x84D0,				// GL_TEXTURE16
				Texture17 = 0x84D1,				// GL_TEXTURE17
				Texture18 = 0x84D2,				// GL_TEXTURE18
				Texture19 = 0x84D3,				// GL_TEXTURE19
				Texture2 = 0x84C2,				// GL_TEXTURE2
				Texture20 = 0x84D4,				// GL_TEXTURE20
				Texture21 = 0x84D5,				// GL_TEXTURE21
				Texture22 = 0x84D6,				// GL_TEXTURE22
				Texture23 = 0x84D7,				// GL_TEXTURE23
				Texture24 = 0x84D8,				// GL_TEXTURE24
				Texture25 = 0x84D9,				// GL_TEXTURE25
				Texture26 = 0x84DA,				// GL_TEXTURE26
				Texture27 = 0x84DB,				// GL_TEXTURE27
				Texture28 = 0x84DC,				// GL_TEXTURE28
				Texture29 = 0x84DD,				// GL_TEXTURE29
				Texture3 = 0x84C3,				// GL_TEXTURE3
				Texture30 = 0x84DE,				// GL_TEXTURE30
				Texture31 = 0x84DF,				// GL_TEXTURE31
				Texture4 = 0x84C4,				// GL_TEXTURE4
				Texture5 = 0x84C5,				// GL_TEXTURE5
				Texture6 = 0x84C6,				// GL_TEXTURE6
				Texture7 = 0x84C7,				// GL_TEXTURE7
				Texture8 = 0x84C8,				// GL_TEXTURE8
				Texture9 = 0x84C9,				// GL_TEXTURE9
				TimeElapsed = 0x88BF,				// GL_TIME_ELAPSED
				TimeoutExpired = 0x911B,				// GL_TIMEOUT_EXPIRED
				TimeoutIgnored = 0xFFFFFFFFFFFFFFFF,				// GL_TIMEOUT_IGNORED
				Timestamp = 0x8E28,				// GL_TIMESTAMP
				TopLevelArraySize = 0x930C,				// GL_TOP_LEVEL_ARRAY_SIZE
				TopLevelArrayStride = 0x930D,				// GL_TOP_LEVEL_ARRAY_STRIDE
				TransposeModelviewMatrix = 0x84E3,				// GL_TRANSPOSE_MODELVIEW_MATRIX
				TransposeProjectionMatrix = 0x84E4,				// GL_TRANSPOSE_PROJECTION_MATRIX
				TriangleFan = 0x0006,				// GL_TRIANGLE_FAN
				TriangleStrip = 0x0005,				// GL_TRIANGLE_STRIP
				TriangleStripAdjacency = 0x000D,				// GL_TRIANGLE_STRIP_ADJACENCY
				True = 1,				// GL_TRUE
				Type = 0x92FA,				// GL_TYPE
				Unsignaled = 0x9118,				// GL_UNSIGNALED
				UnsignedByte = 0x1401,				// GL_UNSIGNED_BYTE
				UnsignedByte_2_3_3Rev = 0x8362,				// GL_UNSIGNED_BYTE_2_3_3_REV
				UnsignedByte_3_3_2 = 0x8032,				// GL_UNSIGNED_BYTE_3_3_2
				UnsignedInt = 0x1405,				// GL_UNSIGNED_INT
				UnsignedIntImageCube = 0x9066,				// GL_UNSIGNED_INT_IMAGE_CUBE
				UnsignedIntImageCubeMapArray = 0x906A,				// GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY
				UnsignedIntImage_1D = 0x9062,				// GL_UNSIGNED_INT_IMAGE_1D
				UnsignedIntImage_1DArray = 0x9068,				// GL_UNSIGNED_INT_IMAGE_1D_ARRAY
				UnsignedIntImage_2D = 0x9063,				// GL_UNSIGNED_INT_IMAGE_2D
				UnsignedIntImage_2DArray = 0x9069,				// GL_UNSIGNED_INT_IMAGE_2D_ARRAY
				UnsignedIntImage_2DMultisample = 0x906B,				// GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE
				UnsignedIntImage_2DMultisampleArray = 0x906C,				// GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY
				UnsignedIntImage_2DRect = 0x9065,				// GL_UNSIGNED_INT_IMAGE_2D_RECT
				UnsignedIntImage_3D = 0x9064,				// GL_UNSIGNED_INT_IMAGE_3D
				UnsignedIntVec2 = 0x8DC6,				// GL_UNSIGNED_INT_VEC2
				UnsignedIntVec3 = 0x8DC7,				// GL_UNSIGNED_INT_VEC3
				UnsignedIntVec4 = 0x8DC8,				// GL_UNSIGNED_INT_VEC4
				UnsignedInt_10F_11F_11FRev = 0x8C3B,				// GL_UNSIGNED_INT_10F_11F_11F_REV
				UnsignedInt_10_10_10_2 = 0x8036,				// GL_UNSIGNED_INT_10_10_10_2
				UnsignedInt_24_8 = 0x84FA,				// GL_UNSIGNED_INT_24_8
				UnsignedInt_2_10_10_10Rev = 0x8368,				// GL_UNSIGNED_INT_2_10_10_10_REV
				UnsignedInt_5_9_9_9Rev = 0x8C3E,				// GL_UNSIGNED_INT_5_9_9_9_REV
				UnsignedInt_8_8_8_8 = 0x8035,				// GL_UNSIGNED_INT_8_8_8_8
				UnsignedInt_8_8_8_8Rev = 0x8367,				// GL_UNSIGNED_INT_8_8_8_8_REV
				UnsignedNormalized = 0x8C17,				// GL_UNSIGNED_NORMALIZED
				UnsignedShort = 0x1403,				// GL_UNSIGNED_SHORT
				UnsignedShort_1_5_5_5Rev = 0x8366,				// GL_UNSIGNED_SHORT_1_5_5_5_REV
				UnsignedShort_4_4_4_4 = 0x8033,				// GL_UNSIGNED_SHORT_4_4_4_4
				UnsignedShort_4_4_4_4Rev = 0x8365,				// GL_UNSIGNED_SHORT_4_4_4_4_REV
				UnsignedShort_5_5_5_1 = 0x8034,				// GL_UNSIGNED_SHORT_5_5_5_1
				UnsignedShort_5_6_5 = 0x8363,				// GL_UNSIGNED_SHORT_5_6_5
				UnsignedShort_5_6_5Rev = 0x8364,				// GL_UNSIGNED_SHORT_5_6_5_REV
				UpperLeft = 0x8CA2,				// GL_UPPER_LEFT
				V2f = 0x2A20,				// GL_V2F
				V3f = 0x2A21,				// GL_V3F
				ValidateStatus = 0x8B83,				// GL_VALIDATE_STATUS
				Vendor = 0x1F00,				// GL_VENDOR
				VerticesSubmitted = 0x82EE,				// GL_VERTICES_SUBMITTED
				Viewport = 0x0BA2,				// GL_VIEWPORT
				ViewportBit = 0x00000800,				// GL_VIEWPORT_BIT
				ViewportBoundsRange = 0x825D,				// GL_VIEWPORT_BOUNDS_RANGE
				ViewportSubpixelBits = 0x825C,				// GL_VIEWPORT_SUBPIXEL_BITS
				WaitFailed = 0x911D,				// GL_WAIT_FAILED
				WriteOnly = 0x88B9,				// GL_WRITE_ONLY
				Xor = 0x1506,				// GL_XOR
				Zero = 0,				// GL_ZERO
				ZeroToOne = 0x935F,				// GL_ZERO_TO_ONE
				_2Bytes = 0x1407,				// GL_2_BYTES
				_2D = 0x0600,				// GL_2D
				_3Bytes = 0x1408,				// GL_3_BYTES
				_3D = 0x0601,				// GL_3D
				_4Bytes = 0x1409,				// GL_4_BYTES
			} eOther;	// eOther
		}
	}
}