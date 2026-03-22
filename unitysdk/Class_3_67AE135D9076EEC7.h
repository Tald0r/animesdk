#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_67AE135D9076EEC7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x87F9AF0)
#define CLASS_3_67AE135D9076EEC7_METHOD_3_D15613E87741BED0_OFFSET UNITYSDK_OFFSET(0x87F9590)
#define CLASS_3_67AE135D9076EEC7_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x87F92B0)
#define CLASS_3_67AE135D9076EEC7__CTOR_OFFSET UNITYSDK_OFFSET(0x87F9950)

inline static constexpr unsigned int Class_3_67AE135D9076EEC7_TypeDefinitionIndex = 71583;

class Class_3_67AE135D9076EEC7 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_AF61EEC11F34483C<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_3; // 0x18
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_0; // 0x20
	::Class_4_AF61EEC11F34483C<::System::Int32>* Field_3_4; // 0x28
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_3_1; // 0x30
	::Class_4_AF61EEC11F34483C<::System::Single>* Field_3_2; // 0x38

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
