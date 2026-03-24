#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Types/FXPlayType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RICHTAP_COMMON_HAPTICDATAMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD8B5E0)
#define RICHTAP_COMMON_HAPTICDATAMODEL_NOTIFYPLAYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AD8BCB0)
#define RICHTAP_COMMON_HAPTICDATAMODEL_PLAYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1AD8BAE0)
#define RICHTAP_COMMON_HAPTICDATAMODEL_RELEASECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1AD8B640)
#define RICHTAP_COMMON_HAPTICDATAMODEL_STARTREALPLAY_OFFSET UNITYSDK_OFFSET(0x1AD8AB40)
#define RICHTAP_COMMON_HAPTICDATAMODEL_STARTVIRTUALPLAY_OFFSET UNITYSDK_OFFSET(0x1AD8B8F0)
#define RICHTAP_COMMON_HAPTICDATAMODEL_STOPREALPLAY_OFFSET UNITYSDK_OFFSET(0x1AD8A880)
#define RICHTAP_COMMON_HAPTICDATAMODEL_STOPVIRTUALPLAY_OFFSET UNITYSDK_OFFSET(0x1AD8B310)
#define RICHTAP_COMMON_HAPTICDATAMODEL_UPDATELOOPPARAMS_OFFSET UNITYSDK_OFFSET(0x1AD8BEF0)
#define RICHTAP_COMMON_HAPTICDATAMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD8BF00)

namespace RichTap::Common
{
	inline static constexpr unsigned int HapticDataModel_TypeDefinitionIndex = 35951;

	class HapticDataModel : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction_1<::System::Boolean>* VirtualPlayCompleted; // 0x10
		::System::String* name; // 0x18
		::UnityEngine::Events::UnityAction_1<::System::Boolean>* RealPlayCompleted; // 0x20
		::System::String* uuid; // 0x28
		::System::String* heData; // 0x30
		::System::String* identifier; // 0x38
		::System::Int32 startOffset; // 0x40
		::System::Int32 amplitude; // 0x44
		::System::Int64 startTime; // 0x48
		::System::Int32 duration; // 0x50
		::System::Int32 interval; // 0x54
		::System::Int32 playId; // 0x58
		::System::Int32 loop; // 0x5C
		::System::Int32 insertionIndex; // 0x60
		::System::Int32 priority; // 0x64
		::System::Int32 frequency; // 0x68
		::System::Int32 prebakeId; // 0x6C
		::RichTap::Types::FXPlayType type; // 0x70
		::System::Int32 currentLoopNum; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void StartRealPlay(::UnityEngine::Events::UnityAction_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_STARTREALPLAY_OFFSET))(this, callback);
		}

		::System::Void StartVirtualPlay(::UnityEngine::Events::UnityAction_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_STARTVIRTUALPLAY_OFFSET))(this, callback);
		}

		::System::Void NotifyPlayComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_NOTIFYPLAYCOMPLETE_OFFSET))(this);
		}

		::System::Void StopVirtualPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_STOPVIRTUALPLAY_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PlayCoroutine(::System::Single waitTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_PLAYCOROUTINE_OFFSET))(this, waitTime);
		}

		::System::Void ReleaseCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_RELEASECOROUTINE_OFFSET))(this);
		}

		::System::Void StopRealPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_STOPREALPLAY_OFFSET))(this);
		}

		::System::Void UpdateLoopParams(::System::Int32 newAmplitude, ::System::Int32 newInterval, ::System::Int32 newFrequency)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_UPDATELOOPPARAMS_OFFSET))(this, newAmplitude, newInterval, newFrequency);
		}
	};
}
