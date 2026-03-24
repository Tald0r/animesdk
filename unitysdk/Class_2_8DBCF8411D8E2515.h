#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UISummerFishAquariumStarWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_8DBCF8411D8E2515_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0xCEB6070)
#define CLASS_2_8DBCF8411D8E2515_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xCEB62A0)
#define CLASS_2_8DBCF8411D8E2515_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xCEB63C0)
#define CLASS_2_8DBCF8411D8E2515__CTOR_OFFSET UNITYSDK_OFFSET(0xCEB63B0)

inline static constexpr unsigned int Class_2_8DBCF8411D8E2515_TypeDefinitionIndex = 43923;

class Class_2_8DBCF8411D8E2515 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadge* Field_2_6; // 0x18
	::Class_3_647A206587033F4E<::MoleMole::UISummerFishAquariumStarWidgetController*>* Field_2_3; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_1; // 0x38
	::UnityEngine::GameObject* Field_2_0; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DBCF8411D8E2515__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8DBCF8411D8E2515_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8DBCF8411D8E2515_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DBCF8411D8E2515_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
