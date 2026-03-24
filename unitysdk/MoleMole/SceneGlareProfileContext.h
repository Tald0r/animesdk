#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"

#define MOLEMOLE_SCENEGLAREPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9852B00)

namespace MoleMole
{
	inline static constexpr unsigned int SceneGlareProfileContext_TypeDefinitionIndex = 39290;

	class SceneGlareProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Boolean IsSceneGlareOn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEGLAREPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
