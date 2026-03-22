#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_1FCFE0C0C73DB469_1_METHOD_2_0541B466D90A7C72_OFFSET UNITYSDK_OFFSET(0x6D2CF20)
#define CLASS_2_1FCFE0C0C73DB469_1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x6D2D100)
#define CLASS_2_1FCFE0C0C73DB469_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6D2D1F0)
#define CLASS_2_1FCFE0C0C73DB469_1__CTOR_OFFSET UNITYSDK_OFFSET(0x6D2D1E0)

inline static constexpr unsigned int Class_2_1FCFE0C0C73DB469_1_TypeDefinitionIndex = 61589;

class Class_2_1FCFE0C0C73DB469_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadgeEx* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_0; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FCFE0C0C73DB469_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0541B466D90A7C72(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1FCFE0C0C73DB469_1_METHOD_2_0541B466D90A7C72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FCFE0C0C73DB469_1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1FCFE0C0C73DB469_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
