#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_D19F1E382B310413_METHOD_4_0C53D5E3AF8561C4_OFFSET UNITYSDK_OFFSET(0xBCD4A70)
#define CLASS_4_D19F1E382B310413_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xBCD52E0)
#define CLASS_4_D19F1E382B310413_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xBCD4780)
#define CLASS_4_D19F1E382B310413__CTOR_OFFSET UNITYSDK_OFFSET(0xBCD5090)

inline static constexpr unsigned int Class_4_D19F1E382B310413_TypeDefinitionIndex = 78775;

class Class_4_D19F1E382B310413 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Int32>* Field_4_2; // 0x28
	::Class_3_B537A0AA78803363* Field_4_4; // 0x30
	::Class_4_179456445C225AB4<::System::String*>* Field_4_1; // 0x38
	::Class_3_B537A0AA78803363* Field_4_3; // 0x40
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D19F1E382B310413__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D19F1E382B310413_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_0C53D5E3AF8561C4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_D19F1E382B310413_METHOD_4_0C53D5E3AF8561C4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D19F1E382B310413_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
