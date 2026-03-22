#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_ANIMATIONCURVEDRAWERSETTINGATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB439F0)
#define SIRENIX_ODININSPECTOR_ANIMATIONCURVEDRAWERSETTINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB439A0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int AnimationCurveDrawerSettingAttribute_TypeDefinitionIndex = 8166;

	class AnimationCurveDrawerSettingAttribute : public ::System::Attribute
	{
	public:
		::System::String* TimeAxisMaxValGetter; // 0x10
		::System::String* ValueAxisMinValGetter; // 0x18
		::System::String* TimeAxisMinValGetter; // 0x20
		::System::String* ValueAxisMaxValGetter; // 0x28
		::UnityEngine::Color LineColor; // 0x30
		::System::Single ValueAxisMaxVal; // 0x40
		::System::Boolean TimeAxisIsInf; // 0x44
		::System::Boolean ValueAxisIsInf; // 0x45
		::System::Single TimeAxisMinVal; // 0x48
		::System::Single ValueAxisMinVal; // 0x4C
		::System::Single TimeAxisMaxVal; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ANIMATIONCURVEDRAWERSETTINGATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single r, ::System::Single g, ::System::Single b, ::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ANIMATIONCURVEDRAWERSETTINGATTRIBUTE__CTOR_1_OFFSET))(this, r, g, b, a);
		}
	};
}
