#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CC22F13312585645.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"
#include "unitysdk/System/Object.h"

class Class_1_9610394F487FC231;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_CREATECALCDATA_OFFSET UNITYSDK_OFFSET(0xF2E4580)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTERFROMJOB_OFFSET UNITYSDK_OFFSET(0xF2E4210)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xF2E5260)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xF2E50A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xF2E53B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xF2E5AB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_GET_REALKEEPDURATION_OFFSET UNITYSDK_OFFSET(0xF2E3EE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0xF2E43F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONENTER_OFFSET UNITYSDK_OFFSET(0xF2E4050)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONEXIT_OFFSET UNITYSDK_OFFSET(0xF2E4360)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONKEEP_OFFSET UNITYSDK_OFFSET(0xF2E42F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONVALUECHANGED_CANCARRYINTOBLACKCURTAIN_OFFSET UNITYSDK_OFFSET(0xF2E3E70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xF2E5040)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xF2E5340)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTERWRAP_OFFSET UNITYSDK_OFFSET(0xF2E4470)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xF2E4CC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXITWRAP_OFFSET UNITYSDK_OFFSET(0xF2E4D70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xF2E4E80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSKEEPWRAP_OFFSET UNITYSDK_OFFSET(0xF2E4F30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SETUPMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0xF2E5150)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_1_OFFSET UNITYSDK_OFFSET(0xF2E57D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_2_OFFSET UNITYSDK_OFFSET(0xF2E5870)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_3_OFFSET UNITYSDK_OFFSET(0xF2E5900)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_4_OFFSET UNITYSDK_OFFSET(0xF2E5990)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_5_OFFSET UNITYSDK_OFFSET(0xF2E5A20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_OFFSET UNITYSDK_OFFSET(0xF2E5740)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_1_OFFSET UNITYSDK_OFFSET(0xF2E54A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_2_OFFSET UNITYSDK_OFFSET(0xF2E5530)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_3_OFFSET UNITYSDK_OFFSET(0xF2E55B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_4_OFFSET UNITYSDK_OFFSET(0xF2E5640)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_5_OFFSET UNITYSDK_OFFSET(0xF2E56C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_OFFSET UNITYSDK_OFFSET(0xF2E5420)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xF2E5B10)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyModifier_TypeDefinitionIndex = 55353;

	class ConfigMaterialPropertyModifier : public ::System::Object
	{
	public:
		// static const ::System::Single MAX_DURATION; // 0x0
		::System::String* keepCurveGroupKey; // 0x10
		::UnityEngine::AnimationCurve* exitCurve; // 0x18
		::UnityEngine::AnimationCurve* enterCurve; // 0x20
		::System::Single ExitDuration; // 0x28
		::System::Boolean CanCarryIntoBlackCurtain; // 0x2C
		::System::Boolean IgnoreWorldTimescale; // 0x2D
		::System::Boolean UseQuaSetting; // 0x2E
		::System::Boolean IgnoreWitchTimescale; // 0x2F
		::System::Single EnterDuration; // 0x30
		::MoleMole::Config::MatPropertySetting QuaSetting; // 0x34
		::System::Boolean IgnoreOwnerTimescale; // 0x38
		::System::Boolean ForbidSuspendByBlackCurtain; // 0x39
		::System::Boolean ApplyToAllShaders; // 0x3A
		::System::Int32 Priority; // 0x3C
		::System::Boolean EndPerformWhiteList; // 0x40
		::System::Boolean EndPerformBlackList; // 0x41
		::System::Single KeepDuration; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void OnValueChanged_CanCarryIntoBlackCurtain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONVALUECHANGED_CANCARRYINTOBLACKCURTAIN_OFFSET))(this);
		}

		::System::Single get_RealKeepDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_GET_REALKEEPDURATION_OFFSET))(this);
		}

		::System::Void OnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONENTER_OFFSET))(this, instance);
		}

		::System::Void OnKeep(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONKEEP_OFFSET))(this, instance);
		}

		::System::Void OnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONEXIT_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONDONE_OFFSET))(this, instance);
		}

		::System::Void ProcessEnterWrap(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTERWRAP_OFFSET))(this, instance, timer);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void CreateCalcData(::Class_1_9610394F487FC231* instance, ::System::Single timer, ::Enum_3_CC22F13312585645 state)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single, ::Enum_3_CC22F13312585645))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_CREATECALCDATA_OFFSET))(this, instance, timer, state);
		}

		::System::Void ProcessExitWrap(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXITWRAP_OFFSET))(this, instance, timer);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void ProcessKeepWrap(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSKEEPWRAP_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnterFromJob(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTERFROMJOB_OFFSET))(this, instance);
		}

		::System::Void SetupMaterialInstances(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SETUPMATERIALINSTANCES_OFFSET))(this, instance);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void DoOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONEXIT_OFFSET))(this, instance);
		}

		::System::Void SyncValue(::MoleMole::MaterialPropertyModifierValueFloat& from, ::MoleMole::StaticFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_1(::MoleMole::MaterialPropertyModifierValueTexture& from, ::MoleMole::StaticTextureMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueTexture&, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_1_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_2(::MoleMole::MaterialPropertyModifierValueBool& from, ::MoleMole::StaticBoolMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueBool&, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_2_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_3(::MoleMole::MaterialPropertyModifierValueVector& from, ::MoleMole::StaticVectorMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueVector&, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_3_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_4(::MoleMole::MaterialPropertyModifierValueColor& from, ::MoleMole::StaticColorMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueColor&, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_4_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_5(::MoleMole::MaterialPropertyModifierValueFloat& from, ::MoleMole::StaticKeywordFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_5_OFFSET))(this, from, to);
		}

		::System::Void SyncEnable(::MoleMole::MaterialPropertyModifierValueFloat& from, ::MoleMole::StaticFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::MoleMole::StaticFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_1(::MoleMole::MaterialPropertyModifierValueTexture& from, ::MoleMole::StaticTextureMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueTexture&, ::MoleMole::StaticTextureMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_1_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_2(::MoleMole::MaterialPropertyModifierValueBool& from, ::MoleMole::StaticBoolMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueBool&, ::MoleMole::StaticBoolMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_2_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_3(::MoleMole::MaterialPropertyModifierValueVector& from, ::MoleMole::StaticVectorMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueVector&, ::MoleMole::StaticVectorMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_3_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_4(::MoleMole::MaterialPropertyModifierValueColor& from, ::MoleMole::StaticColorMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueColor&, ::MoleMole::StaticColorMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_4_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_5(::MoleMole::MaterialPropertyModifierValueFloat& from, ::MoleMole::StaticKeywordFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::MoleMole::StaticKeywordFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_5_OFFSET))(this, from, to, stop);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
