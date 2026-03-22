#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_ANIMATIONFADEABLECURVEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A48DDE0)
#define SIRENIX_ODININSPECTOR_ANIMATIONFADEABLECURVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48DD90)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int AnimationFadeableCurveAttribute_TypeDefinitionIndex = 8261;

	class AnimationFadeableCurveAttribute : public ::System::Attribute
	{
	public:
		::System::String* TimeAxisMaxValGetter; // 0x10
		::System::String* TimeAxisCurTimeAtGetter; // 0x18
		::System::String* TimeAxisMinValGetter; // 0x20
		::System::String* ValueAxisMinValGetter; // 0x28
		::System::String* NeedSplitRegionGetter; // 0x30
		::System::String* ValueAxisMaxValGetter; // 0x38
		::System::Boolean TimeAxisIsInf; // 0x40
		::System::Boolean ValueAxisIsInf; // 0x41
		::System::Boolean Is01Curve; // 0x42
		::UnityEngine::Color LineColor; // 0x44
		::System::Single TimeAxisMinVal; // 0x54
		::System::Single TimeAxisMaxVal; // 0x58
		::System::Single ValueAxisMaxVal; // 0x5C
		::System::Single ValueAxisMinVal; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ANIMATIONFADEABLECURVEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single r, ::System::Single g, ::System::Single b, ::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ANIMATIONFADEABLECURVEATTRIBUTE__CTOR_1_OFFSET))(this, r, g, b, a);
		}
	};
}
