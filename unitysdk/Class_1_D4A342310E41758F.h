#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_481;
class Class_3_CCAB3026502C387C_3;

#define CLASS_1_D4A342310E41758F_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x8E82AC0)
#define CLASS_1_D4A342310E41758F_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x8E82D80)
#define CLASS_1_D4A342310E41758F__CTOR_OFFSET UNITYSDK_OFFSET(0x8E829B0)

inline static constexpr unsigned int Class_1_D4A342310E41758F_TypeDefinitionIndex = 77207;

class Class_1_D4A342310E41758F : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_481* Field_1_2; // 0x10
	::Class_3_CCAB3026502C387C_3* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::Class_3_CCAB3026502C387C_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CCAB3026502C387C_3*))((::PBYTE)hIl2Cpp + CLASS_1_D4A342310E41758F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4A342310E41758F_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4A342310E41758F_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}
};
