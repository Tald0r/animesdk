#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_5A77C0880664FC22_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x9E09CF0)
#define CLASS_3_5A77C0880664FC22_METHOD_3_37229AF6570AA9B8_OFFSET UNITYSDK_OFFSET(0x9E09DE0)
#define CLASS_3_5A77C0880664FC22_METHOD_3_59D91A5F9799FC61_OFFSET UNITYSDK_OFFSET(0x9E0A0B0)
#define CLASS_3_5A77C0880664FC22_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9E09FB0)
#define CLASS_3_5A77C0880664FC22_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x9E0A010)
#define CLASS_3_5A77C0880664FC22_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x9E09C80)
#define CLASS_3_5A77C0880664FC22__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E09D50)
#define CLASS_3_5A77C0880664FC22__CTOR_OFFSET UNITYSDK_OFFSET(0x9E09DD0)

inline static constexpr unsigned int Class_3_5A77C0880664FC22_TypeDefinitionIndex = 61269;

class Class_3_5A77C0880664FC22 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0x51; // 0x0
	::System::UInt32 Field_3_1; // 0x48
	::System::Single Field_3_2; // 0x4C
	::System::UInt64 Field_3_0; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5A77C0880664FC22__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A77C0880664FC22__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A77C0880664FC22_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A77C0880664FC22_GETCLASSID_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_37229AF6570AA9B8()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A77C0880664FC22_METHOD_3_37229AF6570AA9B8_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A77C0880664FC22_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_5A77C0880664FC22* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_5A77C0880664FC22*(*)())((::PBYTE)hIl2Cpp + CLASS_3_5A77C0880664FC22_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::MoleMole::Battle::Entity* Method_3_59D91A5F9799FC61()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A77C0880664FC22_METHOD_3_59D91A5F9799FC61_OFFSET))(this);
	}
};
