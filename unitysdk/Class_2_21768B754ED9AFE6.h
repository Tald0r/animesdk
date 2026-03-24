#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_21768B754ED9AFE6_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x10D35D90)
#define CLASS_2_21768B754ED9AFE6_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x10D35FC0)
#define CLASS_2_21768B754ED9AFE6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10D360B0)
#define CLASS_2_21768B754ED9AFE6__CTOR_OFFSET UNITYSDK_OFFSET(0x10D360A0)

inline static constexpr unsigned int Class_2_21768B754ED9AFE6_TypeDefinitionIndex = 67403;

class Class_2_21768B754ED9AFE6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_1; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_5; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x38
	::Class_2_9E3E3CDA608A4F58* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21768B754ED9AFE6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_21768B754ED9AFE6_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21768B754ED9AFE6_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_21768B754ED9AFE6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
