#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3913DCD5145F189C_Class_1_AD366E4646E2DDDC;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_3913DCD5145F189C_CLASS_1_3DCEDF76DDCA84D8_METHOD_1_3162B1CC8A52BF11_OFFSET UNITYSDK_OFFSET(0x989D510)
#define CLASS_3_3913DCD5145F189C_CLASS_1_3DCEDF76DDCA84D8__CTOR_OFFSET UNITYSDK_OFFSET(0x989D500)

inline static constexpr unsigned int Class_3_3913DCD5145F189C_Class_1_3DCEDF76DDCA84D8_TypeDefinitionIndex = 67200;

class Class_3_3913DCD5145F189C_Class_1_3DCEDF76DDCA84D8 : public ::System::Object
{
public:
	::Class_3_3913DCD5145F189C_Class_1_AD366E4646E2DDDC* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3913DCD5145F189C_CLASS_1_3DCEDF76DDCA84D8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3162B1CC8A52BF11(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3913DCD5145F189C_CLASS_1_3DCEDF76DDCA84D8_METHOD_1_3162B1CC8A52BF11_OFFSET))(this, a1);
	}
};
