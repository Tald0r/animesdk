#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_1A094447DF03693D_1_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x75C0410)
#define CLASS_2_1A094447DF03693D_1_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x75C01D0)
#define CLASS_2_1A094447DF03693D_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x75C0530)
#define CLASS_2_1A094447DF03693D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x75C0520)

inline static constexpr unsigned int Class_2_1A094447DF03693D_1_TypeDefinitionIndex = 52040;

class Class_2_1A094447DF03693D_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x20
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x38
	::UnityEngine::RectTransform* Field_2_1; // 0x40
	::UnityEngine::RectTransform* Field_2_2; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A094447DF03693D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1A094447DF03693D_1_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A094447DF03693D_1_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1A094447DF03693D_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
