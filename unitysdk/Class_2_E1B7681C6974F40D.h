#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E1B7681C6974F40D_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0xC3A2F40)
#define CLASS_2_E1B7681C6974F40D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xC3A3030)
#define CLASS_2_E1B7681C6974F40D__CTOR_OFFSET UNITYSDK_OFFSET(0xC3A3020)

inline static constexpr unsigned int Class_2_E1B7681C6974F40D_TypeDefinitionIndex = 67124;

class Class_2_E1B7681C6974F40D : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadCustomList* Field_2_3; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::UnityEngine::GameObject* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1B7681C6974F40D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E1B7681C6974F40D_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E1B7681C6974F40D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
