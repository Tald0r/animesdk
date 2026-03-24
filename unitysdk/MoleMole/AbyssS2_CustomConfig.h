#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_CustomConfig_CustomAreaConfig.h"
#include "unitysdk/System/Object.h"

class Class_3_1B2FE1C8AA9234C9_2;
class Class_3_AE02BC8285203464_23;
namespace MoleMole { class AbyssS2_GenRouteMapConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG_CUSTOMDATATOCSDATA_OFFSET UNITYSDK_OFFSET(0xD42E9C0)
#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG_SETSUDDENEVENTINFOBYCURAREAINDEX_OFFSET UNITYSDK_OFFSET(0xD42F7B0)
#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG_VALIDATE_OFFSET UNITYSDK_OFFSET(0xD42E940)
#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x9151BA0)
#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9151B90)
#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG__ONINSPECTUPDATE_OFFSET UNITYSDK_OFFSET(0xD42E7B0)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_CustomConfig_TypeDefinitionIndex = 77500;

	class AbyssS2_CustomConfig : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_custom_AreaID2SceneIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AbyssS2_CustomConfig_TypeDefinitionIndex)->GetStaticField(0x309E0);
		}
		::System::Int32 AreaTotalCount; // 0x10
		::Il2CppArray<::MoleMole::AbyssS2_CustomConfig_CustomAreaConfig>* AreaConfigs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::System::Int32>*>* suddenEventMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG__CCTOR_OFFSET))();
		}

		::System::Void _OnInspectUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG__ONINSPECTUPDATE_OFFSET))(this);
		}

		::System::Boolean Validate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG_VALIDATE_OFFSET))(this);
		}

		::System::Void CustomDataToCsData(::Class_3_1B2FE1C8AA9234C9_2* rfData, ::System::Int32 routeMapID, ::System::Int32 layerIndex, ::System::Boolean isLastLayer, ::MoleMole::AbyssS2_GenRouteMapConfig* genRouteMapConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1B2FE1C8AA9234C9_2*, ::System::Int32, ::System::Int32, ::System::Boolean, ::MoleMole::AbyssS2_GenRouteMapConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG_CUSTOMDATATOCSDATA_OFFSET))(this, rfData, routeMapID, layerIndex, isLastLayer, genRouteMapConfig);
		}

		::System::Void SetSuddenEventInfoByCurAreaIndex(::Class_3_AE02BC8285203464_23* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_23*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG_SETSUDDENEVENTINFOBYCURAREAINDEX_OFFSET))(this, rsp);
		}
	};
}
