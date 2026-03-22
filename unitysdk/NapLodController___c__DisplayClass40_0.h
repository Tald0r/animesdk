#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class NapLodController;
namespace UnityEngine { class Object; }

#define NAPLODCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x99B07C0)
#define NAPLODCONTROLLER___C__DISPLAYCLASS40_0__LOADLODMESHASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x99B07D0)

inline static constexpr unsigned int NapLodController___c__DisplayClass40_0_TypeDefinitionIndex = 37105;

class NapLodController___c__DisplayClass40_0 : public ::System::Object
{
public:
	::NapLodController* __4__this; // 0x10
	::System::Int32 lodLevel; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
	}

	::System::Void _LoadLodMeshAsync_b__0(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle request)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER___C__DISPLAYCLASS40_0__LOADLODMESHASYNC_B__0_OFFSET))(this, asset, request);
	}
};
