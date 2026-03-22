#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0A576CC5C46ABE18_METHOD_1_CCA3BFDFB79E3D5A_1_OFFSET UNITYSDK_OFFSET(0x6A6C080)
#define CLASS_1_0A576CC5C46ABE18_METHOD_1_CCA3BFDFB79E3D5A_OFFSET UNITYSDK_OFFSET(0x6A6BF30)
#define CLASS_1_0A576CC5C46ABE18_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x6A6C210)
#define CLASS_1_0A576CC5C46ABE18_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x6A6C1D0)
#define CLASS_1_0A576CC5C46ABE18__CCTOR_OFFSET UNITYSDK_OFFSET(0x6A6BF20)

inline static constexpr unsigned int Class_1_0A576CC5C46ABE18_TypeDefinitionIndex = 44184;

class Class_1_0A576CC5C46ABE18 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A576CC5C46ABE18_TypeDefinitionIndex)->GetStaticField(0xC610);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A576CC5C46ABE18_TypeDefinitionIndex)->GetStaticField(0xC611);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A576CC5C46ABE18__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_CCA3BFDFB79E3D5A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A576CC5C46ABE18_METHOD_1_CCA3BFDFB79E3D5A_OFFSET))(a1);
	}

	static ::System::Void Method_1_CCA3BFDFB79E3D5A_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A576CC5C46ABE18_METHOD_1_CCA3BFDFB79E3D5A_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A576CC5C46ABE18_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A576CC5C46ABE18_METHOD_1_F0E307B84478A272_1_OFFSET))();
	}
};
