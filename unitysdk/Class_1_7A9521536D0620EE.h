#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_100;
class Class_1_48D56DACBE4271BC;
class Class_2_4BE21148C8967B21;

#define CLASS_1_7A9521536D0620EE_METHOD_1_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0x7149E80)
#define CLASS_1_7A9521536D0620EE_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x71499F0)
#define CLASS_1_7A9521536D0620EE__CTOR_OFFSET UNITYSDK_OFFSET(0x7149990)

inline static constexpr unsigned int Class_1_7A9521536D0620EE_TypeDefinitionIndex = 77403;

class Class_1_7A9521536D0620EE : public ::System::Object
{
public:
	::Class_2_4BE21148C8967B21* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_100* Field_1_4; // 0x18
	::Class_2_4BE21148C8967B21* Field_1_2; // 0x20
	::Class_2_4BE21148C8967B21* Field_1_0; // 0x28
	::Class_1_48D56DACBE4271BC* Field_1_3; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_100*))((::PBYTE)hIl2Cpp + CLASS_1_7A9521536D0620EE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9521536D0620EE_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_1_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9521536D0620EE_METHOD_1_35942D7A8A374AB0_OFFSET))(this);
	}
};
