#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyOutlineCampType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class BuddyCampOutlineConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_BUDDYOUTLINECONFIG_GET_SHOWOUTLINE_OFFSET UNITYSDK_OFFSET(0x1398F070)
#define MOLEMOLE_CONFIG_BUDDYOUTLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1398F110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyOutlineConfig_TypeDefinitionIndex = 47069;

	class BuddyOutlineConfig : public ::System::Object
	{
	public:
		static ::MoleMole::Config::BuddyOutlineConfig** StaticGet_Ins()
		{
			return (::MoleMole::Config::BuddyOutlineConfig**)Il2CppClass::FromTypeDefinitionIndex(BuddyOutlineConfig_TypeDefinitionIndex)->GetStaticField(0x3A270);
		}
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyOutlineCampType, ::MoleMole::Config::BuddyCampOutlineConfig*>* CampConfigs; // 0x10
		::System::Single InnerColorIntensity; // 0x18
		::System::Single OutlineThickness; // 0x1C
		::System::Boolean DisableOutline; // 0x20
		::System::Boolean FillInnerBehindScene; // 0x21
		::System::Boolean FillInner; // 0x22
		::UnityEngine::Color InnerColor; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYOUTLINECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowOutline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYOUTLINECONFIG_GET_SHOWOUTLINE_OFFSET))(this);
		}
	};
}
