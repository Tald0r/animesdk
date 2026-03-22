#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAbnormalPropertyType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xCDC71F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xCDC70D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xCDCB6B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xCDC6940)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xCDC7470)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xCDC72B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xCDC7550)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0xCDC9680)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0xCDC8690)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0xCDC77E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xCDCB950)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xCDCB990)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0xCDCB9A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xCDCB9B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xCDCBA10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xCDCBA70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xCDCBAE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xCDCBB90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyModifier_TypeDefinitionIndex = 62571;

	class ConfigMaterialPropertyAbnormalPropertyModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapBumpMapFx; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0xA8
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0xD8
		::UnityEngine::Color _FresnelColorDefault; // 0x108
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x118
		::UnityEngine::Color _DetailColorDefault; // 0x12C
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0x13C
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0x144
		::UnityEngine::Color _DetailColorRef; // 0x14C
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0x15C
		::UnityEngine::Color _PropertyColorDefault; // 0x174
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x184
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMask2UVSpeed; // 0x18C
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyNormalUseUV2; // 0x1A4
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x1AC
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0x1C0
		::System::Single _FresnelFlashingDefault; // 0x1C8
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0x1CC
		::UnityEngine::Color _PropertyColorRef; // 0x1E4
		::System::Single _FresnelFlashingRef; // 0x1F4
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0x1F8
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x20C
		::UnityEngine::Color _FresnelColorRef; // 0x214
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0x224
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType _PropertyType; // 0x22C
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalProperty; // 0x22F
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMask2Channel; // 0x232
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x235
		::MoleMole::MaterialPropertyModifierValueVector _PropertyNormalUVSpeed; // 0x238
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x250
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0x258

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
