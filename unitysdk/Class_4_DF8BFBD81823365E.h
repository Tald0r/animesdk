#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/MoleMole/HollowEntityConfig_CampType.h"

#define CLASS_4_DF8BFBD81823365E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xA0C5820)
#define CLASS_4_DF8BFBD81823365E_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0xA0C5980)
#define CLASS_4_DF8BFBD81823365E_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA0C5A20)
#define CLASS_4_DF8BFBD81823365E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xA0C5900)
#define CLASS_4_DF8BFBD81823365E__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0C5880)
#define CLASS_4_DF8BFBD81823365E__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C5970)

inline static constexpr unsigned int Class_4_DF8BFBD81823365E_TypeDefinitionIndex = 39530;

class Class_4_DF8BFBD81823365E : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x11E; // 0x0
	::System::Int32 Field_4_3; // 0x50
	::System::Boolean Field_4_1; // 0x54
	::MoleMole::HollowEntityConfig_CampType Field_4_4; // 0x58
	::System::Int32 Field_4_2; // 0x5C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_DF8BFBD81823365E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DF8BFBD81823365E__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DF8BFBD81823365E_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DF8BFBD81823365E_ONCLEAN_OFFSET))(this);
	}

	static ::Class_4_DF8BFBD81823365E* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_DF8BFBD81823365E*(*)())((::PBYTE)hIl2Cpp + CLASS_4_DF8BFBD81823365E_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DF8BFBD81823365E_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
