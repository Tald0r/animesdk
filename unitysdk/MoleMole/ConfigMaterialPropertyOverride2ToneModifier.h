#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAvatarShaderBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueLightSource.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x15ED0C90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x15ED0B80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x15ED28F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x15ED0600)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x15ED0EE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x15ED0D50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x15ED0FB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x15ED1DE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x15ED17B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x15ED1210)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED2990)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x15ED29C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0x15ED29D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x15ED29E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x15ED2A40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x15ED2AA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x15ED2B10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x15ED2BC0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverride2ToneModifier_TypeDefinitionIndex = 69099;

	class ConfigMaterialPropertyOverride2ToneModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::System::Single _ShiftAngleRef; // 0x48
		::UnityEngine::Color _ColorBRef; // 0x4C
		::MoleMole::MaterialPropertyModifierValueColor _ColorB; // 0x5C
		::MoleMole::MaterialPropertyModifierValueFloat _LerpPosition; // 0x70
		::MoleMole::MaterialPropertyModifierValueFloat _Softness; // 0x78
		::MoleMole::MaterialPropertyModifierValueFloat _ShiftAngle; // 0x80
		::UnityEngine::Color _ColorADefault; // 0x88
		::UnityEngine::Color _ColorARef; // 0x98
		::UnityEngine::Color _ColorBDefault; // 0xA8
		::MoleMole::MaterialPropertyModifierValueBool _Override2ToneMultiplyAlbedo; // 0xB8
		::MoleMole::MaterialPropertyModifierValueBool _Override2Tone; // 0xBB
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode _Override2ToneBlendMode; // 0xBE
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueLightSource _LightSource; // 0xC1
		::System::Single _ShiftAngleDefault; // 0xC4
		::MoleMole::MaterialPropertyModifierValueColor _ColorA; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
