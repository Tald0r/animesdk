#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SurfCameraContext.h"
#include "unitysdk/Struct_2_36EB6F1AC5D5C0B3.h"
#include "unitysdk/Struct_2_7E3479235D2579FF.h"
#include "unitysdk/Struct_2_AACEDD85A6FDFBD8.h"
#include "unitysdk/Struct_2_F92440AF7804F46F.h"
#include "unitysdk/Struct_2_FEBD39112B78007F.h"
#include "unitysdk/System/Object.h"

class Class_1_C5F6CE4894BCA161;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigSurfVehicle; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_7ED8DECFCACDA19E_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0xAD9B050)
#define CLASS_1_7ED8DECFCACDA19E__CTOR_OFFSET UNITYSDK_OFFSET(0xAD9AFD0)

inline static constexpr unsigned int Class_1_7ED8DECFCACDA19E_TypeDefinitionIndex = 51131;

class Class_1_7ED8DECFCACDA19E : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_1; // 0x10
	::Struct_2_FEBD39112B78007F Field_1_5; // 0x18
	::MoleMole::Config::ConfigSurfVehicle* Field_1_2; // 0x48
	::Struct_2_7E3479235D2579FF Field_1_6; // 0x50
	::Struct_2_36EB6F1AC5D5C0B3 Field_1_4; // 0xF0
	::Class_1_C5F6CE4894BCA161* Field_1_9; // 0x200
	::MoleMole::Battle::Entity* Field_1_0; // 0x208
	::MoleMole::SurfCameraContext Field_1_7; // 0x210
	::Struct_2_F92440AF7804F46F Field_1_8; // 0x244
	::Struct_2_AACEDD85A6FDFBD8 Field_1_3; // 0x254

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::UnityEngine::GameObject* a2, ::MoleMole::Config::ConfigSurfVehicle* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::MoleMole::Config::ConfigSurfVehicle*))((::PBYTE)hIl2Cpp + CLASS_1_7ED8DECFCACDA19E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ED8DECFCACDA19E_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}
};
