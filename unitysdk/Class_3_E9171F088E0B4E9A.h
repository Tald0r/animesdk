#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_204C453CC79AE4E0;
class Class_1_8FBDD7D8E0EE0B49;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_E9171F088E0B4E9A_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x7AD8FF0)
#define CLASS_3_E9171F088E0B4E9A_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x7AD9250)
#define CLASS_3_E9171F088E0B4E9A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7AD9660)
#define CLASS_3_E9171F088E0B4E9A_METHOD_3_FE396A2C0D40A1F3_OFFSET UNITYSDK_OFFSET(0x7AD96C0)
#define CLASS_3_E9171F088E0B4E9A__CTOR_OFFSET UNITYSDK_OFFSET(0x7AD9490)

inline static constexpr unsigned int Class_3_E9171F088E0B4E9A_TypeDefinitionIndex = 37393;

class Class_3_E9171F088E0B4E9A : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_3; // 0x18
	::Class_3_B537A0AA78803363* Field_3_2; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9171F088E0B4E9A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9171F088E0B4E9A_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_E9171F088E0B4E9A_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9171F088E0B4E9A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_FE396A2C0D40A1F3(::Class_1_204C453CC79AE4E0* a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_8FBDD7D8E0EE0B49* a4)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Class_1_204C453CC79AE4E0*, ::System::Int32, ::System::Int32, ::Class_1_8FBDD7D8E0EE0B49*))((::PBYTE)hIl2Cpp + CLASS_3_E9171F088E0B4E9A_METHOD_3_FE396A2C0D40A1F3_OFFSET))(this, a1, a2, a3, a4);
	}
};
