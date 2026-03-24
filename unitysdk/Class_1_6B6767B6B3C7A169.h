#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_082251DE59B3F291.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_47;

#define CLASS_1_6B6767B6B3C7A169_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0xDA3E9A0)
#define CLASS_1_6B6767B6B3C7A169_POLISH_OFFSET UNITYSDK_OFFSET(0xDA3E7D0)
#define CLASS_1_6B6767B6B3C7A169_RECYCLE_OFFSET UNITYSDK_OFFSET(0xDA3E8C0)
#define CLASS_1_6B6767B6B3C7A169__CTOR_OFFSET UNITYSDK_OFFSET(0xDA3E990)

inline static constexpr unsigned int Class_1_6B6767B6B3C7A169_TypeDefinitionIndex = 60218;

class Class_1_6B6767B6B3C7A169 : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_47* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::Single Field_1_5; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::Enum_3_082251DE59B3F291 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B6767B6B3C7A169__CTOR_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B6767B6B3C7A169_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B6767B6B3C7A169_RECYCLE_OFFSET))(this);
	}

	static ::Class_1_6B6767B6B3C7A169* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_6B6767B6B3C7A169*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B6767B6B3C7A169_METHOD_1_18712DB3B1B723E8_OFFSET))();
	}
};
