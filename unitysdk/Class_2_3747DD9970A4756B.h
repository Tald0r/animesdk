#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_3747DD9970A4756B_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xB9E0E50)
#define CLASS_2_3747DD9970A4756B_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xB9E0D40)
#define CLASS_2_3747DD9970A4756B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9E0DF0)
#define CLASS_2_3747DD9970A4756B__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9E0CC0)
#define CLASS_2_3747DD9970A4756B__CTOR_OFFSET UNITYSDK_OFFSET(0xB9E0D30)

inline static constexpr unsigned int Class_2_3747DD9970A4756B_TypeDefinitionIndex = 41838;

class Class_2_3747DD9970A4756B : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0xF9; // 0x0
	::System::UInt32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3747DD9970A4756B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3747DD9970A4756B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3747DD9970A4756B_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3747DD9970A4756B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3747DD9970A4756B_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}
};
