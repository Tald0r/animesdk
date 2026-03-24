#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_08F63420C058C1CF_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x7214260)
#define CLASS_3_08F63420C058C1CF_METHOD_3_A32C34C28EBFFA29_OFFSET UNITYSDK_OFFSET(0x72144C0)
#define CLASS_3_08F63420C058C1CF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7214B40)
#define CLASS_3_08F63420C058C1CF__CTOR_OFFSET UNITYSDK_OFFSET(0x72149E0)

inline static constexpr unsigned int Class_3_08F63420C058C1CF_TypeDefinitionIndex = 53533;

class Class_3_08F63420C058C1CF : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x18
	::Class_3_B537A0AA78803363* Field_3_3; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08F63420C058C1CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08F63420C058C1CF_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_A32C34C28EBFFA29(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_08F63420C058C1CF_METHOD_3_A32C34C28EBFFA29_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08F63420C058C1CF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
