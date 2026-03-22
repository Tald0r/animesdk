#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetStruct.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_6D5CD03082A26889;
class UGUIMeshRender;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOUITEXTURESHEETPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9ABBAE0)
#define MOLEMOLE_MONOUITEXTURESHEETPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9ABBF50)
#define MOLEMOLE_MONOUITEXTURESHEETPLAYER_STARTPLAYTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x9ABBB50)
#define MOLEMOLE_MONOUITEXTURESHEETPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9ABC0B0)
#define MOLEMOLE_MONOUITEXTURESHEETPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x9ABC130)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITextureSheetPlayer_TypeDefinitionIndex = 38476;

	class MonoUITextureSheetPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UGUIMeshRender* targetRenderer; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::TextureSheetStruct>* sheetList; // 0x20
		::Class_2_6D5CD03082A26889* player; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTURESHEETPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTURESHEETPLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTURESHEETPLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTURESHEETPLAYER_UPDATE_OFFSET))(this);
		}

		::System::Void StartPlayTextureSheet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTURESHEETPLAYER_STARTPLAYTEXTURESHEET_OFFSET))(this);
		}
	};
}
