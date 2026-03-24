#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B9D2FA3DB9A0E660.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_E52029144C0D20EC_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xA0BA430)
#define CLASS_2_E52029144C0D20EC_METHOD_2_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0xA0BA420)
#define CLASS_2_E52029144C0D20EC_METHOD_2_EFD0851545DE631C_OFFSET UNITYSDK_OFFSET(0xA0BA440)
#define CLASS_2_E52029144C0D20EC__CTOR_OFFSET UNITYSDK_OFFSET(0xA0BA410)

inline static constexpr unsigned int Class_2_E52029144C0D20EC_TypeDefinitionIndex = 40243;

class Class_2_E52029144C0D20EC : public ::Class_1_B9D2FA3DB9A0E660
{
public:
	::System::Int32 Field_2_1; // 0x78
	::System::UInt32 Field_2_0; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E52029144C0D20EC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E52029144C0D20EC_METHOD_2_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E52029144C0D20EC_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_2_EFD0851545DE631C()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E52029144C0D20EC_METHOD_2_EFD0851545DE631C_OFFSET))(this);
	}
};
