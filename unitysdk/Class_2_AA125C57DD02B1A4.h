#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_953952658186A166.h"
#include "unitysdk/Struct_2_6E1B724B14572104_1.h"
#include "unitysdk/Struct_2_C006DA4A56FC21E6.h"
#include "unitysdk/Struct_2_D9E98FAEB7FF7336.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A8E94BAAEBB55F9A;
class Class_5_AF65C3A968E836D2;

#define CLASS_2_AA125C57DD02B1A4_METHOD_2_0E0EBA43BD8FBCC0_OFFSET UNITYSDK_OFFSET(0x96786B0)
#define CLASS_2_AA125C57DD02B1A4_METHOD_2_1AB3F428FF575E8E_OFFSET UNITYSDK_OFFSET(0x96784A0)
#define CLASS_2_AA125C57DD02B1A4_METHOD_2_2322335515A3FB37_OFFSET UNITYSDK_OFFSET(0x96785A0)
#define CLASS_2_AA125C57DD02B1A4_METHOD_2_474EC4FF00C9577C_OFFSET UNITYSDK_OFFSET(0x9678B40)
#define CLASS_2_AA125C57DD02B1A4_METHOD_2_50F5F15096EAB879_OFFSET UNITYSDK_OFFSET(0x9677730)
#define CLASS_2_AA125C57DD02B1A4_METHOD_2_9EF665C07CB5B066_OFFSET UNITYSDK_OFFSET(0x9678A50)
#define CLASS_2_AA125C57DD02B1A4__CTOR_OFFSET UNITYSDK_OFFSET(0x9678A40)

inline static constexpr unsigned int Class_2_AA125C57DD02B1A4_TypeDefinitionIndex = 48330;

class Class_2_AA125C57DD02B1A4 : public ::Class_1_953952658186A166
{
public:
	::Class_5_AF65C3A968E836D2* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA125C57DD02B1A4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_50F5F15096EAB879(::Class_1_A8E94BAAEBB55F9A* a1, ::Struct_2_6E1B724B14572104_1& a2, ::Struct_2_D9E98FAEB7FF7336& a3, ::Struct_2_C006DA4A56FC21E6& a4, ::Struct_2_F213AC3D3FBF57B9& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A8E94BAAEBB55F9A*, ::Struct_2_6E1B724B14572104_1&, ::Struct_2_D9E98FAEB7FF7336&, ::Struct_2_C006DA4A56FC21E6&, ::Struct_2_F213AC3D3FBF57B9&))((::PBYTE)hIl2Cpp + CLASS_2_AA125C57DD02B1A4_METHOD_2_50F5F15096EAB879_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_2322335515A3FB37(::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_AA125C57DD02B1A4_METHOD_2_2322335515A3FB37_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_9EF665C07CB5B066(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AA125C57DD02B1A4_METHOD_2_9EF665C07CB5B066_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_2_0E0EBA43BD8FBCC0(::UnityEngine::Vector3& a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_AA125C57DD02B1A4_METHOD_2_0E0EBA43BD8FBCC0_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_1AB3F428FF575E8E(::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> a1, ::UnityEngine::Vector3& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_AA125C57DD02B1A4_METHOD_2_1AB3F428FF575E8E_OFFSET))(this, a1, a2);
	}

	static ::Class_2_AA125C57DD02B1A4* Method_2_474EC4FF00C9577C(::Class_5_AF65C3A968E836D2* a1)
	{
		return ((::Class_2_AA125C57DD02B1A4*(*)(::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_2_AA125C57DD02B1A4_METHOD_2_474EC4FF00C9577C_OFFSET))(a1);
	}
};
