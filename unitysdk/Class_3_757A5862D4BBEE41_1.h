#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_250FDB97D78391EE.h"
#include "unitysdk/Enum_3_9D224E54E82C0658.h"
#include "unitysdk/Enum_3_9E57FDCD22022C4B.h"
#include "unitysdk/Enum_3_C3F47346D3138590.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_3_757A5862D4BBEE41_1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x95BBD50)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x95BC150)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_8F490265D0A1B8F6_OFFSET UNITYSDK_OFFSET(0x95BBB70)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x95BC1E0)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_C5202CB8ADA78E8E_OFFSET UNITYSDK_OFFSET(0x95BC090)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x95BC140)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x95BC0A0)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_D4F45350093E967E_OFFSET UNITYSDK_OFFSET(0x95BBA00)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x95BC250)
#define CLASS_3_757A5862D4BBEE41_1_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x95BC240)
#define CLASS_3_757A5862D4BBEE41_1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x95BB5A0)
#define CLASS_3_757A5862D4BBEE41_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x95BBDB0)
#define CLASS_3_757A5862D4BBEE41_1__CTOR_OFFSET UNITYSDK_OFFSET(0x95BBE30)

inline static constexpr unsigned int Class_3_757A5862D4BBEE41_1_TypeDefinitionIndex = 61893;

class Class_3_757A5862D4BBEE41_1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::Int32 Field_3_50 = 0x44; // 0x0
	::MoleMole::EntityHandle Field_3_11; // 0x48
	::UnityEngine::Collider* Field_3_15; // 0x58
	::UnityEngine::Transform* Field_3_1; // 0x60
	::UnityEngine::Rigidbody* Field_3_14; // 0x68
	::MoleMole::EntityHandle Field_3_12; // 0x70
	::System::Single Field_3_43; // 0x80
	::Enum_3_250FDB97D78391EE Field_3_5; // 0x84
	::Enum_3_9D224E54E82C0658 Field_3_3; // 0x88
	::System::Single Field_3_21; // 0x8C
	::System::Single Field_3_29; // 0x90
	::UnityEngine::Vector3 Field_3_2; // 0x94
	::System::Single Field_3_27; // 0xA0
	::System::Single spherecastRadius; // 0xA4
	::UnityEngine::Vector3 Field_3_46; // 0xA8
	::Enum_3_C3F47346D3138590 Field_3_6; // 0xB4
	::System::Single Field_3_47; // 0xB8
	::UnityEngine::Vector3 Field_3_10; // 0xBC
	::System::Boolean Field_3_8; // 0xC8
	::System::Boolean Field_3_7; // 0xC9
	::System::Boolean Field_3_36; // 0xCA
	::System::Single Field_3_20; // 0xCC
	::System::Single Field_3_23; // 0xD0
	::System::Single Field_3_22; // 0xD4
	::System::Single Field_3_48; // 0xD8
	::System::Single Field_3_33; // 0xDC
	::System::Single Field_3_38; // 0xE0
	::System::Single Field_3_39; // 0xE4
	::System::Single Field_3_49; // 0xE8
	::System::Single Field_3_41; // 0xEC
	::System::Single Field_3_9; // 0xF0
	::System::Single airborneThreshold; // 0xF4
	::UnityEngine::Vector3 Field_3_26; // 0xF8
	::Enum_3_9E57FDCD22022C4B Field_3_4; // 0x104
	::UnityEngine::Vector3 Field_3_37; // 0x108
	::System::Single Field_3_45; // 0x114
	::System::Single Field_3_42; // 0x118
	::System::Single Field_3_34; // 0x11C
	::System::Single gravityMultiplier; // 0x120
	::System::Single Field_3_28; // 0x124
	::UnityEngine::RaycastHit Field_3_25; // 0x128
	::UnityEngine::LayerMask groundLayers; // 0x15C
	::UnityEngine::Ray Field_3_24; // 0x160
	::UnityEngine::Vector3 Field_3_35; // 0x178
	::System::Single Field_3_44; // 0x184
	::System::Boolean Field_3_31; // 0x188
	::System::Boolean Field_3_13; // 0x189
	::System::Boolean Field_3_30; // 0x18A
	::System::Boolean Field_3_40; // 0x18B
	::System::Single Field_3_32; // 0x18C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* Method_3_C5202CB8ADA78E8E()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_C5202CB8ADA78E8E_OFFSET))(this);
	}

	static ::Class_3_757A5862D4BBEE41_1* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_757A5862D4BBEE41_1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_D4F45350093E967E(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_D4F45350093E967E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_8F490265D0A1B8F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_1_METHOD_3_8F490265D0A1B8F6_OFFSET))(this, a1);
	}
};
