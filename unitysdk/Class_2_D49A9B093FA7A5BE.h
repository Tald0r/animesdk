#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_D49A9B093FA7A5BE_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x83E0350)
#define CLASS_2_D49A9B093FA7A5BE_METHOD_2_C3A221BD93074219_OFFSET UNITYSDK_OFFSET(0x83E0400)
#define CLASS_2_D49A9B093FA7A5BE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x83E0480)
#define CLASS_2_D49A9B093FA7A5BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x83E02D0)
#define CLASS_2_D49A9B093FA7A5BE__CTOR_OFFSET UNITYSDK_OFFSET(0x83E0340)

inline static constexpr unsigned int Class_2_D49A9B093FA7A5BE_TypeDefinitionIndex = 42292;

class Class_2_D49A9B093FA7A5BE : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xF; // 0x0
	::System::Int32 Field_2_0; // 0x20
	::System::Boolean Field_2_2; // 0x24
	::System::Int32 Field_2_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D49A9B093FA7A5BE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D49A9B093FA7A5BE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D49A9B093FA7A5BE_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_C3A221BD93074219(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D49A9B093FA7A5BE_METHOD_2_C3A221BD93074219_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D49A9B093FA7A5BE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
