#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_28D6F6163F0E0EBC.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigFeatureTarget; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CB7F0487F7A6164A_METHOD_1_1135E4E633464F43_OFFSET UNITYSDK_OFFSET(0x6D7BBB0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x6D7BA60)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_31FC7978777634F0_OFFSET UNITYSDK_OFFSET(0x6D7CC20)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x6D7B8B0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_41A8C39D5411E4A9_OFFSET UNITYSDK_OFFSET(0x6D7B2C0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_4CD1C228B7562F8C_OFFSET UNITYSDK_OFFSET(0x6D7CA20)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x6D7CC10)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_9875F1FD7655484D_OFFSET UNITYSDK_OFFSET(0x6D7C760)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_9FC62B0F7CBD0B1D_OFFSET UNITYSDK_OFFSET(0x6D7C750)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_A5C5598312B54154_OFFSET UNITYSDK_OFFSET(0x6D7BE30)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x6D7CC30)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_C8CA380B9A04A92A_OFFSET UNITYSDK_OFFSET(0x6D7C200)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6D7BA00)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_CF27EDB12528CE39_OFFSET UNITYSDK_OFFSET(0x6D7C0E0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x6D7C4C0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x6D7CA10)
#define CLASS_1_CB7F0487F7A6164A__CCTOR_OFFSET UNITYSDK_OFFSET(0x6D7BB30)
#define CLASS_1_CB7F0487F7A6164A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6D7AF30)
#define CLASS_1_CB7F0487F7A6164A__CTOR_OFFSET UNITYSDK_OFFSET(0x6D7AEA0)

inline static constexpr unsigned int Class_1_CB7F0487F7A6164A_TypeDefinitionIndex = 63540;

class Class_1_CB7F0487F7A6164A : public ::System::Object
{
public:
	static ::MoleMole::ConfigFeatureTarget** StaticGet_Field_1_1()
	{
		return (::MoleMole::ConfigFeatureTarget**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB7F0487F7A6164A_TypeDefinitionIndex)->GetStaticField(0x3B9E0);
	}
	static ::MoleMole::GameplayTag* StaticGet_Field_1_0()
	{
		return (::MoleMole::GameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB7F0487F7A6164A_TypeDefinitionIndex)->GetStaticField(0x3B9E8);
	}
	::MoleMole::Battle::Entity* Field_1_3; // 0x10
	::UnityEngine::Transform* Field_1_4; // 0x18
	::MoleMole::ConfigFeatureTarget* Field_1_2; // 0x20
	::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* Field_1_6; // 0x28
	::System::Collections::Generic::Dictionary_2<::Enum_3_28D6F6163F0E0EBC, ::System::String*>* Field_1_5; // 0x30
	::System::Boolean Field_1_8; // 0x38
	::System::Boolean Field_1_7; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::MoleMole::ConfigFeatureTarget* a1, ::MoleMole::Battle::Entity* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigFeatureTarget*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 Method_1_41A8C39D5411E4A9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_41A8C39D5411E4A9_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_1135E4E633464F43()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_1135E4E633464F43_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_A5C5598312B54154()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_A5C5598312B54154_OFFSET))(this);
	}

	::System::Void Method_1_CF27EDB12528CE39(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_CF27EDB12528CE39_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* Method_1_9FC62B0F7CBD0B1D()
	{
		return ((::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_9FC62B0F7CBD0B1D_OFFSET))(this);
	}

	::System::Boolean Method_1_9875F1FD7655484D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_9875F1FD7655484D_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_4CD1C228B7562F8C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_4CD1C228B7562F8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C8CA380B9A04A92A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_C8CA380B9A04A92A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_5E852A75624F0507_OFFSET))(this, a1);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Boolean Method_1_31FC7978777634F0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_31FC7978777634F0_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_1_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_B9D8FD15D18938A0_OFFSET))(this);
	}
};
