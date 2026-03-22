#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/PlayableGraphAnimatorControllerSingleParameter.h"
#include "unitysdk/Struct_2_8B67601907B8CB80.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERFLOAT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0xA498CC0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0xA498D60)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAnimatorControllerFloat_TypeDefinitionIndex = 56704;

	class PlayableGraphAnimatorControllerFloat : public ::MoleMole::Photo::PlayableGraphAnimatorControllerSingleParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERFLOAT__CTOR_OFFSET))(this);
		}

		::Struct_2_8B67601907B8CB80 Instantiate(::UnityEngine::Animations::AnimatorControllerPlayable controller)
		{
			return ((::Struct_2_8B67601907B8CB80(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERFLOAT_INSTANTIATE_OFFSET))(this, controller);
		}
	};
}
