#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigBlackCurtain; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BLACKCURTAINEFFECT_GETCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x86DCE20)
#define BLACKCURTAINEFFECT_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x86DCDC0)
#define BLACKCURTAINEFFECT_GETWHITEENTITYTARGETLIST_OFFSET UNITYSDK_OFFSET(0x86DCE80)
#define BLACKCURTAINEFFECT_GET_CASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x86DC7C0)
#define BLACKCURTAINEFFECT_REFRESHWHITEENTITYTARGETLIST_OFFSET UNITYSDK_OFFSET(0x86DC850)
#define BLACKCURTAINEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x86DC7D0)

inline static constexpr unsigned int BlackCurtainEffect_TypeDefinitionIndex = 62197;

class BlackCurtainEffect : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _whiteEntityTargetList; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* _whiteAbilityTargetKeyList; // 0x18
	::System::String* _key; // 0x20
	::MoleMole::Config::ConfigBlackCurtain* _config; // 0x28
	::System::UInt32 _casterEntityID; // 0x30
	::System::Single _startTick; // 0x34

	::System::Void _ctor(::System::String* key, ::MoleMole::Config::ConfigBlackCurtain* config, ::System::UInt32 casterEntityID, ::System::Collections::Generic::List_1<::System::String*>* whiteAbilityTargetKeyList)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigBlackCurtain*, ::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + BLACKCURTAINEFFECT__CTOR_OFFSET))(this, key, config, casterEntityID, whiteAbilityTargetKeyList);
	}

	::System::UInt32 get_CasterEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINEFFECT_GET_CASTERENTITYID_OFFSET))(this);
	}

	::MoleMole::Config::ConfigBlackCurtain* GetConfig()
	{
		return ((::MoleMole::Config::ConfigBlackCurtain*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINEFFECT_GETCONFIG_OFFSET))(this);
	}

	::System::UInt32 GetCasterEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINEFFECT_GETCASTERENTITYID_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetWhiteEntityTargetList(::System::Boolean forceRefresh)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLACKCURTAINEFFECT_GETWHITEENTITYTARGETLIST_OFFSET))(this, forceRefresh);
	}

	::System::Void RefreshWhiteEntityTargetList()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINEFFECT_REFRESHWHITEENTITYTARGETLIST_OFFSET))(this);
	}
};
