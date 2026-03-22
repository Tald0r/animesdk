#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_EA0CD9A273A6A774_Class_2_A8964461B49799CA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_EA0CD9A273A6A774_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x66EA410)
#define CLASS_2_EA0CD9A273A6A774_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x66EA610)
#define CLASS_2_EA0CD9A273A6A774_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x66EA700)
#define CLASS_2_EA0CD9A273A6A774__CTOR_OFFSET UNITYSDK_OFFSET(0x66EA6F0)

inline static constexpr unsigned int Class_2_EA0CD9A273A6A774_TypeDefinitionIndex = 71354;

class Class_2_EA0CD9A273A6A774 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_3; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_1; // 0x20
	::MoleMole::MonoGamepadRegion* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::MonoUITableScrollV2* Field_2_0; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_EA0CD9A273A6A774_Class_2_A8964461B49799CA*>* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA0CD9A273A6A774__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EA0CD9A273A6A774_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA0CD9A273A6A774_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EA0CD9A273A6A774_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
