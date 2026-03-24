#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_3B9F4D912F6F3C82_METHOD_3_B19B785D23168BCD_OFFSET UNITYSDK_OFFSET(0x9949A40)
#define CLASS_3_3B9F4D912F6F3C82_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9949EE0)
#define CLASS_3_3B9F4D912F6F3C82_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x9949760)
#define CLASS_3_3B9F4D912F6F3C82__CTOR_OFFSET UNITYSDK_OFFSET(0x9949D40)

inline static constexpr unsigned int Class_3_3B9F4D912F6F3C82_TypeDefinitionIndex = 62921;

class Class_3_3B9F4D912F6F3C82 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_3_B537A0AA78803363* Field_3_4; // 0x20
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x28
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x30
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B9F4D912F6F3C82__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B9F4D912F6F3C82_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_B19B785D23168BCD(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_3B9F4D912F6F3C82_METHOD_3_B19B785D23168BCD_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B9F4D912F6F3C82_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
