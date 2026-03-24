#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEBUGUTIL_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x174098D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEBUGUTIL_LOGERROR_OFFSET UNITYSDK_OFFSET(0x17409830)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEBUGUTIL_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x174096D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEBUGUTIL_LOG_OFFSET UNITYSDK_OFFSET(0x17409780)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEBUGUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x17409980)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DebugUtil_TypeDefinitionIndex = 29804;

	class DebugUtil : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEBUGUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void LogWarning(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEBUGUTIL_LOGWARNING_OFFSET))(msg);
		}

		static ::System::Void Log(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEBUGUTIL_LOG_OFFSET))(msg);
		}

		static ::System::Void LogError(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEBUGUTIL_LOGERROR_OFFSET))(msg);
		}

		static ::System::Void LogError_1(::System::String* msg, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEBUGUTIL_LOGERROR_1_OFFSET))(msg, context);
		}
	};
}
