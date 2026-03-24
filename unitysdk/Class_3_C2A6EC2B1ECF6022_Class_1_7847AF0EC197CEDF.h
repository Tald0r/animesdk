#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/OverlapResult.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_1A58F01F41846A1D;
class Class_3_F35B080B137ECC46;

#define CLASS_3_C2A6EC2B1ECF6022_CLASS_1_7847AF0EC197CEDF_METHOD_1_3A410CA656D44E2A_OFFSET UNITYSDK_OFFSET(0x7441900)
#define CLASS_3_C2A6EC2B1ECF6022_CLASS_1_7847AF0EC197CEDF_METHOD_1_BCCD29D108DC9A36_OFFSET UNITYSDK_OFFSET(0x74416F0)
#define CLASS_3_C2A6EC2B1ECF6022_CLASS_1_7847AF0EC197CEDF__CTOR_OFFSET UNITYSDK_OFFSET(0x74416E0)

inline static constexpr unsigned int Class_3_C2A6EC2B1ECF6022_Class_1_7847AF0EC197CEDF_TypeDefinitionIndex = 40269;

class Class_3_C2A6EC2B1ECF6022_Class_1_7847AF0EC197CEDF : public ::System::Object
{
public:
	::Class_3_F35B080B137ECC46* Field_1_0; // 0x10
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_1_13; // 0x18
	::Class_3_1A58F01F41846A1D* Field_1_1; // 0x20
	::Il2CppArray<::UnityEngine::OverlapResult>* Field_1_14; // 0x28
	::System::Single Field_1_7; // 0x30
	::System::Single Field_1_8; // 0x34
	::UnityEngine::Quaternion Field_1_4; // 0x38
	::UnityEngine::Vector3 Field_1_9; // 0x48
	::UnityEngine::Vector3 Field_1_3; // 0x54
	::UnityEngine::Vector3 Field_1_10; // 0x60
	::Enum_3_F40B865AC61AB8D7 Field_1_5; // 0x6C
	::System::Boolean Field_1_11; // 0x70
	::System::Boolean Field_1_12; // 0x71
	::System::Boolean Field_1_2; // 0x72
	::System::Int32 Field_1_6; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_CLASS_1_7847AF0EC197CEDF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BCCD29D108DC9A36(::Class_3_C2A6EC2B1ECF6022_Class_1_7847AF0EC197CEDF* a1)
	{
		return ((::System::Void(*)(::Class_3_C2A6EC2B1ECF6022_Class_1_7847AF0EC197CEDF*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_CLASS_1_7847AF0EC197CEDF_METHOD_1_BCCD29D108DC9A36_OFFSET))(a1);
	}

	static ::Class_3_C2A6EC2B1ECF6022_Class_1_7847AF0EC197CEDF* Method_1_3A410CA656D44E2A()
	{
		return ((::Class_3_C2A6EC2B1ECF6022_Class_1_7847AF0EC197CEDF*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_CLASS_1_7847AF0EC197CEDF_METHOD_1_3A410CA656D44E2A_OFFSET))();
	}
};
