#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::ZNet { class ZNetCameraSupportPlayableAsset; }
namespace UnityEngine::Timeline { class AnimationTrack; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK_CLASS_1_178185E3C04A1A5A_METHOD_1_3BCE9C8A7A8E5E9B_OFFSET UNITYSDK_OFFSET(0xA556830)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK_CLASS_1_178185E3C04A1A5A__CTOR_OFFSET UNITYSDK_OFFSET(0xA556820)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetCameraSupportTrack_Class_1_178185E3C04A1A5A_TypeDefinitionIndex = 47227;

	class ZNetCameraSupportTrack_Class_1_178185E3C04A1A5A : public ::System::Object
	{
	public:
		::MoleMole::Timeline::ZNet::ZNetCameraSupportPlayableAsset* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK_CLASS_1_178185E3C04A1A5A__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_3BCE9C8A7A8E5E9B(::UnityEngine::Timeline::AnimationTrack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::AnimationTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK_CLASS_1_178185E3C04A1A5A_METHOD_1_3BCE9C8A7A8E5E9B_OFFSET))(this, a1);
		}
	};
}
