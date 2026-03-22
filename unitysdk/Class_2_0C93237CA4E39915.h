#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_0C93237CA4E39915_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x9EDFE90)
#define CLASS_2_0C93237CA4E39915_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x9EE0060)
#define CLASS_2_0C93237CA4E39915_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9EE0150)
#define CLASS_2_0C93237CA4E39915__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE0140)

inline static constexpr unsigned int Class_2_0C93237CA4E39915_TypeDefinitionIndex = 78517;

class Class_2_0C93237CA4E39915 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_2; // 0x20
	::MoleMole::MonoGamepadCustomList* Field_2_5; // 0x28
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_1; // 0x38
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralFilterItemRowWidgetController*>* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C93237CA4E39915__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C93237CA4E39915_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C93237CA4E39915_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C93237CA4E39915_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
