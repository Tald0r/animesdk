#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelGlobalAIModule; }
namespace MoleMole::Config { class LevelGlobalAIScriptConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA_GETALLLEVELGLOBALAIMODULEKEY_OFFSET UNITYSDK_OFFSET(0xE441710)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA_GETLEVELGLOBALAIMODULE_OFFSET UNITYSDK_OFFSET(0xE4414C0)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA_GETSIZEGATHERSTRENGTH_OFFSET UNITYSDK_OFFSET(0xE441AA0)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA_GETSIZESEPARATESTRENGTH_OFFSET UNITYSDK_OFFSET(0xE4418E0)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0xE441110)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0xE441220)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE441C60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalAIScriptConfigData_TypeDefinitionIndex = 63667;

	class LevelGlobalAIScriptConfigData : public ::System::Object
	{
	public:
		static ::MoleMole::Config::LevelGlobalAIScriptConfig** StaticGet__config()
		{
			return (::MoleMole::Config::LevelGlobalAIScriptConfig**)Il2CppClass::FromTypeDefinitionIndex(LevelGlobalAIScriptConfigData_TypeDefinitionIndex)->GetStaticField(0x2F820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA__CCTOR_OFFSET))();
		}

		static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
		}

		static ::System::Void ReloadFromFile(::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA_RELOADFROMFILE_OFFSET))(isAync, complete);
		}

		static ::MoleMole::Config::LevelGlobalAIModule* GetLevelGlobalAIModule(::System::String* aiModuleKey)
		{
			return ((::MoleMole::Config::LevelGlobalAIModule*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA_GETLEVELGLOBALAIMODULE_OFFSET))(aiModuleKey);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetAllLevelGlobalAIModuleKey()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA_GETALLLEVELGLOBALAIMODULEKEY_OFFSET))();
		}

		static ::System::Single GetSizeSeparateStrength(::MoleMole::Config::CharacterSize ownerSize, ::MoleMole::Config::CharacterSize targetSize)
		{
			return ((::System::Single(*)(::MoleMole::Config::CharacterSize, ::MoleMole::Config::CharacterSize))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA_GETSIZESEPARATESTRENGTH_OFFSET))(ownerSize, targetSize);
		}

		static ::System::Single GetSizeGatherStrength(::MoleMole::Config::CharacterSize ownerSize, ::MoleMole::Config::CharacterSize targetSize)
		{
			return ((::System::Single(*)(::MoleMole::Config::CharacterSize, ::MoleMole::Config::CharacterSize))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA_GETSIZEGATHERSTRENGTH_OFFSET))(ownerSize, targetSize);
		}
	};
}
