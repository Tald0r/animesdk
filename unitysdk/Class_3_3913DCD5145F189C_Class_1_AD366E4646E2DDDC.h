#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_3913DCD5145F189C_CLASS_1_AD366E4646E2DDDC_METHOD_1_E5D8E2049D17DF55_OFFSET UNITYSDK_OFFSET(0x90D0A70)
#define CLASS_3_3913DCD5145F189C_CLASS_1_AD366E4646E2DDDC__CTOR_OFFSET UNITYSDK_OFFSET(0x90D0A60)

inline static constexpr unsigned int Class_3_3913DCD5145F189C_Class_1_AD366E4646E2DDDC_TypeDefinitionIndex = 63240;

class Class_3_3913DCD5145F189C_Class_1_AD366E4646E2DDDC : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3913DCD5145F189C_CLASS_1_AD366E4646E2DDDC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E5D8E2049D17DF55(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3913DCD5145F189C_CLASS_1_AD366E4646E2DDDC_METHOD_1_E5D8E2049D17DF55_OFFSET))(this, a1);
	}
};
