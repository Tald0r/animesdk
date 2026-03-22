#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR2_GETVALUE_OFFSET UNITYSDK_OFFSET(0xE82AB40)
#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0xE82AC80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectVector2_TypeDefinitionIndex = 53630;

	class ScreenEffectVector2 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* XCurve; // 0x10
		::UnityEngine::AnimationCurve* YCurve; // 0x18
		::UnityEngine::Vector2 OverrideDefaultValue; // 0x20
		::System::Boolean EnableFade; // 0x28
		::System::Boolean YUseCurve; // 0x29
		::System::Boolean XUseCurve; // 0x2A
		::System::Boolean EnableOverrideDefaultValue; // 0x2B
		::System::Single XValue; // 0x2C
		::System::Single YValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR2__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetValue(::System::Single curTime, ::System::Single totalTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR2_GETVALUE_OFFSET))(this, curTime, totalTime);
		}
	};
}
