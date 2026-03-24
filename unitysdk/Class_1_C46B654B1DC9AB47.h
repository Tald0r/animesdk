#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Struct_2_BA05407FBFF98D79.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_18E5C0623B7E4B68;
class Class_1_577E23085FCBCFE7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C46B654B1DC9AB47_METHOD_1_08C74C96992B58B0_1_OFFSET UNITYSDK_OFFSET(0xC491450)
#define CLASS_1_C46B654B1DC9AB47_METHOD_1_08C74C96992B58B0_OFFSET UNITYSDK_OFFSET(0xC491210)
#define CLASS_1_C46B654B1DC9AB47_METHOD_1_31060B84A8E791D9_OFFSET UNITYSDK_OFFSET(0xC491690)
#define CLASS_1_C46B654B1DC9AB47_METHOD_1_427402D8BCB1E7FB_OFFSET UNITYSDK_OFFSET(0xC490E10)
#define CLASS_1_C46B654B1DC9AB47_METHOD_1_6A66CAC35E03CD90_OFFSET UNITYSDK_OFFSET(0xC490A30)
#define CLASS_1_C46B654B1DC9AB47_METHOD_1_757D849598A9E8C5_OFFSET UNITYSDK_OFFSET(0xC4918B0)
#define CLASS_1_C46B654B1DC9AB47_METHOD_1_B721C5BC0E2A5CA1_OFFSET UNITYSDK_OFFSET(0xC491010)
#define CLASS_1_C46B654B1DC9AB47__CTOR_OFFSET UNITYSDK_OFFSET(0xC4908A0)

inline static constexpr unsigned int Class_1_C46B654B1DC9AB47_TypeDefinitionIndex = 40000;

class Class_1_C46B654B1DC9AB47 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::Struct_2_BA05407FBFF98D79>* Field_1_4; // 0x10
	::Foundation::Unreal::FTransform3D Field_1_3; // 0x18
	::UnityEngine::Vector3 Field_1_1; // 0x40
	::UnityEngine::Quaternion Field_1_2; // 0x4C
	::UnityEngine::Vector3 Field_1_0; // 0x5C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6A66CAC35E03CD90(::Class_1_577E23085FCBCFE7*& a1, ::Class_1_18E5C0623B7E4B68* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_577E23085FCBCFE7*&, ::Class_1_18E5C0623B7E4B68*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_6A66CAC35E03CD90_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_1_08C74C96992B58B0(::Struct_2_BA05407FBFF98D79 a1, ::Class_1_18E5C0623B7E4B68* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Struct_2_BA05407FBFF98D79, ::Class_1_18E5C0623B7E4B68*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_08C74C96992B58B0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08C74C96992B58B0_1(::Struct_2_BA05407FBFF98D79 a1, ::Class_1_18E5C0623B7E4B68* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Struct_2_BA05407FBFF98D79, ::Class_1_18E5C0623B7E4B68*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_08C74C96992B58B0_1_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_427402D8BCB1E7FB(::UnityEngine::Vector3Int a1, ::Class_1_18E5C0623B7E4B68* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::Class_1_18E5C0623B7E4B68*))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_427402D8BCB1E7FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_31060B84A8E791D9(::Class_1_18E5C0623B7E4B68* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_18E5C0623B7E4B68*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_31060B84A8E791D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B721C5BC0E2A5CA1(::UnityEngine::Vector3Int a1, ::Class_1_18E5C0623B7E4B68* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::Class_1_18E5C0623B7E4B68*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_B721C5BC0E2A5CA1_OFFSET))(this, a1, a2, a3);
	}

	::Foundation::Unreal::FTransform3D Method_1_757D849598A9E8C5(::UnityEngine::Vector3Int a1)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_757D849598A9E8C5_OFFSET))(this, a1);
	}
};
