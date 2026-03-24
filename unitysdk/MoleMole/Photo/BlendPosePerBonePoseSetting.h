#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/BlendPosePerBoneBranchFilter.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class PlayableGraphFloatAttributeConfig; }

#define MOLEMOLE_PHOTO_BLENDPOSEPERBONEPOSESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xA7F3AE0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int BlendPosePerBonePoseSetting_TypeDefinitionIndex = 60908;

	class BlendPosePerBonePoseSetting : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::Photo::BlendPosePerBoneBranchFilter>* branchFilters; // 0x10
		::MoleMole::Photo::PlayableGraphFloatAttributeConfig* poseWeight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_BLENDPOSEPERBONEPOSESETTING__CTOR_OFFSET))(this);
		}
	};
}
