#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B2CEFC27844059B6;
class Class_5_2169ABC757988FED;
namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_1_0AC327AA661D91B2_METHOD_1_6B6AE2B3E1C3264F_1_OFFSET UNITYSDK_OFFSET(0xCF3E8F0)
#define CLASS_1_0AC327AA661D91B2_METHOD_1_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0xCF3E880)
#define CLASS_1_0AC327AA661D91B2_METHOD_1_E1E7D995CAEC23CC_OFFSET UNITYSDK_OFFSET(0xCF3E960)
#define CLASS_1_0AC327AA661D91B2_METHOD_1_EBE83CCB4253C8D2_OFFSET UNITYSDK_OFFSET(0xCF3EA20)
#define CLASS_1_0AC327AA661D91B2__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF3E9E0)
#define CLASS_1_0AC327AA661D91B2__CTOR_OFFSET UNITYSDK_OFFSET(0xCF3E9D0)

inline static constexpr unsigned int Class_1_0AC327AA661D91B2_TypeDefinitionIndex = 45343;

class Class_1_0AC327AA661D91B2 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AC327AA661D91B2_TypeDefinitionIndex)->GetStaticField(0xE9F0);
	}
	::Class_5_2169ABC757988FED* Field_1_2; // 0x10
	::Class_3_B2CEFC27844059B6* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2__CCTOR_OFFSET))();
	}

	::System::Void Method_1_6B6AE2B3E1C3264F(::Class_3_B2CEFC27844059B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B2CEFC27844059B6*))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2_METHOD_1_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B6AE2B3E1C3264F_1(::Class_3_B2CEFC27844059B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B2CEFC27844059B6*))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2_METHOD_1_6B6AE2B3E1C3264F_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1E7D995CAEC23CC(::Class_3_B2CEFC27844059B6* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B2CEFC27844059B6*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2_METHOD_1_E1E7D995CAEC23CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EBE83CCB4253C8D2(::Class_5_2169ABC757988FED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_2169ABC757988FED*))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2_METHOD_1_EBE83CCB4253C8D2_OFFSET))(this, a1);
	}
};
