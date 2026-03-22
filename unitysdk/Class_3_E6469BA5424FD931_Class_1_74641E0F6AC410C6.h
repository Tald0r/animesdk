#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C185D8F088AE6FCE;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_E6469BA5424FD931_CLASS_1_74641E0F6AC410C6_METHOD_1_173FA717CCF51319_OFFSET UNITYSDK_OFFSET(0x6202AB0)
#define CLASS_3_E6469BA5424FD931_CLASS_1_74641E0F6AC410C6__CTOR_OFFSET UNITYSDK_OFFSET(0x6202AA0)

inline static constexpr unsigned int Class_3_E6469BA5424FD931_Class_1_74641E0F6AC410C6_TypeDefinitionIndex = 49186;

class Class_3_E6469BA5424FD931_Class_1_74641E0F6AC410C6 : public ::System::Object
{
public:
	::Class_3_C185D8F088AE6FCE* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6469BA5424FD931_CLASS_1_74641E0F6AC410C6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_173FA717CCF51319(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E6469BA5424FD931_CLASS_1_74641E0F6AC410C6_METHOD_1_173FA717CCF51319_OFFSET))(this, a1);
	}
};
