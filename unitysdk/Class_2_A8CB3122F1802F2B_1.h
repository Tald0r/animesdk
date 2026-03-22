#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A8CB3122F1802F2B_1_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x64B5510)
#define CLASS_2_A8CB3122F1802F2B_1_METHOD_2_7850A759D7FB02C1_OFFSET UNITYSDK_OFFSET(0x64B55D0)
#define CLASS_2_A8CB3122F1802F2B_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x64B5670)
#define CLASS_2_A8CB3122F1802F2B_1_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x64B56E0)
#define CLASS_2_A8CB3122F1802F2B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x64B5660)

inline static constexpr unsigned int Class_2_A8CB3122F1802F2B_1_TypeDefinitionIndex = 49850;

class Class_2_A8CB3122F1802F2B_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_0; // 0x18
	::UnityEngine::Animation* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8CB3122F1802F2B_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8CB3122F1802F2B_1_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7850A759D7FB02C1(::MoleMole::UIControlCollection* a1, ::Class_2_777A5D016ADC7368* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_777A5D016ADC7368*))((::PBYTE)hIl2Cpp + CLASS_2_A8CB3122F1802F2B_1_METHOD_2_7850A759D7FB02C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8CB3122F1802F2B_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_777A5D016ADC7368* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_777A5D016ADC7368*))((::PBYTE)hIl2Cpp + CLASS_2_A8CB3122F1802F2B_1_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}
};
