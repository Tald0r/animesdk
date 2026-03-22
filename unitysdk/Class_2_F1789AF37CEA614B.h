#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIVHSPromoterWidgetController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_F1789AF37CEA614B_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x62F3460)
#define CLASS_2_F1789AF37CEA614B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x62F35C0)
#define CLASS_2_F1789AF37CEA614B_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x62F31B0)
#define CLASS_2_F1789AF37CEA614B__CTOR_OFFSET UNITYSDK_OFFSET(0x62F35B0)

inline static constexpr unsigned int Class_2_F1789AF37CEA614B_TypeDefinitionIndex = 66527;

class Class_2_F1789AF37CEA614B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::UnityEngine::Animation* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIVHSPromoterWidgetController*>* Field_2_4; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x40
	::MonoUITableScrollV2* Field_2_10; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x60
	::UnityEngine::RectTransform* Field_2_5; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1789AF37CEA614B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F1789AF37CEA614B_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F1789AF37CEA614B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1789AF37CEA614B_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
