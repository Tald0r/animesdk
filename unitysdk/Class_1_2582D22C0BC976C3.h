#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2582D22C0BC976C3_Struct_2_DF5ED3D7BE3DD772.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2582D22C0BC976C3_METHOD_1_16C63D8F199E6B1F_OFFSET UNITYSDK_OFFSET(0xC3A12D0)
#define CLASS_1_2582D22C0BC976C3_METHOD_1_8E2613C0147FD640_OFFSET UNITYSDK_OFFSET(0xC3A1040)
#define CLASS_1_2582D22C0BC976C3_METHOD_1_A02AEECE2ED91F5E_OFFSET UNITYSDK_OFFSET(0xC3A0B40)
#define CLASS_1_2582D22C0BC976C3_METHOD_1_A0941DB3262C4802_OFFSET UNITYSDK_OFFSET(0xC3A0F70)
#define CLASS_1_2582D22C0BC976C3_METHOD_1_BC6708992C503977_OFFSET UNITYSDK_OFFSET(0xC3A06A0)
#define CLASS_1_2582D22C0BC976C3_METHOD_1_CB37F5999F8332D6_OFFSET UNITYSDK_OFFSET(0xC3A0D20)
#define CLASS_1_2582D22C0BC976C3_METHOD_1_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0xC3A0EA0)
#define CLASS_1_2582D22C0BC976C3_METHOD_1_FFF30A265AB2549D_OFFSET UNITYSDK_OFFSET(0xC3A1770)
#define CLASS_1_2582D22C0BC976C3__CTOR_OFFSET UNITYSDK_OFFSET(0xC3A0450)

inline static constexpr unsigned int Class_1_2582D22C0BC976C3_TypeDefinitionIndex = 54460;

class Class_1_2582D22C0BC976C3 : public ::System::Object
{
public:
	::Il2CppArray<::System::Boolean>* Field_1_13; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_14; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Bounds, ::UnityEngine::Matrix4x4>>* Field_1_11; // 0x20
	::UnityEngine::Bounds Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_2; // 0x40
	::UnityEngine::Vector2 Field_1_4; // 0x4C
	::MoleMole::Vector2Int Field_1_6; // 0x54
	::System::Int32 Field_1_7; // 0x5C
	::UnityEngine::Vector3 Field_1_0; // 0x60
	::System::Int32 Field_1_5; // 0x6C
	::UnityEngine::Vector2 Field_1_12; // 0x70
	::System::Int32 Field_1_8; // 0x78
	::System::ValueTuple_2<::System::Single, ::System::Single> Field_1_15; // 0x7C
	::System::Int32 Field_1_10; // 0x84
	::UnityEngine::Vector3 Field_1_1; // 0x88
	::System::Int32 Field_1_9; // 0x94

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Bounds a3, ::UnityEngine::Vector2 a4, ::System::Int32 a5, ::MoleMole::Vector2Int a6, ::System::Int32 a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Bounds, ::UnityEngine::Vector2, ::System::Int32, ::MoleMole::Vector2Int, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2582D22C0BC976C3__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::Class_1_2582D22C0BC976C3_Struct_2_DF5ED3D7BE3DD772 Method_1_BC6708992C503977(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::Class_1_2582D22C0BC976C3_Struct_2_DF5ED3D7BE3DD772(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_2582D22C0BC976C3_METHOD_1_BC6708992C503977_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CB37F5999F8332D6(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_2582D22C0BC976C3_METHOD_1_CB37F5999F8332D6_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2582D22C0BC976C3_METHOD_1_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Void Method_1_A02AEECE2ED91F5E(::Class_1_2582D22C0BC976C3_Struct_2_DF5ED3D7BE3DD772& a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Matrix4x4 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2582D22C0BC976C3_Struct_2_DF5ED3D7BE3DD772&, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_2582D22C0BC976C3_METHOD_1_A02AEECE2ED91F5E_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_A0941DB3262C4802(::Class_1_2582D22C0BC976C3_Struct_2_DF5ED3D7BE3DD772& a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_1_2582D22C0BC976C3_Struct_2_DF5ED3D7BE3DD772&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2582D22C0BC976C3_METHOD_1_A0941DB3262C4802_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_8E2613C0147FD640(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2582D22C0BC976C3_METHOD_1_8E2613C0147FD640_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_16C63D8F199E6B1F(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_2582D22C0BC976C3_METHOD_1_16C63D8F199E6B1F_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_FFF30A265AB2549D(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_2582D22C0BC976C3_METHOD_1_FFF30A265AB2549D_OFFSET))(this, a1, a2);
	}
};
