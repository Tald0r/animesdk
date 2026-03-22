#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_9ACEB6C2DFDB300A_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x9976F80)
#define CLASS_2_9ACEB6C2DFDB300A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9977070)
#define CLASS_2_9ACEB6C2DFDB300A_METHOD_2_F485ED5438CB5FFD_OFFSET UNITYSDK_OFFSET(0x9976E10)
#define CLASS_2_9ACEB6C2DFDB300A__CTOR_OFFSET UNITYSDK_OFFSET(0x9977060)

inline static constexpr unsigned int Class_2_9ACEB6C2DFDB300A_TypeDefinitionIndex = 55929;

class Class_2_9ACEB6C2DFDB300A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_0; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ACEB6C2DFDB300A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F485ED5438CB5FFD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9ACEB6C2DFDB300A_METHOD_2_F485ED5438CB5FFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9ACEB6C2DFDB300A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ACEB6C2DFDB300A_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
