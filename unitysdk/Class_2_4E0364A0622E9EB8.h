#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_4E0364A0622E9EB8_METHOD_2_65367CC4DD011F4E_OFFSET UNITYSDK_OFFSET(0x64F81A0)
#define CLASS_2_4E0364A0622E9EB8_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x64F7F60)
#define CLASS_2_4E0364A0622E9EB8_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x64F8310)
#define CLASS_2_4E0364A0622E9EB8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x64F83E0)
#define CLASS_2_4E0364A0622E9EB8__CTOR_OFFSET UNITYSDK_OFFSET(0x64F83D0)

inline static constexpr unsigned int Class_2_4E0364A0622E9EB8_TypeDefinitionIndex = 49946;

class Class_2_4E0364A0622E9EB8 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_9; // 0x28
	::UnityEngine::RectTransform* Field_2_8; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x38
	::MoleMole::MonoGamepadModule* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_3; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_0; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x58
	::UnityEngine::RectTransform* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E0364A0622E9EB8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4E0364A0622E9EB8_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4E0364A0622E9EB8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_65367CC4DD011F4E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4E0364A0622E9EB8_METHOD_2_65367CC4DD011F4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E0364A0622E9EB8_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
