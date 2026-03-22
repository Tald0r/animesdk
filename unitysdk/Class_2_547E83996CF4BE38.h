#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_8431ED11DDFEB049.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

#define CLASS_2_547E83996CF4BE38_METHOD_2_0D02AF7002A6B470_OFFSET UNITYSDK_OFFSET(0xAB1C490)
#define CLASS_2_547E83996CF4BE38_METHOD_2_A7E1420A21E0295B_OFFSET UNITYSDK_OFFSET(0xAB1C5B0)
#define CLASS_2_547E83996CF4BE38_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xAB1C3E0)
#define CLASS_2_547E83996CF4BE38_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAB1C690)
#define CLASS_2_547E83996CF4BE38__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB1C360)
#define CLASS_2_547E83996CF4BE38__CTOR_OFFSET UNITYSDK_OFFSET(0xAB1C3D0)

inline static constexpr unsigned int Class_2_547E83996CF4BE38_TypeDefinitionIndex = 56674;

class Class_2_547E83996CF4BE38 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_9 = 0x95; // 0x0
	::System::Double Field_2_2; // 0x20
	::System::Boolean Field_2_6; // 0x28
	::System::Boolean Field_2_3; // 0x29
	::System::Boolean Field_2_4; // 0x2A
	::System::Boolean Field_2_5; // 0x2B
	::Enum_3_8431ED11DDFEB049 Field_2_7; // 0x2C
	::System::Single Field_2_1; // 0x30
	::System::UInt32 Field_2_8; // 0x34
	::MoleMole::Config::PropertyModifyFunction Field_2_0; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_547E83996CF4BE38__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_547E83996CF4BE38__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_547E83996CF4BE38_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_0D02AF7002A6B470(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::Enum_3_8431ED11DDFEB049 a7, ::System::UInt32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Enum_3_8431ED11DDFEB049, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_547E83996CF4BE38_METHOD_2_0D02AF7002A6B470_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_A7E1420A21E0295B(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Double a3, ::Enum_3_8431ED11DDFEB049 a4, ::System::Boolean a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Double, ::Enum_3_8431ED11DDFEB049, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_547E83996CF4BE38_METHOD_2_A7E1420A21E0295B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_547E83996CF4BE38_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
