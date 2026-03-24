#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_144;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
class Class_2_84CEDCEF739506C1_2;
class Class_2_F346500DFC680A13;
namespace MoleMole::Config { class NpcAccessoryVoConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_6566D826F3CE2170_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x8B26460)
#define CLASS_2_6566D826F3CE2170_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8B25B40)
#define CLASS_2_6566D826F3CE2170_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8B24A30)
#define CLASS_2_6566D826F3CE2170_METHOD_2_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x8B24AB0)
#define CLASS_2_6566D826F3CE2170_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x8B29470)
#define CLASS_2_6566D826F3CE2170_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0x8B23F80)
#define CLASS_2_6566D826F3CE2170_METHOD_2_150DBC0ED293B2C0_OFFSET UNITYSDK_OFFSET(0x8B28970)
#define CLASS_2_6566D826F3CE2170_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x8B23D50)
#define CLASS_2_6566D826F3CE2170_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x8B29150)
#define CLASS_2_6566D826F3CE2170_METHOD_2_2D08867FA34F8CAE_OFFSET UNITYSDK_OFFSET(0x8B25BA0)
#define CLASS_2_6566D826F3CE2170_METHOD_2_36D3B9CB4CD6C02B_OFFSET UNITYSDK_OFFSET(0x8B28BA0)
#define CLASS_2_6566D826F3CE2170_METHOD_2_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0x8B26320)
#define CLASS_2_6566D826F3CE2170_METHOD_2_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0x8B23CD0)
#define CLASS_2_6566D826F3CE2170_METHOD_2_7A0FB6DF30C72295_OFFSET UNITYSDK_OFFSET(0x8B27F30)
#define CLASS_2_6566D826F3CE2170_METHOD_2_815ACDD9D448C3AE_OFFSET UNITYSDK_OFFSET(0x8B291C0)
#define CLASS_2_6566D826F3CE2170_METHOD_2_8D115C5AFA0ABB49_OFFSET UNITYSDK_OFFSET(0x8B28000)
#define CLASS_2_6566D826F3CE2170_METHOD_2_941AC6D34F0B28D7_OFFSET UNITYSDK_OFFSET(0x8B293D0)
#define CLASS_2_6566D826F3CE2170_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x8B23E50)
#define CLASS_2_6566D826F3CE2170_METHOD_2_B83006C3BD702608_OFFSET UNITYSDK_OFFSET(0x8B27530)
#define CLASS_2_6566D826F3CE2170_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x8B290E0)
#define CLASS_2_6566D826F3CE2170_METHOD_2_D4919AAE1B4692CD_OFFSET UNITYSDK_OFFSET(0x8B27800)
#define CLASS_2_6566D826F3CE2170_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x8B28F80)
#define CLASS_2_6566D826F3CE2170_METHOD_2_D6099D544AD64B1A_OFFSET UNITYSDK_OFFSET(0x8B28750)
#define CLASS_2_6566D826F3CE2170_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x8B28EF0)
#define CLASS_2_6566D826F3CE2170_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x8B28A40)
#define CLASS_2_6566D826F3CE2170_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x8B27D90)
#define CLASS_2_6566D826F3CE2170__CTOR_OFFSET UNITYSDK_OFFSET(0x8B28F70)

inline static constexpr unsigned int Class_2_6566D826F3CE2170_TypeDefinitionIndex = 66103;

class Class_2_6566D826F3CE2170 : public ::MoleMole::Config::ConfigViewObjectTraitBase
{
public:
	::System::String* Field_2_7; // 0x18
	::System::String* Field_2_11; // 0x20
	::System::String* Field_2_8; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>* Field_2_9; // 0x30
	::System::Single Field_2_4; // 0x38
	::System::Int32 Field_2_1; // 0x3C
	::System::Boolean Field_2_6; // 0x40
	::System::Boolean Field_2_10; // 0x41
	::System::Boolean Field_2_3; // 0x42
	::System::Boolean Field_2_2; // 0x43
	::System::Int32 Field_2_0; // 0x44
	::System::Single Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_66A56A98FBC17877_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
	{
		return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_144* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_39C75ED00C6629F7(::Class_1_9BBA877A0A83A422* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_39C75ED00C6629F7_OFFSET))(this, a1);
	}

	::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
	}

	::System::Void PostProcessEntity(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_POSTPROCESSENTITY_OFFSET))(this, a1);
	}

	::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_ONPOSTENTITYREADY_OFFSET))(this, a1);
	}

	::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_ONPOSTENTITYDISSOCIATE_OFFSET))(this, a1);
	}

	static ::Class_2_6566D826F3CE2170* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_6566D826F3CE2170*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_0578713EDB32B89E_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_D4919AAE1B4692CD(::Foundation::ViewObject::EntityBuildContext& a1, ::System::Int32 a2, ::Class_2_F346500DFC680A13* a3, ::Class_2_84CEDCEF739506C1_2* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>* a7)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::EntityBuildContext&, ::System::Int32, ::Class_2_F346500DFC680A13*, ::Class_2_84CEDCEF739506C1_2*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_D4919AAE1B4692CD_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_150DBC0ED293B2C0(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_150DBC0ED293B2C0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_36D3B9CB4CD6C02B(::MoleMole::EntityHandle a1, ::System::Int32 a2, ::System::ValueTuple_2<::System::Single, ::System::Single> a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_36D3B9CB4CD6C02B_OFFSET))(a1, a2, a3);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_7A0FB6DF30C72295(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_7A0FB6DF30C72295_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_2_815ACDD9D448C3AE(::UnityEngine::Animator* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::UnityEngine::Animator*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_815ACDD9D448C3AE_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_2_6566D826F3CE2170* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_6566D826F3CE2170*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_D6099D544AD64B1A(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_D6099D544AD64B1A_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_2D08867FA34F8CAE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_2D08867FA34F8CAE_OFFSET))(this, a1, a2);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_2_941AC6D34F0B28D7(::UnityEngine::Animator* a1, ::System::ValueTuple_2<::System::Single, ::System::Single> a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::UnityEngine::Animator*, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_941AC6D34F0B28D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_8D115C5AFA0ABB49(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Int32 a3, ::System::ValueTuple_2<::System::Single, ::System::Single> a4)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_8D115C5AFA0ABB49_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_2_B83006C3BD702608(::Foundation::ViewObject::EntityBuildContext& a1, ::System::Int32 a2, ::Class_2_84CEDCEF739506C1_2* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::EntityBuildContext&, ::System::Int32, ::Class_2_84CEDCEF739506C1_2*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_6566D826F3CE2170_METHOD_2_B83006C3BD702608_OFFSET))(a1, a2, a3, a4, a5);
	}
};
