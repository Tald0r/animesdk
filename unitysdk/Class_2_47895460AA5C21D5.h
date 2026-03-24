#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_47895460AA5C21D5_Class_2_C52D927DDDCC4659;
class Class_2_60DDD9C206686F44;
class Class_2_6DD35C246ADE688B;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_47895460AA5C21D5_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xA869690)
#define CLASS_2_47895460AA5C21D5_METHOD_2_8B7E7695FC17D6DD_OFFSET UNITYSDK_OFFSET(0xA869990)
#define CLASS_2_47895460AA5C21D5_METHOD_2_A8C1C04E82705511_OFFSET UNITYSDK_OFFSET(0xA869BA0)
#define CLASS_2_47895460AA5C21D5_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xA869D10)
#define CLASS_2_47895460AA5C21D5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA869E70)
#define CLASS_2_47895460AA5C21D5__CTOR_OFFSET UNITYSDK_OFFSET(0xA869E60)

inline static constexpr unsigned int Class_2_47895460AA5C21D5_TypeDefinitionIndex = 75312;

class Class_2_47895460AA5C21D5 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadModule* Field_2_12; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x20
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_47895460AA5C21D5_Class_2_C52D927DDDCC4659*>*>* Field_2_3; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_11; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::NotificationBadge*>* Field_2_6; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x48
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_7; // 0x50
	::MonoUITableScrollV2* Field_2_4; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x60
	::Class_2_0D31A1661D004892<::Class_2_6DD35C246ADE688B*>* Field_2_2; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x70
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_1; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47895460AA5C21D5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_47895460AA5C21D5_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_47895460AA5C21D5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47895460AA5C21D5_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_47895460AA5C21D5_Class_2_C52D927DDDCC4659*>*>* Method_2_8B7E7695FC17D6DD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_47895460AA5C21D5_Class_2_C52D927DDDCC4659*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_47895460AA5C21D5_METHOD_2_8B7E7695FC17D6DD_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::NotificationBadge*>* Method_2_A8C1C04E82705511(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::NotificationBadge*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_47895460AA5C21D5_METHOD_2_A8C1C04E82705511_OFFSET))(this, a1, a2);
	}
};
