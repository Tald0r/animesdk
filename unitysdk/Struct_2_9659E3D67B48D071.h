#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/MoleMole/ConfigCameraPosType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_9659E3D67B48D071__CTOR_OFFSET UNITYSDK_OFFSET(0x37F6C0)

inline static constexpr unsigned int Struct_2_9659E3D67B48D071_TypeDefinitionIndex = 71501;

struct alignas(4) Struct_2_9659E3D67B48D071
{
	::MoleMole::ConfigCameraPosType Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14
	::UnityEngine::Quaternion Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x30
	::Cinemachine::LensSettings Field_2_4; // 0x34

	::System::Void _ctor(::MoleMole::ConfigCameraPosType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigCameraPosType))((::PBYTE)hIl2Cpp + STRUCT_2_9659E3D67B48D071__CTOR_OFFSET))(this, a1);
	}
};
