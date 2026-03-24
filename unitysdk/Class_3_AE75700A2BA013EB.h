#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_AE75700A2BA013EB_METHOD_3_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x7CE55A0)
#define CLASS_3_AE75700A2BA013EB_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7CE59F0)
#define CLASS_3_AE75700A2BA013EB_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x7CE52C0)
#define CLASS_3_AE75700A2BA013EB__CTOR_OFFSET UNITYSDK_OFFSET(0x7CE5850)

inline static constexpr unsigned int Class_3_AE75700A2BA013EB_TypeDefinitionIndex = 50968;

class Class_3_AE75700A2BA013EB : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Single>* Field_3_2; // 0x18
	::Class_3_B537A0AA78803363* Field_3_4; // 0x20
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_1; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Single>*>* Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE75700A2BA013EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE75700A2BA013EB_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_47125C76AFDB961E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_AE75700A2BA013EB_METHOD_3_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE75700A2BA013EB_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
