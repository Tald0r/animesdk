#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_CF43FA1E89397A1C;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_7AAE980FA4236F68_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x99F84B0)
#define CLASS_4_7AAE980FA4236F68_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x99F7B80)
#define CLASS_4_7AAE980FA4236F68_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x99F7890)
#define CLASS_4_7AAE980FA4236F68__CTOR_OFFSET UNITYSDK_OFFSET(0x99F8260)

inline static constexpr unsigned int Class_4_7AAE980FA4236F68_TypeDefinitionIndex = 71467;

class Class_4_7AAE980FA4236F68 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_2; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_3; // 0x30
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x38
	::Class_3_CF43FA1E89397A1C* Field_4_4; // 0x40
	::Class_4_179456445C225AB4<::System::String*>* Field_4_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7AAE980FA4236F68__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7AAE980FA4236F68_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_7AAE980FA4236F68_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7AAE980FA4236F68_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
