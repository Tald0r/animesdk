#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_8DF79805C340EF4E_METHOD_2_916BE5FB272B8DD1_OFFSET UNITYSDK_OFFSET(0xCBEBB80)
#define CLASS_2_8DF79805C340EF4E_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xCBEBA70)
#define CLASS_2_8DF79805C340EF4E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCBEBB20)
#define CLASS_2_8DF79805C340EF4E__CCTOR_OFFSET UNITYSDK_OFFSET(0xCBEB9F0)
#define CLASS_2_8DF79805C340EF4E__CTOR_OFFSET UNITYSDK_OFFSET(0xCBEBA60)

inline static constexpr unsigned int Class_2_8DF79805C340EF4E_TypeDefinitionIndex = 56981;

class Class_2_8DF79805C340EF4E : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x116; // 0x0
	::System::UInt32 Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x24
	::System::Boolean Field_2_2; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8DF79805C340EF4E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DF79805C340EF4E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DF79805C340EF4E_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DF79805C340EF4E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_916BE5FB272B8DD1(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DF79805C340EF4E_METHOD_2_916BE5FB272B8DD1_OFFSET))(this, a1, a2, a3);
	}
};
