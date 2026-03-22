#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }

#define CLASS_3_B078ADE15E921143_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x87D4A50)
#define CLASS_3_B078ADE15E921143_METHOD_3_419706F2566724F1_OFFSET UNITYSDK_OFFSET(0x87D4C40)
#define CLASS_3_B078ADE15E921143_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x87D4B40)
#define CLASS_3_B078ADE15E921143_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x87D4BA0)
#define CLASS_3_B078ADE15E921143_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x87D4990)
#define CLASS_3_B078ADE15E921143__CCTOR_OFFSET UNITYSDK_OFFSET(0x87D4AB0)
#define CLASS_3_B078ADE15E921143__CTOR_OFFSET UNITYSDK_OFFSET(0x87D4B30)

inline static constexpr unsigned int Class_3_B078ADE15E921143_TypeDefinitionIndex = 51885;

class Class_3_B078ADE15E921143 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_9 = 0x31; // 0x0
	::Class_1_8289F2785D9AA990* Field_3_6; // 0x48
	::UnityEngine::CapsuleCollider* Field_3_5; // 0x50
	::System::Action* Field_3_7; // 0x58
	::System::Action_3<::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Boolean>* Field_3_8; // 0x60
	::System::Single Field_3_2; // 0x68
	::System::Single Field_3_3; // 0x6C
	::System::Single Field_3_1; // 0x70
	::UnityEngine::Vector3 Field_3_4; // 0x74
	::System::UInt32 Field_3_0; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B078ADE15E921143__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B078ADE15E921143__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B078ADE15E921143_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B078ADE15E921143_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B078ADE15E921143_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_B078ADE15E921143* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_B078ADE15E921143*(*)())((::PBYTE)hIl2Cpp + CLASS_3_B078ADE15E921143_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_419706F2566724F1(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_B078ADE15E921143_METHOD_3_419706F2566724F1_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
