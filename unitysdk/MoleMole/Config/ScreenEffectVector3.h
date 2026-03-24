#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR3_GETVALUE_OFFSET UNITYSDK_OFFSET(0xE379970)
#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0xE379AF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectVector3_TypeDefinitionIndex = 69798;

	class ScreenEffectVector3 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* YCurve; // 0x10
		::UnityEngine::AnimationCurve* XCurve; // 0x18
		::UnityEngine::AnimationCurve* ZCurve; // 0x20
		::System::Single ZValue; // 0x28
		::System::Boolean XUseCurve; // 0x2C
		::System::Boolean YUseCurve; // 0x2D
		::System::Boolean ZUseCurve; // 0x2E
		::System::Boolean EnableOverrideDefaultValue; // 0x2F
		::System::Boolean EnableFade; // 0x30
		::System::Single YValue; // 0x34
		::System::Single XValue; // 0x38
		::UnityEngine::Vector3 OverrideDefaultValue; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR3__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetValue(::System::Single curTime, ::System::Single totalTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR3_GETVALUE_OFFSET))(this, curTime, totalTime);
		}
	};
}
