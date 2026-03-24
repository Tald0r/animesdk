#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_67AE135D9076EEC7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x72693F0)
#define CLASS_3_67AE135D9076EEC7_METHOD_3_D15613E87741BED0_OFFSET UNITYSDK_OFFSET(0x7268E90)
#define CLASS_3_67AE135D9076EEC7_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x7268BB0)
#define CLASS_3_67AE135D9076EEC7__CTOR_OFFSET UNITYSDK_OFFSET(0x7269250)

inline static constexpr unsigned int Class_3_67AE135D9076EEC7_TypeDefinitionIndex = 62087;

class Class_3_67AE135D9076EEC7 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_0; // 0x18
	::Class_4_D0B094D0B900A9F0<::System::Single>* Field_3_2; // 0x20
	::Class_4_D0B094D0B900A9F0<::System::Int32>* Field_3_4; // 0x28
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_3_1; // 0x30
	::Class_4_D0B094D0B900A9F0<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67AE135D9076EEC7__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67AE135D9076EEC7_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_D15613E87741BED0(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_67AE135D9076EEC7_METHOD_3_D15613E87741BED0_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67AE135D9076EEC7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
