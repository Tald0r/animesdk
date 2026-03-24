#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD.h"
#include "unitysdk/MoleMole/UIPhysicalSizeHandler_Enum_3_CC8EE595E9E2E280.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIPHYSICALSIZEHANDLER_APPLYLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x867BAA0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x867A9A0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_GETLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x867B090)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x867A890)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_0B08B4F8E959C85E_OFFSET UNITYSDK_OFFSET(0x867BE90)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x867AB70)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_15E224C23D482CD3_OFFSET UNITYSDK_OFFSET(0x867BCD0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_1CCA9681CE0AE7A7_OFFSET UNITYSDK_OFFSET(0x867BDC0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x867C3D0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x867C190)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x867C110)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x867C1A0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F4ADC37B63F4E9EF_1_OFFSET UNITYSDK_OFFSET(0x867AC80)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x867C1B0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F7AB163354E6802C_OFFSET UNITYSDK_OFFSET(0x867AEA0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x867A820)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x867C040)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x867C020)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x867C080)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhysicalSizeHandler_TypeDefinitionIndex = 77622;

	class UIPhysicalSizeHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_Field_6_5()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalSizeHandler_TypeDefinitionIndex)->GetStaticField(0xD9B0);
		}
		static ::System::Single* StaticGet_Field_6_6()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalSizeHandler_TypeDefinitionIndex)->GetStaticField(0xD9B8);
		}
		::System::Boolean _needConstraintXSize; // 0x18
		::System::Single _xSize; // 0x1C
		::System::Boolean _needConstraintYSize; // 0x20
		::System::Single _ySize; // 0x24
		::MoleMole::UIPhysicalSizeHandler_Enum_3_CC8EE595E9E2E280 _constraintSizeType; // 0x28
		::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD Field_6_7; // 0x2C
		::UnityEngine::Canvas* Field_6_8; // 0x88
		::System::Boolean Field_6_9; // 0x90
		::System::Boolean Field_6_10; // 0x91
		::System::Boolean Field_6_11; // 0x92
		::System::Boolean Field_6_12; // 0x93

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_CALCULATELAYOUT_OFFSET))(this);
		}

		::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD GetLayoutResult(::System::Single a1)
		{
			return ((::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_GETLAYOUTRESULT_OFFSET))(this, a1);
		}

		::System::Void ApplyLayoutResult(::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_APPLYLAYOUTRESULT_OFFSET))(this, a1);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Single Method_6_F7AB163354E6802C()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F7AB163354E6802C_OFFSET))(this);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_6_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F4ADC37B63F4E9EF_OFFSET))(this);
		}

		::System::Single Method_6_15E224C23D482CD3(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_15E224C23D482CD3_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector2 Method_6_1CCA9681CE0AE7A7(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_1CCA9681CE0AE7A7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_F4ADC37B63F4E9EF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F4ADC37B63F4E9EF_1_OFFSET))(this);
		}

		::System::Boolean Method_6_0B1EB5C9B94BAB66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_0B1EB5C9B94BAB66_OFFSET))(this);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::UnityEngine::Canvas* Method_6_0B08B4F8E959C85E()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_0B08B4F8E959C85E_OFFSET))(this);
		}
	};
}
