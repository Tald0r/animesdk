#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_8636BE6B2F9E5646_6_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x6AE3020)
#define CLASS_2_8636BE6B2F9E5646_6_METHOD_2_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x6AE3130)
#define CLASS_2_8636BE6B2F9E5646_6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6AE30D0)
#define CLASS_2_8636BE6B2F9E5646_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x6AE2FA0)
#define CLASS_2_8636BE6B2F9E5646_6__CTOR_OFFSET UNITYSDK_OFFSET(0x6AE3010)

inline static constexpr unsigned int Class_2_8636BE6B2F9E5646_6_TypeDefinitionIndex = 57890;

class Class_2_8636BE6B2F9E5646_6 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0xFC; // 0x0
	::System::UInt32 Field_2_1; // 0x20
	::System::UInt32 Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_6_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8636BE6B2F9E5646_6_METHOD_2_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}
};
