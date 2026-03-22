#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_823894195270E22F;
class Class_1_D976BC8B485169A1;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_E4E9271419E7BF1D_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x7E52710)
#define CLASS_1_E4E9271419E7BF1D_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x74B7130)
#define CLASS_1_E4E9271419E7BF1D_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x74B7280)
#define CLASS_1_E4E9271419E7BF1D_METHOD_1_DA1A8A25D0B64A55_OFFSET UNITYSDK_OFFSET(0x74B6EA0)
#define CLASS_1_E4E9271419E7BF1D__CTOR_OFFSET UNITYSDK_OFFSET(0x74B6C10)

inline static constexpr unsigned int Class_1_E4E9271419E7BF1D_TypeDefinitionIndex = 77579;

class Class_1_E4E9271419E7BF1D : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::Class_1_823894195270E22F* Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_5; // 0x20
	::System::Single Field_1_3; // 0x2C
	::UnityEngine::Vector3 Field_1_2; // 0x30
	::System::Single Field_1_4; // 0x3C
	::System::Int32 Field_1_6; // 0x40

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::Class_1_823894195270E22F* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_823894195270E22F*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E4E9271419E7BF1D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_DA1A8A25D0B64A55(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E4E9271419E7BF1D_METHOD_1_DA1A8A25D0B64A55_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4E9271419E7BF1D_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E4E9271419E7BF1D_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_D976BC8B485169A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D976BC8B485169A1*))((::PBYTE)hIl2Cpp + CLASS_1_E4E9271419E7BF1D_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
