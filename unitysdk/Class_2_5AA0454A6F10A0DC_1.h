#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_5AA0454A6F10A0DC_1_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0xF3BE700)
#define CLASS_2_5AA0454A6F10A0DC_1_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0xAFB85B0)
#define CLASS_2_5AA0454A6F10A0DC_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAFB8540)
#define CLASS_2_5AA0454A6F10A0DC_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAFB8530)

inline static constexpr unsigned int Class_2_5AA0454A6F10A0DC_1_TypeDefinitionIndex = 44712;

class Class_2_5AA0454A6F10A0DC_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AA0454A6F10A0DC_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5AA0454A6F10A0DC_1_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5AA0454A6F10A0DC_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AA0454A6F10A0DC_1_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
