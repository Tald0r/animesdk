#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_E43E98799BBF474D_METHOD_3_709CF7B1B9FB703C_OFFSET UNITYSDK_OFFSET(0x973BC90)
#define CLASS_3_E43E98799BBF474D_METHOD_3_84676820B1380184_OFFSET UNITYSDK_OFFSET(0x973BD30)
#define CLASS_3_E43E98799BBF474D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x973C100)
#define CLASS_3_E43E98799BBF474D_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x973B9B0)
#define CLASS_3_E43E98799BBF474D__CTOR_OFFSET UNITYSDK_OFFSET(0x973BF60)

inline static constexpr unsigned int Class_3_E43E98799BBF474D_TypeDefinitionIndex = 79673;

class Class_3_E43E98799BBF474D : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_3_3; // 0x18
	::Class_3_B537A0AA78803363* Field_3_4; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x30
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_709CF7B1B9FB703C(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D_METHOD_3_709CF7B1B9FB703C_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_84676820B1380184(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D_METHOD_3_84676820B1380184_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
