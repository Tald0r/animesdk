#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_398;
class Class_3_9FEE8E90DEF06DEF_8;

#define CLASS_1_D4A342310E41758F_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x8E51E50)
#define CLASS_1_D4A342310E41758F_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x8E52110)
#define CLASS_1_D4A342310E41758F__CTOR_OFFSET UNITYSDK_OFFSET(0x8E51D40)

inline static constexpr unsigned int Class_1_D4A342310E41758F_TypeDefinitionIndex = 63125;

class Class_1_D4A342310E41758F : public ::System::Object
{
public:
	::Class_3_9FEE8E90DEF06DEF_8* Field_1_1; // 0x10
	::Class_2_208CC9941471731A_398* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::Class_3_9FEE8E90DEF06DEF_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9FEE8E90DEF06DEF_8*))((::PBYTE)hIl2Cpp + CLASS_1_D4A342310E41758F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4A342310E41758F_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4A342310E41758F_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}
};
