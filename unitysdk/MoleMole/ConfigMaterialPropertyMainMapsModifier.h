#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xEC5C9A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xEC5C8E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xEC68DE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xEC5C5D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xEC5CB90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xEC5CA60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xEC5CC40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0xEC64150)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0xEC60350)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0xEC5CE20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xEC691F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xEC69200)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0xEC69210)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xEC69220)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xEC69280)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xEC692E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xEC69350)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xEC69400)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMainMapsModifier_TypeDefinitionIndex = 51932;

	class ConfigMaterialPropertyMainMapsModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OtherDataTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _OtherDataTex2; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _MainTex; // 0xA8
		::MoleMole::MaterialPropertyModifierValueTexture _EyeColorMap; // 0xD8
		::MoleMole::MaterialPropertyModifierValueTexture _LightTex; // 0x108
		::MoleMole::MaterialPropertyModifierValueTexture _ThreadMap; // 0x138
		::MoleMole::MaterialPropertyModifierValueTexture _ChannelMixTex; // 0x168
		::MoleMole::MaterialPropertyModifierValueFloat _MaxOutlineZOffset; // 0x198
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor5; // 0x1A0
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor3; // 0x1B4
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor5; // 0x1C8
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize2; // 0x1DC
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness4; // 0x1E4
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange5; // 0x1EC
		::MoleMole::MaterialPropertyModifierValueFloat _BumpScale; // 0x1F4
		::MoleMole::MaterialPropertyModifierValueColor _BChannelColorPrecomputed; // 0x1FC
		::MoleMole::MaterialPropertyModifierValueFloat _OutlineWidth; // 0x210
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor4; // 0x218
		::MoleMole::MaterialPropertyModifierValueFloat _Emission; // 0x22C
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize3; // 0x234
		::MoleMole::MaterialPropertyModifierValueFloat _SkinMatId; // 0x23C
		::MoleMole::MaterialPropertyModifierValueFloat _Glossiness; // 0x244
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor2; // 0x24C
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor4; // 0x260
		::MoleMole::MaterialPropertyModifierValueFloat _RenderType; // 0x274
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor3; // 0x27C
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor4; // 0x290
		::MoleMole::MaterialPropertyModifierValueFloat _ChannelMixerUsingUV4; // 0x2A4
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor2; // 0x2AC
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity3; // 0x2C0
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor; // 0x2C8
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor2; // 0x2DC
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor3; // 0x2F0
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor; // 0x304
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor5; // 0x318
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange2; // 0x32C
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor5; // 0x334
		::MoleMole::MaterialPropertyModifierValueFloat _SpecIntensity; // 0x348
		::MoleMole::MaterialPropertyModifierValueColor _SilkFresnelColorFront; // 0x350
		::MoleMole::MaterialPropertyModifierValueFloat _SymmetryUV; // 0x364
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape2; // 0x36C
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape3; // 0x374
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape; // 0x37C
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness; // 0x384
		::MoleMole::MaterialPropertyModifierValueColor _AChannelColorPrecomputed; // 0x38C
		::MoleMole::MaterialPropertyModifierValueColor _Color; // 0x3A0
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange3; // 0x3B4
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular5; // 0x3BC
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange4; // 0x3C4
		::MoleMole::MaterialPropertyModifierValueFloat _DoubleSided; // 0x3CC
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor4; // 0x3D4
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize4; // 0x3E8
		::MoleMole::MaterialPropertyModifierValueFloat _OverlayTexScale; // 0x3F0
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity4; // 0x3F8
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape4; // 0x400
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness2; // 0x408
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor; // 0x410
		::MoleMole::MaterialPropertyModifierValueFloat _Metallic; // 0x424
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity2; // 0x42C
		::MoleMole::MaterialPropertyModifierValueFloat _UseOverlayTex; // 0x434
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness4; // 0x43C
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor5; // 0x444
		::MoleMole::MaterialPropertyModifierValueColor _GChannelColorPrecomputed; // 0x458
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor3; // 0x46C
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor; // 0x480
		::UnityEngine::Color _ColorRef; // 0x494
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor3; // 0x4A4
		::MoleMole::MaterialPropertyModifierValueFloat _MaterialNum; // 0x4B8
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular3; // 0x4C0
		::MoleMole::MaterialPropertyModifierValueColor _RChannelColorPrecomputed; // 0x4C8
		::MoleMole::MaterialPropertyModifierValueVector _SilkPackedParams0; // 0x4DC
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular2; // 0x4F4
		::MoleMole::MaterialPropertyModifierValueFloat _Anisotropy; // 0x4FC
		::MoleMole::MaterialPropertyModifierValueFloat _Cull; // 0x504
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular4; // 0x50C
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange; // 0x514
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor2; // 0x51C
		::UnityEngine::Color _ColorDefault; // 0x530
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor2; // 0x540
		::MoleMole::MaterialPropertyModifierValueColor _SilkFresnelColorEdge; // 0x554
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness5; // 0x568
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness3; // 0x570
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor5; // 0x578
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape5; // 0x58C
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness5; // 0x594
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity; // 0x59C
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor2; // 0x5A4
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor3; // 0x5B8
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular; // 0x5CC
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize5; // 0x5D4
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness2; // 0x5DC
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor; // 0x5E4
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor4; // 0x5F8
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor4; // 0x60C
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize; // 0x620
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness; // 0x628
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness3; // 0x630
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor; // 0x638
		::MoleMole::MaterialPropertyModifierValueFloat _UseChannelMixer; // 0x64C
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity5; // 0x654

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
