#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class MindscapeLine; }

#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_CALCULATEFIXPIXELWIDTH_OFFSET UNITYSDK_OFFSET(0xAEADF40)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_CALCULATERAMPMATRIX_OFFSET UNITYSDK_OFFSET(0xAEAC4D0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_CALCULATERAMPPARAMETERS_OFFSET UNITYSDK_OFFSET(0xAEAC750)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_ENABLECANVASSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0xAEAD360)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETLINEBYPOSITIONANDANGLE_OFFSET UNITYSDK_OFFSET(0xAEACCE0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0xAEAE450)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETNORMALIZEDLINEBYPOSITIONANDANGLE_OFFSET UNITYSDK_OFFSET(0xAEACF40)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETREFWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0xAEAC340)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETSTARTANDENDCORNERIDBYANGLE_OFFSET UNITYSDK_OFFSET(0xAEAC910)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETSTARTANDENDPOINTSBYANGLE_OFFSET UNITYSDK_OFFSET(0xAEACAF0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETTRANSITIONLINE_OFFSET UNITYSDK_OFFSET(0xAEAD090)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GET_ISCORNERSVALID_OFFSET UNITYSDK_OFFSET(0xAEAC280)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GET_ISTEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0xAEAC300)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GET_REFRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xAEAC190)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_INIT_OFFSET UNITYSDK_OFFSET(0xAEAC460)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0xAEB0310)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xAEAD8D0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_NORMALIZEDANGLE_OFFSET UNITYSDK_OFFSET(0xAEAC860)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAEAD6A0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAEAD5F0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_SETTEXTUREFROMSPRITE_OFFSET UNITYSDK_OFFSET(0xAEAE1C0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_START_OFFSET UNITYSDK_OFFSET(0xAEAD420)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_UPDATE_OFFSET UNITYSDK_OFFSET(0xAEAD510)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE__CCTOR_OFFSET UNITYSDK_OFFSET(0xAEB0540)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE__CTOR_OFFSET UNITYSDK_OFFSET(0xAEB0370)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAEB09A0)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAEB0A30)
#define UNITYENGINE_UI_EXTENSION_UIMINDSCAPE___BASE_START_OFFSET UNITYSDK_OFFSET(0xAEB0A40)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIMindscape_TypeDefinitionIndex = 78745;

	class UIMindscape : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Int32* StaticGet_Ramp2StartColorLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD140);
		}
		static ::System::Int32* StaticGet_TintZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD144);
		}
		static ::System::Int32* StaticGet_MindscapeBgColorLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD148);
		}
		static ::System::Int32* StaticGet_LineParameter0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD14C);
		}
		static ::System::Int32* StaticGet_RampParameterHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD150);
		}
		static ::System::Int32* StaticGet_Ramp2EndColorHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD154);
		}
		static ::System::Int32* StaticGet_RampStartColorHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD158);
		}
		static ::System::Int32* StaticGet_MindscapeWipeSlotID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD15C);
		}
		static ::System::Int32* StaticGet_Ramp2ParameterHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD160);
		}
		static ::System::Int32* StaticGet_TintColorAZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD164);
		}
		static ::System::Int32* StaticGet_MindscapeTexLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD168);
		}
		static ::System::Int32* StaticGet_TintColorBLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD16C);
		}
		static ::System::Int32* StaticGet_RampZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD170);
		}
		static ::System::Int32* StaticGet_TintColorBHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD174);
		}
		static ::System::Int32* StaticGet_Ramp2StartColorZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD178);
		}
		static ::System::Int32* StaticGet_MindscapeColorHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD17C);
		}
		static ::System::Int32* StaticGet_RampLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD180);
		}
		static ::System::Int32* StaticGet_RampHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD184);
		}
		static ::System::Int32* StaticGet_RampBlendModeHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD188);
		}
		static ::System::Int32* StaticGet_LineParameter1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD18C);
		}
		static ::System::Int32* StaticGet_Ramp2ParameterZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD190);
		}
		static ::System::Int32* StaticGet_MindscapeTexZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD194);
		}
		static ::System::Int32* StaticGet_Ramp2Zero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD198);
		}
		static ::System::Int32* StaticGet_LineParameter2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD19C);
		}
		static ::System::Int32* StaticGet_Ramp2StartColorHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1A0);
		}
		static ::System::Int32* StaticGet_Ramp2BlendModeHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1A4);
		}
		static ::System::Int32* StaticGet_TransitionSoftness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1A8);
		}
		static ::System::Int32* StaticGet_RampEndColorHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1AC);
		}
		static ::System::Int32* StaticGet_RampStartColorZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1B0);
		}
		static ::System::Int32* StaticGet_RampParameterZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1B4);
		}
		static ::System::Int32* StaticGet_Ramp2High()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1B8);
		}
		static ::System::Int32* StaticGet_TintColorBZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1BC);
		}
		static ::System::Int32* StaticGet_MindscapeBgColorHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1C0);
		}
		static ::System::Int32* StaticGet_Ramp2EndColorLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1C4);
		}
		static ::System::Int32* StaticGet_RampStartColorLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1C8);
		}
		static ::System::Int32* StaticGet_Ramp2BlendModeLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1CC);
		}
		static ::System::Int32* StaticGet_MindscapeWipeMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1D0);
		}
		static ::System::Int32* StaticGet_MindscapeTexHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1D4);
		}
		static ::System::Int32* StaticGet_RampEndColorZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1D8);
		}
		static ::System::Int32* StaticGet_MindscapeColorZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1DC);
		}
		static ::System::Int32* StaticGet_TintHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1E0);
		}
		static ::System::Int32* StaticGet_DstFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1E4);
		}
		static ::System::Int32* StaticGet_TintLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1E8);
		}
		static ::System::Int32* StaticGet_Ramp2ParameterLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1EC);
		}
		static ::System::Int32* StaticGet_RampEndColorLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1F0);
		}
		static ::System::Int32* StaticGet_RampParameterLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1F4);
		}
		static ::System::Int32* StaticGet_TintColorALow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1F8);
		}
		static ::System::Int32* StaticGet_MindscapeBgColorZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD1FC);
		}
		static ::System::Int32* StaticGet_TintColorAHigh()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD200);
		}
		static ::System::Int32* StaticGet_MindscapeColorLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD204);
		}
		static ::System::Int32* StaticGet_RampBlendModeLow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD208);
		}
		static ::System::Int32* StaticGet_Ramp2EndColorZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD20C);
		}
		static ::System::Int32* StaticGet_Ramp2Low()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD210);
		}
		static ::System::Int32* StaticGet_MindscapeMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD214);
		}
		static ::System::Int32* StaticGet_Ramp2BlendModeZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD218);
		}
		static ::System::Int32* StaticGet_RampBlendModeZero()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscape_TypeDefinitionIndex)->GetStaticField(0xD21C);
		}
		// static const ::System::String* UIMindScapeMatPath; // 0x0
		// static const ::System::String* IsRenderingTextKeyword; // 0x0
		::UnityEngine::RectTransform* refRectTransform; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* _refWorldCorners; // 0x28
		::System::Single textSpacing; // 0x30
		::System::Single lineOffset; // 0x34
		::System::Boolean useMindscapeColorZero; // 0x38
		::UnityEngine::Sprite* mindscapeSpriteZero; // 0x40
		::UnityEngine::Color mindscapeColorZero; // 0x48
		::UnityEngine::Color mindscapeBgColorZero; // 0x58
		::System::Boolean useRampZero; // 0x68
		::System::Int32 rampBlendModeZero; // 0x6C
		::UnityEngine::Vector2 rampStartUVZero; // 0x70
		::UnityEngine::Color rampStartColorZero; // 0x78
		::UnityEngine::Vector2 rampEndUVZero; // 0x88
		::UnityEngine::Color rampEndColorZero; // 0x90
		::System::Boolean useRamp2Zero; // 0xA0
		::System::Int32 ramp2BlendModeZero; // 0xA4
		::UnityEngine::Vector2 ramp2StartUVZero; // 0xA8
		::UnityEngine::Color ramp2StartColorZero; // 0xB0
		::UnityEngine::Vector2 ramp2EndUVZero; // 0xC0
		::UnityEngine::Color ramp2EndColorZero; // 0xC8
		::UnityEngine::Color tintColorAZero; // 0xD8
		::UnityEngine::Color tintColorBZero; // 0xE8
		::System::Single tintZero; // 0xF8
		::System::Boolean useMindscapeColorLow; // 0xFC
		::UnityEngine::Sprite* mindscapeSpriteLow; // 0x100
		::UnityEngine::Color mindscapeColorLow; // 0x108
		::UnityEngine::Color mindscapeBgColorLow; // 0x118
		::System::Boolean useRampLow; // 0x128
		::System::Int32 rampBlendModeLow; // 0x12C
		::UnityEngine::Vector2 rampStartUVLow; // 0x130
		::UnityEngine::Color rampStartColorLow; // 0x138
		::UnityEngine::Vector2 rampEndUVLow; // 0x148
		::UnityEngine::Color rampEndColorLow; // 0x150
		::System::Boolean useRamp2Low; // 0x160
		::System::Int32 ramp2BlendModeLow; // 0x164
		::UnityEngine::Vector2 ramp2StartUVLow; // 0x168
		::UnityEngine::Color ramp2StartColorLow; // 0x170
		::UnityEngine::Vector2 ramp2EndUVLow; // 0x180
		::UnityEngine::Color ramp2EndColorLow; // 0x188
		::UnityEngine::Color tintColorALow; // 0x198
		::UnityEngine::Color tintColorBLow; // 0x1A8
		::System::Single tintLow; // 0x1B8
		::System::Boolean useMindscapeColorHigh; // 0x1BC
		::UnityEngine::Sprite* mindscapeSpriteHigh; // 0x1C0
		::UnityEngine::Color mindscapeColorHigh; // 0x1C8
		::UnityEngine::Color mindscapeBgColorHigh; // 0x1D8
		::System::Boolean useRampHigh; // 0x1E8
		::System::Int32 rampBlendModeHigh; // 0x1EC
		::UnityEngine::Vector2 rampStartUVHigh; // 0x1F0
		::UnityEngine::Color rampStartColorHigh; // 0x1F8
		::UnityEngine::Vector2 rampEndUVHigh; // 0x208
		::UnityEngine::Color rampEndColorHigh; // 0x210
		::System::Boolean useRamp2High; // 0x220
		::System::Int32 ramp2BlendModeHigh; // 0x224
		::UnityEngine::Vector2 ramp2StartUVHigh; // 0x228
		::UnityEngine::Color ramp2StartColorHigh; // 0x230
		::UnityEngine::Vector2 ramp2EndUVHigh; // 0x240
		::UnityEngine::Color ramp2EndColorHigh; // 0x248
		::UnityEngine::Color tintColorAHigh; // 0x258
		::UnityEngine::Color tintColorBHigh; // 0x268
		::System::Single tintHigh; // 0x278
		::System::Int32 blendMode; // 0x27C
		::System::Int32 mindscapeSlot014; // 0x280
		::System::Int32 mindscapeSlot025; // 0x284
		::System::Int32 mindscapeSlot036; // 0x288
		::System::Int32 targetMindscapeLevel; // 0x28C
		::System::Int32 targetMindscapeSlot; // 0x290
		::System::Single divideLinePosition1; // 0x294
		::System::Single divideLineAngle1; // 0x298
		::System::Boolean divideLineInvert1; // 0x29C
		::System::Single divideLinePosition2; // 0x2A0
		::System::Single divideLineAngle2; // 0x2A4
		::System::Boolean divideLineInvert2; // 0x2A8
		::System::Single transitionStartLinePosition1; // 0x2AC
		::System::Single transitionStartLineAngle1; // 0x2B0
		::System::Boolean transitionStartLineInvert1; // 0x2B4
		::System::Single transitionEndLinePosition1; // 0x2B8
		::System::Single transitionEndLineAngle1; // 0x2BC
		::System::Boolean transitionEndLineInvert1; // 0x2C0
		::System::Boolean invertDirection1; // 0x2C1
		::System::Single transitionSoftness1; // 0x2C4
		::System::Single transitionRate1; // 0x2C8
		::System::Single transitionLinePosition2; // 0x2CC
		::System::Single transitionLineAngle2; // 0x2D0
		::System::Boolean IsObtuse2; // 0x2D4
		::System::Boolean invertDirection2; // 0x2D5
		::System::Single transitionSoftness2; // 0x2D8
		::System::Single transitionRate2; // 0x2DC
		::System::Single transitionLinePosition3; // 0x2E0
		::System::Single transitionLineAngle3; // 0x2E4
		::System::Boolean IsObtuse3; // 0x2E8
		::System::Boolean invertDirection3; // 0x2E9
		::System::Single transitionSoftness3; // 0x2EC
		::System::Single transitionRate3; // 0x2F0
		::UnityEngine::Material* _modifiedMaterial; // 0x2F8
		::System::Boolean _isLoadedMaterial; // 0x300
		::Foundation::AssetRequestHandle _uiMindscapeMatHandle; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE__CCTOR_OFFSET))();
		}

		::UnityEngine::RectTransform* get_RefRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GET_REFRECTTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_IsCornersValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GET_ISCORNERSVALID_OFFSET))(this);
		}

		::System::Boolean get_IsTextComponent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GET_ISTEXTCOMPONENT_OFFSET))(this);
		}

		::System::Void GetRefWorldCorners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETREFWORLDCORNERS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_INIT_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 CalculateRampMatrix(::UnityEngine::Vector2 rampStartUV, ::UnityEngine::Vector2 rampEndUV)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_CALCULATERAMPMATRIX_OFFSET))(this, rampStartUV, rampEndUV);
		}

		::UnityEngine::Vector4 CalculateRampParameters(::UnityEngine::Vector2 rampStartUV, ::UnityEngine::Vector2 rampEndUV)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_CALCULATERAMPPARAMETERS_OFFSET))(this, rampStartUV, rampEndUV);
		}

		static ::System::Single NormalizedAngle(::System::Single lineAngle)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_NORMALIZEDANGLE_OFFSET))(lineAngle);
		}

		static ::System::Void GetStartAndEndCornerIdByAngle(::System::Single angle, ::System::Int32& startId, ::System::Int32& endId)
		{
			return ((::System::Void(*)(::System::Single, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETSTARTANDENDCORNERIDBYANGLE_OFFSET))(angle, startId, endId);
		}

		::System::Void GetStartAndEndPointsByAngle(::System::Single angle, ::UnityEngine::Vector2& startPoint, ::UnityEngine::Vector2& endPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETSTARTANDENDPOINTSBYANGLE_OFFSET))(this, angle, startPoint, endPoint);
		}

		::UnityEngine::UI::Extension::MindscapeLine* GetLineByPositionAndAngle(::System::Single position, ::System::Single angle)
		{
			return ((::UnityEngine::UI::Extension::MindscapeLine*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETLINEBYPOSITIONANDANGLE_OFFSET))(this, position, angle);
		}

		::UnityEngine::UI::Extension::MindscapeLine* GetNormalizedLineByPositionAndAngle(::System::Single position, ::System::Single angle, ::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::UI::Extension::MindscapeLine*(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETNORMALIZEDLINEBYPOSITIONANDANGLE_OFFSET))(this, position, angle, rect);
		}

		::UnityEngine::UI::Extension::MindscapeLine* GetTransitionLine(::System::Int32 targetSlot, ::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::UI::Extension::MindscapeLine*(*)(::PVOID, ::System::Int32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETTRANSITIONLINE_OFFSET))(this, targetSlot, rect);
		}

		::System::Void EnableCanvasShaderChannels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_ENABLECANVASSHADERCHANNELS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_ONDESTROY_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Single CalculateFixPixelWidth(::System::Single angle)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_CALCULATEFIXPIXELWIDTH_OFFSET))(this, angle);
		}

		::System::Void SetTextureFromSprite(::UnityEngine::Material* material, ::System::Int32 propertyId, ::UnityEngine::Sprite* sprite)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_SETTEXTUREFROMSPRITE_OFFSET))(this, material, propertyId, sprite);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMINDSCAPE___BASE_START_OFFSET))(this);
		}
	};
}
