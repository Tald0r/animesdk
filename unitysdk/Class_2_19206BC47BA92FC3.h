#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_19206BC47BA92FC3_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xAF43D10)
#define CLASS_2_19206BC47BA92FC3_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0xAF43A90)
#define CLASS_2_19206BC47BA92FC3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAF43E50)
#define CLASS_2_19206BC47BA92FC3__CTOR_OFFSET UNITYSDK_OFFSET(0xAF43E40)

inline static constexpr unsigned int Class_2_19206BC47BA92FC3_TypeDefinitionIndex = 45216;

class Class_2_19206BC47BA92FC3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::UnityEngine::Transform* Field_2_8; // 0x28
	::UnityEngine::Transform* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_9; // 0x38
	::UnityEngine::Transform* Field_2_1; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x58
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x68
	::UnityEngine::RectTransform* Field_2_6; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19206BC47BA92FC3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_19206BC47BA92FC3_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19206BC47BA92FC3_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_19206BC47BA92FC3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
