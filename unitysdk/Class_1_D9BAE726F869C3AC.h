#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectPool_1; }

#define CLASS_1_D9BAE726F869C3AC_METHOD_1_068B7007D3FD83B2_OFFSET UNITYSDK_OFFSET(0xB772570)
#define CLASS_1_D9BAE726F869C3AC_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xB772340)
#define CLASS_1_D9BAE726F869C3AC_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0xB772420)
#define CLASS_1_D9BAE726F869C3AC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB772230)
#define CLASS_1_D9BAE726F869C3AC__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7722A0)
#define CLASS_1_D9BAE726F869C3AC__CTOR_OFFSET UNITYSDK_OFFSET(0xB7721C0)

inline static constexpr unsigned int Class_1_D9BAE726F869C3AC_TypeDefinitionIndex = 78438;

class Class_1_D9BAE726F869C3AC : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1<::Class_1_D9BAE726F869C3AC*>** StaticGet_Field_1_3()
	{
		return (::Foundation::ObjectPool_1<::Class_1_D9BAE726F869C3AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9BAE726F869C3AC_TypeDefinitionIndex)->GetStaticField(0x27990);
	}
	::System::Boolean Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x11
	::System::Boolean Field_1_0; // 0x12

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9BAE726F869C3AC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9BAE726F869C3AC__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9BAE726F869C3AC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_D9BAE726F869C3AC* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_D9BAE726F869C3AC*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9BAE726F869C3AC_METHOD_1_47FCE72550F759BF_OFFSET))();
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9BAE726F869C3AC_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	static ::Class_1_D9BAE726F869C3AC* Method_1_068B7007D3FD83B2()
	{
		return ((::Class_1_D9BAE726F869C3AC*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9BAE726F869C3AC_METHOD_1_068B7007D3FD83B2_OFFSET))();
	}
};
