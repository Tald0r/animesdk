#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_08B5E7BCC1E0105A_Struct_2_CF1754DDA8B382D4.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_5F780812A1FAD31A;
namespace MoleMole { class UIRigidbody; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_FC719B0403A5D35B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD07D270)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_34658B0D57648CD1_OFFSET UNITYSDK_OFFSET(0xD07D800)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_693E8290D5DA8B50_OFFSET UNITYSDK_OFFSET(0xD080160)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_8C776F59719F0CFB_OFFSET UNITYSDK_OFFSET(0xD080430)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_9CC1ABFB25B4F978_OFFSET UNITYSDK_OFFSET(0xD0804A0)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0xD07EA20)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xD07FF30)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0xD07ED10)
#define CLASS_2_FC719B0403A5D35B_ONCREATE_OFFSET UNITYSDK_OFFSET(0xD07D0B0)
#define CLASS_2_FC719B0403A5D35B__CTOR_OFFSET UNITYSDK_OFFSET(0xD07D5E0)

inline static constexpr unsigned int Class_2_FC719B0403A5D35B_TypeDefinitionIndex = 57069;

class Class_2_FC719B0403A5D35B : public ::Foundation::SingletonDisposable_1<::Class_2_FC719B0403A5D35B*>
{
public:
	::Class_1_08B5E7BCC1E0105A_Struct_2_CF1754DDA8B382D4 Field_2_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIRigidbody*>* Field_2_1; // 0x20
	::Class_1_5F780812A1FAD31A* Field_2_2; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x30
	::System::Single Field_2_18; // 0x38
	::UnityEngine::Vector2 Field_2_7; // 0x3C
	::UnityEngine::Vector2 Field_2_15; // 0x44
	::System::Single Field_2_10; // 0x4C
	::UnityEngine::Vector2 Field_2_13; // 0x50
	::UnityEngine::Quaternion Field_2_6; // 0x58
	::System::Single Field_2_17; // 0x68
	::UnityEngine::Vector2 Field_2_8; // 0x6C
	::UnityEngine::Quaternion Field_2_4; // 0x74
	::System::Single Field_2_11; // 0x84
	::System::Single Field_2_9; // 0x88
	::UnityEngine::Quaternion Field_2_5; // 0x8C
	::System::Single Field_2_14; // 0x9C
	::System::Single Field_2_16; // 0xA0
	::UnityEngine::Vector2 Field_2_12; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_34658B0D57648CD1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_METHOD_2_34658B0D57648CD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F53BAAE38A584428()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_METHOD_2_F53BAAE38A584428_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_693E8290D5DA8B50(::System::Int32 a1, ::MoleMole::UIRigidbody* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIRigidbody*))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_METHOD_2_693E8290D5DA8B50_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8C776F59719F0CFB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_METHOD_2_8C776F59719F0CFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_METHOD_2_A6544B958241856F_OFFSET))(this);
	}

	::System::Void Method_2_9CC1ABFB25B4F978(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_METHOD_2_9CC1ABFB25B4F978_OFFSET))(this, a1);
	}
};
