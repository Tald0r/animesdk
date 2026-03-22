#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_757A5862D4BBEE41_1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_E57D4C5FD13B86C5_CLASS_1_B87FEAA67D66DAF7_METHOD_1_5DE5C10B930C1655_OFFSET UNITYSDK_OFFSET(0x760A3C0)
#define CLASS_3_E57D4C5FD13B86C5_CLASS_1_B87FEAA67D66DAF7__CTOR_OFFSET UNITYSDK_OFFSET(0x760A3B0)

inline static constexpr unsigned int Class_3_E57D4C5FD13B86C5_Class_1_B87FEAA67D66DAF7_TypeDefinitionIndex = 72949;

class Class_3_E57D4C5FD13B86C5_Class_1_B87FEAA67D66DAF7 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Class_3_757A5862D4BBEE41_1* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E57D4C5FD13B86C5_CLASS_1_B87FEAA67D66DAF7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5DE5C10B930C1655(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E57D4C5FD13B86C5_CLASS_1_B87FEAA67D66DAF7_METHOD_1_5DE5C10B930C1655_OFFSET))(this, a1);
	}
};
