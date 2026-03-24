#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Config { class EtherEyesInteractableVariationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_CLOSEVISION_OFFSET UNITYSDK_OFFSET(0xC25D3A0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC25D9D0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0xC25BE50)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0xC25DA40)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_1_OFFSET UNITYSDK_OFFSET(0xC25E770)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_2_OFFSET UNITYSDK_OFFSET(0xC25E7A0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_3_OFFSET UNITYSDK_OFFSET(0xC25E7D0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_4_OFFSET UNITYSDK_OFFSET(0xC25E890)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0xC25E740)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_660474B0F8C5FECE_1_OFFSET UNITYSDK_OFFSET(0xC25CC30)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0xC25C8A0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0xC25E710)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_2_OFFSET UNITYSDK_OFFSET(0xC25E800)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_3_OFFSET UNITYSDK_OFFSET(0xC25E830)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_4_OFFSET UNITYSDK_OFFSET(0xC25E860)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xC25E6E0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC25CFC0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC25C830)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC25BDE0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_OPENVISION_OFFSET UNITYSDK_OFFSET(0xC25D030)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_TRIGGERINTERACT_OFFSET UNITYSDK_OFFSET(0xC25D720)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xC25E4C0)

namespace MoleMole
{
	inline static constexpr unsigned int EtherEyeInteractableRenderer_TypeDefinitionIndex = 70589;

	class EtherEyeInteractableRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet_Field_5_6()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(EtherEyeInteractableRenderer_TypeDefinitionIndex)->GetStaticField(0x44090);
		}
		static ::UnityEngine::Material** StaticGet_Field_5_4()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EtherEyeInteractableRenderer_TypeDefinitionIndex)->GetStaticField(0x440B0);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_Field_5_5()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(EtherEyeInteractableRenderer_TypeDefinitionIndex)->GetStaticField(0x440B8);
		}
		static ::UnityEngine::Material** StaticGet_Field_5_3()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EtherEyeInteractableRenderer_TypeDefinitionIndex)->GetStaticField(0x440D8);
		}
		// static const ::System::String* Field_5_18; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_0; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* SurfaceObject; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_2; // 0x28
		::UnityEngine::Material* tempMat; // 0x30
		::UnityEngine::Material* SurfaceTempMat; // 0x38
		::System::Single Field_5_9; // 0x40
		::System::Single Field_5_10; // 0x44
		::System::Single openTransitionTime; // 0x48
		::System::Single closeTransitionTime; // 0x4C
		::System::Single triggerTransitionTime; // 0x50
		::UnityEngine::AnimationCurve* openCurve; // 0x58
		::UnityEngine::AnimationCurve* closeCurve; // 0x60
		::UnityEngine::AnimationCurve* triggerCurve; // 0x68
		::MoleMole::Config::EtherEyesObjectSize testObjectSize; // 0x70
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectSize, ::MoleMole::Config::EtherEyesInteractableVariationConfig*>* Field_5_19; // 0x78
		::System::Int32 Field_5_20; // 0x80
		::System::Int32 Field_5_21; // 0x84
		::System::Int32 Field_5_22; // 0x88
		::System::Int32 Field_5_23; // 0x8C
		::System::Int32 Field_5_24; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OpenVision()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_OPENVISION_OFFSET))(this);
		}

		::System::Void CloseVision()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_CLOSEVISION_OFFSET))(this);
		}

		::System::Void TriggerInteract(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_TRIGGERINTERACT_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_INITIALIZE_OFFSET))(this);
		}

		::System::Single Method_5_FB4BE762B6186C23()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_OFFSET))(this);
		}

		::System::Single Method_5_FB4BE762B6186C23_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_1_OFFSET))(this);
		}

		::System::Void Method_5_0D372435D9CAE4BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_0D372435D9CAE4BC_OFFSET))(this);
		}

		::System::Void Method_5_3C927B51D2142A24(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_OFFSET))(this, a1);
		}

		::System::Void Method_5_3C927B51D2142A24_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_3C927B51D2142A24_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_2_OFFSET))(this, a1);
		}

		::System::Void Method_5_3C927B51D2142A24_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_3_OFFSET))(this, a1);
		}

		::System::Single Method_5_FB4BE762B6186C23_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_2_OFFSET))(this);
		}

		::System::Single Method_5_FB4BE762B6186C23_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_3_OFFSET))(this);
		}

		::System::Void Method_5_3BCF0226A6CDC13B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3BCF0226A6CDC13B_OFFSET))(this);
		}

		::System::Single Method_5_FB4BE762B6186C23_4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_4_OFFSET))(this);
		}

		::System::Void Method_5_3C927B51D2142A24_4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_4_OFFSET))(this, a1);
		}

		::System::Void Method_5_660474B0F8C5FECE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_660474B0F8C5FECE_OFFSET))(this);
		}

		::System::Void Method_5_660474B0F8C5FECE_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_660474B0F8C5FECE_1_OFFSET))(this);
		}
	};
}
