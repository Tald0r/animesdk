#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_13D8A045CE47311E_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x92966E0)
#define CLASS_2_13D8A045CE47311E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x92967D0)
#define CLASS_2_13D8A045CE47311E_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x9296550)
#define CLASS_2_13D8A045CE47311E__CTOR_OFFSET UNITYSDK_OFFSET(0x92967C0)

inline static constexpr unsigned int Class_2_13D8A045CE47311E_TypeDefinitionIndex = 37424;

class Class_2_13D8A045CE47311E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_2; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13D8A045CE47311E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_13D8A045CE47311E_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_13D8A045CE47311E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13D8A045CE47311E_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
