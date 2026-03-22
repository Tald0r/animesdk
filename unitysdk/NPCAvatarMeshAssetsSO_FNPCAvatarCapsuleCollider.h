#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LevelTriggerShapParam_Enum_3_F9DFE8C50F0F31D9.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_ColliderType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class PhysicMaterial; }

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider_TypeDefinitionIndex = 62307;

struct alignas(8) NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider
{
	::System::String* key; // 0x10
	::UnityEngine::LayerMask layerMask; // 0x18
	::NPCAvatarMeshAssetsSO_ColliderType colliderType; // 0x1C
	::UnityEngine::Vector3 center; // 0x20
	::System::Single radius; // 0x2C
	::System::Single height; // 0x30
	::MoleMole::LevelTriggerShapParam_Enum_3_F9DFE8C50F0F31D9 direction; // 0x34
	::UnityEngine::Vector3 size; // 0x38
	::UnityEngine::PhysicMaterial* material; // 0x48
};
