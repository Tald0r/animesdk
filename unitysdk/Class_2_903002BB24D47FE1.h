#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C36D127C88299910.h"
#include "unitysdk/Class_1_C36D127C88299910_Enum_3_267898ADE98304D3.h"
#include "unitysdk/Class_2_903002BB24D47FE1_Struct_2_0C97E8570E5F60F5.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/Struct_2_519740F826A15881.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_437;
namespace MoleMole::Config { class ConfigHollowCameraDrag; }

#define CLASS_2_903002BB24D47FE1_METHOD_2_1167B82216E9F065_OFFSET UNITYSDK_OFFSET(0x9C525A0)
#define CLASS_2_903002BB24D47FE1_METHOD_2_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x9C52580)
#define CLASS_2_903002BB24D47FE1_METHOD_2_3302777B3F94C762_OFFSET UNITYSDK_OFFSET(0x9C52C60)
#define CLASS_2_903002BB24D47FE1_METHOD_2_3DAA9F3C44AC9A56_OFFSET UNITYSDK_OFFSET(0x9C529A0)
#define CLASS_2_903002BB24D47FE1_METHOD_2_4202F40D4810BDA1_OFFSET UNITYSDK_OFFSET(0x9C52CC0)
#define CLASS_2_903002BB24D47FE1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9C52890)
#define CLASS_2_903002BB24D47FE1_METHOD_2_8381912FBF672F63_OFFSET UNITYSDK_OFFSET(0x9C52630)
#define CLASS_2_903002BB24D47FE1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9C52590)
#define CLASS_2_903002BB24D47FE1__CTOR_OFFSET UNITYSDK_OFFSET(0x9C52C50)

inline static constexpr unsigned int Class_2_903002BB24D47FE1_TypeDefinitionIndex = 64625;

class Class_2_903002BB24D47FE1 : public ::Class_1_C36D127C88299910
{
public:
	::MoleMole::Config::ConfigHollowCameraDrag* Field_2_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1__CTOR_OFFSET))(this);
	}

	::Class_1_C36D127C88299910_Enum_3_267898ADE98304D3 Method_2_2ACF2A61FB239D23()
	{
		return ((::Class_1_C36D127C88299910_Enum_3_267898ADE98304D3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_1167B82216E9F065(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_1167B82216E9F065_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_437* Method_2_8381912FBF672F63(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::Class_0_16E4307DCC419505_437*(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_8381912FBF672F63_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3DAA9F3C44AC9A56(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3, ::MoleMole::UICameraAtom a4, ::Struct_2_519740F826A15881& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::Struct_2_519740F826A15881&))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_3DAA9F3C44AC9A56_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_3302777B3F94C762(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3, ::MoleMole::UICameraAtom a4, ::Struct_2_519740F826A15881& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::Struct_2_519740F826A15881&))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_3302777B3F94C762_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_2_4202F40D4810BDA1(::Class_2_903002BB24D47FE1_Struct_2_0C97E8570E5F60F5 a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_2_903002BB24D47FE1_Struct_2_0C97E8570E5F60F5))((::PBYTE)hIl2Cpp + CLASS_2_903002BB24D47FE1_METHOD_2_4202F40D4810BDA1_OFFSET))(a1);
	}
};
