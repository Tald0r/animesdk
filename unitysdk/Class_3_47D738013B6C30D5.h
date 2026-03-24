#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_3_47D738013B6C30D5_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x9969380)
#define CLASS_3_47D738013B6C30D5_METHOD_3_01DEC2EA889E8ADF_OFFSET UNITYSDK_OFFSET(0x99695F0)
#define CLASS_3_47D738013B6C30D5_METHOD_3_5A01102F8AF3E6C5_OFFSET UNITYSDK_OFFSET(0x99694E0)
#define CLASS_3_47D738013B6C30D5_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9969750)
#define CLASS_3_47D738013B6C30D5_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x9969240)
#define CLASS_3_47D738013B6C30D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x99693E0)
#define CLASS_3_47D738013B6C30D5__CTOR_OFFSET UNITYSDK_OFFSET(0x9969460)

inline static constexpr unsigned int Class_3_47D738013B6C30D5_TypeDefinitionIndex = 78034;

class Class_3_47D738013B6C30D5 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_8 = 0x5; // 0x0
	// static const ::System::Int32 Field_3_13 = 0x78; // 0x0
	::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Collider*, ::System::UInt32>*>* Field_3_3; // 0x48
	::UnityEngine::Collider* Field_3_0; // 0x50
	::MoleMole::Battle::Entity* Field_3_9; // 0x58
	::Class_3_F35B080B137ECC46* Field_3_10; // 0x60
	::UnityEngine::Rigidbody* Field_3_1; // 0x68
	::Il2CppArray<::UnityEngine::Collider*>* Field_3_6; // 0x70
	::MoleMole::Battle::ColliderEventDispatcher* Field_3_5; // 0x78
	::UnityEngine::LayerMask Field_3_4; // 0x80
	::UnityEngine::Vector3 Field_3_11; // 0x84
	::System::Int32 Field_3_7; // 0x90
	::System::Boolean Field_3_2; // 0x94
	::System::Boolean Field_3_12; // 0x95

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_47D738013B6C30D5__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47D738013B6C30D5__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47D738013B6C30D5_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47D738013B6C30D5_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_47D738013B6C30D5* Method_3_5A01102F8AF3E6C5()
	{
		return ((::Class_3_47D738013B6C30D5*(*)())((::PBYTE)hIl2Cpp + CLASS_3_47D738013B6C30D5_METHOD_3_5A01102F8AF3E6C5_OFFSET))();
	}

	::System::Void Method_3_01DEC2EA889E8ADF(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_47D738013B6C30D5_METHOD_3_01DEC2EA889E8ADF_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47D738013B6C30D5_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
