#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_DA75CE8B42F57105_12_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA07AC60)
#define CLASS_2_DA75CE8B42F57105_12_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xA07AB50)
#define CLASS_2_DA75CE8B42F57105_12_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA07AC00)
#define CLASS_2_DA75CE8B42F57105_12__CCTOR_OFFSET UNITYSDK_OFFSET(0xA07AAD0)
#define CLASS_2_DA75CE8B42F57105_12__CTOR_OFFSET UNITYSDK_OFFSET(0xA07AB40)

inline static constexpr unsigned int Class_2_DA75CE8B42F57105_12_TypeDefinitionIndex = 70107;

class Class_2_DA75CE8B42F57105_12 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0xFB; // 0x0
	::System::Boolean Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_12__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_12__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_12_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_12_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DA75CE8B42F57105_12_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
