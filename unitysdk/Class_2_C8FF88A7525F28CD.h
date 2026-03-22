#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_C8FF88A7525F28CD_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x15F58E40)
#define CLASS_2_C8FF88A7525F28CD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F58EF0)
#define CLASS_2_C8FF88A7525F28CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F58DC0)
#define CLASS_2_C8FF88A7525F28CD__CTOR_OFFSET UNITYSDK_OFFSET(0x15F58E30)

inline static constexpr unsigned int Class_2_C8FF88A7525F28CD_TypeDefinitionIndex = 48516;

class Class_2_C8FF88A7525F28CD : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0xE9; // 0x0
	::System::Int32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C8FF88A7525F28CD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8FF88A7525F28CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8FF88A7525F28CD_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8FF88A7525F28CD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
