#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/Container/MapHandle.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigColliderRegisterData.h"
#include "unitysdk/MoleMole/Config/ConfigTriggerCreationData.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_B7E341C5F1A6F199;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_0DBB67C3B13390B9_METHOD_2_1CE3078A8EE9E6A7_OFFSET UNITYSDK_OFFSET(0x7BD4AA0)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_1EA0894A9616ED1B_OFFSET UNITYSDK_OFFSET(0x7BD3C60)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_3027CCEFB2025F54_OFFSET UNITYSDK_OFFSET(0x7BD21F0)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_364E91940C737CC9_OFFSET UNITYSDK_OFFSET(0x7BD3EA0)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_413472096512A213_OFFSET UNITYSDK_OFFSET(0x7BD4A80)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_5E7D66DB7C55FE25_OFFSET UNITYSDK_OFFSET(0x7BD3A70)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x7BD39D0)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x7BD4370)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x7BD4A90)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x7BD39C0)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x7BD39B0)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_9246CF392538457E_OFFSET UNITYSDK_OFFSET(0x7BD3D70)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_A1ADC999CFACEB89_1_OFFSET UNITYSDK_OFFSET(0x7BD2990)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x7BD2490)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_AD9D42075F703AA2_1_OFFSET UNITYSDK_OFFSET(0x7BD3CE0)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_AD9D42075F703AA2_OFFSET UNITYSDK_OFFSET(0x7BD39E0)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_D6DD0510E6C1BC8E_OFFSET UNITYSDK_OFFSET(0x7BD4380)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_F03B712223BA4CCD_OFFSET UNITYSDK_OFFSET(0x7BD2D00)
#define CLASS_2_0DBB67C3B13390B9_METHOD_2_F98D606D9571FC6F_OFFSET UNITYSDK_OFFSET(0x7BD2B60)
#define CLASS_2_0DBB67C3B13390B9_ONDETACH_OFFSET UNITYSDK_OFFSET(0x7BD2650)
#define CLASS_2_0DBB67C3B13390B9_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x7BD2420)
#define CLASS_2_0DBB67C3B13390B9_ONENABLE_OFFSET UNITYSDK_OFFSET(0x7BD2180)
#define CLASS_2_0DBB67C3B13390B9_ONEVENT_OFFSET UNITYSDK_OFFSET(0x7BD26C0)
#define CLASS_2_0DBB67C3B13390B9_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x7BD1E90)
#define CLASS_2_0DBB67C3B13390B9_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x7BD2730)
#define CLASS_2_0DBB67C3B13390B9__CTOR_OFFSET UNITYSDK_OFFSET(0x7BD2B50)

inline static constexpr unsigned int Class_2_0DBB67C3B13390B9_TypeDefinitionIndex = 58179;

class Class_2_0DBB67C3B13390B9 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_0DBB67C3B13390B9*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigColliderRegisterData>* Field_2_6; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTriggerCreationData>* Field_2_7; // 0x30
	::MoleMole::EntityHandle Field_2_0; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Collider*>* Field_2_2; // 0x48
	::Foundation::ViewObject::Container::MapHandle Field_2_1; // 0x50
	::System::Int32 Field_2_4; // 0x54
	::System::Boolean Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_RECEIVEFEATUREEVENT_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F98D606D9571FC6F(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_F98D606D9571FC6F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F03B712223BA4CCD(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_F03B712223BA4CCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	static ::System::Void Method_2_AD9D42075F703AA2(::System::String* a1, ::Foundation::ViewObject::ViewObjectHandle a2, ::MoleMole::EntityHandle a3)
	{
		return ((::System::Void(*)(::System::String*, ::Foundation::ViewObject::ViewObjectHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_AD9D42075F703AA2_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_5E7D66DB7C55FE25(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_5E7D66DB7C55FE25_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_AD9D42075F703AA2_1(::System::String* a1, ::Foundation::ViewObject::ViewObjectHandle a2, ::MoleMole::EntityHandle a3)
	{
		return ((::System::Void(*)(::System::String*, ::Foundation::ViewObject::ViewObjectHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_AD9D42075F703AA2_1_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_9246CF392538457E(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_9246CF392538457E_OFFSET))(this, a1);
	}

	::System::Void Method_2_364E91940C737CC9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_364E91940C737CC9_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_2_D6DD0510E6C1BC8E(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_D6DD0510E6C1BC8E_OFFSET))(this, a1);
	}

	::MoleMole::EntityHandle Method_2_413472096512A213()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_413472096512A213_OFFSET))(this);
	}

	::System::Void Method_2_3027CCEFB2025F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_3027CCEFB2025F54_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_2_1CE3078A8EE9E6A7(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_1CE3078A8EE9E6A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_1EA0894A9616ED1B(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_1EA0894A9616ED1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1ADC999CFACEB89_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DBB67C3B13390B9_METHOD_2_A1ADC999CFACEB89_1_OFFSET))(this);
	}
};
