#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FD382C753AFE8157_Struct_2_34C964401E58058B.h"
#include "unitysdk/System/Object.h"

class Class_2_FD382C753AFE8157;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_FD382C753AFE8157_CLASS_1_5BFAAE89501483F4_METHOD_1_4297302B3E036AB4_OFFSET UNITYSDK_OFFSET(0xD74B7F0)
#define CLASS_2_FD382C753AFE8157_CLASS_1_5BFAAE89501483F4_METHOD_1_44561C2AE193B35F_OFFSET UNITYSDK_OFFSET(0xD74B5A0)
#define CLASS_2_FD382C753AFE8157_CLASS_1_5BFAAE89501483F4_METHOD_1_5A785584E35EF92E_OFFSET UNITYSDK_OFFSET(0xD74B520)
#define CLASS_2_FD382C753AFE8157_CLASS_1_5BFAAE89501483F4__CTOR_OFFSET UNITYSDK_OFFSET(0xD74B510)

inline static constexpr unsigned int Class_2_FD382C753AFE8157_Class_1_5BFAAE89501483F4_TypeDefinitionIndex = 76591;

class Class_2_FD382C753AFE8157_Class_1_5BFAAE89501483F4 : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraOverrideTrackEntry* Field_1_1; // 0x10
	::System::Func_1<::System::Single>* Field_1_3; // 0x18
	::MoleMole::Battle::Entity* Field_1_0; // 0x20
	::Class_2_FD382C753AFE8157* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD382C753AFE8157_CLASS_1_5BFAAE89501483F4__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_5A785584E35EF92E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD382C753AFE8157_CLASS_1_5BFAAE89501483F4_METHOD_1_5A785584E35EF92E_OFFSET))(this);
	}

	::System::Void Method_1_44561C2AE193B35F(::Class_2_FD382C753AFE8157_Struct_2_34C964401E58058B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FD382C753AFE8157_Struct_2_34C964401E58058B))((::PBYTE)hIl2Cpp + CLASS_2_FD382C753AFE8157_CLASS_1_5BFAAE89501483F4_METHOD_1_44561C2AE193B35F_OFFSET))(this, a1);
	}

	::System::Single Method_1_4297302B3E036AB4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD382C753AFE8157_CLASS_1_5BFAAE89501483F4_METHOD_1_4297302B3E036AB4_OFFSET))(this);
	}
};
