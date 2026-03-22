#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/OutlineObjectRenderer_OutlineRendererConfig.h"

class Class_1_8289F2785D9AA990;
namespace MoleMole::Config { class EtherEyesOutlineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ETHEREYESOUTLINERENDERER_CLEANRENDERERS_OFFSET UNITYSDK_OFFSET(0x871AB90)
#define ETHEREYESOUTLINERENDERER_CLOSEOUTLINE_OFFSET UNITYSDK_OFFSET(0x871AB10)
#define ETHEREYESOUTLINERENDERER_ENTERSELECTED_OFFSET UNITYSDK_OFFSET(0x871AD90)
#define ETHEREYESOUTLINERENDERER_EXITSELECTED_OFFSET UNITYSDK_OFFSET(0x871ADF0)
#define ETHEREYESOUTLINERENDERER_FETCHCONFIG_OFFSET UNITYSDK_OFFSET(0x871AE50)
#define ETHEREYESOUTLINERENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x81115A0)
#define ETHEREYESOUTLINERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x871BF60)
#define ETHEREYESOUTLINERENDERER_OPENOUTLINE_OFFSET UNITYSDK_OFFSET(0x871A910)
#define ETHEREYESOUTLINERENDERER_SETUPSCREENSPACEOUTLINE_OFFSET UNITYSDK_OFFSET(0x871B8E0)
#define ETHEREYESOUTLINERENDERER_TESTCLOSEOUTLINE_OFFSET UNITYSDK_OFFSET(0x871B820)
#define ETHEREYESOUTLINERENDERER_TESTOPENOUTLINE_OFFSET UNITYSDK_OFFSET(0x871B540)
#define ETHEREYESOUTLINERENDERER_TRYBLITSCREENSPACEOUTLINE_OFFSET UNITYSDK_OFFSET(0x871BE10)
#define ETHEREYESOUTLINERENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x871AFD0)
#define ETHEREYESOUTLINERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x871C1B0)
#define ETHEREYESOUTLINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x871C0B0)

inline static constexpr unsigned int EtherEyesOutlineRenderer_TypeDefinitionIndex = 75190;

class EtherEyesOutlineRenderer : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet__OutlineTexture()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EtherEyesOutlineRenderer_TypeDefinitionIndex)->GetStaticField(0xEAB0);
	}
	static ::System::Int32* StaticGet__OutlineTextureTiling()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EtherEyesOutlineRenderer_TypeDefinitionIndex)->GetStaticField(0xEAB4);
	}
	static ::System::Boolean* StaticGet_outlineFlicker()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EtherEyesOutlineRenderer_TypeDefinitionIndex)->GetStaticField(0xEAB8);
	}
	static ::System::Int32* StaticGet__OutlineThickness()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EtherEyesOutlineRenderer_TypeDefinitionIndex)->GetStaticField(0xEABC);
	}
	static ::System::Int32* StaticGet__SingleColorParams()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EtherEyesOutlineRenderer_TypeDefinitionIndex)->GetStaticField(0xEAC0);
	}
	static ::System::Int32* StaticGet__BaseColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EtherEyesOutlineRenderer_TypeDefinitionIndex)->GetStaticField(0xEAC4);
	}
	static ::System::Int32* StaticGet__OutlineTextureOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EtherEyesOutlineRenderer_TypeDefinitionIndex)->GetStaticField(0xEAC8);
	}
	static ::System::Int32* StaticGet__EnableFlicker()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EtherEyesOutlineRenderer_TypeDefinitionIndex)->GetStaticField(0xEACC);
	}
	static ::System::Int32* StaticGet__FlickerSpeed()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EtherEyesOutlineRenderer_TypeDefinitionIndex)->GetStaticField(0xEAD0);
	}
	// static const ::System::String* configPath; // 0x0
	::MoleMole::Config::EtherEyesOutlineConfig* outlineConfig; // 0x18
	::UnityEngine::Material* material; // 0x20
	::System::Single timer; // 0x28
	::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x30
	::System::Boolean rendererNeedHizCulling; // 0x38
	::System::Boolean enableOutline; // 0x39
	::UnityEngine::AnimationCurve* outlineOpenCurve; // 0x40
	::UnityEngine::AnimationCurve* outlineCloseCurve; // 0x48
	::System::Boolean initialized; // 0x50
	::System::Int32 layerMask; // 0x54
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer_OutlineRendererConfig>* rendererMaterial; // 0x58
	::Class_1_8289F2785D9AA990* fadeTimer; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER__CCTOR_OFFSET))();
	}

	::System::Void Initialize(::Il2CppArray<::UnityEngine::Renderer*>* allRenderers)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_INITIALIZE_OFFSET))(this, allRenderers);
	}

	::System::Void OpenOutline()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_OPENOUTLINE_OFFSET))(this);
	}

	::System::Void CloseOutline()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_CLOSEOUTLINE_OFFSET))(this);
	}

	::System::Void EnterSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_ENTERSELECTED_OFFSET))(this);
	}

	::System::Void ExitSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_EXITSELECTED_OFFSET))(this);
	}

	::System::Void FetchConfig()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_FETCHCONFIG_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_UPDATE_OFFSET))(this);
	}

	::System::Void CleanRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_CLEANRENDERERS_OFFSET))(this);
	}

	::System::Void TestOpenOutline()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_TESTOPENOUTLINE_OFFSET))(this);
	}

	::System::Void TestCloseOutline()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_TESTCLOSEOUTLINE_OFFSET))(this);
	}

	::System::Void SetupScreenSpaceOutline(::System::Boolean& outlineActive, ::System::Boolean& outlineBeforeTransparent)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_SETUPSCREENSPACEOUTLINE_OFFSET))(this, outlineActive, outlineBeforeTransparent);
	}

	::System::Void TryBlitScreenSpaceOutline(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_TRYBLITSCREENSPACEOUTLINE_OFFSET))(this, cmd);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_ONDISABLE_OFFSET))(this);
	}
};
