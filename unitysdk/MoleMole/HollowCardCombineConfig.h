#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_HOLLOWCARDCOMBINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F5DC0)

namespace MoleMole
{
	inline static constexpr unsigned int HollowCardCombineConfig_TypeDefinitionIndex = 49055;

	class HollowCardCombineConfig : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* RotateCurve; // 0x10
		::System::String* CardEffectKey; // 0x18
		::System::String* UIFadeOut; // 0x20
		::System::String* MainUIFadeIn; // 0x28
		::UnityEngine::AnimationCurve* CenterCurve; // 0x30
		::System::String* EndEffectKey; // 0x38
		::UnityEngine::AnimationCurve* CloseCurve; // 0x40
		::System::String* SmallCardEffectKey; // 0x48
		::System::String* StartEffectKey; // 0x50
		::UnityEngine::AnimationCurve* RelicUpgradeCardLeaveCurve; // 0x58
		::System::String* StartEffectKeyDirect; // 0x60
		::System::String* SmallCardBGEffectKey; // 0x68
		::System::Single DelayInterval; // 0x70
		::System::Single SmallCardEffectDelay; // 0x74
		::System::Single DelayInterval2; // 0x78
		::System::Single SmallCardBGEffectDelay2; // 0x7C
		::System::Single CloseTime; // 0x80
		::System::Single EffectShowDelay; // 0x84
		::System::Single SmallCardY; // 0x88
		::System::Single TargetCardY; // 0x8C
		::System::Single SmallCardBGEffectDelay; // 0x90
		::System::Single DelayExitTimeAfterRotate; // 0x94
		::System::Single ShowCombineCardDelay; // 0x98
		::System::Single RelicUpgradeCardLeaveInterval; // 0x9C
		::UnityEngine::Vector3 CombineCardRotate; // 0xA0
		::System::Single ShowCombineDelay; // 0xAC
		::System::Single RelicUpgradeCardLeaveTime; // 0xB0
		::System::Single CenterTime2; // 0xB4
		::System::Int32 SoundID; // 0xB8
		::System::Single Fov; // 0xBC
		::System::Single MainUIFadeInDelay; // 0xC0
		::System::Single SmallCardEffectDelay2; // 0xC4
		::System::Single CombineCardRotateTime; // 0xC8
		::System::Single CenterTime; // 0xCC
		::System::Single UIFadeOutDelay; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCARDCOMBINECONFIG__CTOR_OFFSET))(this);
		}
	};
}
