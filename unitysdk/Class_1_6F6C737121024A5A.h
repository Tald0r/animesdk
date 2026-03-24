#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_239;

#define CLASS_1_6F6C737121024A5A_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0xA0A5C20)
#define CLASS_1_6F6C737121024A5A__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A5B20)

inline static constexpr unsigned int Class_1_6F6C737121024A5A_TypeDefinitionIndex = 42735;

class Class_1_6F6C737121024A5A : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_239* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_239*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_239*&))((::PBYTE)hIl2Cpp + CLASS_1_6F6C737121024A5A__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_239* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_239*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F6C737121024A5A_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}
};
