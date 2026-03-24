#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2CEEE28C4994D8F0_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x66F78F0)
#define CLASS_2_2CEEE28C4994D8F0_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x66F7A90)
#define CLASS_2_2CEEE28C4994D8F0_METHOD_2_BC7A17D2D0FB95FE_OFFSET UNITYSDK_OFFSET(0x66F7B40)
#define CLASS_2_2CEEE28C4994D8F0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x66F7E70)
#define CLASS_2_2CEEE28C4994D8F0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x66F7E10)
#define CLASS_2_2CEEE28C4994D8F0__CCTOR_OFFSET UNITYSDK_OFFSET(0x66F7A10)
#define CLASS_2_2CEEE28C4994D8F0__CTOR_OFFSET UNITYSDK_OFFSET(0x66F7A80)

inline static constexpr unsigned int Class_2_2CEEE28C4994D8F0_TypeDefinitionIndex = 73694;

class Class_2_2CEEE28C4994D8F0 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xBE; // 0x0
	::System::String* Field_2_0; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_2; // 0x28
	::System::Int32 Field_2_1; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2CEEE28C4994D8F0__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CEEE28C4994D8F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CEEE28C4994D8F0_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CEEE28C4994D8F0_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_BC7A17D2D0FB95FE(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_2CEEE28C4994D8F0_METHOD_2_BC7A17D2D0FB95FE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CEEE28C4994D8F0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CEEE28C4994D8F0_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
