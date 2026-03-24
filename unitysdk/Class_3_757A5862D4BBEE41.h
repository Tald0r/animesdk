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

#define CLASS_3_757A5862D4BBEE41_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xAA23D00)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xAA24050)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_8F490265D0A1B8F6_OFFSET UNITYSDK_OFFSET(0xAA23B20)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xAA240E0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_C5202CB8ADA78E8E_OFFSET UNITYSDK_OFFSET(0xAA24200)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xAA24140)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xAA24150)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_D4F45350093E967E_OFFSET UNITYSDK_OFFSET(0xAA239B0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xAA241F0)
#define CLASS_3_757A5862D4BBEE41_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAA24040)
#define CLASS_3_757A5862D4BBEE41_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xAA23540)
#define CLASS_3_757A5862D4BBEE41__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA23D60)
#define CLASS_3_757A5862D4BBEE41__CTOR_OFFSET UNITYSDK_OFFSET(0xAA23DE0)

inline static constexpr unsigned int Class_3_757A5862D4BBEE41_TypeDefinitionIndex = 38952;

class Class_3_757A5862D4BBEE41 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::Int32 Field_3_50 = 0x44; // 0x0
	::UnityEngine::Rigidbody* Field_3_14; // 0x48
	::MoleMole::EntityHandle Field_3_11; // 0x50
	::UnityEngine::Collider* Field_3_15; // 0x60
	::UnityEngine::Transform* Field_3_1; // 0x68
	::MoleMole::EntityHandle Field_3_12; // 0x70
	::System::Single Field_3_9; // 0x80
	::Enum_3_250FDB97D78391EE Field_3_5; // 0x84
	::System::Single Field_3_33; // 0x88
	::System::Single Field_3_43; // 0x8C
	::Enum_3_C3F47346D3138590 Field_3_6; // 0x90
	::System::Single Field_3_20; // 0x94
	::System::Single Field_3_45; // 0x98
	::System::Single Field_3_42; // 0x9C
	::Enum_3_9D224E54E82C0658 Field_3_3; // 0xA0
	::System::Single Field_3_23; // 0xA4
	::System::Single Field_3_27; // 0xA8
	::System::Single Field_3_49; // 0xAC
	::System::Single spherecastRadius; // 0xB0
	::UnityEngine::Vector3 Field_3_46; // 0xB4
	::UnityEngine::LayerMask groundLayers; // 0xC0
	::System::Single Field_3_22; // 0xC4
	::System::Single Field_3_48; // 0xC8
	::System::Single Field_3_44; // 0xCC
	::System::Single airborneThreshold; // 0xD0
	::Enum_3_9E57FDCD22022C4B Field_3_4; // 0xD4
	::System::Single Field_3_32; // 0xD8
	::UnityEngine::Vector3 Field_3_35; // 0xDC
	::System::Boolean Field_3_8; // 0xE8
	::System::Boolean Field_3_30; // 0xE9
	::System::Boolean Field_3_7; // 0xEA
	::System::Boolean Field_3_36; // 0xEB
	::UnityEngine::Vector3 Field_3_10; // 0xEC
	::System::Single Field_3_47; // 0xF8
	::System::Single Field_3_39; // 0xFC
	::System::Single Field_3_29; // 0x100
	::System::Single Field_3_34; // 0x104
	::System::Single Field_3_41; // 0x108
	::System::Single Field_3_21; // 0x10C
	::System::Single Field_3_28; // 0x110
	::UnityEngine::Vector3 Field_3_26; // 0x114
	::UnityEngine::RaycastHit Field_3_25; // 0x120
	::System::Single Field_3_38; // 0x154
	::System::Boolean Field_3_31; // 0x158
	::System::Boolean Field_3_13; // 0x159
	::System::Boolean Field_3_40; // 0x15A
	::UnityEngine::Ray Field_3_24; // 0x15C
	::UnityEngine::Vector3 Field_3_37; // 0x174
	::System::Single gravityMultiplier; // 0x180
	::UnityEngine::Vector3 Field_3_2; // 0x184

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_3_8F490265D0A1B8F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_8F490265D0A1B8F6_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_D4F45350093E967E(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_D4F45350093E967E_OFFSET))(this, a1);
	}

	static ::Class_3_757A5862D4BBEE41* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_757A5862D4BBEE41*(*)())((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* Method_3_C5202CB8ADA78E8E()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_757A5862D4BBEE41_METHOD_3_C5202CB8ADA78E8E_OFFSET))(this);
	}
};
