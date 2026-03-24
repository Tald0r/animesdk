#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_65C11A7D5C8484CD_1.h"

class Class_2_61AC41B6DCFBC671;
class Class_2_7505FA4796F2EED2;
class Class_2_9D9172C07F82DDAE;

#define CLASS_2_60AB12983A3F4E9F_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x7C06090)
#define CLASS_2_60AB12983A3F4E9F__CTOR_OFFSET UNITYSDK_OFFSET(0x7C05F20)

inline static constexpr unsigned int Class_2_60AB12983A3F4E9F_TypeDefinitionIndex = 70273;

class Class_2_60AB12983A3F4E9F : public ::Class_1_65C11A7D5C8484CD_1
{
public:
	::Class_2_9D9172C07F82DDAE* Field_2_0; // 0x20
	::Class_2_61AC41B6DCFBC671* Field_2_1; // 0x28

	::System::Void _ctor(::Class_2_7505FA4796F2EED2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7505FA4796F2EED2*))((::PBYTE)hIl2Cpp + CLASS_2_60AB12983A3F4E9F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60AB12983A3F4E9F_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}
};
