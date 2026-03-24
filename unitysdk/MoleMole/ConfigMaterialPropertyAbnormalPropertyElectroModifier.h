#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x10AAC370)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x10AAC250)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x10AAF230)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x10AABAC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x10AAC5F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x10AAC430)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x10AAC6D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x10AADCE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x10AAD2C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x10AAC970)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x10AAF3D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x10AAF410)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0x10AAF420)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x10AAF430)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x10AAF490)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x10AAF4F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x10AAF560)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x10AAF610)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyElectroModifier_TypeDefinitionIndex = 76982;

	class ConfigMaterialPropertyAbnormalPropertyElectroModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x78
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0xA8
		::UnityEngine::Color _FresnelColorRef; // 0xB0
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0xC0
		::UnityEngine::Color _FresnelColorDefault; // 0xD4
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0xE4
		::UnityEngine::Color _PropertyColorRef; // 0xEC
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0xFC
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x104
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalPropertyElectro; // 0x107
		::System::Single _FresnelFlashingRef; // 0x10C
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x110
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0x118
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0x130
		::System::Single _FresnelFlashingDefault; // 0x144
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x148
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0x15C
		::UnityEngine::Color _PropertyColorDefault; // 0x164
		::UnityEngine::Color _DetailColorDefault; // 0x174
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x184
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0x18C
		::UnityEngine::Color _DetailColorRef; // 0x1A4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
