#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_305DE7FCE1A610CE_Struct_2_CF1754DDA8B382D4.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_5F780812A1FAD31A;
namespace MoleMole { class UIRigidbody; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_FC719B0403A5D35B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF40150)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_34658B0D57648CD1_OFFSET UNITYSDK_OFFSET(0xCF406F0)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_693E8290D5DA8B50_OFFSET UNITYSDK_OFFSET(0xCF431A0)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_8C776F59719F0CFB_OFFSET UNITYSDK_OFFSET(0xCF42E40)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_9CC1ABFB25B4F978_OFFSET UNITYSDK_OFFSET(0xCF42EB0)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0xCF41920)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xCF43470)
#define CLASS_2_FC719B0403A5D35B_METHOD_2_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0xCF41C10)
#define CLASS_2_FC719B0403A5D35B_ONCREATE_OFFSET UNITYSDK_OFFSET(0xCF3FF90)
#define CLASS_2_FC719B0403A5D35B__CTOR_OFFSET UNITYSDK_OFFSET(0xCF404C0)

inline static constexpr unsigned int Class_2_FC719B0403A5D35B_TypeDefinitionIndex = 60374;

class Class_2_FC719B0403A5D35B : public ::Foundation::SingletonDisposable_1<::Class_2_FC719B0403A5D35B*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIRigidbody*>* Field_2_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x18
	::Class_1_305DE7FCE1A610CE_Struct_2_CF1754DDA8B382D4 Field_2_3; // 0x20
	::Class_1_5F780812A1FAD31A* Field_2_2; // 0x30
	::System::Single Field_2_17; // 0x38
	::UnityEngine::Quaternion Field_2_5; // 0x3C
	::System::Single Field_2_16; // 0x4C
	::UnityEngine::Vector2 Field_2_8; // 0x50
	::UnityEngine::Quaternion Field_2_4; // 0x58
	::UnityEngine::Vector2 Field_2_13; // 0x68
	::System::Single Field_2_9; // 0x70
	::UnityEngine::Vector2 Field_2_7; // 0x74
	::System::Single Field_2_11; // 0x7C
	::System::Single Field_2_14; // 0x80
	::UnityEngine::Quaternion Field_2_6; // 0x84
	::UnityEngine::Vector2 Field_2_12; // 0x94
	::UnityEngine::Vector2 Field_2_15; // 0x9C
	::System::Single Field_2_18; // 0xA4
	::System::Single Field_2_10; // 0xA8

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

	::System::Void Method_2_8C776F59719F0CFB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_METHOD_2_8C776F59719F0CFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_9CC1ABFB25B4F978(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_METHOD_2_9CC1ABFB25B4F978_OFFSET))(this, a1);
	}

	::System::Void Method_2_693E8290D5DA8B50(::System::Int32 a1, ::MoleMole::UIRigidbody* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIRigidbody*))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_METHOD_2_693E8290D5DA8B50_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC719B0403A5D35B_METHOD_2_A6544B958241856F_OFFSET))(this);
	}
};
