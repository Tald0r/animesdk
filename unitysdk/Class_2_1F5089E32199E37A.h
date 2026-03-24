#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F5089E32199E37A_Class_2_5A65F4E148145C27_1;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_1F5089E32199E37A_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x7E5E860)
#define CLASS_2_1F5089E32199E37A_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x7E5EB60)
#define CLASS_2_1F5089E32199E37A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7E5EC50)
#define CLASS_2_1F5089E32199E37A__CTOR_OFFSET UNITYSDK_OFFSET(0x7E5EC40)

inline static constexpr unsigned int Class_2_1F5089E32199E37A_TypeDefinitionIndex = 58190;

class Class_2_1F5089E32199E37A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::MoleMole::UIGeneralButtonController* Field_2_12; // 0x28
	::Class_2_9E3E3CDA608A4F58* Field_2_5; // 0x30
	::MoleMole::MonoGamepadModule* Field_2_4; // 0x38
	::UnityEngine::GameObject* Field_2_11; // 0x40
	::UnityEngine::GameObject* Field_2_3; // 0x48
	::MoleMole::UIGeneralButtonController* Field_2_13; // 0x50
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_9; // 0x58
	::UnityEngine::GameObject* Field_2_7; // 0x60
	::Class_2_0D31A1661D004892<::Class_2_1F5089E32199E37A_Class_2_5A65F4E148145C27_1*>* Field_2_10; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x70
	::MonoUITableScrollV2* Field_2_2; // 0x78
	::MoleMole::MonoGamepadModule* Field_2_6; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F5089E32199E37A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F5089E32199E37A_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F5089E32199E37A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F5089E32199E37A_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
