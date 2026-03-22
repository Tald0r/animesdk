#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }

#define CLASS_2_12B600ED1ACDA4FA_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x8505CF0)
#define CLASS_2_12B600ED1ACDA4FA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8505D90)
#define CLASS_2_12B600ED1ACDA4FA__CTOR_OFFSET UNITYSDK_OFFSET(0x8505D80)

inline static constexpr unsigned int Class_2_12B600ED1ACDA4FA_TypeDefinitionIndex = 77783;

class Class_2_12B600ED1ACDA4FA : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Camera* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12B600ED1ACDA4FA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_12B600ED1ACDA4FA_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_12B600ED1ACDA4FA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
