#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define AUTOLODMESHUTILITY_SMOOTH2FLATSHADING_OFFSET UNITYSDK_OFFSET(0x12445650)
#define AUTOLODMESHUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x12445DF0)

inline static constexpr unsigned int AutoLODMeshUtility_TypeDefinitionIndex = 82132;

class AutoLODMeshUtility : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOLODMESHUTILITY__CTOR_OFFSET))(this);
	}

	static ::System::Void Smooth2FlatShading(::UnityEngine::Mesh* mesh)
	{
		return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + AUTOLODMESHUTILITY_SMOOTH2FLATSHADING_OFFSET))(mesh);
	}
};
