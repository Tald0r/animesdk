#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_FAILEDTOLOADSCRIPTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19DD6160)

namespace UnityEngine
{
	inline static constexpr unsigned int FailedToLoadScriptObject_TypeDefinitionIndex = 5340;

	class FailedToLoadScriptObject : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FAILEDTOLOADSCRIPTOBJECT__CTOR_OFFSET))(this);
		}
	};
}
