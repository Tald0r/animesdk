#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueScreenMaskUVType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xF2E5F90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xF2E5E30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xF2E89C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xF2E5B20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xF2E6240)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xF2E6110)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xF2E62F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0xF2E7710)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0xF2E6D90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0xF2E64D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xF2E8B60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xF2E8B70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0xF2E8C50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xF2E8D00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xF2E8D60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xF2E8DC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xF2E8E30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xF2E8EE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyScreenImageModifier_TypeDefinitionIndex = 56611;

	class ConfigMaterialPropertyScreenImageModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _ScreenTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _ScreenMask; // 0x78
		::MoleMole::MaterialPropertyModifierValueVector _BlinkOpacity; // 0xA8
		::MoleMole::MaterialPropertyModifierValueFloat _BlinkFrequency; // 0xC0
		::UnityEngine::Color _ScreenColorDefault; // 0xC8
		::MoleMole::MaterialPropertyModifierValueColor _ScreenColor; // 0xD8
		::UnityEngine::Color _ScreenColorRef; // 0xEC
		::MoleMole::MaterialPropertyModifierValueBool _ScreenImage; // 0xFC
		::MoleMole::MaterialPropertyModifierValueBool _ScreenScale; // 0xFF
		::MoleMole::MaterialPropertyModifierValueBool _UseInvSecondaryEmissionMask; // 0x102
		::MoleMole::MaterialPropertyModifierValueBool _MultiplySrcColor; // 0x105
		::MoleMole::MaterialPropertyModifierValueVector _ScreenImageUvMove; // 0x108
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalVSpeedFx; // 0x120
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapBlendModeFx; // 0x128
		::MoleMole::MaterialPropertyModifierValueBool _Blink; // 0x130
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType _ScreenMaskUV; // 0x133

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
