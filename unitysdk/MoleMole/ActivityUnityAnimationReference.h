#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationClip; }

#define MOLEMOLE_ACTIVITYUNITYANIMATIONREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x6FA91A0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityUnityAnimationReference_TypeDefinitionIndex = 76100;

	class ActivityUnityAnimationReference : public ::System::Object
	{
	public:
		::UnityEngine::AnimationClip* animation; // 0x10
		::System::Single delay; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYUNITYANIMATIONREFERENCE__CTOR_OFFSET))(this);
		}
	};
}
