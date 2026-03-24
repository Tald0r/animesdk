#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_945ACFB1FEBC7A2C_5.h"

namespace System { class String; }

#define CLASS_2_234978962D227569_METHOD_2_6477F93397FB077E_OFFSET UNITYSDK_OFFSET(0x82E2A50)
#define CLASS_2_234978962D227569_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x82E2B20)
#define CLASS_2_234978962D227569__CTOR_OFFSET UNITYSDK_OFFSET(0x82E2B10)

inline static constexpr unsigned int Class_2_234978962D227569_TypeDefinitionIndex = 63168;

class Class_2_234978962D227569 : public ::Class_1_945ACFB1FEBC7A2C_5
{
public:
	::System::String* Field_2_3; // 0x18
	::System::Boolean Field_2_4; // 0x20
	::System::Int32 Field_2_1; // 0x24
	::System::Int32 Field_2_2; // 0x28
	::System::Int32 Field_2_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_234978962D227569__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_6477F93397FB077E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_234978962D227569_METHOD_2_6477F93397FB077E_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_234978962D227569_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
