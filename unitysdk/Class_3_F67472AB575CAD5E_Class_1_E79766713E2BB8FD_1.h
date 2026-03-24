#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B36CB1F1D5FEB799_3;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_F67472AB575CAD5E_CLASS_1_E79766713E2BB8FD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x6FC0AF0)

inline static constexpr unsigned int Class_3_F67472AB575CAD5E_Class_1_E79766713E2BB8FD_1_TypeDefinitionIndex = 40867;

class Class_3_F67472AB575CAD5E_Class_1_E79766713E2BB8FD_1 : public ::System::Object
{
public:
	::Class_3_B36CB1F1D5FEB799_3* Field_1_1; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_CLASS_1_E79766713E2BB8FD_1__CTOR_OFFSET))(this);
	}
};
