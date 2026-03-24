#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_1EB2B840600E4E48_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x91FB1D0)
#define CLASS_2_1EB2B840600E4E48_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x91FB3B0)
#define CLASS_2_1EB2B840600E4E48_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x91FB510)
#define CLASS_2_1EB2B840600E4E48__CTOR_OFFSET UNITYSDK_OFFSET(0x91FB500)

inline static constexpr unsigned int Class_2_1EB2B840600E4E48_TypeDefinitionIndex = 66028;

class Class_2_1EB2B840600E4E48 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EB2B840600E4E48__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1EB2B840600E4E48_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1EB2B840600E4E48_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EB2B840600E4E48_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
