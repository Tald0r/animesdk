#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3A2432E91B506156;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_CA0FA373359D1930_CLASS_1_4BBC7C5446F593D1__CTOR_OFFSET UNITYSDK_OFFSET(0x8ACBCA0)

inline static constexpr unsigned int Class_3_CA0FA373359D1930_Class_1_4BBC7C5446F593D1_TypeDefinitionIndex = 65594;

class Class_3_CA0FA373359D1930_Class_1_4BBC7C5446F593D1 : public ::System::Object
{
public:
	::Class_2_3A2432E91B506156* Field_1_1; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA0FA373359D1930_CLASS_1_4BBC7C5446F593D1__CTOR_OFFSET))(this);
	}
};
