#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_FC930C99555FF6F2_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xDC2B430)
#define CLASS_2_FC930C99555FF6F2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDC2B5B0)
#define CLASS_2_FC930C99555FF6F2_METHOD_2_E3A452D25792E383_OFFSET UNITYSDK_OFFSET(0xDC2B4E0)
#define CLASS_2_FC930C99555FF6F2__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC2B3B0)
#define CLASS_2_FC930C99555FF6F2__CTOR_OFFSET UNITYSDK_OFFSET(0xDC2B420)

inline static constexpr unsigned int Class_2_FC930C99555FF6F2_TypeDefinitionIndex = 63844;

class Class_2_FC930C99555FF6F2 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x106; // 0x0
	::System::Int32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_E3A452D25792E383(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2_METHOD_2_E3A452D25792E383_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC930C99555FF6F2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
