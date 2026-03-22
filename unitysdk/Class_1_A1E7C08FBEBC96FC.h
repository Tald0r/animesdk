#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_29DD4BD5303CB66D.h"
#include "unitysdk/Enum_3_AA5E322261F64EE5.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define CLASS_1_A1E7C08FBEBC96FC_METHOD_1_431C96AB333D7413_OFFSET UNITYSDK_OFFSET(0xA1FB3A0)
#define CLASS_1_A1E7C08FBEBC96FC_METHOD_1_711AE774B256F35B_OFFSET UNITYSDK_OFFSET(0xA1FA780)

inline static constexpr unsigned int Class_1_A1E7C08FBEBC96FC_TypeDefinitionIndex = 53760;

class Class_1_A1E7C08FBEBC96FC : public ::System::Object
{
public:
	static ::MoleMole::EntityHandle Method_1_711AE774B256F35B(::System::String* a1, ::UnityEngine::Vector3 a2, ::MoleMole::EntityHandle a3, ::System::String* a4, ::MoleMole::Config::ConfigPosRot* a5, ::System::String* a6, ::Enum_3_29DD4BD5303CB66D a7)
	{
		return ((::MoleMole::EntityHandle(*)(::System::String*, ::UnityEngine::Vector3, ::MoleMole::EntityHandle, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::Enum_3_29DD4BD5303CB66D))((::PBYTE)hIl2Cpp + CLASS_1_A1E7C08FBEBC96FC_METHOD_1_711AE774B256F35B_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Enum_3_AA5E322261F64EE5 Method_1_431C96AB333D7413(::Enum_3_29DD4BD5303CB66D a1, ::Enum_3_AA5E322261F64EE5 a2)
	{
		return ((::Enum_3_AA5E322261F64EE5(*)(::Enum_3_29DD4BD5303CB66D, ::Enum_3_AA5E322261F64EE5))((::PBYTE)hIl2Cpp + CLASS_1_A1E7C08FBEBC96FC_METHOD_1_431C96AB333D7413_OFFSET))(a1, a2);
	}
};
