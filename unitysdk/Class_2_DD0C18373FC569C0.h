#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F76884FC39FD584;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_DD0C18373FC569C0_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x74ED7F0)
#define CLASS_2_DD0C18373FC569C0_METHOD_2_1D05C371EBD1713E_OFFSET UNITYSDK_OFFSET(0x74ED5E0)
#define CLASS_2_DD0C18373FC569C0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x74ED8A0)
#define CLASS_2_DD0C18373FC569C0__CTOR_OFFSET UNITYSDK_OFFSET(0x74ED890)

inline static constexpr unsigned int Class_2_DD0C18373FC569C0_TypeDefinitionIndex = 69074;

class Class_2_DD0C18373FC569C0 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_5; // 0x18
	::MoleMole::MonoGamepadCustomList* Field_2_6; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x28
	::UnityEngine::RectTransform* Field_2_1; // 0x30
	::MonoUITableScrollV2* Field_2_4; // 0x38
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_3; // 0x40
	::Class_2_1F76884FC39FD584* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD0C18373FC569C0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1D05C371EBD1713E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DD0C18373FC569C0_METHOD_2_1D05C371EBD1713E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD0C18373FC569C0_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DD0C18373FC569C0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
