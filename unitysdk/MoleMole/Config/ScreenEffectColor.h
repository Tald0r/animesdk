#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class NapGradient;

#define MOLEMOLE_CONFIG_SCREENEFFECTCOLOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9D16BC0)
#define MOLEMOLE_CONFIG_SCREENEFFECTCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9D16CA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectColor_TypeDefinitionIndex = 40716;

	class ScreenEffectColor : public ::System::Object
	{
	public:
		::NapGradient* Curve; // 0x10
		::UnityEngine::Color FixedValue; // 0x18
		::System::Boolean UseCurve; // 0x28
		::System::Boolean EnableOverrideDefaultValue; // 0x29
		::System::Boolean EnableFade; // 0x2A
		::UnityEngine::Color OverrideDefaultValue; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTCOLOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color GetValue(::System::Single curTime, ::System::Single totalTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTCOLOR_GETVALUE_OFFSET))(this, curTime, totalTime);
		}
	};
}
