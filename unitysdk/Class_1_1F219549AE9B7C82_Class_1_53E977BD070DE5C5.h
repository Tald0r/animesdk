#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_1F219549AE9B7C82_CLASS_1_53E977BD070DE5C5_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x64FFC00)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_53E977BD070DE5C5_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x64FFD10)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_53E977BD070DE5C5__CTOR_OFFSET UNITYSDK_OFFSET(0x64FFBF0)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Class_1_53E977BD070DE5C5_TypeDefinitionIndex = 57043;

class Class_1_1F219549AE9B7C82_Class_1_53E977BD070DE5C5 : public ::System::Object
{
public:
	::UnityEngine::UI::Text* Field_1_0; // 0x10
	::UnityEngine::AnimationCurve* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::UnityEngine::Color Field_1_4; // 0x24
	::UnityEngine::Color Field_1_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_53E977BD070DE5C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_53E977BD070DE5C5_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_53E977BD070DE5C5_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
