#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Bounds.h"

class Class_1_B7E341C5F1A6F199;
namespace Foundation { template <typename T1, typename T2> class WriteDeferredDictionary_2; }
namespace MoleMole { class MonoStageCamera; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_A18F3B252E440C5B_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x746EDD0)
#define CLASS_3_A18F3B252E440C5B_METHOD_3_25F4DBCD87F78AA8_OFFSET UNITYSDK_OFFSET(0x746F4E0)
#define CLASS_3_A18F3B252E440C5B_METHOD_3_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0x746F0B0)
#define CLASS_3_A18F3B252E440C5B_METHOD_3_48F4094B62207807_OFFSET UNITYSDK_OFFSET(0x746EF60)
#define CLASS_3_A18F3B252E440C5B_METHOD_3_4E1119525909ECFD_OFFSET UNITYSDK_OFFSET(0x746EF50)
#define CLASS_3_A18F3B252E440C5B_METHOD_3_641B06838BDFB06A_OFFSET UNITYSDK_OFFSET(0x746F460)
#define CLASS_3_A18F3B252E440C5B_METHOD_3_670697B71ED1789C_OFFSET UNITYSDK_OFFSET(0x746F470)
#define CLASS_3_A18F3B252E440C5B_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x746F480)
#define CLASS_3_A18F3B252E440C5B_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x746EF70)
#define CLASS_3_A18F3B252E440C5B_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x746ED00)
#define CLASS_3_A18F3B252E440C5B__CCTOR_OFFSET UNITYSDK_OFFSET(0x746EE30)
#define CLASS_3_A18F3B252E440C5B__CTOR_OFFSET UNITYSDK_OFFSET(0x746EEB0)

inline static constexpr unsigned int Class_3_A18F3B252E440C5B_TypeDefinitionIndex = 61106;

class Class_3_A18F3B252E440C5B : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_11 = 0x6A; // 0x0
	::System::Action_1<::System::Single>* Field_3_1; // 0x48
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double>* Field_3_4; // 0x50
	::System::Action_1<::System::Single>* Field_3_2; // 0x58
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double>* Field_3_5; // 0x60
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double>* Field_3_6; // 0x68
	::Foundation::WriteDeferredDictionary_2<::System::Int32, ::UnityEngine::Bounds>* Field_3_8; // 0x70
	::Il2CppArray<::MoleMole::MonoStageCamera*>* Field_3_7; // 0x78
	::System::Action_1<::Class_1_B7E341C5F1A6F199*>* Field_3_0; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_3_10; // 0x88
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double>* Field_3_3; // 0x90
	::System::Boolean Field_3_9; // 0x98

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A18F3B252E440C5B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A18F3B252E440C5B__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A18F3B252E440C5B_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A18F3B252E440C5B_GETCLASSID_OFFSET))(this);
	}

	::System::Action_1<::Class_1_B7E341C5F1A6F199*>* Method_3_4E1119525909ECFD()
	{
		return ((::System::Action_1<::Class_1_B7E341C5F1A6F199*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A18F3B252E440C5B_METHOD_3_4E1119525909ECFD_OFFSET))(this);
	}

	::System::Void Method_3_48F4094B62207807(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_A18F3B252E440C5B_METHOD_3_48F4094B62207807_OFFSET))(this, a1);
	}

	static ::Class_3_A18F3B252E440C5B* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_A18F3B252E440C5B*(*)())((::PBYTE)hIl2Cpp + CLASS_3_A18F3B252E440C5B_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}

	::System::Void Method_3_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A18F3B252E440C5B_METHOD_3_3306F24AC967FE79_OFFSET))(this);
	}

	::System::Action_1<::System::Single>* Method_3_641B06838BDFB06A()
	{
		return ((::System::Action_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A18F3B252E440C5B_METHOD_3_641B06838BDFB06A_OFFSET))(this);
	}

	::System::Void Method_3_670697B71ED1789C(::System::Action_1<::Class_1_B7E341C5F1A6F199*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_B7E341C5F1A6F199*>*))((::PBYTE)hIl2Cpp + CLASS_3_A18F3B252E440C5B_METHOD_3_670697B71ED1789C_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A18F3B252E440C5B_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_25F4DBCD87F78AA8(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A18F3B252E440C5B_METHOD_3_25F4DBCD87F78AA8_OFFSET))(this, a1, a2);
	}
};
