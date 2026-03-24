#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_817E737241BDC0A2.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

class Class_0_16E4307DCC419505_214;
class Class_2_F51BBF303F6FB2C0;

#define CLASS_2_18647C0DA6EAAED8_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x792EB70)
#define CLASS_2_18647C0DA6EAAED8_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x792EA50)
#define CLASS_2_18647C0DA6EAAED8_METHOD_2_477619032BD53FD3_OFFSET UNITYSDK_OFFSET(0x792E870)
#define CLASS_2_18647C0DA6EAAED8_METHOD_2_5FF5C61A6E57C587_OFFSET UNITYSDK_OFFSET(0x792EB80)
#define CLASS_2_18647C0DA6EAAED8__CTOR_OFFSET UNITYSDK_OFFSET(0x792E850)

inline static constexpr unsigned int Class_2_18647C0DA6EAAED8_TypeDefinitionIndex = 44700;

class Class_2_18647C0DA6EAAED8 : public ::Class_1_817E737241BDC0A2
{
public:
	::Class_2_F51BBF303F6FB2C0* Field_2_0; // 0x90

	::System::Void _ctor(::Class_2_F51BBF303F6FB2C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F51BBF303F6FB2C0*))((::PBYTE)hIl2Cpp + CLASS_2_18647C0DA6EAAED8__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_2_477619032BD53FD3(::Class_0_16E4307DCC419505_214* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_0_16E4307DCC419505_214*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_2_18647C0DA6EAAED8_METHOD_2_477619032BD53FD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18647C0DA6EAAED8_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18647C0DA6EAAED8_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Single Method_2_5FF5C61A6E57C587(::Class_0_16E4307DCC419505_214* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_0_16E4307DCC419505_214*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_2_18647C0DA6EAAED8_METHOD_2_5FF5C61A6E57C587_OFFSET))(this, a1, a2);
	}
};
