#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttackDistanceAttenuation; }
namespace System { class Action; }

#define CLASS_1_D6930CD0CD384DC5_CLASS_1_852A7FA1759CBE8B_METHOD_1_A44507DE0382547D_OFFSET UNITYSDK_OFFSET(0x82D5950)
#define CLASS_1_D6930CD0CD384DC5_CLASS_1_852A7FA1759CBE8B__CTOR_OFFSET UNITYSDK_OFFSET(0x82D5940)

inline static constexpr unsigned int Class_1_D6930CD0CD384DC5_Class_1_852A7FA1759CBE8B_TypeDefinitionIndex = 65017;

class Class_1_D6930CD0CD384DC5_Class_1_852A7FA1759CBE8B : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6930CD0CD384DC5_CLASS_1_852A7FA1759CBE8B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A44507DE0382547D(::MoleMole::Config::ConfigAttackDistanceAttenuation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttackDistanceAttenuation*))((::PBYTE)hIl2Cpp + CLASS_1_D6930CD0CD384DC5_CLASS_1_852A7FA1759CBE8B_METHOD_1_A44507DE0382547D_OFFSET))(this, a1);
	}
};
