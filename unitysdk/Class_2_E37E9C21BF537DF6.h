#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_E37E9C21BF537DF6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB9B1D60)
#define CLASS_2_E37E9C21BF537DF6_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xB9B1EA0)
#define CLASS_2_E37E9C21BF537DF6_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB9B2070)
#define CLASS_2_E37E9C21BF537DF6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9B2010)
#define CLASS_2_E37E9C21BF537DF6_METHOD_2_E8703B3EC419F1DB_OFFSET UNITYSDK_OFFSET(0xB9B1F50)
#define CLASS_2_E37E9C21BF537DF6__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9B1E20)
#define CLASS_2_E37E9C21BF537DF6__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B1E90)

inline static constexpr unsigned int Class_2_E37E9C21BF537DF6_TypeDefinitionIndex = 60607;

class Class_2_E37E9C21BF537DF6 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x64; // 0x0
	::MoleMole::Battle::Entity* Field_2_0; // 0x20
	::MoleMole::Battle::Entity* Field_2_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_E8703B3EC419F1DB(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6_METHOD_2_E8703B3EC419F1DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
