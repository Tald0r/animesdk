#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A0E3DEDE1BCD4C13_1_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x703C570)
#define CLASS_2_A0E3DEDE1BCD4C13_1_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x703C770)
#define CLASS_2_A0E3DEDE1BCD4C13_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x703C8D0)
#define CLASS_2_A0E3DEDE1BCD4C13_1__CTOR_OFFSET UNITYSDK_OFFSET(0x703C8C0)

inline static constexpr unsigned int Class_2_A0E3DEDE1BCD4C13_1_TypeDefinitionIndex = 71754;

class Class_2_A0E3DEDE1BCD4C13_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x30
	::UnityEngine::Transform* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0E3DEDE1BCD4C13_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A0E3DEDE1BCD4C13_1_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A0E3DEDE1BCD4C13_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0E3DEDE1BCD4C13_1_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
