#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FF585D6069E8993D_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0xA038110)
#define CLASS_2_FF585D6069E8993D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA038220)
#define CLASS_2_FF585D6069E8993D__CTOR_OFFSET UNITYSDK_OFFSET(0xA038210)

inline static constexpr unsigned int Class_2_FF585D6069E8993D_TypeDefinitionIndex = 39113;

class Class_2_FF585D6069E8993D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_4; // 0x18
	::MonoUITableScrollV2* Field_2_2; // 0x20
	::UnityEngine::Transform* Field_2_1; // 0x28
	::UnityEngine::GameObject* Field_2_0; // 0x30
	::MonoUITableScrollV2* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF585D6069E8993D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF585D6069E8993D_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF585D6069E8993D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
