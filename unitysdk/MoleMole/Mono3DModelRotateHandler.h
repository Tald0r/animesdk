#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Mono3DModelRotateHandler_Enum_3_B7547EB1C8EF61BB.h"
#include "unitysdk/MonoUITableScrollV2_MoveReason.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_4FBA03C223D93D1F;
namespace MoleMole { class AnimationCurveEx; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }

#define MOLEMOLE_MONO3DMODELROTATEHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x6E35560)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_BINDIMGEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0x6E34D00)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_BINDMODELPROVIDER_OFFSET UNITYSDK_OFFSET(0x6E34C90)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_BINDROTATEPOS_OFFSET UNITYSDK_OFFSET(0x6E34C10)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_GET_ISDRAGING_OFFSET UNITYSDK_OFFSET(0x6E36420)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_GET_ROTATEAXIS_OFFSET UNITYSDK_OFFSET(0x6E35150)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_ISCONTENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x6E36430)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x6E353B0)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_0B63A0EF42BD601E_OFFSET UNITYSDK_OFFSET(0x6E36770)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_128774387667156B_OFFSET UNITYSDK_OFFSET(0x6E37840)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_1D004332A41EA62A_OFFSET UNITYSDK_OFFSET(0x6E35A00)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x6E37E70)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x6E37980)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x6E37D00)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x6E36210)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x6E35480)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_4549F884A7412971_OFFSET UNITYSDK_OFFSET(0x6E36840)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x6E34F20)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x6E36510)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_9ACDED94382FBB80_OFFSET UNITYSDK_OFFSET(0x6E37590)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_9AD90DEC7E116B80_1_OFFSET UNITYSDK_OFFSET(0x6E37DA0)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_9AD90DEC7E116B80_OFFSET UNITYSDK_OFFSET(0x6E37770)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_A2DEBE149A58BBB9_OFFSET UNITYSDK_OFFSET(0x6E370C0)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x6E37ED0)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x6E37600)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_A698503049613B5B_1_OFFSET UNITYSDK_OFFSET(0x6E376F0)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_A698503049613B5B_OFFSET UNITYSDK_OFFSET(0x6E37670)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x6E35920)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_B8968E62A435FE6D_OFFSET UNITYSDK_OFFSET(0x6E37880)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x6E379F0)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_D77B9BAF12E64B4B_OFFSET UNITYSDK_OFFSET(0x6E37220)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x6E352A0)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_DE2BC44ACB86CE8C_OFFSET UNITYSDK_OFFSET(0x6E378E0)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_E4D7C1998AA82588_OFFSET UNITYSDK_OFFSET(0x6E37AA0)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_E7B5077360A6CAAD_OFFSET UNITYSDK_OFFSET(0x6E37310)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6E355E0)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x6E35720)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x6E36290)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x6E356B0)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_RESETTODEFAULTROTATE_OFFSET UNITYSDK_OFFSET(0x6E35EB0)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_ROTATE_OFFSET UNITYSDK_OFFSET(0x6E357C0)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_SET_ROTATEAXIS_OFFSET UNITYSDK_OFFSET(0x6E35160)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x6E35170)
#define MOLEMOLE_MONO3DMODELROTATEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x6E36490)

namespace MoleMole
{
	inline static constexpr unsigned int Mono3DModelRotateHandler_TypeDefinitionIndex = 50796;

	class Mono3DModelRotateHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::Mono3DModelRotateHandler_Enum_3_B7547EB1C8EF61BB Field_5_0; // 0x18
		::System::String* DragSoundEvent; // 0x20
		::System::String* DraggingSoundRTPC; // 0x28
		::System::Boolean Field_5_3; // 0x30
		::System::Boolean Field_5_4; // 0x31
		::System::Boolean Field_5_5; // 0x32
		::UnityEngine::UI::Extension::UIImgEventTrigger* Field_5_6; // 0x38
		::System::Func_1<::UnityEngine::GameObject*>* Field_5_7; // 0x40
		::System::Nullable_1<::UnityEngine::Quaternion> Field_5_8; // 0x48
		::System::Nullable_1<::UnityEngine::Vector3> Field_5_9; // 0x5C
		::UnityEngine::Vector3 Field_5_10; // 0x6C
		::System::Action_2<::MonoUITableScrollV2_MoveReason, ::UnityEngine::Vector3>* Field_5_11; // 0x78
		::System::Boolean _useRolling; // 0x80
		::System::Single _rollingTime; // 0x84
		::System::Single _rollingSpeedToDistance; // 0x88
		::MoleMole::AnimationCurveEx* _rollingCurve; // 0x90
		::Class_3_4FBA03C223D93D1F* Field_5_16; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void BindRotatePos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_BINDROTATEPOS_OFFSET))(this, a1);
		}

		::System::Void BindModelProvider(::System::Func_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_BINDMODELPROVIDER_OFFSET))(this, a1);
		}

		::System::Void BindImgEventTrigger(::UnityEngine::UI::Extension::UIImgEventTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIImgEventTrigger*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_BINDIMGEVENTTRIGGER_OFFSET))(this, a1);
		}

		::MoleMole::Mono3DModelRotateHandler_Enum_3_B7547EB1C8EF61BB get_RotateAxis()
		{
			return ((::MoleMole::Mono3DModelRotateHandler_Enum_3_B7547EB1C8EF61BB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_GET_ROTATEAXIS_OFFSET))(this);
		}

		::System::Void set_RotateAxis(::MoleMole::Mono3DModelRotateHandler_Enum_3_B7547EB1C8EF61BB a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Mono3DModelRotateHandler_Enum_3_B7547EB1C8EF61BB))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_SET_ROTATEAXIS_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Rotate(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_ROTATE_OFFSET))(this, a1);
		}

		::System::Void ResetToDefaultRotate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_RESETTODEFAULTROTATE_OFFSET))(this);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_ONDRAG_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsDraging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_GET_ISDRAGING_OFFSET))(this);
		}

		::System::Boolean IsContentOutofRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_ISCONTENTOUTOFRANGE_OFFSET))(this);
		}

		::System::Void Method_5_1D004332A41EA62A(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_1D004332A41EA62A_OFFSET))(this, a1);
		}

		::Class_3_4FBA03C223D93D1F* Method_5_D93EC3DDD756C47C()
		{
			return ((::Class_3_4FBA03C223D93D1F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_D93EC3DDD756C47C_OFFSET))(this);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_5_A2DEBE149A58BBB9(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_A2DEBE149A58BBB9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_D77B9BAF12E64B4B(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_D77B9BAF12E64B4B_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_E7B5077360A6CAAD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_E7B5077360A6CAAD_OFFSET))(this);
		}

		::MoleMole::AnimationCurveEx* Method_5_9ACDED94382FBB80()
		{
			return ((::MoleMole::AnimationCurveEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_9ACDED94382FBB80_OFFSET))(this);
		}

		::System::Single Method_5_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Void Method_5_A698503049613B5B(::System::Action_2<::MonoUITableScrollV2_MoveReason, ::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MonoUITableScrollV2_MoveReason, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_A698503049613B5B_OFFSET))(this, a1);
		}

		::System::Void Method_5_5A124CAF1E48B74F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_5A124CAF1E48B74F_OFFSET))(this);
		}

		::System::Void Method_5_A698503049613B5B_1(::System::Action_2<::MonoUITableScrollV2_MoveReason, ::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MonoUITableScrollV2_MoveReason, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_A698503049613B5B_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_9AD90DEC7E116B80(::System::Action_2<::MonoUITableScrollV2_MoveReason, ::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MonoUITableScrollV2_MoveReason, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_9AD90DEC7E116B80_OFFSET))(this, a1);
		}

		::System::String* Method_5_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_128774387667156B_OFFSET))(this);
		}

		::System::Action* Method_5_B8968E62A435FE6D()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_B8968E62A435FE6D_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_DE2BC44ACB86CE8C(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_DE2BC44ACB86CE8C_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_5_4549F884A7412971(::MonoUITableScrollV2_MoveReason a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveReason, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_4549F884A7412971_OFFSET))(this, a1, a2);
		}

		::System::Single Method_5_E4D7C1998AA82588()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_E4D7C1998AA82588_OFFSET))(this);
		}

		::System::Void Method_5_40E490E2772D5D75(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_40E490E2772D5D75_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_0B63A0EF42BD601E(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_0B63A0EF42BD601E_OFFSET))(this, a1);
		}

		::System::Void Method_5_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_5_9AD90DEC7E116B80_1(::System::Action_2<::MonoUITableScrollV2_MoveReason, ::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MonoUITableScrollV2_MoveReason, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_9AD90DEC7E116B80_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_805C56F44231AEF9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_805C56F44231AEF9_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_BF972395CC722BF9()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_BF972395CC722BF9_OFFSET))(this);
		}

		::System::Single Method_5_A36150C5DCC8409E_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO3DMODELROTATEHANDLER_METHOD_5_A36150C5DCC8409E_1_OFFSET))(this);
		}
	};
}
