#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/FXComicDotBehaviour_Struct_2_52AD02145F5FCE3A_26.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ComicDotType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ComponentMask.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class FXComicDot; }

#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0xD831570)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xD837C20)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_3695AE16D595CB7B_OFFSET UNITYSDK_OFFSET(0xD831E30)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xD837BF0)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xD837C10)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xD837C00)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0xD8326E0)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD8321F0)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD836230)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0xD836790)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD837B40)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FXComicDotBehaviour_TypeDefinitionIndex = 73384;

	class FXComicDotBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FXComicDotBehaviour_Struct_2_52AD02145F5FCE3A_26 _methodParm; // 0x18
		::System::Boolean enabled; // 0x148
		::System::Boolean active_dotType; // 0x149
		::System::Boolean use_dotType; // 0x14A
		::UnityEngine::Rendering::Universal::ComicDotType dotType; // 0x14C
		::System::Boolean active_color; // 0x150
		::System::Boolean use_color; // 0x151
		::UnityEngine::Color color; // 0x154
		::System::Boolean active_angle; // 0x164
		::System::Boolean use_angle; // 0x165
		::System::Single angle; // 0x168
		::System::Boolean active_dotSize; // 0x16C
		::System::Boolean use_dotSize; // 0x16D
		::System::Single dotSize; // 0x170
		::System::Boolean active_dotSpacing; // 0x174
		::System::Boolean use_dotSpacing; // 0x175
		::System::Single dotSpacing; // 0x178
		::System::Boolean active_dotOffsetX; // 0x17C
		::System::Boolean use_dotOffsetX; // 0x17D
		::System::Single dotOffsetX; // 0x180
		::System::Boolean active_dotOffsetY; // 0x184
		::System::Boolean use_dotOffsetY; // 0x185
		::System::Single dotOffsetY; // 0x188
		::System::Boolean active_starPower; // 0x18C
		::System::Boolean use_starPower; // 0x18D
		::System::Single starPower; // 0x190
		::System::Boolean active_customShape; // 0x194
		::System::Boolean use_customShape; // 0x195
		::UnityEngine::Texture* customShape; // 0x198
		::System::Boolean active_invert; // 0x1A0
		::System::Boolean use_invert; // 0x1A1
		::System::Boolean invert; // 0x1A2
		::System::Boolean active_antialiasing; // 0x1A3
		::System::Boolean use_antialiasing; // 0x1A4
		::System::Boolean antialiasing; // 0x1A5
		::System::Boolean active_useWorldPositionAsOffset; // 0x1A6
		::System::Boolean use_useWorldPositionAsOffset; // 0x1A7
		::System::Boolean useWorldPositionAsOffset; // 0x1A8
		::System::Boolean active_offsetFactor; // 0x1A9
		::System::Boolean use_offsetFactor; // 0x1AA
		::System::Single offsetFactor; // 0x1AC
		::System::Boolean active_saturation; // 0x1B0
		::System::Boolean use_saturation; // 0x1B1
		::System::Single saturation; // 0x1B4
		::System::Boolean active_alphaByLuminance; // 0x1B8
		::System::Boolean use_alphaByLuminance; // 0x1B9
		::System::Boolean alphaByLuminance; // 0x1BA
		::System::Boolean active_invertLuminance; // 0x1BB
		::System::Boolean use_invertLuminance; // 0x1BC
		::System::Boolean invertLuminance; // 0x1BD
		::System::Boolean active_alphaMin; // 0x1BE
		::System::Boolean use_alphaMin; // 0x1BF
		::System::Single alphaMin; // 0x1C0
		::System::Boolean active_alphaMax; // 0x1C4
		::System::Boolean use_alphaMax; // 0x1C5
		::System::Single alphaMax; // 0x1C8
		::System::Boolean active_zClip; // 0x1CC
		::System::Boolean use_zClip; // 0x1CD
		::System::Boolean zClip; // 0x1CE
		::System::Boolean active_invertClip; // 0x1CF
		::System::Boolean use_invertClip; // 0x1D0
		::System::Boolean invertClip; // 0x1D1
		::System::Boolean active_depthThreshold; // 0x1D2
		::System::Boolean use_depthThreshold; // 0x1D3
		::System::Single depthThreshold; // 0x1D4
		::System::Boolean active_mask; // 0x1D8
		::System::Boolean use_mask; // 0x1D9
		::UnityEngine::Rendering::Universal::ComponentMask mask; // 0x1DC
		::System::Boolean active_dotType2; // 0x1E0
		::System::Boolean use_dotType2; // 0x1E1
		::UnityEngine::Rendering::Universal::ComicDotType dotType2; // 0x1E4
		::System::Boolean active_color2; // 0x1E8
		::System::Boolean use_color2; // 0x1E9
		::UnityEngine::Color color2; // 0x1EC
		::System::Boolean active_angle2; // 0x1FC
		::System::Boolean use_angle2; // 0x1FD
		::System::Single angle2; // 0x200
		::System::Boolean active_dotSize2; // 0x204
		::System::Boolean use_dotSize2; // 0x205
		::System::Single dotSize2; // 0x208
		::System::Boolean active_dotSpacing2; // 0x20C
		::System::Boolean use_dotSpacing2; // 0x20D
		::System::Single dotSpacing2; // 0x210
		::System::Boolean active_dotOffsetX2; // 0x214
		::System::Boolean use_dotOffsetX2; // 0x215
		::System::Single dotOffsetX2; // 0x218
		::System::Boolean active_dotOffsetY2; // 0x21C
		::System::Boolean use_dotOffsetY2; // 0x21D
		::System::Single dotOffsetY2; // 0x220
		::System::Boolean active_starPower2; // 0x224
		::System::Boolean use_starPower2; // 0x225
		::System::Single starPower2; // 0x228
		::System::Boolean active_customShape2; // 0x22C
		::System::Boolean use_customShape2; // 0x22D
		::UnityEngine::Texture* customShape2; // 0x230
		::System::Boolean active_invert2; // 0x238
		::System::Boolean use_invert2; // 0x239
		::System::Boolean invert2; // 0x23A
		::System::Boolean active_antialiasing2; // 0x23B
		::System::Boolean use_antialiasing2; // 0x23C
		::System::Boolean antialiasing2; // 0x23D
		::System::Boolean active_useWorldPositionAsOffset2; // 0x23E
		::System::Boolean use_useWorldPositionAsOffset2; // 0x23F
		::System::Boolean useWorldPositionAsOffset2; // 0x240
		::System::Boolean active_offsetFactor2; // 0x241
		::System::Boolean use_offsetFactor2; // 0x242
		::System::Single offsetFactor2; // 0x244
		::System::Boolean active_saturation2; // 0x248
		::System::Boolean use_saturation2; // 0x249
		::System::Single saturation2; // 0x24C
		::System::Boolean active_alphaByLuminance2; // 0x250
		::System::Boolean use_alphaByLuminance2; // 0x251
		::System::Boolean alphaByLuminance2; // 0x252
		::System::Boolean active_invertLuminance2; // 0x253
		::System::Boolean use_invertLuminance2; // 0x254
		::System::Boolean invertLuminance2; // 0x255
		::System::Boolean active_alphaMin2; // 0x256
		::System::Boolean use_alphaMin2; // 0x257
		::System::Single alphaMin2; // 0x258
		::System::Boolean active_alphaMax2; // 0x25C
		::System::Boolean use_alphaMax2; // 0x25D
		::System::Single alphaMax2; // 0x260
		::System::Boolean active_zClip2; // 0x264
		::System::Boolean use_zClip2; // 0x265
		::System::Boolean zClip2; // 0x266
		::System::Boolean active_invertClip2; // 0x267
		::System::Boolean use_invertClip2; // 0x268
		::System::Boolean invertClip2; // 0x269
		::System::Boolean active_depthThreshold2; // 0x26A
		::System::Boolean use_depthThreshold2; // 0x26B
		::System::Single depthThreshold2; // 0x26C
		::UnityEngine::Rendering::Universal::FXComicDot* _FXComicDot; // 0x270

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_EEED34E9AAC26D51()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_EEED34E9AAC26D51_OFFSET))(this);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::FXComicDot* Method_4_3695AE16D595CB7B(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::FXComicDot*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_3695AE16D595CB7B_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}
	};
}
