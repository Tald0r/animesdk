#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }

#define CLASS_2_0BDA461375E67B4B_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0xB4AC4C0)
#define CLASS_2_0BDA461375E67B4B_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xB4AC6C0)
#define CLASS_2_0BDA461375E67B4B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB4AC7B0)
#define CLASS_2_0BDA461375E67B4B__CTOR_OFFSET UNITYSDK_OFFSET(0xB4AC7A0)

inline static constexpr unsigned int Class_2_0BDA461375E67B4B_TypeDefinitionIndex = 67683;

class Class_2_0BDA461375E67B4B : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_3; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x30
	::MoleMole::UIGeneralButtonController* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BDA461375E67B4B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0BDA461375E67B4B_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0BDA461375E67B4B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BDA461375E67B4B_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
