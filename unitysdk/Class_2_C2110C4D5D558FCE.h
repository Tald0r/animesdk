#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_C2110C4D5D558FCE_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xBA21240)
#define CLASS_2_C2110C4D5D558FCE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBA212F0)
#define CLASS_2_C2110C4D5D558FCE__CCTOR_OFFSET UNITYSDK_OFFSET(0xBA211C0)
#define CLASS_2_C2110C4D5D558FCE__CTOR_OFFSET UNITYSDK_OFFSET(0xBA21230)

inline static constexpr unsigned int Class_2_C2110C4D5D558FCE_TypeDefinitionIndex = 75934;

class Class_2_C2110C4D5D558FCE : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0xD; // 0x0
	::MoleMole::Battle::Entity* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C2110C4D5D558FCE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2110C4D5D558FCE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2110C4D5D558FCE_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2110C4D5D558FCE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
