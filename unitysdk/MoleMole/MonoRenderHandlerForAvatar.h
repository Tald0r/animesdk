#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8855AD768EB2675C.h"
#include "unitysdk/MoleMole/MonoRenderHandler.h"
#include "unitysdk/MoleMole/MonoRenderHandlerForAvatar_Struct_2_7952382059FE8D18.h"
#include "unitysdk/MoleMole/MonoRenderHandlerForAvatar_Struct_2_E6333E5B8A276D86.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8019128448F0E9D5;
class Class_1_9610394F487FC231;
class Class_1_A0B58236B258B7B2;
namespace MoleMole { class MonoRenderHandlerForAvatar_Class_1_6B9016F809CC5577; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_FORCEUPDATEFXCLIP_OFFSET UNITYSDK_OFFSET(0xC23A150)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_INVALIDATEUPDATESWITCHCACHE_OFFSET UNITYSDK_OFFSET(0xC23A0E0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_2FBA3D05C069B62E_OFFSET UNITYSDK_OFFSET(0xB2E7150)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_34FCC3BBBC925A82_OFFSET UNITYSDK_OFFSET(0xB2E6800)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0xB2EA230)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_4A001F27E8ECB274_OFFSET UNITYSDK_OFFSET(0xB2E5930)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_4D8DE63ACD68BAC3_OFFSET UNITYSDK_OFFSET(0xB2E7E10)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_4D9CF8B767C64CC8_OFFSET UNITYSDK_OFFSET(0xB2E9760)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_5D5F16A6230C8F33_OFFSET UNITYSDK_OFFSET(0xB2E57A0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0xC2399B0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_6C1C4CBB2C90871C_OFFSET UNITYSDK_OFFSET(0xB2EA140)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_6D3FB7CC639EF394_OFFSET UNITYSDK_OFFSET(0xB2EC660)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_77E3CF907BA6F8B7_OFFSET UNITYSDK_OFFSET(0xB2ECE40)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_7F349DA94A1B78DF_OFFSET UNITYSDK_OFFSET(0xB2E5CC0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_82B605ACB448F4B0_OFFSET UNITYSDK_OFFSET(0xB2E4710)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_83D69C60802E274D_OFFSET UNITYSDK_OFFSET(0xB2EAD70)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_96B03403C56455CD_OFFSET UNITYSDK_OFFSET(0xB2E91C0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_A476CAA54063C150_OFFSET UNITYSDK_OFFSET(0xB2E83B0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0xC23ACF0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_CC6DB8EC922ACB38_OFFSET UNITYSDK_OFFSET(0xB2E7BE0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_D41D7B87AEBE6BD0_OFFSET UNITYSDK_OFFSET(0xB2E8E50)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_E12043F46AB48C94_OFFSET UNITYSDK_OFFSET(0xB2E5610)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_E9D90F1C7434F23D_OFFSET UNITYSDK_OFFSET(0xB2E5700)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_F38D8B4A37B7184A_OFFSET UNITYSDK_OFFSET(0xB2ECAF0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC23A3B0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_REVERTSHADER_OFFSET UNITYSDK_OFFSET(0xC23A460)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDSFORCUTSCENETIMELINE_OFFSET UNITYSDK_OFFSET(0xC23A920)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDS_OFFSET UNITYSDK_OFFSET(0xC23A640)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPALLMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0xC2394E0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0xC23AC80)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xC239A70)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_1_OFFSET UNITYSDK_OFFSET(0xC239B60)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_2_OFFSET UNITYSDK_OFFSET(0xC239BE0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_3_OFFSET UNITYSDK_OFFSET(0xC239C60)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_4_OFFSET UNITYSDK_OFFSET(0xC239CE0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_5_OFFSET UNITYSDK_OFFSET(0xC239D60)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_6_OFFSET UNITYSDK_OFFSET(0xC239DE0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_OFFSET UNITYSDK_OFFSET(0xC239AE0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_UPDATECOMMONSWITCH_OFFSET UNITYSDK_OFFSET(0xC239EC0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2E1400)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xC23ADB0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_DOONDESTROY_OFFSET UNITYSDK_OFFSET(0xB2E4110)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB2E4120)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPALLDEFAULTMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0xB2E4180)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPALLMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0xB2E41E0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0xB2E4240)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xB2E42B0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_1_OFFSET UNITYSDK_OFFSET(0xB2E43A0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_2_OFFSET UNITYSDK_OFFSET(0xB2E4420)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_3_OFFSET UNITYSDK_OFFSET(0xB2E44A0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_4_OFFSET UNITYSDK_OFFSET(0xB2E4530)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_5_OFFSET UNITYSDK_OFFSET(0xB2E45B0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_6_OFFSET UNITYSDK_OFFSET(0xB2E4630)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_OFFSET UNITYSDK_OFFSET(0xB2E4320)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_UPDATECOMMONSWITCH_OFFSET UNITYSDK_OFFSET(0xB2E46B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandlerForAvatar_TypeDefinitionIndex = 54384;

	class MonoRenderHandlerForAvatar : public ::MoleMole::MonoRenderHandler
	{
	public:
		static ::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Struct_2_E6333E5B8A276D86>** StaticGet_Field_6_319()
		{
			return (::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Struct_2_E6333E5B8A276D86>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x43FE0);
		}
		static ::Il2CppArray<::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Class_1_6B9016F809CC5577*>*>** StaticGet_Field_6_320()
		{
			return (::Il2CppArray<::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Class_1_6B9016F809CC5577*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x43FE8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_Field_6_318()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x43FF0);
		}
		static ::System::Int32* StaticGet_Field_6_285()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11310);
		}
		static ::System::Int32* StaticGet_Field_6_289()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11314);
		}
		static ::System::UInt32* StaticGet_Field_6_306()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11318);
		}
		static ::System::UInt32* StaticGet_Field_6_303()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1131C);
		}
		static ::System::Int32* StaticGet_Field_6_283()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11320);
		}
		static ::System::UInt32* StaticGet_Field_6_300()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11324);
		}
		static ::System::UInt32* StaticGet_Field_6_313()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11328);
		}
		static ::System::Int32* StaticGet_Field_6_295()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1132C);
		}
		static ::System::Int32* StaticGet_Field_6_291()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11330);
		}
		static ::System::UInt32* StaticGet_Field_6_312()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11334);
		}
		static ::System::UInt32* StaticGet_Field_6_297()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11338);
		}
		static ::System::Int32* StaticGet_Field_6_286()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1133C);
		}
		static ::System::UInt32* StaticGet_Field_6_317()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11340);
		}
		static ::System::Int32* StaticGet_Field_6_294()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11344);
		}
		static ::System::Int32* StaticGet_Field_6_296()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11348);
		}
		static ::System::UInt32* StaticGet_Field_6_302()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1134C);
		}
		static ::System::Int32* StaticGet_Field_6_276()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11350);
		}
		static ::System::Int32* StaticGet_Field_6_284()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11354);
		}
		static ::System::Int32* StaticGet_Field_6_278()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11358);
		}
		static ::System::UInt32* StaticGet_Field_6_304()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1135C);
		}
		static ::System::Int32* StaticGet_Field_6_277()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11360);
		}
		static ::System::UInt32* StaticGet_Field_6_316()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11364);
		}
		static ::System::UInt32* StaticGet_Field_6_307()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11368);
		}
		static ::System::UInt32* StaticGet_Field_6_309()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1136C);
		}
		static ::System::UInt32* StaticGet_Field_6_299()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11370);
		}
		static ::System::Int32* StaticGet_Field_6_292()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11374);
		}
		static ::System::UInt32* StaticGet_Field_6_315()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11378);
		}
		static ::System::Int32* StaticGet_Field_6_279()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1137C);
		}
		static ::System::UInt32* StaticGet_Field_6_314()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11380);
		}
		static ::System::UInt32* StaticGet_Field_6_308()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11384);
		}
		static ::System::UInt32* StaticGet_Field_6_298()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11388);
		}
		static ::System::UInt32* StaticGet_Field_6_311()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1138C);
		}
		static ::System::Int32* StaticGet_Field_6_290()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11390);
		}
		static ::System::UInt32* StaticGet_Field_6_310()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11394);
		}
		static ::System::Int32* StaticGet_Field_6_281()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11398);
		}
		static ::System::UInt32* StaticGet_Field_6_301()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1139C);
		}
		static ::System::Int32* StaticGet_Field_6_287()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x113A0);
		}
		static ::System::Int32* StaticGet_Field_6_280()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x113A4);
		}
		static ::System::Int32* StaticGet_Field_6_282()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x113A8);
		}
		static ::System::Int32* StaticGet_Field_6_288()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x113AC);
		}
		static ::System::Int32* StaticGet_Field_6_293()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x113B0);
		}
		static ::System::UInt32* StaticGet_Field_6_305()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x113B4);
		}
		::MoleMole::StaticBoolMaterialModifier _Transition; // 0xC8
		::MoleMole::StaticFloatMaterialModifier _TransitionCompletion; // 0xE0
		::MoleMole::StaticTextureMaterialModifier _TransitionTex; // 0x100
		::MoleMole::StaticBoolMaterialModifier _OverrideOutlineUseUV2; // 0x130
		::MoleMole::StaticFloatMaterialModifier _TransitionWidth; // 0x148
		::MoleMole::StaticColorMaterialModifier _TransitionColor; // 0x168
		::MoleMole::StaticTextureMaterialModifier _OverrideOutlineTex; // 0x1A0
		::MoleMole::StaticBoolMaterialModifier _ClipPlane; // 0x1D0
		::MoleMole::StaticBoolMaterialModifier _HardLight; // 0x1E8
		::MoleMole::StaticFloatMaterialModifier _HardLightWidth; // 0x200
		::MoleMole::StaticColorMaterialModifier _HardLightColor; // 0x220
		::MoleMole::StaticBoolMaterialModifier _SoftLight; // 0x258
		::MoleMole::StaticFloatMaterialModifier _SoftLightWidth; // 0x270
		::MoleMole::StaticColorMaterialModifier _SoftLightColor; // 0x290
		::MoleMole::StaticBoolMaterialModifier _PlaneClipReverse; // 0x2C8
		::MoleMole::StaticBoolMaterialModifier _ClipPlaneXZ; // 0x2E0
		::MoleMole::StaticBoolMaterialModifier _ReversePlaneXZ; // 0x2F8
		::MoleMole::StaticFloatMaterialModifier _DitherAlpha2; // 0x310
		::MoleMole::StaticVectorMaterialModifier _FxTransparentValue; // 0x330
		::MoleMole::StaticBoolMaterialModifier _Glitch; // 0x358
		::MoleMole::StaticTextureMaterialModifier _BlockMaskTex; // 0x370
		::MoleMole::StaticBoolMaterialModifier _ScreenScale; // 0x3A0
		::MoleMole::StaticColorMaterialModifier _BlockColorA; // 0x3B8
		::MoleMole::StaticColorMaterialModifier _BlockColorB; // 0x3F0
		::MoleMole::StaticColorMaterialModifier _BlockColorC; // 0x428
		::MoleMole::StaticColorMaterialModifier _BlockColorD; // 0x460
		::MoleMole::StaticBoolMaterialModifier _Override2Tone; // 0x498
		::MoleMole::StaticFloatMaterialModifier _LightSource; // 0x4B0
		::MoleMole::StaticFloatMaterialModifier _ShiftAngle; // 0x4D0
		::MoleMole::StaticColorMaterialModifier _ColorA; // 0x4F0
		::MoleMole::StaticColorMaterialModifier _ColorB; // 0x528
		::MoleMole::StaticFloatMaterialModifier _LerpPosition; // 0x560
		::MoleMole::StaticFloatMaterialModifier _Softness; // 0x580
		::MoleMole::StaticBoolMaterialModifier _Override2ToneMultiplyAlbedo; // 0x5A0
		::MoleMole::StaticFloatMaterialModifier _Override2ToneBlendMode; // 0x5B8
		::MoleMole::StaticBoolMaterialModifier _Override; // 0x5D8
		::MoleMole::StaticColorMaterialModifier _OverrideColor; // 0x5F0
		::MoleMole::StaticBoolMaterialModifier _OverrideOutline; // 0x628
		::MoleMole::StaticColorMaterialModifier _OverrideOutlineColor; // 0x640
		::MoleMole::StaticVectorMaterialModifier _OverrideOutlineSpeed; // 0x678
		::MoleMole::StaticFloatMaterialModifier _OutlineWidth; // 0x6A0
		::MoleMole::StaticBoolMaterialModifier _OverrideRimGlow; // 0x6C0
		::MoleMole::StaticFloatMaterialModifier _OverrideRimGlowMode; // 0x6D8
		::MoleMole::StaticColorMaterialModifier _OverrideRimGlowColor; // 0x6F8
		::MoleMole::StaticTextureMaterialModifier _OverrideRimGlowTexFX; // 0x730
		::MoleMole::StaticFloatMaterialModifier _OverrideRimGlowUseUV2; // 0x760
		::MoleMole::StaticVectorMaterialModifier _OverrideRimGlowSpeed; // 0x780
		::MoleMole::StaticFloatMaterialModifier _PropertyTexUseUV2; // 0x7A8
		::MoleMole::StaticColorMaterialModifier _FresnelColor; // 0x7C8
		::MoleMole::StaticColorMaterialModifier _DetailColor; // 0x800
		::MoleMole::StaticFloatMaterialModifier _FresnelWidth; // 0x838
		::MoleMole::StaticFloatMaterialModifier _PropertyMaskUseUV2; // 0x858
		::MoleMole::StaticFloatMaterialModifier _PropertyMask2UseUV2; // 0x878
		::MoleMole::StaticFloatMaterialModifier _PropertyMaskChannel; // 0x898
		::MoleMole::StaticBoolMaterialModifier _ScreenImage; // 0x8B8
		::MoleMole::StaticBoolMaterialModifier _MultiplySrcColor; // 0x8D0
		::MoleMole::StaticColorMaterialModifier _ScreenColor; // 0x8E8
		::MoleMole::StaticTextureMaterialModifier _ScreenTex; // 0x920
		::MoleMole::StaticTextureMaterialModifier _ScreenMask; // 0x950
		::MoleMole::StaticFloatMaterialModifier _ScreenMaskUV; // 0x980
		::MoleMole::StaticBoolMaterialModifier _UseInvSecondaryEmissionMask; // 0x9A0
		::MoleMole::StaticVectorMaterialModifier _ScreenImageUvMove; // 0x9B8
		::MoleMole::StaticFloatMaterialModifier _MatCapNormalVSpeedFx; // 0x9E0
		::MoleMole::StaticFloatMaterialModifier _MatCapBlendModeFx; // 0xA00
		::MoleMole::StaticBoolMaterialModifier _Blink; // 0xA20
		::MoleMole::StaticFloatMaterialModifier _BlinkFrequency; // 0xA38
		::MoleMole::StaticVectorMaterialModifier _BlinkOpacity; // 0xA58
		::MoleMole::StaticBoolMaterialModifier _SecondaryEmission; // 0xA80
		::MoleMole::StaticBoolMaterialModifier _SecondaryEmissionUseUV2; // 0xA98
		::MoleMole::StaticBoolMaterialModifier _SecondaryEmissionMultiplyAlbedo; // 0xAB0
		::MoleMole::StaticFloatMaterialModifier _MatCapUSpeedFx; // 0xAC8
		::MoleMole::StaticColorMaterialModifier _MatCapColorTintFx; // 0xAE8
		::MoleMole::StaticFloatMaterialModifier _SecondaryEmissionChannel; // 0xB20
		::MoleMole::StaticFloatMaterialModifier _SecondaryEmissionMaskChannel; // 0xB40
		::MoleMole::StaticTextureMaterialModifier _SecondaryEmissionTex; // 0xB60
		::MoleMole::StaticColorMaterialModifier _SecondaryEmissionColor; // 0xB90
		::MoleMole::StaticTextureMaterialModifier _SecondaryEmissionMaskTex; // 0xBC8
		::MoleMole::StaticVectorMaterialModifier _SecondaryEmissionTexSpeed; // 0xBF8
		::MoleMole::StaticFloatMaterialModifier _MatCapBumpScaleFx; // 0xC20
		::MoleMole::StaticFloatMaterialModifier _MatCapFX; // 0xC40
		::MoleMole::StaticBoolMaterialModifier _VertexStretch; // 0xC60
		::MoleMole::StaticTextureMaterialModifier _StretchMask; // 0xC78
		::MoleMole::StaticFloatMaterialModifier _NormalThreshold; // 0xCA8
		::MoleMole::StaticFloatMaterialModifier _StretchDistance; // 0xCC8
		::MoleMole::StaticVectorMaterialModifier _StretchVector; // 0xCE8
		::MoleMole::StaticFloatMaterialModifier _StretchDirection; // 0xD10
		::MoleMole::StaticVectorMaterialModifier _StretchToPoint; // 0xD30
		::MoleMole::StaticFloatMaterialModifier _MaskTexFactor; // 0xD58
		::MoleMole::StaticFloatMaterialModifier _StretchPercentage; // 0xD78
		::MoleMole::StaticVectorMaterialModifier _MaskRChannelUVSpeed; // 0xD98
		::MoleMole::StaticFloatMaterialModifier _MatCapColorBurstFx; // 0xDC0
		::MoleMole::StaticFloatMaterialModifier _MatCapAlphaBurstFx; // 0xDE0
		::MoleMole::StaticColorMaterialModifier _Color; // 0xE00
		::MoleMole::StaticTextureMaterialModifier _MainTex; // 0xE38
		::MoleMole::StaticTextureMaterialModifier _LightTex; // 0xE68
		::MoleMole::StaticTextureMaterialModifier _OtherDataTex; // 0xE98
		::MoleMole::StaticTextureMaterialModifier _OtherDataTex2; // 0xEC8
		::MoleMole::StaticFloatMaterialModifier _MaterialNum; // 0xEF8
		::MoleMole::StaticFloatMaterialModifier _SkinMatId; // 0xF18
		::MoleMole::StaticColorMaterialModifier _ShallowColor; // 0xF38
		::MoleMole::StaticColorMaterialModifier _ShallowColor2; // 0xF70
		::MoleMole::StaticColorMaterialModifier _ShallowColor3; // 0xFA8
		::MoleMole::StaticColorMaterialModifier _ShallowColor4; // 0xFE0
		::MoleMole::StaticColorMaterialModifier _ShallowColor5; // 0x1018
		::MoleMole::StaticColorMaterialModifier _ShadowColor; // 0x1050
		::MoleMole::StaticColorMaterialModifier _ShadowColor2; // 0x1088
		::MoleMole::StaticColorMaterialModifier _ShadowColor3; // 0x10C0
		::MoleMole::StaticColorMaterialModifier _ShadowColor4; // 0x10F8
		::MoleMole::StaticColorMaterialModifier _ShadowColor5; // 0x1130
		::MoleMole::StaticTextureMaterialModifier _EyeColorMap; // 0x1168
		::MoleMole::StaticTextureMaterialModifier _ThreadMap; // 0x1198
		::MoleMole::StaticTextureMaterialModifier _ChannelMixTex; // 0x11C8
		::MoleMole::StaticColorMaterialModifier _SpecularColor; // 0x11F8
		::MoleMole::StaticColorMaterialModifier _SpecularColor2; // 0x1230
		::MoleMole::StaticColorMaterialModifier _SpecularColor3; // 0x1268
		::MoleMole::StaticColorMaterialModifier _SpecularColor4; // 0x12A0
		::MoleMole::StaticColorMaterialModifier _SpecularColor5; // 0x12D8
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor; // 0x1310
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor2; // 0x1348
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor3; // 0x1380
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor4; // 0x13B8
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor5; // 0x13F0
		::MoleMole::StaticColorMaterialModifier _EmissionColor; // 0x1428
		::MoleMole::StaticColorMaterialModifier _EmissionColor2; // 0x1460
		::MoleMole::StaticColorMaterialModifier _EmissionColor3; // 0x1498
		::MoleMole::StaticColorMaterialModifier _EmissionColor4; // 0x14D0
		::MoleMole::StaticColorMaterialModifier _EmissionColor5; // 0x1508
		::MoleMole::StaticColorMaterialModifier _OutlineColor; // 0x1540
		::MoleMole::StaticColorMaterialModifier _OutlineColor2; // 0x1578
		::MoleMole::StaticColorMaterialModifier _OutlineColor3; // 0x15B0
		::MoleMole::StaticColorMaterialModifier _OutlineColor4; // 0x15E8
		::MoleMole::StaticColorMaterialModifier _OutlineColor5; // 0x1620
		::MoleMole::StaticColorMaterialModifier _SilkFresnelColorFront; // 0x1658
		::MoleMole::StaticColorMaterialModifier _SilkFresnelColorEdge; // 0x1690
		::MoleMole::StaticColorMaterialModifier _RChannelColorPrecomputed; // 0x16C8
		::MoleMole::StaticColorMaterialModifier _GChannelColorPrecomputed; // 0x1700
		::MoleMole::StaticColorMaterialModifier _BChannelColorPrecomputed; // 0x1738
		::MoleMole::StaticColorMaterialModifier _AChannelColorPrecomputed; // 0x1770
		::MoleMole::StaticVectorMaterialModifier _SilkPackedParams0; // 0x17A8
		::MoleMole::StaticFloatMaterialModifier _RenderType; // 0x17D0
		::MoleMole::StaticFloatMaterialModifier _UseOverlayTex; // 0x17F0
		::MoleMole::StaticFloatMaterialModifier _OverlayTexScale; // 0x1810
		::MoleMole::StaticFloatMaterialModifier _BumpScale; // 0x1830
		::MoleMole::StaticFloatMaterialModifier _Glossiness; // 0x1850
		::MoleMole::StaticFloatMaterialModifier _Metallic; // 0x1870
		::MoleMole::StaticFloatMaterialModifier _Anisotropy; // 0x1890
		::MoleMole::StaticFloatMaterialModifier _ModelSize; // 0x18B0
		::MoleMole::StaticFloatMaterialModifier _ModelSize2; // 0x18D0
		::MoleMole::StaticFloatMaterialModifier _ModelSize3; // 0x18F0
		::MoleMole::StaticFloatMaterialModifier _ModelSize4; // 0x1910
		::MoleMole::StaticFloatMaterialModifier _ModelSize5; // 0x1930
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness; // 0x1950
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness2; // 0x1970
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness3; // 0x1990
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness4; // 0x19B0
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness5; // 0x19D0
		::MoleMole::StaticFloatMaterialModifier _HighlightShape; // 0x19F0
		::MoleMole::StaticFloatMaterialModifier _HighlightShape2; // 0x1A10
		::MoleMole::StaticFloatMaterialModifier _HighlightShape3; // 0x1A30
		::MoleMole::StaticFloatMaterialModifier _HighlightShape4; // 0x1A50
		::MoleMole::StaticFloatMaterialModifier _HighlightShape5; // 0x1A70
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular; // 0x1A90
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular2; // 0x1AB0
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular3; // 0x1AD0
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular4; // 0x1AF0
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular5; // 0x1B10
		::MoleMole::StaticFloatMaterialModifier _SpecularRange; // 0x1B30
		::MoleMole::StaticFloatMaterialModifier _SpecularRange2; // 0x1B50
		::MoleMole::StaticFloatMaterialModifier _SpecularRange3; // 0x1B70
		::MoleMole::StaticFloatMaterialModifier _SpecularRange4; // 0x1B90
		::MoleMole::StaticFloatMaterialModifier _SpecularRange5; // 0x1BB0
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness; // 0x1BD0
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness2; // 0x1BF0
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness3; // 0x1C10
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness4; // 0x1C30
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness5; // 0x1C50
		::MoleMole::StaticFloatMaterialModifier _SpecIntensity; // 0x1C70
		::MoleMole::StaticFloatMaterialModifier _Emission; // 0x1C90
		::MoleMole::StaticFloatMaterialModifier _MaxOutlineZOffset; // 0x1CB0
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity; // 0x1CD0
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity2; // 0x1CF0
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity3; // 0x1D10
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity4; // 0x1D30
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity5; // 0x1D50
		::MoleMole::StaticFloatMaterialModifier _UseChannelMixer; // 0x1D70
		::MoleMole::StaticFloatMaterialModifier _ChannelMixerUsingUV4; // 0x1D90
		::MoleMole::StaticFloatMaterialModifier _Cull; // 0x1DB0
		::MoleMole::StaticFloatMaterialModifier _DoubleSided; // 0x1DD0
		::MoleMole::StaticFloatMaterialModifier _SymmetryUV; // 0x1DF0
		::MoleMole::StaticBoolMaterialModifier _ShadowColorFadeByZ; // 0x1E10
		::MoleMole::StaticKeywordFloatMaterialModifier _MatCap; // 0x1E28
		::MoleMole::StaticTextureMaterialModifier _MatCapTex; // 0x1E40
		::MoleMole::StaticTextureMaterialModifier _MatCapTexFx; // 0x1E70
		::MoleMole::StaticTextureMaterialModifier _MatCapBumpMapFx; // 0x1EA0
		::MoleMole::StaticBoolMaterialModifier _UseMatCapMask; // 0x1ED0
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint; // 0x1EE8
		::MoleMole::StaticFloatMaterialModifier _MatCapVSpeedFx; // 0x1F20
		::MoleMole::StaticFloatMaterialModifier _MatCapNormalUSpeedFx; // 0x1F40
		::MoleMole::StaticFloatMaterialModifier _VertexOffset; // 0x1F60
		::MoleMole::StaticColorMaterialModifier _ColorOverrideAlbedo; // 0x1F80
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint2; // 0x1FB8
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint3; // 0x1FF0
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint4; // 0x2028
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint5; // 0x2060
		::MoleMole::StaticVectorMaterialModifier _RefractParam; // 0x2098
		::MoleMole::StaticVectorMaterialModifier _RefractParam2; // 0x20C0
		::MoleMole::StaticVectorMaterialModifier _RefractParam3; // 0x20E8
		::MoleMole::StaticVectorMaterialModifier _RefractParam4; // 0x2110
		::MoleMole::StaticVectorMaterialModifier _RefractParam5; // 0x2138
		::MoleMole::StaticVectorMaterialModifier _MatCapParams; // 0x2160
		::MoleMole::StaticVectorMaterialModifier _MatCapParams2; // 0x2188
		::MoleMole::StaticVectorMaterialModifier _MatCapParams3; // 0x21B0
		::MoleMole::StaticVectorMaterialModifier _MatCapParams4; // 0x21D8
		::MoleMole::StaticVectorMaterialModifier _MatCapParams5; // 0x2200
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams; // 0x2228
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams2; // 0x2250
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams3; // 0x2278
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams4; // 0x22A0
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams5; // 0x22C8
		::MoleMole::StaticBoolMaterialModifier _Fresnel; // 0x22F0
		::MoleMole::StaticFloatMaterialModifier _FresnelPower; // 0x2308
		::MoleMole::StaticFloatMaterialModifier _FresnelScale; // 0x2328
		::MoleMole::StaticFloatMaterialModifier _FresnelOffset; // 0x2348
		::MoleMole::StaticBoolMaterialModifier _Outline; // 0x2368
		::MoleMole::StaticBoolMaterialModifier _RimGlow; // 0x2380
		::MoleMole::StaticColorMaterialModifier _RimGlowShadowColor; // 0x2398
		::MoleMole::StaticBoolMaterialModifier _AbnormalProperty; // 0x23D0
		::MoleMole::StaticFloatMaterialModifier _PropertyType; // 0x23E8
		::MoleMole::StaticColorMaterialModifier _PropertyColor; // 0x2408
		::MoleMole::StaticVectorMaterialModifier _PropertyTexUVSpeed; // 0x2440
		::MoleMole::StaticFloatMaterialModifier _PropertyTexUVFlipSpeed; // 0x2468
		::MoleMole::StaticVectorMaterialModifier _PropertyMaskUVSpeed; // 0x2488
		::MoleMole::StaticFloatMaterialModifier _PropertyMask2Channel; // 0x24B0
		::MoleMole::StaticVectorMaterialModifier _PropertyMask2UVSpeed; // 0x24D0
		::MoleMole::StaticFloatMaterialModifier _PropertyMaskUVFlipSpeed; // 0x24F8
		::MoleMole::StaticFloatMaterialModifier _PropertyNormalUseUV2; // 0x2518
		::MoleMole::StaticVectorMaterialModifier _PropertyNormalUVSpeed; // 0x2538
		::MoleMole::StaticFloatMaterialModifier _FresnelMaskWidth; // 0x2560
		::MoleMole::StaticFloatMaterialModifier _FresnelFlashing; // 0x2580
		::MoleMole::StaticBoolMaterialModifier _MarkAsVfxMask; // 0x25A0
		::MoleMole::StaticFloatMaterialModifier _CurrentColorStagment; // 0x25B8
		::MoleMole::StaticBoolMaterialModifier _AbnormalPropertyElectro; // 0x25D8
		::MoleMole::StaticBoolMaterialModifier _AbnormalPropertyBurn; // 0x25F0
		::MoleMole::StaticBoolMaterialModifier _AbnormalPropertyFreeze; // 0x2608
		::MoleMole::StaticBoolMaterialModifier _GhostMask; // 0x2620
		::MoleMole::StaticFloatMaterialModifier _MarkAsGhostMask; // 0x2638
		::MoleMole::StaticBoolMaterialModifier _IgnisFatuusMask; // 0x2658
		::MoleMole::StaticBoolMaterialModifier _MarkAsIgnisFatuusMask; // 0x2670
		::MoleMole::StaticColorMaterialModifier _BaseColor; // 0x2688
		::MoleMole::StaticFloatMaterialModifier _Smoothness; // 0x26C0
		::MoleMole::StaticBoolMaterialModifier _SpecialWeaponEmission; // 0x26E0
		::MoleMole::StaticTextureMaterialModifier _SpecialWeaponEmissionTex; // 0x26F8
		::MoleMole::StaticColorMaterialModifier _SpecialWeaponEmissionColor; // 0x2728
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponMergeParam01; // 0x2760
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponMergeParam02; // 0x2788
		::MoleMole::StaticColorMaterialModifier _SpecialWeaponEmissionColor2; // 0x27B0
		::MoleMole::StaticTextureMaterialModifier _SpecialWeaponEmissionMaskTex; // 0x27E8
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponEmissionTexSpeed; // 0x2818
		::MoleMole::StaticBoolMaterialModifier _NoiseLerp; // 0x2840
		::MoleMole::StaticTextureMaterialModifier _NoiseLerpMask; // 0x2858
		::MoleMole::StaticColorMaterialModifier _NoiseLerpColor; // 0x2888
		::MoleMole::StaticBoolMaterialModifier _NoiseUseUV2; // 0x28C0
		::MoleMole::StaticFloatMaterialModifier _NoiseLerpEdgeRange; // 0x28D8
		::MoleMole::StaticFloatMaterialModifier _NoiseLerpValue; // 0x28F8
		::MoleMole::StaticBoolMaterialModifier _UseLerpEdgeColor; // 0x2918
		::MoleMole::StaticColorMaterialModifier _NoiseLerpEdgeColor; // 0x2930
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* Field_6_266; // 0x2968
		::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_6_267; // 0x2970
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* Field_6_268; // 0x2978
		::Il2CppArray<::Il2CppArray<::Il2CppArray<::System::Int32>*>*>* Field_6_269; // 0x2980
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* Field_6_270; // 0x2988
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* Field_6_271; // 0x2990
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* Field_6_272; // 0x2998
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>* Field_6_273; // 0x29A0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>* Field_6_274; // 0x29A8
		::Il2CppArray<::Il2CppArray<::System::Boolean>*>* Field_6_275; // 0x29B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR__CCTOR_OFFSET))();
		}

		::System::Void SetupAllMaterialInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPALLMATERIALINSTANCES_OFFSET))(this);
		}

		::System::Void Method_6_659B881A8763C779()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_659B881A8763C779_OFFSET))(this);
		}

		::Class_1_A0B58236B258B7B2* TryCreateMaterialModifierInstance(::Enum_3_8855AD768EB2675C a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_8855AD768EB2675C))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetMaterialModifier(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_1(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticTextureMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_2(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticVectorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_3(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticColorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_4(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticBoolMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_5(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticKeywordMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_5_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_6(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_6_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateCommonSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_UPDATECOMMONSWITCH_OFFSET))(this);
		}

		::System::Void InvalidateUpdateSwitchCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_INVALIDATEUPDATESWITCHCACHE_OFFSET))(this);
		}

		::System::Void ForceUpdateFxClip(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_FORCEUPDATEFXCLIP_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_ONDISABLE_OFFSET))(this);
		}

		::System::Void RevertShader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_REVERTSHADER_OFFSET))(this);
		}

		static ::System::Void SetFxUnClipKeywords(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* SetFxUnClipKeywordsForCutsceneTimeline(::System::String* a1, ::System::Single a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*(*)(::System::String*, ::System::Single, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDSFORCUTSCENETIMELINE_OFFSET))(a1, a2, a3);
		}

		::Class_1_8019128448F0E9D5* SetupAndStartMatPropertiesPattern(::Class_1_9610394F487FC231* a1)
		{
			return ((::Class_1_8019128448F0E9D5*(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET))(this, a1);
		}

		::System::Void Method_6_B877181B6123B7F6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_B877181B6123B7F6_OFFSET))(this);
		}

		::System::Void __base_DoOnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_DOONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_SetupAllDefaultMaterialInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPALLDEFAULTMATERIALINSTANCES_OFFSET))(this);
		}

		::System::Void __base_SetupAllMaterialInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPALLMATERIALINSTANCES_OFFSET))(this);
		}

		::Class_1_8019128448F0E9D5* __base_SetupAndStartMatPropertiesPattern(::Class_1_9610394F487FC231* a1)
		{
			return ((::Class_1_8019128448F0E9D5*(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET))(this, a1);
		}

		::Class_1_A0B58236B258B7B2* __base_TryCreateMaterialModifierInstance(::Enum_3_8855AD768EB2675C a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_8855AD768EB2675C))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Boolean __base_TryGetMaterialModifier(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_1(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticTextureMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_2(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticVectorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_3(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticColorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_4(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticBoolMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_5(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticKeywordMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_5_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_6(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_6_OFFSET))(this, a1, a2);
		}

		::System::Void __base_UpdateCommonSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_UPDATECOMMONSWITCH_OFFSET))(this);
		}

		::System::Void Method_6_82B605ACB448F4B0(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_82B605ACB448F4B0_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_6_E9D90F1C7434F23D(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_E9D90F1C7434F23D_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_5D5F16A6230C8F33(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_5D5F16A6230C8F33_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_4A001F27E8ECB274(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_4A001F27E8ECB274_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_7F349DA94A1B78DF(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_7F349DA94A1B78DF_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Method_6_34FCC3BBBC925A82(::MoleMole::MonoRenderHandlerForAvatar_Struct_2_7952382059FE8D18& a1)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoRenderHandlerForAvatar_Struct_2_7952382059FE8D18&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_34FCC3BBBC925A82_OFFSET))(a1);
		}

		::System::Void Method_6_2FBA3D05C069B62E(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::UInt32 a4, ::Il2CppArray<::System::Int32>* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::UInt32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_2FBA3D05C069B62E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 Method_6_E12043F46AB48C94(::UnityEngine::Material* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_E12043F46AB48C94_OFFSET))(a1);
		}

		::System::Boolean Method_6_4D8DE63ACD68BAC3(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticBoolMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_4D8DE63ACD68BAC3_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_A476CAA54063C150(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticColorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_A476CAA54063C150_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_D41D7B87AEBE6BD0(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticTextureMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_D41D7B87AEBE6BD0_OFFSET))(this, a1, a2);
		}

		::Class_1_8019128448F0E9D5* Method_6_96B03403C56455CD(::Class_1_9610394F487FC231* a1)
		{
			return ((::Class_1_8019128448F0E9D5*(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_96B03403C56455CD_OFFSET))(this, a1);
		}

		::System::Void Method_6_4D9CF8B767C64CC8(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_4D9CF8B767C64CC8_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_A0B58236B258B7B2* Method_6_6C1C4CBB2C90871C(::Enum_3_8855AD768EB2675C a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_8855AD768EB2675C))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_6C1C4CBB2C90871C_OFFSET))(this, a1);
		}

		::System::Void Method_6_36971FC3F16E2CEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_36971FC3F16E2CEB_OFFSET))(this);
		}

		::Class_1_A0B58236B258B7B2* Method_6_83D69C60802E274D(::Enum_3_8855AD768EB2675C a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_8855AD768EB2675C))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_83D69C60802E274D_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_6D3FB7CC639EF394(::Enum_3_8855AD768EB2675C a1, ::MoleMole::StaticVectorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8855AD768EB2675C, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_6D3FB7CC639EF394_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_F38D8B4A37B7184A(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_F38D8B4A37B7184A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_77E3CF907BA6F8B7(::Enum_3_8855AD768EB2675C a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_8855AD768EB2675C))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_77E3CF907BA6F8B7_OFFSET))(this, a1);
		}

		::System::Void Method_6_CC6DB8EC922ACB38(::UnityEngine::Material* a1, ::UnityEngine::Shader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_CC6DB8EC922ACB38_OFFSET))(this, a1, a2);
		}
	};
}
