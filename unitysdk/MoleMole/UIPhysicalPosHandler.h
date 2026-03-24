#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_AlignMeta.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_Enum_3_3FE364E632E4313C.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_Enum_3_7E8FD0171553CC05.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIPhysicalSizeHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIPHYSICALPOSHANDLER_APPLYLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0xAE31790)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xAE2F140)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0xAE2F4A0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_GETLAYOUTRESULT_1_OFFSET UNITYSDK_OFFSET(0xAE2FB80)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_GETLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0xAE31B60)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_GETPOSHANDLER_OFFSET UNITYSDK_OFFSET(0xAE2EE60)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAE2F380)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_0B08B4F8E959C85E_OFFSET UNITYSDK_OFFSET(0xAE31D30)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_15E224C23D482CD3_OFFSET UNITYSDK_OFFSET(0xAE31C40)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_1CCA9681CE0AE7A7_OFFSET UNITYSDK_OFFSET(0xAE31EC0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAE321E0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xAE32340)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAE322B0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_D3CDDBF95A81E584_1_OFFSET UNITYSDK_OFFSET(0xAE32350)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_D3CDDBF95A81E584_OFFSET UNITYSDK_OFFSET(0xAE324F0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0xAE2FAB0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xAE2F9E0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0xAE2F690)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_E70BA3D6E1473C4F_OFFSET UNITYSDK_OFFSET(0xAE328D0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAE328C0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_F4ADC37B63F4E9EF_1_OFFSET UNITYSDK_OFFSET(0xAE32690)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xAE2F7B0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAE2F2D0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAE2F210)
#define MOLEMOLE_UIPHYSICALPOSHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xAE31FB0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAE31F90)
#define MOLEMOLE_UIPHYSICALPOSHANDLER___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xAE32030)
#define MOLEMOLE_UIPHYSICALPOSHANDLER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAE320C0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAE32150)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhysicalPosHandler_TypeDefinitionIndex = 64986;

	class UIPhysicalPosHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::UIPhysicalPosHandler*>** StaticGet_Field_6_17()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::UIPhysicalPosHandler*>**)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalPosHandler_TypeDefinitionIndex)->GetStaticField(0x452E0);
		}
		static ::UnityEngine::Vector2* StaticGet_Field_6_13()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalPosHandler_TypeDefinitionIndex)->GetStaticField(0x110E0);
		}
		static ::System::Single* StaticGet_Field_6_14()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalPosHandler_TypeDefinitionIndex)->GetStaticField(0x110E8);
		}
		::System::String* _name; // 0x18
		::MoleMole::UIPhysicalPosHandler_AlignMeta _horizontalAlignMeta; // 0x20
		::MoleMole::UIPhysicalPosHandler_Enum_3_7E8FD0171553CC05 _horizontalEdge; // 0x38
		::MoleMole::UIPhysicalPosHandler_Enum_3_7E8FD0171553CC05 _horizontalAlignEdge; // 0x3C
		::System::Single _horizontalDistanceWithMillimeter; // 0x40
		::System::Single _minHorizontalDistanceWithMillimeter; // 0x44
		::System::Boolean _horizontalUsePhysicalRatio; // 0x48
		::MoleMole::UIPhysicalPosHandler_AlignMeta _verticalAlignMeta; // 0x50
		::MoleMole::UIPhysicalPosHandler_Enum_3_3FE364E632E4313C _verticalEdge; // 0x68
		::MoleMole::UIPhysicalPosHandler_Enum_3_3FE364E632E4313C _verticalAlignEdge; // 0x6C
		::System::Single _verticalDistanceWithMillimeter; // 0x70
		::System::Single _minVerticalDistanceWithMillimeter; // 0x74
		::System::Boolean _verticalUsePhysicalRatio; // 0x78
		::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD Field_6_15; // 0x7C
		::MoleMole::UIPhysicalSizeHandler* Field_6_16; // 0xD8
		::UnityEngine::Canvas* Field_6_18; // 0xE0
		::System::Boolean Field_6_19; // 0xE8
		::System::Boolean Field_6_20; // 0xE9
		::System::Boolean Field_6_21; // 0xEA
		::System::Boolean Field_6_22; // 0xEB
		::System::Boolean Field_6_23; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER__CCTOR_OFFSET))();
		}

		static ::MoleMole::UIPhysicalPosHandler* GetPosHandler(::System::String* a1)
		{
			return ((::MoleMole::UIPhysicalPosHandler*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_GETPOSHANDLER_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_CALCULATELAYOUT_OFFSET))(this);
		}

		::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD GetLayoutResult()
		{
			return ((::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_GETLAYOUTRESULT_OFFSET))(this);
		}

		::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD GetLayoutResult_1(::System::Single a1, ::System::Single a2)
		{
			return ((::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_GETLAYOUTRESULT_1_OFFSET))(this, a1, a2);
		}

		::System::Void ApplyLayoutResult(::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_APPLYLAYOUTRESULT_OFFSET))(this, a1);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_6_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_F4ADC37B63F4E9EF_OFFSET))(this);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::UnityEngine::Canvas* Method_6_0B08B4F8E959C85E()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_0B08B4F8E959C85E_OFFSET))(this);
		}

		::System::Boolean Method_6_DFF98536D8B4074F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_DFF98536D8B4074F_OFFSET))(this);
		}

		::System::Void Method_6_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Single Method_6_D64FD9A228A1C4E0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_D64FD9A228A1C4E0_OFFSET))(this);
		}

		::System::Single Method_6_D64FD9A228A1C4E0_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_D64FD9A228A1C4E0_1_OFFSET))(this);
		}

		::System::Void Method_6_F4ADC37B63F4E9EF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_F4ADC37B63F4E9EF_1_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		static ::System::Single Method_6_D3CDDBF95A81E584()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_D3CDDBF95A81E584_OFFSET))();
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> Method_6_E70BA3D6E1473C4F(::UnityEngine::RectTransform* a1, ::UnityEngine::Camera* a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_E70BA3D6E1473C4F_OFFSET))(a1, a2, a3, a4);
		}

		::UnityEngine::Vector2 Method_6_1CCA9681CE0AE7A7(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_1CCA9681CE0AE7A7_OFFSET))(this, a1, a2);
		}

		static ::System::Single Method_6_D3CDDBF95A81E584_1()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_D3CDDBF95A81E584_1_OFFSET))();
		}

		::System::Single Method_6_15E224C23D482CD3(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_15E224C23D482CD3_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
