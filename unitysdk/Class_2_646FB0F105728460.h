#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIActivityLambGiftItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_646FB0F105728460_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x15661070)
#define CLASS_2_646FB0F105728460_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15661190)
#define CLASS_2_646FB0F105728460_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x15660D90)
#define CLASS_2_646FB0F105728460__CTOR_OFFSET UNITYSDK_OFFSET(0x15661180)

inline static constexpr unsigned int Class_2_646FB0F105728460_TypeDefinitionIndex = 73020;

class Class_2_646FB0F105728460 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_11; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_12; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x30
	::Class_3_647A206587033F4E<::MoleMole::UIActivityLambGiftItemWidgetController*>* Field_2_9; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x40
	::UnityEngine::GameObject* Field_2_2; // 0x48
	::UnityEngine::GameObject* Field_2_0; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x58
	::Class_3_647A206587033F4E<::MoleMole::UIActivityLambGiftItemWidgetController*>* Field_2_10; // 0x60
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x68
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_646FB0F105728460__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_646FB0F105728460_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_646FB0F105728460_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_646FB0F105728460_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
