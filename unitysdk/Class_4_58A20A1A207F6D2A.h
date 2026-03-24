#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"

#define CLASS_4_58A20A1A207F6D2A_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xD407F50)
#define CLASS_4_58A20A1A207F6D2A_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0xD4080B0)
#define CLASS_4_58A20A1A207F6D2A_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xD408150)
#define CLASS_4_58A20A1A207F6D2A_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xD408030)
#define CLASS_4_58A20A1A207F6D2A__CCTOR_OFFSET UNITYSDK_OFFSET(0xD407FB0)
#define CLASS_4_58A20A1A207F6D2A__CTOR_OFFSET UNITYSDK_OFFSET(0xD4080A0)

inline static constexpr unsigned int Class_4_58A20A1A207F6D2A_TypeDefinitionIndex = 77573;

class Class_4_58A20A1A207F6D2A : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x126; // 0x0
	::System::Int32 Field_4_3; // 0x50
	::System::Boolean Field_4_2; // 0x54
	::System::Boolean Field_4_1; // 0x55

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_58A20A1A207F6D2A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58A20A1A207F6D2A__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58A20A1A207F6D2A_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58A20A1A207F6D2A_ONCLEAN_OFFSET))(this);
	}

	static ::Class_4_58A20A1A207F6D2A* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_58A20A1A207F6D2A*(*)())((::PBYTE)hIl2Cpp + CLASS_4_58A20A1A207F6D2A_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58A20A1A207F6D2A_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
