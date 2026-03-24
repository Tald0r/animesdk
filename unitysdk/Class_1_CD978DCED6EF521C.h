#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Terrain; }

#define CLASS_1_CD978DCED6EF521C_METHOD_1_0EB5BC5BBED481D8_OFFSET UNITYSDK_OFFSET(0xA262C70)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_2437AB406FCFB52E_OFFSET UNITYSDK_OFFSET(0xA263080)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_334017AA338BD66A_OFFSET UNITYSDK_OFFSET(0xA264370)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_4B1C948820FD4AE9_OFFSET UNITYSDK_OFFSET(0xA264250)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_C320E4FF233ED8F5_OFFSET UNITYSDK_OFFSET(0xA262ED0)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_C5DE57233F0EAB15_OFFSET UNITYSDK_OFFSET(0xA263520)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_CC984D88EAB7FF17_OFFSET UNITYSDK_OFFSET(0xA263610)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_DB41D7F6F6DDB12D_OFFSET UNITYSDK_OFFSET(0xA264080)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_DF443F7C8D817B4C_OFFSET UNITYSDK_OFFSET(0xA2631D0)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_E422F04702DB158F_OFFSET UNITYSDK_OFFSET(0xA263790)

inline static constexpr unsigned int Class_1_CD978DCED6EF521C_TypeDefinitionIndex = 67348;

class Class_1_CD978DCED6EF521C : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0

	static ::UnityEngine::Bounds Method_1_0EB5BC5BBED481D8(::UnityEngine::Terrain* a1)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_0EB5BC5BBED481D8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C320E4FF233ED8F5(::UnityEngine::Bounds a1, ::System::Collections::Generic::List_1<::UnityEngine::Plane>* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_C320E4FF233ED8F5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2437AB406FCFB52E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_2437AB406FCFB52E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DF443F7C8D817B4C(::Il2CppArray<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_DF443F7C8D817B4C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C5DE57233F0EAB15(::UnityEngine::Bounds a1, ::UnityEngine::Bounds a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_C5DE57233F0EAB15_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Bounds Method_1_CC984D88EAB7FF17(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_CC984D88EAB7FF17_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Bounds Method_1_E422F04702DB158F(::UnityEngine::Light* a1)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_E422F04702DB158F_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_DB41D7F6F6DDB12D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_DB41D7F6F6DDB12D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_4B1C948820FD4AE9(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_4B1C948820FD4AE9_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_334017AA338BD66A(::UnityEngine::Bounds a1, ::System::Collections::Generic::List_1<::UnityEngine::Plane>* a2, ::System::Int32 a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Plane>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_334017AA338BD66A_OFFSET))(a1, a2, a3, a4);
	}
};
