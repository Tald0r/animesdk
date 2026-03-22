#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Object.h"

class Class_1_15CCFE77B9E12299;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_976C32A5F32B58FC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x9D5E950)
#define CLASS_1_976C32A5F32B58FC_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x9D5E940)
#define CLASS_1_976C32A5F32B58FC_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x9D5E7D0)
#define CLASS_1_976C32A5F32B58FC_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x9D5E8A0)
#define CLASS_1_976C32A5F32B58FC__CTOR_OFFSET UNITYSDK_OFFSET(0x9D5E930)

inline static constexpr unsigned int Class_1_976C32A5F32B58FC_TypeDefinitionIndex = 70989;

class Class_1_976C32A5F32B58FC : public ::System::Object
{
public:
	::Class_1_15CCFE77B9E12299* Field_1_1; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18
	::MoleMole::Config::CampType Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC_METHOD_1_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_15CCFE77B9E12299* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15CCFE77B9E12299*))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_15CCFE77B9E12299* Method_1_24748FC20F375725()
	{
		return ((::Class_1_15CCFE77B9E12299*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_976C32A5F32B58FC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
