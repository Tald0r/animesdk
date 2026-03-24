#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_HOLLOWCARDCOMBINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA7DFBF0)

namespace MoleMole
{
	inline static constexpr unsigned int HollowCardCombineConfig_TypeDefinitionIndex = 75651;

	class HollowCardCombineConfig : public ::System::Object
	{
	public:
		::System::String* EndEffectKey; // 0x10
		::System::String* SmallCardEffectKey; // 0x18
		::System::String* MainUIFadeIn; // 0x20
		::System::String* SmallCardBGEffectKey; // 0x28
		::UnityEngine::AnimationCurve* RotateCurve; // 0x30
		::UnityEngine::AnimationCurve* CenterCurve; // 0x38
		::UnityEngine::AnimationCurve* CloseCurve; // 0x40
		::System::String* StartEffectKey; // 0x48
		::System::String* StartEffectKeyDirect; // 0x50
		::System::String* UIFadeOut; // 0x58
		::UnityEngine::AnimationCurve* RelicUpgradeCardLeaveCurve; // 0x60
		::System::String* CardEffectKey; // 0x68
		::System::Single SmallCardEffectDelay2; // 0x70
		::System::Single RelicUpgradeCardLeaveInterval; // 0x74
		::System::Single SmallCardY; // 0x78
		::UnityEngine::Vector3 CombineCardRotate; // 0x7C
		::System::Single DelayExitTimeAfterRotate; // 0x88
		::System::Single MainUIFadeInDelay; // 0x8C
		::System::Single ShowCombineCardDelay; // 0x90
		::System::Single CenterTime; // 0x94
		::System::Single CenterTime2; // 0x98
		::System::Single SmallCardBGEffectDelay; // 0x9C
		::System::Single DelayInterval; // 0xA0
		::System::Single ShowCombineDelay; // 0xA4
		::System::Single CombineCardRotateTime; // 0xA8
		::System::Single TargetCardY; // 0xAC
		::System::Single CloseTime; // 0xB0
		::System::Single DelayInterval2; // 0xB4
		::System::Single EffectShowDelay; // 0xB8
		::System::Single SmallCardEffectDelay; // 0xBC
		::System::Single SmallCardBGEffectDelay2; // 0xC0
		::System::Single Fov; // 0xC4
		::System::Single RelicUpgradeCardLeaveTime; // 0xC8
		::System::Single UIFadeOutDelay; // 0xCC
		::System::Int32 SoundID; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCARDCOMBINECONFIG__CTOR_OFFSET))(this);
		}
	};
}
