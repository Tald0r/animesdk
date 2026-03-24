#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace MoleMole::Config { class Map3DVisualConfigItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_SCENEMAP3DVISUALCONFIG_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBB05170)
#define MOLEMOLE_CONFIG_SCENEMAP3DVISUALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBB051D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneMap3DVisualConfig_TypeDefinitionIndex = 64159;

	class SceneMap3DVisualConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean enableAutoRefresh; // 0x18
		::UnityEngine::GameObject* fontPrefab; // 0x20
		::UnityEngine::GameObject* fontPrefabEn; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::Map3DVisualConfigItem*>* mapConfigList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAP3DVISUALCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAP3DVISUALCONFIG_ONENABLE_OFFSET))(this);
		}
	};
}
