#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCSoftAssetPath_1.h"

namespace UnityEngine { class Material; }

#define NPCSOFTMATERIALPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9EC3280)
#define NPCSOFTMATERIALPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC3240)

inline static constexpr unsigned int NPCSoftMaterialPath_TypeDefinitionIndex = 61743;

class NPCSoftMaterialPath : public ::NPCSoftAssetPath_1<::UnityEngine::Material*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCSOFTMATERIALPATH__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Foundation::AssetPath path)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NPCSOFTMATERIALPATH__CTOR_1_OFFSET))(this, path);
	}
};
