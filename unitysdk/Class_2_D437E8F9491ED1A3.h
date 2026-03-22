#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_D437E8F9491ED1A3_METHOD_2_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0xADA2DF0)
#define CLASS_2_D437E8F9491ED1A3_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xADA2CE0)
#define CLASS_2_D437E8F9491ED1A3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xADA2D90)
#define CLASS_2_D437E8F9491ED1A3__CCTOR_OFFSET UNITYSDK_OFFSET(0xADA2C60)
#define CLASS_2_D437E8F9491ED1A3__CTOR_OFFSET UNITYSDK_OFFSET(0xADA2CD0)

inline static constexpr unsigned int Class_2_D437E8F9491ED1A3_TypeDefinitionIndex = 66194;

class Class_2_D437E8F9491ED1A3 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x8D; // 0x0
	::System::UInt32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D437E8F9491ED1A3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D437E8F9491ED1A3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D437E8F9491ED1A3_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D437E8F9491ED1A3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D437E8F9491ED1A3_METHOD_2_8F697642FBF3BDA7_OFFSET))(this, a1);
	}
};
