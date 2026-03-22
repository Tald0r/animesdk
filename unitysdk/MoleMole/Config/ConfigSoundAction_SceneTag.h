#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x805DB70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_ISMATCH_OFFSET UNITYSDK_OFFSET(0x805DF20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x805DFD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x805DFC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x805E090)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SceneTag_TypeDefinitionIndex = 46204;

	class ConfigSoundAction_SceneTag : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_operateTypes()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SceneTag_TypeDefinitionIndex)->GetStaticField(0x384F0);
		}
		::System::String* tag; // 0x20
		::System::Int32 operateType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG__CCTOR_OFFSET))();
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
