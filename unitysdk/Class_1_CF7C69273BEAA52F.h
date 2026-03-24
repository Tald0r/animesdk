#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_CF7C69273BEAA52F_Class_1_A60DDD2BAF1C45A5;
class Class_3_F61F3C9E55A83BDE;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CircleCollider2D; }

#define CLASS_1_CF7C69273BEAA52F_METHOD_1_01CE18CBE671D0D1_OFFSET UNITYSDK_OFFSET(0xA262620)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_15E437CED208AB89_OFFSET UNITYSDK_OFFSET(0xA25F470)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_3113F60BDF7D91D3_OFFSET UNITYSDK_OFFSET(0xA25E4F0)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_3D116BAE41DF3D42_OFFSET UNITYSDK_OFFSET(0xA25E690)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_431DDC35EE3FAD9F_OFFSET UNITYSDK_OFFSET(0xA2605B0)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_56EEDABDD4F64D4E_OFFSET UNITYSDK_OFFSET(0xA25EF60)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_5A79F9CFED9CA2C0_OFFSET UNITYSDK_OFFSET(0xA2625B0)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_65A3D82E9FACED9C_OFFSET UNITYSDK_OFFSET(0xA261D30)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_8688015E0DF34B80_1_OFFSET UNITYSDK_OFFSET(0xA261500)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_8688015E0DF34B80_2_OFFSET UNITYSDK_OFFSET(0xA262B20)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_8688015E0DF34B80_OFFSET UNITYSDK_OFFSET(0xA2613B0)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_951CF98063B20BD0_OFFSET UNITYSDK_OFFSET(0xA25E130)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_979F5BCBBD319AE1_OFFSET UNITYSDK_OFFSET(0xA25FEC0)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_99BBB0E8D700715D_OFFSET UNITYSDK_OFFSET(0xA25ECD0)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_9CC54CDAC0301B23_OFFSET UNITYSDK_OFFSET(0xA260410)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_9DBE9930FD5983C1_OFFSET UNITYSDK_OFFSET(0xA260280)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_A0A90A52C14CFF08_OFFSET UNITYSDK_OFFSET(0xA25F820)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_A2245A9EC91BF0C3_OFFSET UNITYSDK_OFFSET(0xA25EE80)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_A244D388D33B26C5_OFFSET UNITYSDK_OFFSET(0xA260720)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_BD9257373995CBC4_OFFSET UNITYSDK_OFFSET(0xA25D9D0)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_D0AB1D53A3FC6A02_OFFSET UNITYSDK_OFFSET(0xA25FDA0)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_E8F40979B3DD5EA5_OFFSET UNITYSDK_OFFSET(0xA262850)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_F37E06DF11577A98_OFFSET UNITYSDK_OFFSET(0xA261650)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_FE9DE604D6726913_OFFSET UNITYSDK_OFFSET(0xA260510)
#define CLASS_1_CF7C69273BEAA52F_METHOD_1_FF7DFD0CDAB6CD03_OFFSET UNITYSDK_OFFSET(0xA25E440)
#define CLASS_1_CF7C69273BEAA52F__CTOR_OFFSET UNITYSDK_OFFSET(0xA25D8C0)

inline static constexpr unsigned int Class_1_CF7C69273BEAA52F_TypeDefinitionIndex = 46322;

class Class_1_CF7C69273BEAA52F : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x32; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::System::Collections::Generic::HashSet_1<::Class_3_F61F3C9E55A83BDE*>*>* Field_1_3; // 0x10
	::System::Random* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::Class_3_F61F3C9E55A83BDE*, ::Class_1_CF7C69273BEAA52F_Class_1_A60DDD2BAF1C45A5*>* Field_1_4; // 0x20
	::System::Single Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_BD9257373995CBC4(::UnityEngine::Vector2 a1, ::UnityEngine::Bounds a2, ::Class_3_F61F3C9E55A83BDE* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Bounds, ::Class_3_F61F3C9E55A83BDE*))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_BD9257373995CBC4_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* Method_1_951CF98063B20BD0(::UnityEngine::Vector2 a1, ::System::Single a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_951CF98063B20BD0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3113F60BDF7D91D3(::UnityEngine::Vector2 a1, ::UnityEngine::Bounds a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Bounds, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_3113F60BDF7D91D3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_1_3D116BAE41DF3D42(::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>* a1, ::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>* a2, ::UnityEngine::CircleCollider2D* a3, ::UnityEngine::CircleCollider2D* a4)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>*, ::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>*, ::UnityEngine::CircleCollider2D*, ::UnityEngine::CircleCollider2D*))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_3D116BAE41DF3D42_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>* Method_1_9DBE9930FD5983C1(::UnityEngine::Vector2 a1, ::System::Single a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_9DBE9930FD5983C1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9CC54CDAC0301B23(::UnityEngine::Bounds a1, ::UnityEngine::Bounds a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_9CC54CDAC0301B23_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FE9DE604D6726913(::UnityEngine::Bounds a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_FE9DE604D6726913_OFFSET))(this, a1);
	}

	::System::Void Method_1_431DDC35EE3FAD9F(::System::Collections::Generic::Dictionary_2<::Class_3_F61F3C9E55A83BDE*, ::UnityEngine::Vector2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Class_3_F61F3C9E55A83BDE*, ::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_431DDC35EE3FAD9F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_3_F61F3C9E55A83BDE*>* Method_1_8688015E0DF34B80(::MoleMole::Vector2Int a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_3_F61F3C9E55A83BDE*>*(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_8688015E0DF34B80_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0AB1D53A3FC6A02(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_D0AB1D53A3FC6A02_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_3_F61F3C9E55A83BDE*>* Method_1_8688015E0DF34B80_1(::MoleMole::Vector2Int a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_3_F61F3C9E55A83BDE*>*(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_8688015E0DF34B80_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_1_F37E06DF11577A98(::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>* a1, ::UnityEngine::CircleCollider2D* a2, ::UnityEngine::CircleCollider2D* a3, ::System::Single a4)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>*, ::UnityEngine::CircleCollider2D*, ::UnityEngine::CircleCollider2D*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_F37E06DF11577A98_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A244D388D33B26C5(::Class_3_F61F3C9E55A83BDE* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F61F3C9E55A83BDE*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_A244D388D33B26C5_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::UnityEngine::Vector2> Method_1_15E437CED208AB89(::Class_3_F61F3C9E55A83BDE* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID, ::Class_3_F61F3C9E55A83BDE*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_15E437CED208AB89_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_A0A90A52C14CFF08(::Class_3_F61F3C9E55A83BDE* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F61F3C9E55A83BDE*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_A0A90A52C14CFF08_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_A2245A9EC91BF0C3(::UnityEngine::CircleCollider2D* a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::CircleCollider2D*))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_A2245A9EC91BF0C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A79F9CFED9CA2C0(::System::Random* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Random*))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_5A79F9CFED9CA2C0_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_01CE18CBE671D0D1(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_01CE18CBE671D0D1_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Vector2Int Method_1_FF7DFD0CDAB6CD03(::UnityEngine::Vector2 a1)
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_FF7DFD0CDAB6CD03_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Vector2> Method_1_979F5BCBBD319AE1(::Class_3_F61F3C9E55A83BDE* a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID, ::Class_3_F61F3C9E55A83BDE*, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_979F5BCBBD319AE1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_99BBB0E8D700715D(::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_99BBB0E8D700715D_OFFSET))(this, a1);
	}

	::System::Single Method_1_65A3D82E9FACED9C(::UnityEngine::Vector2 a1, ::UnityEngine::Bounds a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_65A3D82E9FACED9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E8F40979B3DD5EA5(::Class_3_F61F3C9E55A83BDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F61F3C9E55A83BDE*))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_E8F40979B3DD5EA5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_3_F61F3C9E55A83BDE*>* Method_1_8688015E0DF34B80_2(::MoleMole::Vector2Int a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_3_F61F3C9E55A83BDE*>*(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_8688015E0DF34B80_2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_1_56EEDABDD4F64D4E(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_METHOD_1_56EEDABDD4F64D4E_OFFSET))(this, a1, a2, a3, a4);
	}
};
