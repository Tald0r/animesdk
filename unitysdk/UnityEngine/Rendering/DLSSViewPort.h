#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/DLSSGQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/DLSSQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/ReflexMode.h"

#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMEGENMODE_OFFSET UNITYSDK_OFFSET(0x1A40B750)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMEGENNUM_OFFSET UNITYSDK_OFFSET(0x1A40B770)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMELIMITUS_OFFSET UNITYSDK_OFFSET(0x1A40B7B0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1A40B700)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1A40B730)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_REFLEXMODE_OFFSET UNITYSDK_OFFSET(0x1A40B790)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_TARGETRESOLUTIONX_OFFSET UNITYSDK_OFFSET(0x1A40B710)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_TARGETRESOLUTIONY_OFFSET UNITYSDK_OFFSET(0x1A40B720)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A40B810)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A40B820)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMEGENMODE_OFFSET UNITYSDK_OFFSET(0x1A40B760)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMEGENNUM_OFFSET UNITYSDK_OFFSET(0x1A40B780)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMELIMITUS_OFFSET UNITYSDK_OFFSET(0x1A40B7C0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1A40B740)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_REFLEXMODE_OFFSET UNITYSDK_OFFSET(0x1A40B7A0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A40B7D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DLSSViewPort_TypeDefinitionIndex = 6132;

	class DLSSViewPort : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT__CTOR_OFFSET))(this, width, height);
		}

		::System::UInt64 get_handle()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_HANDLE_OFFSET))(this);
		}

		::System::Int32 get_targetResolutionX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_TARGETRESOLUTIONX_OFFSET))(this);
		}

		::System::Int32 get_targetResolutionY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_TARGETRESOLUTIONY_OFFSET))(this);
		}

		::UnityEngine::Rendering::DLSSQualityMode get_mode()
		{
			return ((::UnityEngine::Rendering::DLSSQualityMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::Rendering::DLSSQualityMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSQualityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_MODE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::DLSSGQualityMode get_frameGenMode()
		{
			return ((::UnityEngine::Rendering::DLSSGQualityMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMEGENMODE_OFFSET))(this);
		}

		::System::Void set_frameGenMode(::UnityEngine::Rendering::DLSSGQualityMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSGQualityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMEGENMODE_OFFSET))(this, value);
		}

		::System::Int32 get_frameGenNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMEGENNUM_OFFSET))(this);
		}

		::System::Void set_frameGenNum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMEGENNUM_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::ReflexMode get_reflexMode()
		{
			return ((::UnityEngine::Rendering::ReflexMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_REFLEXMODE_OFFSET))(this);
		}

		::System::Void set_reflexMode(::UnityEngine::Rendering::ReflexMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflexMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_REFLEXMODE_OFFSET))(this, value);
		}

		::System::Int32 get_frameLimitUs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMELIMITUS_OFFSET))(this);
		}

		::System::Void set_frameLimitUs(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMELIMITUS_OFFSET))(this, value);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_RELEASE_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::Rendering::DLSSViewPort* self, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::DLSSViewPort*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_INTERNAL_CREATE_OFFSET))(self, width, height);
		}
	};
}
