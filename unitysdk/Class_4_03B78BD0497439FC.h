#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_03B78BD0497439FC_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xA733AB0)
#define CLASS_4_03B78BD0497439FC_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA733640)
#define CLASS_4_03B78BD0497439FC_METHOD_4_F370E675AD59DD8F_OFFSET UNITYSDK_OFFSET(0xA733710)
#define CLASS_4_03B78BD0497439FC__CTOR_OFFSET UNITYSDK_OFFSET(0xA733A10)

inline static constexpr unsigned int Class_4_03B78BD0497439FC_TypeDefinitionIndex = 44152;

class Class_4_03B78BD0497439FC : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_D0B094D0B900A9F0<::MoleMole::EntityHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_03B78BD0497439FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_03B78BD0497439FC_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_F370E675AD59DD8F(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_03B78BD0497439FC_METHOD_4_F370E675AD59DD8F_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_03B78BD0497439FC_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
