#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_A0D80EE426216AF8_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x74B61A0)
#define CLASS_3_A0D80EE426216AF8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x74B6AD0)
#define CLASS_3_A0D80EE426216AF8_METHOD_3_D7A29A2D368B3689_OFFSET UNITYSDK_OFFSET(0x74B6400)
#define CLASS_3_A0D80EE426216AF8_METHOD_3_E82718B50EFFCD4F_OFFSET UNITYSDK_OFFSET(0x74B6A00)
#define CLASS_3_A0D80EE426216AF8__CTOR_OFFSET UNITYSDK_OFFSET(0x74B68A0)

inline static constexpr unsigned int Class_3_A0D80EE426216AF8_TypeDefinitionIndex = 69398;

class Class_3_A0D80EE426216AF8 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Single>* Field_3_2; // 0x18
	::Class_3_CF43FA1E89397A1C* Field_3_3; // 0x20
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_1; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0D80EE426216AF8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0D80EE426216AF8_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_D7A29A2D368B3689(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_A0D80EE426216AF8_METHOD_3_D7A29A2D368B3689_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_E82718B50EFFCD4F(::Struct_2_FE667B282E242C72 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::Struct_2_FE667B282E242C72))((::PBYTE)hIl2Cpp + CLASS_3_A0D80EE426216AF8_METHOD_3_E82718B50EFFCD4F_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0D80EE426216AF8_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
