#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

#define CLASS_2_186B4E1BC116EFF3_METHOD_2_122857B23140B7E4_OFFSET UNITYSDK_OFFSET(0x8031F60)
#define CLASS_2_186B4E1BC116EFF3_METHOD_2_9340052D4180D214_OFFSET UNITYSDK_OFFSET(0x8032030)
#define CLASS_2_186B4E1BC116EFF3_METHOD_2_B80FC59DE8797E13_OFFSET UNITYSDK_OFFSET(0x8032040)
#define CLASS_2_186B4E1BC116EFF3_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x8031EB0)
#define CLASS_2_186B4E1BC116EFF3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8032050)
#define CLASS_2_186B4E1BC116EFF3__CCTOR_OFFSET UNITYSDK_OFFSET(0x8031E30)
#define CLASS_2_186B4E1BC116EFF3__CTOR_OFFSET UNITYSDK_OFFSET(0x8031EA0)

inline static constexpr unsigned int Class_2_186B4E1BC116EFF3_TypeDefinitionIndex = 73013;

class Class_2_186B4E1BC116EFF3 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x57; // 0x0
	::MoleMole::Config::EntityType Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_122857B23140B7E4(::System::UInt32 a1, ::MoleMole::Config::EntityType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_122857B23140B7E4_OFFSET))(this, a1, a2);
	}

	::MoleMole::Config::EntityType Method_2_9340052D4180D214()
	{
		return ((::MoleMole::Config::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_9340052D4180D214_OFFSET))(this);
	}

	::System::Void Method_2_B80FC59DE8797E13(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_B80FC59DE8797E13_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
