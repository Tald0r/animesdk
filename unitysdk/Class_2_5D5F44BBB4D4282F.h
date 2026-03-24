#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMusicBattleInLevelInteractWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_5D5F44BBB4D4282F_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x8C0FDD0)
#define CLASS_2_5D5F44BBB4D4282F_METHOD_2_5519EC69077F3A01_OFFSET UNITYSDK_OFFSET(0x8C0FBB0)
#define CLASS_2_5D5F44BBB4D4282F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8C0FE80)
#define CLASS_2_5D5F44BBB4D4282F__CTOR_OFFSET UNITYSDK_OFFSET(0x8C0FE70)

inline static constexpr unsigned int Class_2_5D5F44BBB4D4282F_TypeDefinitionIndex = 52336;

class Class_2_5D5F44BBB4D4282F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_3; // 0x18
	::Class_3_647A206587033F4E<::MoleMole::UIMusicBattleInLevelInteractWidgetController*>* Field_2_0; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_4; // 0x28
	::Class_2_9E3E3CDA608A4F58* Field_2_1; // 0x30
	::Class_2_9E3E3CDA608A4F58* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D5F44BBB4D4282F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5519EC69077F3A01(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5D5F44BBB4D4282F_METHOD_2_5519EC69077F3A01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D5F44BBB4D4282F_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5D5F44BBB4D4282F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
