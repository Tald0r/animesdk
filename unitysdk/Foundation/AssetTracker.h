#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class WeakReference; }
namespace UnityEngine { class Object; }

#define FOUNDATION_ASSETTRACKER_CHECKALIVE_OFFSET UNITYSDK_OFFSET(0x1AA4B8B0)
#define FOUNDATION_ASSETTRACKER_COMPOSEASSETTACKER_OFFSET UNITYSDK_OFFSET(0x1AA4B830)
#define FOUNDATION_ASSETTRACKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA4BD10)
#define FOUNDATION_ASSETTRACKER_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AA4B810)
#define FOUNDATION_ASSETTRACKER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1AA4BCA0)
#define FOUNDATION_ASSETTRACKER_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AA4B820)
#define FOUNDATION_ASSETTRACKER_TAKEOUT_OFFSET UNITYSDK_OFFSET(0x1AA4BA40)
#define FOUNDATION_ASSETTRACKER_TRACK_OFFSET UNITYSDK_OFFSET(0x1AA4BB90)
#define FOUNDATION_ASSETTRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA4BE20)

namespace Foundation
{
	inline static constexpr unsigned int AssetTracker_TypeDefinitionIndex = 7829;

	class AssetTracker : public ::System::Object
	{
	public:
		::System::WeakReference* weakRef; // 0x10
		::UnityEngine::Object* strongRef; // 0x18
		::System::Single timeoutTick; // 0x20
		::System::Int32 _Timeout_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETTRACKER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Timeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETTRACKER_GET_TIMEOUT_OFFSET))(this);
		}

		::System::Void set_Timeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETTRACKER_SET_TIMEOUT_OFFSET))(this, value);
		}

		static ::Foundation::AssetTracker* ComposeAssetTacker(::Foundation::AssetTracker* tracker, ::System::Int32 timeout)
		{
			return ((::Foundation::AssetTracker*(*)(::Foundation::AssetTracker*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETTRACKER_COMPOSEASSETTACKER_OFFSET))(tracker, timeout);
		}

		::System::Boolean CheckAlive(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETTRACKER_CHECKALIVE_OFFSET))(this, deltaTime);
		}

		::UnityEngine::Object* Takeout()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETTRACKER_TAKEOUT_OFFSET))(this);
		}

		::System::Void Track(::UnityEngine::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETTRACKER_TRACK_OFFSET))(this, target);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETTRACKER_RELEASE_OFFSET))(this);
		}

		static ::System::Void Dispose(::Foundation::AssetTracker* target)
		{
			return ((::System::Void(*)(::Foundation::AssetTracker*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETTRACKER_DISPOSE_OFFSET))(target);
		}
	};
}
