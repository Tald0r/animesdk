#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_8600CAA49EEC9D0F_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x13877D10)
#define CLASS_2_8600CAA49EEC9D0F_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x138778C0)
#define CLASS_2_8600CAA49EEC9D0F_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0x13877BA0)
#define CLASS_2_8600CAA49EEC9D0F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13877E30)
#define CLASS_2_8600CAA49EEC9D0F__CTOR_OFFSET UNITYSDK_OFFSET(0x13877E20)

inline static constexpr unsigned int Class_2_8600CAA49EEC9D0F_TypeDefinitionIndex = 58171;

class Class_2_8600CAA49EEC9D0F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_10; // 0x40
	::MonoUITableScrollV2* Field_2_7; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_11; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x68
	::UnityEngine::GameObject* Field_2_12; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_9; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8600CAA49EEC9D0F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8600CAA49EEC9D0F_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8600CAA49EEC9D0F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8600CAA49EEC9D0F_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8600CAA49EEC9D0F_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}
};
