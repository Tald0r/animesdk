#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_E63ABF3E12FB9686_3_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x8D36A50)
#define CLASS_3_E63ABF3E12FB9686_3_METHOD_3_496565A3E7357507_OFFSET UNITYSDK_OFFSET(0x8D368C0)
#define CLASS_3_E63ABF3E12FB9686_3_METHOD_3_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x8D36AF0)
#define CLASS_3_E63ABF3E12FB9686_3__CTOR_OFFSET UNITYSDK_OFFSET(0x8D36C90)

inline static constexpr unsigned int Class_3_E63ABF3E12FB9686_3_TypeDefinitionIndex = 78354;

class Class_3_E63ABF3E12FB9686_3 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::RectTransform* Field_3_0; // 0x28
	::UnityEngine::RectTransform* Field_3_1; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63ABF3E12FB9686_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_496565A3E7357507(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_E63ABF3E12FB9686_3_METHOD_3_496565A3E7357507_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63ABF3E12FB9686_3_METHOD_3_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63ABF3E12FB9686_3_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}
};
