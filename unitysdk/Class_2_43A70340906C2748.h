#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_43A70340906C2748_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x75A0190)
#define CLASS_2_43A70340906C2748_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x75A0230)
#define CLASS_2_43A70340906C2748__CTOR_OFFSET UNITYSDK_OFFSET(0x75A0220)

inline static constexpr unsigned int Class_2_43A70340906C2748_TypeDefinitionIndex = 53536;

class Class_2_43A70340906C2748 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::RawImage* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43A70340906C2748__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_43A70340906C2748_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_43A70340906C2748_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
