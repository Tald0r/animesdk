#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_8CCD896F955E811E_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x6B540F0)
#define CLASS_2_8CCD896F955E811E_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x6B53FE0)
#define CLASS_2_8CCD896F955E811E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6B54090)
#define CLASS_2_8CCD896F955E811E__CCTOR_OFFSET UNITYSDK_OFFSET(0x6B53F60)
#define CLASS_2_8CCD896F955E811E__CTOR_OFFSET UNITYSDK_OFFSET(0x6B53FD0)

inline static constexpr unsigned int Class_2_8CCD896F955E811E_TypeDefinitionIndex = 42350;

class Class_2_8CCD896F955E811E : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x121; // 0x0
	::System::Int32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8CCD896F955E811E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CCD896F955E811E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CCD896F955E811E_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CCD896F955E811E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8CCD896F955E811E_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}
};
