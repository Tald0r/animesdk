#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_BOXCOLLIDER_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A754C00)
#define UNITYENGINE_BOXCOLLIDER_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1A754BB0)
#define UNITYENGINE_BOXCOLLIDER_GET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x1A754CB0)
#define UNITYENGINE_BOXCOLLIDER_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A754C80)
#define UNITYENGINE_BOXCOLLIDER_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A754C30)
#define UNITYENGINE_BOXCOLLIDER_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A754C20)
#define UNITYENGINE_BOXCOLLIDER_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1A754C10)
#define UNITYENGINE_BOXCOLLIDER_SET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x1A754D10)
#define UNITYENGINE_BOXCOLLIDER_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A754CA0)
#define UNITYENGINE_BOXCOLLIDER_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A754C90)
#define UNITYENGINE_BOXCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A754D40)

namespace UnityEngine
{
	inline static constexpr unsigned int BoxCollider_TypeDefinitionIndex = 7665;

	class BoxCollider : public ::UnityEngine::Collider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_CENTER_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_SIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_extents()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_EXTENTS_OFFSET))(this);
		}

		::System::Void set_extents(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_EXTENTS_OFFSET))(this, value);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_CENTER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_CENTER_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_SIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_SIZE_INJECTED_OFFSET))(this, value);
		}
	};
}
