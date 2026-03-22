#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/AimIKLockTargetType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace RootMotion::FinalIK { class AimController; }
namespace RootMotion::FinalIK { class AimIK; }
namespace RootMotion::FinalIK { class IKSolver_UpdateDelegate; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_4845C6520B34C725_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x63DC810)
#define CLASS_3_4845C6520B34C725_METHOD_3_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x63DC9F0)
#define CLASS_3_4845C6520B34C725_METHOD_3_6B015C3E5E148E39_OFFSET UNITYSDK_OFFSET(0x63DCAA0)
#define CLASS_3_4845C6520B34C725_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x63DCC40)
#define CLASS_3_4845C6520B34C725_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x63DCC30)
#define CLASS_3_4845C6520B34C725_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x63DC3D0)
#define CLASS_3_4845C6520B34C725__CCTOR_OFFSET UNITYSDK_OFFSET(0x63DC870)
#define CLASS_3_4845C6520B34C725__CTOR_OFFSET UNITYSDK_OFFSET(0x63DC8F0)

inline static constexpr unsigned int Class_3_4845C6520B34C725_TypeDefinitionIndex = 49989;

class Class_3_4845C6520B34C725 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_15 = 0x10; // 0x0
	::UnityEngine::GameObject* Field_3_4; // 0x48
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::AimController*>* Field_3_3; // 0x50
	::System::Action* Field_3_5; // 0x58
	::MoleMole::Config::ConfigPosRot* Field_3_10; // 0x60
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::AimController*>* Field_3_2; // 0x68
	::System::String* Field_3_7; // 0x70
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::AimIK*>* Field_3_0; // 0x78
	::System::Collections::Generic::Dictionary_2<::RootMotion::FinalIK::AimController*, ::RootMotion::FinalIK::IKSolver_UpdateDelegate*>* Field_3_12; // 0x80
	::System::Boolean Field_3_6; // 0x88
	::System::Boolean Field_3_1; // 0x89
	::System::Boolean Field_3_8; // 0x8A
	::UnityEngine::Vector2 Field_3_13; // 0x8C
	::System::Single Field_3_14; // 0x94
	::MoleMole::Config::AimIKLockTargetType Field_3_11; // 0x98
	::UnityEngine::Vector3 Field_3_9; // 0x9C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4845C6520B34C725__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4845C6520B34C725__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4845C6520B34C725_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4845C6520B34C725_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4845C6520B34C725_METHOD_3_32B2368221A04800_OFFSET))(this, a1);
	}

	static ::Class_3_4845C6520B34C725* Method_3_6B015C3E5E148E39()
	{
		return ((::Class_3_4845C6520B34C725*(*)())((::PBYTE)hIl2Cpp + CLASS_3_4845C6520B34C725_METHOD_3_6B015C3E5E148E39_OFFSET))();
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4845C6520B34C725_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4845C6520B34C725_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
