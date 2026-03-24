#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tweener; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class BoxCollider2D; }
namespace UnityEngine { class FixedJoint2D; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class TargetJoint2D; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIRIGIDBODY_ADDFORCE_OFFSET UNITYSDK_OFFSET(0xDF2BE00)
#define MOLEMOLE_UIRIGIDBODY_AWAKE_OFFSET UNITYSDK_OFFSET(0xDF2F240)
#define MOLEMOLE_UIRIGIDBODY_BEGINDRAGLOGIC_OFFSET UNITYSDK_OFFSET(0xDF2CAD0)
#define MOLEMOLE_UIRIGIDBODY_DRAGLOGIC_OFFSET UNITYSDK_OFFSET(0xDF2E760)
#define MOLEMOLE_UIRIGIDBODY_ENDDRAGLOGIC_OFFSET UNITYSDK_OFFSET(0xDF2C3D0)
#define MOLEMOLE_UIRIGIDBODY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xDF2FB30)
#define MOLEMOLE_UIRIGIDBODY_GETMASS_OFFSET UNITYSDK_OFFSET(0xDF2BE90)
#define MOLEMOLE_UIRIGIDBODY_GET_DRAGING_OFFSET UNITYSDK_OFFSET(0xDF2B9B0)
#define MOLEMOLE_UIRIGIDBODY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDF2F170)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_2DE8115E31073885_OFFSET UNITYSDK_OFFSET(0xDF2D170)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_3083E62D669EB1F6_OFFSET UNITYSDK_OFFSET(0xDF2EF50)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_5C053D92769BEEB5_OFFSET UNITYSDK_OFFSET(0xDF2BC80)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_61B2BEE1A537C4F9_OFFSET UNITYSDK_OFFSET(0xDF30450)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xDF30EC0)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_CEA3E41971946EA7_OFFSET UNITYSDK_OFFSET(0xDF30ED0)
#define MOLEMOLE_UIRIGIDBODY_METHOD_6_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xDF2F030)
#define MOLEMOLE_UIRIGIDBODY_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0xDF2F0F0)
#define MOLEMOLE_UIRIGIDBODY_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xDF2C870)
#define MOLEMOLE_UIRIGIDBODY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDF306C0)
#define MOLEMOLE_UIRIGIDBODY_ONDRAG_OFFSET UNITYSDK_OFFSET(0xDF2E4F0)
#define MOLEMOLE_UIRIGIDBODY_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xDF2F1D0)
#define MOLEMOLE_UIRIGIDBODY_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xDF2B9C0)
#define MOLEMOLE_UIRIGIDBODY_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xDF2BF10)
#define MOLEMOLE_UIRIGIDBODY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xDF2C350)
#define MOLEMOLE_UIRIGIDBODY_RESETANGLE_OFFSET UNITYSDK_OFFSET(0xDF308A0)
#define MOLEMOLE_UIRIGIDBODY_SETDRAGANCHOR_OFFSET UNITYSDK_OFFSET(0xDF2C1A0)
#define MOLEMOLE_UIRIGIDBODY_TRYTRIGGERCLICK_OFFSET UNITYSDK_OFFSET(0xDF2BA40)
#define MOLEMOLE_UIRIGIDBODY__CTOR_OFFSET UNITYSDK_OFFSET(0xDF30C30)
#define MOLEMOLE_UIRIGIDBODY___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xDF30DA0)
#define MOLEMOLE_UIRIGIDBODY___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDF30E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbody_TypeDefinitionIndex = 64232;

	class UIRigidbody : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Single ClickForceMax; // 0x18
		::System::Single ClickForceMin; // 0x1C
		::System::Single ClickForceLeftOrRight; // 0x20
		::System::Single ClickCD; // 0x24
		::System::Single Field_6_4; // 0x28
		::System::Boolean EnableDrag; // 0x2C
		::System::Boolean Field_6_6; // 0x2D
		::System::Boolean Field_6_7; // 0x2E
		::System::Single DragFrequency; // 0x30
		::System::Single DragMaxRadius; // 0x34
		::System::Boolean DragAdapterScreen; // 0x38
		::System::Boolean EnableDragAngleRange; // 0x39
		::UnityEngine::Vector2 DragAngleRange; // 0x3C
		::System::Int32 Field_6_13; // 0x44
		::System::Collections::Generic::List_1<::UnityEngine::BoxCollider2D*>* Field_6_14; // 0x48
		::System::Single Field_6_15; // 0x50
		::System::Single Field_6_16; // 0x54
		::UnityEngine::Transform* DragFixedTransform; // 0x58
		::MoleMole::UIRigidbody* RootRigidbody; // 0x60
		::UnityEngine::Transform* DragAnchorTransform; // 0x68
		::System::Single DefaultFixFrequency; // 0x70
		::System::Int32 FrequencyCount; // 0x74
		::UnityEngine::AnimationCurve* FixedDampingCurve; // 0x78
		::System::Single FixedDampingDuration; // 0x80
		::UnityEngine::TargetJoint2D* Field_6_24; // 0x88
		::UnityEngine::FixedJoint2D* Field_6_25; // 0x90
		::UnityEngine::TargetJoint2D* Field_6_26; // 0x98
		::System::String* ClickAudioEventName; // 0xA0
		::System::String* DragStartAudioEventName; // 0xA8
		::System::String* DragEndAudioEventName; // 0xB0
		::System::String* DragProcessAudioRTPCName; // 0xB8
		::System::UInt32 Field_6_31; // 0xC0
		::System::Boolean Interactable; // 0xC4
		::DG::Tweening::Tweener* Field_6_33; // 0xC8
		::UnityEngine::Rigidbody2D* Field_6_34; // 0xD0
		::System::Collections::Generic::List_1<::MoleMole::UIRigidbody*>* Field_6_35; // 0xD8
		::Il2CppArray<::UnityEngine::Vector3>* Field_6_36; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Draging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_GET_DRAGING_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Boolean TryTriggerClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_TRYTRIGGERCLICK_OFFSET))(this);
		}

		::System::Void AddForce(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ADDFORCE_OFFSET))(this, a1);
		}

		::System::Single GetMass()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_GETMASS_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void SetDragAnchor(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_SETDRAGANCHOR_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void BeginDragLogic(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_BEGINDRAGLOGIC_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONDRAG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DragLogic(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_DRAGLOGIC_OFFSET))(this, a1);
		}

		::System::Void EndDragLogic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ENDDRAGLOGIC_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONDESTROY_OFFSET))(this);
		}

		::System::Void ResetAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_RESETANGLE_OFFSET))(this, a1);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Single Method_6_FF7B2911BBACA4A9()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_FF7B2911BBACA4A9_OFFSET))(this);
		}

		::System::Void Method_6_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_832295EC279E5994_OFFSET))(this);
		}

		::UnityEngine::TargetJoint2D* Method_6_3083E62D669EB1F6()
		{
			return ((::UnityEngine::TargetJoint2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_3083E62D669EB1F6_OFFSET))(this);
		}

		::System::Boolean Method_6_61B2BEE1A537C4F9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_61B2BEE1A537C4F9_OFFSET))(this);
		}

		::System::Void Method_6_CEA3E41971946EA7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_CEA3E41971946EA7_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_6_2DE8115E31073885(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_2DE8115E31073885_OFFSET))(this, a1);
		}

		::UnityEngine::Rigidbody2D* Method_6_5C053D92769BEEB5()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_METHOD_6_5C053D92769BEEB5_OFFSET))(this);
		}
	};
}
