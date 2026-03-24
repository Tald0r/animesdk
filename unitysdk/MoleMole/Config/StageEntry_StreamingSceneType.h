#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int StageEntry_StreamingSceneType_TypeDefinitionIndex = 50434;

	enum class StageEntry_StreamingSceneType : ::System::Int32
	{
		GAMEOBJECT_STREAMING = 2,
		MESH_STREAMING = 1,
		NON_STREAMING = 0,
	};
}
