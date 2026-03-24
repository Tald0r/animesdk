#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_45E82FF26A2581DE_Class_2_CF8584E3AEFF65E2;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_45E82FF26A2581DE_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x8E1A090)
#define CLASS_2_45E82FF26A2581DE_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x8E1A2F0)
#define CLASS_2_45E82FF26A2581DE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8E1A470)
#define CLASS_2_45E82FF26A2581DE__CTOR_OFFSET UNITYSDK_OFFSET(0x8E1A460)

inline static constexpr unsigned int Class_2_45E82FF26A2581DE_TypeDefinitionIndex = 69613;

class Class_2_45E82FF26A2581DE : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x18
	::MoleMole::NotificationBadge* Field_2_2; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_45E82FF26A2581DE_Class_2_CF8584E3AEFF65E2*>* Field_2_7; // 0x40
	::UnityEngine::UI::Extension::UITabButton* Field_2_0; // 0x48
	::Class_2_0D31A1661D004892<::Class_2_45E82FF26A2581DE_Class_2_CF8584E3AEFF65E2*>* Field_2_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45E82FF26A2581DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_45E82FF26A2581DE_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_45E82FF26A2581DE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45E82FF26A2581DE_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
