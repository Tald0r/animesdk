#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E6A09AD9C43392D8_4_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x7598580)
#define CLASS_2_E6A09AD9C43392D8_4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7598650)
#define CLASS_2_E6A09AD9C43392D8_4__CTOR_OFFSET UNITYSDK_OFFSET(0x7598640)

inline static constexpr unsigned int Class_2_E6A09AD9C43392D8_4_TypeDefinitionIndex = 55281;

class Class_2_E6A09AD9C43392D8_4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x18
	::UnityEngine::Camera* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6A09AD9C43392D8_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E6A09AD9C43392D8_4_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E6A09AD9C43392D8_4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
