#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR4_GETVALUE_OFFSET UNITYSDK_OFFSET(0xBB05200)
#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0xBB053C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectVector4_TypeDefinitionIndex = 41554;

	class ScreenEffectVector4 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* ZCurve; // 0x10
		::UnityEngine::AnimationCurve* WCurve; // 0x18
		::UnityEngine::AnimationCurve* YCurve; // 0x20
		::UnityEngine::AnimationCurve* XCurve; // 0x28
		::UnityEngine::Vector4 OverrideDefaultValue; // 0x30
		::System::Single WValue; // 0x40
		::System::Single YValue; // 0x44
		::System::Boolean YUseCurve; // 0x48
		::System::Boolean EnableOverrideDefaultValue; // 0x49
		::System::Boolean EnableFade; // 0x4A
		::System::Boolean WUseCurve; // 0x4B
		::System::Single ZValue; // 0x4C
		::System::Single XValue; // 0x50
		::System::Boolean XUseCurve; // 0x54
		::System::Boolean ZUseCurve; // 0x55

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR4__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetValue(::System::Single curTime, ::System::Single totalTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR4_GETVALUE_OFFSET))(this, curTime, totalTime);
		}
	};
}
