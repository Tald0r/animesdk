#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/FixedArray8_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_6124F7AF16B30AB1;
class Class_3_A5AF8EA2F7094EFB;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_E3855AF859F1C128_METHOD_1_2A0F87BBFF6387F7_OFFSET UNITYSDK_OFFSET(0x74C4A10)
#define CLASS_1_E3855AF859F1C128_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x74C4850)
#define CLASS_1_E3855AF859F1C128_METHOD_1_C260E39B3046D957_OFFSET UNITYSDK_OFFSET(0x74C4790)
#define CLASS_1_E3855AF859F1C128__CTOR_OFFSET UNITYSDK_OFFSET(0x74C4780)

inline static constexpr unsigned int Class_1_E3855AF859F1C128_TypeDefinitionIndex = 71490;

class Class_1_E3855AF859F1C128 : public ::System::Object
{
public:
	::Class_3_A5AF8EA2F7094EFB* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_1_21; // 0x18
	::UnityEngine::GameObject* Field_1_16; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* Field_1_15; // 0x28
	::UnityEngine::GameObject* Field_1_13; // 0x30
	::UnityEngine::AsyncOperation* Field_1_11; // 0x38
	::Class_3_6124F7AF16B30AB1* Field_1_0; // 0x40
	::Foundation::AssetRequestHandle Field_1_12; // 0x48
	::UnityEngine::Quaternion Field_1_8; // 0x68
	::System::UInt32 Field_1_2; // 0x78
	::System::Boolean Field_1_6; // 0x7C
	::System::Boolean Field_1_5; // 0x7D
	::System::Boolean Field_1_20; // 0x7E
	::System::Boolean Field_1_9; // 0x7F
	::Foundation::FixedArray8_1<::System::Single> Field_1_19; // 0x80
	::System::Boolean Field_1_4; // 0xA0
	::System::Boolean Field_1_14; // 0xA1
	::Foundation::FixedArray8_1<::System::Single> Field_1_18; // 0xA4
	::System::UInt32 Field_1_3; // 0xC4
	::UnityEngine::Vector3 Field_1_10; // 0xC8
	::UnityEngine::Vector3 Field_1_7; // 0xD4
	::Foundation::FixedArray8_1<::System::Double> Field_1_17; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3855AF859F1C128__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_C260E39B3046D957(::Class_1_E3855AF859F1C128* a1)
	{
		return ((::System::Void(*)(::Class_1_E3855AF859F1C128*))((::PBYTE)hIl2Cpp + CLASS_1_E3855AF859F1C128_METHOD_1_C260E39B3046D957_OFFSET))(a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3855AF859F1C128_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	static ::Class_1_E3855AF859F1C128* Method_1_2A0F87BBFF6387F7()
	{
		return ((::Class_1_E3855AF859F1C128*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3855AF859F1C128_METHOD_1_2A0F87BBFF6387F7_OFFSET))();
	}
};
