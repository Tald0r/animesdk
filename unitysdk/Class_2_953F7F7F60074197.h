#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_953F7F7F60074197_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x8463240)
#define CLASS_2_953F7F7F60074197_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x8463400)
#define CLASS_2_953F7F7F60074197_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8463560)
#define CLASS_2_953F7F7F60074197__CTOR_OFFSET UNITYSDK_OFFSET(0x8463550)

inline static constexpr unsigned int Class_2_953F7F7F60074197_TypeDefinitionIndex = 42318;

class Class_2_953F7F7F60074197 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
