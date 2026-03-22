#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define CLASS_2_52F02C07BE44D88B_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x776E4A0)
#define CLASS_2_52F02C07BE44D88B_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0x776E2F0)
#define CLASS_2_52F02C07BE44D88B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x776E550)
#define CLASS_2_52F02C07BE44D88B__CTOR_OFFSET UNITYSDK_OFFSET(0x776E540)

inline static constexpr unsigned int Class_2_52F02C07BE44D88B_TypeDefinitionIndex = 46616;

class Class_2_52F02C07BE44D88B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UISlider* Field_2_1; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_0; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52F02C07BE44D88B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_52F02C07BE44D88B_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_52F02C07BE44D88B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52F02C07BE44D88B_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
