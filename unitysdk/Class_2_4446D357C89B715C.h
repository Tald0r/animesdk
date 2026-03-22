#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_4446D357C89B715C_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x6301710)
#define CLASS_2_4446D357C89B715C_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x6301970)
#define CLASS_2_4446D357C89B715C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6301AF0)
#define CLASS_2_4446D357C89B715C__CTOR_OFFSET UNITYSDK_OFFSET(0x6301AE0)

inline static constexpr unsigned int Class_2_4446D357C89B715C_TypeDefinitionIndex = 49885;

class Class_2_4446D357C89B715C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_8; // 0x20
	::UnityEngine::UI::Text* Field_2_0; // 0x28
	::UnityEngine::UI::Text* Field_2_5; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x58
	::UnityEngine::UI::Text* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4446D357C89B715C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4446D357C89B715C_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4446D357C89B715C_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4446D357C89B715C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
