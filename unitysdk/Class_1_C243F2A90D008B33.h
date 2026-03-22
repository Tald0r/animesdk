#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_502;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_C243F2A90D008B33_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x75D2230)
#define CLASS_1_C243F2A90D008B33_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x75D20F0)
#define CLASS_1_C243F2A90D008B33_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x75D2160)
#define CLASS_1_C243F2A90D008B33_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x75D21C0)
#define CLASS_1_C243F2A90D008B33_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x75D2080)
#define CLASS_1_C243F2A90D008B33_METHOD_1_D5381C4D5C81D92E_OFFSET UNITYSDK_OFFSET(0x75D2000)
#define CLASS_1_C243F2A90D008B33__CTOR_OFFSET UNITYSDK_OFFSET(0x75D2220)

inline static constexpr unsigned int Class_1_C243F2A90D008B33_TypeDefinitionIndex = 63348;

class Class_1_C243F2A90D008B33 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_502* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C243F2A90D008B33__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D5381C4D5C81D92E(::Class_0_16E4307DCC419505_502* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_502*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_C243F2A90D008B33_METHOD_1_D5381C4D5C81D92E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C243F2A90D008B33_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C243F2A90D008B33_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C243F2A90D008B33_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C243F2A90D008B33_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C243F2A90D008B33_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}
};
